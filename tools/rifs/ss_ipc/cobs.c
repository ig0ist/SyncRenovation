
//static const uint8_t SLIP_END = 0xC0;
//static const uint8_t SLIP_ESC = 0xDB;
//static const uint8_t SLIP_ESC_END = 0xDC;
//static const uint8_t SLIP_ESC_ESC = 0xDD;

int __fastcall COBSDecode(int readChar, unsigned __int8 **a2, const unsigned __int8 *a3, unsigned __int16 *a4)
{

// readChar - может быть 0
//
  unsigned __int16 *v4; // r6

  int v7; // r3
  int v8; // r5
  unsigned *v9; // r1
  int v12; // r10
  int v13; // r12


  bool isBool = (a4 == 0);

  if ( a4 )
    v7 = *a4;
  else
    v7 = 0;
    
    
    
  if ( isBool )
    v4 = a4;
  
  
  v8 = 0;
  if ( !isBool ) v4 = (unsigned __int16 *)(unsigned __int8)v7;
  v9 = *a2;    // Data read?
  if ( !isBool ) v7 >>= 8;
    


  // ---- is FFD1 ,
  bool isSome = (readChar == 0xFF);
  if ( readChar != 0xFF ) isSome = (readChar == 0xD1);





  v12 = readChar & 0xE0;
  while ( 1 )
  {
    if ( (int)v4 > 0 )

      v13 = ((unsigned __int8)v8 ^ 1) & 1; // чет нечет ?
    else
      v13 = 0;
      
      
    if ( !v13 ) goto LABEL_28;
    if ( v9 >= a3 ) goto LABEL_21;
    if ( !readChar ) break;
    
    
    v4 = (unsigned __int16 *)((char *)v4 + 0xFFFFFFFF);
    v8 = 1;
    *v9++ = readChar;
LABEL_28:

    if ( v4 ) goto LABEL_21;



    v13 = v9 < a3;
    if ( v7 <= 1 )
      v13 = 0;
      
    while ( v13 )
    {
      --v7;
      *v9++ = 0;
      v13 = a3 > v9;
      if ( v7 <= 1 )  v13 = 0;
    }
    
    
    if ( v7 > 1 || v8 )
      goto LABEL_21;
      
    bool isTxx = (readChar <= 0);
    if ( readChar )  isTxx = (v7 <= 0);

    if ( !isTxx )
    {
      if ( a3 <= v9 )
      {
        LOWORD(v7) = 1;
LABEL_21:
        
        // Can t  decode ?
        if ( a4 ) LOWORD(v4) = (unsigned __int16)v4 | ((_WORD)v7 << 8);
        if ( a4 ) *a4 = (unsigned __int16)v4;
        *a2 = v9;
        return 0; // result 0
      }
      *v9++ = 0;
    }
    if ( isSome || readChar == 0xD2 )  break;
    if ( !readChar ) break; // to LABEL_57
    
    
    if ( readChar == 0xD0 )
    {
      v7 = 0;
      v4 = (_WORD *)(elf_hash_bucket + 0x13);
    }
    else if ( (readChar & 0xF0) == 0xD0 ) // if readChar = 0xDD
    {
      v7 = readChar & 0xF;    // 0xD0
    }
    else
    {
      if ( v12 == 0xE0 )
        v7 = 2;
      else
        v4 = (unsigned __int16 *)(readChar - 1);
      if ( v12 == 0xE0 )
        v4 = (unsigned __int16 *)(readChar & 0x1F);
      else
        v7 = 1;
    }
    v8 = 1;
  }
  
  
  v9 = 0;
LABEL_57:
  
  if ( a4 )   LOWORD(v13) = 0;

  if ( a4 )  *a4 = v13;
  
  
  *a2 = v9;
  
  
  return 1; //  result = 1;
}