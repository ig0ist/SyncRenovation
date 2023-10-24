#include <defs.h>
#include <stdarg.h>
//-------------------------------------------------------------------------
// Data declarations

int dword_117068[] = { 0 }; // weak
int dword_11931C[6] = { 2, 16, 250000, 655380, 0, 0 }; // weak
int dword_1193F8[6] = { 2, 16, 500000, 655380, 0, 0 }; // weak
_UNKNOWN loc_119998; // weak
int dword_11A714[16] =
{
  151587072,
  151587073,
  151587074,
  151587081,
  151587081,
  151587081,
  151587075,
  151587076,
  151389449,
  151456009,
  151587081,
  151587081,
  151587081,
  151587081,
  151587081,
  134809865
}; // weak
int dword_11C314[16] =
{
  151587072,
  151587073,
  151587074,
  151587081,
  151587081,
  151587081,
  151587075,
  151587076,
  151389449,
  151456009,
  151587081,
  151587081,
  151587081,
  151587081,
  151587081,
  134809865
}; // weak
int dword_11CEE4[11] =
{
  1953851475,
  1853321060,
  1953459744,
  1667851881,
  1869182049,
  1701978222,
  1986618723,
  1713398885,
  544042866,
  1702326096,
  1632444530
}; // weak
int dword_11CFCC = 1701012818; // weak
int dword_11D024 = 1162692948; // weak
int dword_11D028[5] = { 82, 1699898189, 1176532579, 1701603681, 1931488356 }; // weak
int dword_11D438[64] =
{
  1,
  9,
  9,
  9,
  2,
  9,
  9,
  9,
  3,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  4,
  9,
  9,
  9,
  5,
  9,
  9,
  9,
  9,
  6,
  7,
  9,
  9,
  9,
  8,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  9,
  7
}; // weak
int dword_11DC20 = 0; // weak

int (*stateCalls[4])() = { &registerFrameInfo, &sub_114634, &sub_116D98, &_finalizeCall }; // weak
int (*_f_finalizeCall)() = &_finalizeCall; // weak


int dword_11EC34 = 0; // weak
Elf32_Dyn *GLOBAL_OFFSET_TABLE_ = &stru_11EC38; // weak
int (*call1Back)(void) = NULL; // weak
int *_phySendTriggerBuff[3] = { &g_phy_send_trigger, &Res_Mbuf, &RxTimerMutex }; // weak
int *RxResMbuf[2] = { &Res_Mbuf, &RxTimerMutex }; // weak
int *_RxTimerMutex = &RxTimerMutex; // weak
void *_register_frame_info = &__register_frame_info; // weak
char *_IpcMessageFifo = &IpcMessageFifo; // weak
void *_JvRegisterClasses = &Jv_RegisterClasses; // weak
char *_ipcEndOfLineMode = &ipcEndOfLineMode; // weak
void *_cxaFinalize = &__cxa_finalize; // weak
void (__fastcall __noreturn *_IpcLlDrvReceiveTask)(void *) = &IpcLlDrvReceiveTask; // weak
int *_Res_PhyRecv[3] =
{
  &Res_PhyRecv,
  &XGATE_RXQUEUE_SEMAPHORE,
  &`guard variable for'std::numpunct<char>::id
}; // weak
int *_RXSemaphoreChar[2] = { &XGATE_RXQUEUE_SEMAPHORE, &`guard variable for'std::numpunct<char>::id }; // weak
int *_numChars = &`guard variable for'std::numpunct<char>::id; // weak
void *_PasLogParams = &g_PasLogParams; // weak
int *_char_stream = &`guard variable for'std::num_put<char,std::ostreambuf_iterator<char>>::id; // weak
void *_PasVersion = &g_PasVersion; // weak


int *_ostreambuf = &std::num_put<char,std::ostreambuf_iterator<char>>::id; // weak
void *_mbufTxQueue = &mbufTxQueue; // weak
void (__fastcall __noreturn *_IpcLcTaskLoop)(void *) = &IpcLcTaskLoop; // weak
void *_mbufConfirmQueue = &mbufConfirmQueue; // weak

int *_IpcFifoMutex = &IpcFifoMutex; // weak
void *_dataStart = &_data_start; // weak
void (__fastcall *off_11EECC)(std::ios_base::Init *__hidden this) = &std::ios_base::Init::~Init; // weak
int _wakeUpState = 1192648; // weak

void (__fastcall *off_11EED4)(std::_Winit *__hidden this) = &std::_Winit::~_Winit; // weak
int *_char = &std::numpunct<char>::id; // weak


void *mbuf_Rx_Queue = &mbufRxQueue; // weak
int *iUartReceiveByte = &g_iUart_receive_byte; // weak
void *modHandleTable = &mod_handle_table; // weak
void (__fastcall *cPasVersion)(CPasVersion *__hidden this) = &CPasVersion::~CPasVersion; // weak
char *_boardXGateData[4] =
{
  &boardType,
  &XGATE_CONFIRMQUEUE_SEMAPHORE,
  &ipcRxtimerId,
  &g_bRxSemCountRetrySet
}; // weak


int *_ipcRxSemaphore[3] = { &XGATE_CONFIRMQUEUE_SEMAPHORE, &ipcRxtimerId, &g_bRxSemCountRetrySet }; // weak


int *ipcRxtimerCountRetry[2] = { &ipcRxtimerId, &g_bRxSemCountRetrySet }; // weak


int *bRxSemCountRetrySet = &g_bRxSemCountRetrySet; // weak
void *ibdTransactionId = &ibdTransactionId; // weak
_DWORD (__fastcall *_IpcLlDrvTxInterruptTask)(void *) = &IpcLlDrvTxInterruptTask; // weak
int *_hNPService = &hNPService; // weak
char *_mod_table = &mod_table; // weak
void (__fastcall __noreturn *_IpcWdTaskLoop)(void *) = &IpcWdTaskLoop; // weak
int _mutexList[2] = { 1192704, 1192692 }; // weak
int _1Semaphore = 1192692; // weak
void (__fastcall __noreturn *_IpcTpTaskLoop)(void *) = &IpcTpTaskLoop; // weak
void *_DeregisterFrameInfo = &__deregister_frame_info; // weak
int *_XGATE_TXQUEUE_SEMAPHORE = &XGATE_TXQUEUE_SEMAPHORE; // weak
void *_data_start = &_data_start; // weak
int _fd_dev_ser = -1; // weak
int errno; // weak

char isFinalize; // weak
_UNKNOWN unk_121EFC; // weak
char byte_121F15; // weak
int dword_121F18; // weak
int word_121F1C; // weak
char byte_121F1E; // weak
int word_121F20; // weak
int isSome_121F24; // weak
int word_121F28; // weak
char byte_121F2A; // weak
int dword_121F2C; // weak
char byte_121F30; // weak
char byte_121F31; // weak
int word_121F32; // weak
char byte_121F34; // weak
int word_121F36; // weak
int word_121F50; // weak
int dword_121F54; // weak
int word_121F58; // weak
_UNKNOWN unk_121F5C; // weak
unsigned int byte_121FA4[4]; // weak
int word_121FA8; // weak
int word_121FAA; // weak
int dword_121FAC; // weak
int dword_121FB0; // weak
int dword_121FB4; // weak
_UNKNOWN unk_121FB8; // weak
int dword_121FD8; // weak
int word_121FDC; // weak
int word_121FDE; // weak
int dword_121FE0; // weak
int dword_121FE4; // weak
int dword_121FE8; // weak
char byte_121FEC; // weak
_UNKNOWN mbufTxQueue; // weak
char byte_122054; // weak
int dword_12205C; // weak
_UNKNOWN unk_122060; // weak
int dword_122080; // weak
int dword_1220A4; // weak
int dword_1220C8; // weak
int dword_1220EC; // weak
int dword_122110; // weak
int dword_122134; // weak
int dword_122158; // weak
int dword_12217C; // weak
int dword_1221A0; // weak
_UNKNOWN unk_1221A4; // weak
char byte_1223A8; // weak
int dword_1223AC; // weak
char byte_1224B8; // weak
int dword_1224BC[]; // weak
int dword_1225A8; // weak
int dword_1225AC; // weak
int dword_1225B0; // weak
int dword_1225B4; // weak
char byte_1225B8; // weak
_DWORD dword_1225BC[1]; // weak
int dword_1225C4; // weak
int dword_1231B0; // weak
char byte_1231B4[]; // weak
char byte_1231B5; // weak
char byte_1231B6; // weak
int word_1231B8; // weak
int word_1231BA; // weak
int word_1231BC; // weak
int word_1231BE; // weak
int word_1231C0; // weak
char byte_1231C2; // weak
char byte_1231C3; // weak
char byte_1231C4; // weak
int word_1231C6; // weak
int word_1231C8; // weak
int word_1231CA; // weak
int word_1231CC; // weak
int word_1231CE; // weak
char byte_1231D0; // weak
char byte_1231D1; // weak
char byte_1231D2; // weak
int word_1231D4; // weak
int word_1231D6; // weak
int word_1231D8; // weak
int word_1231DA; // weak
int word_1231DC; // weak
char byte_1231DE; // weak
char byte_1231DF; // weak
char byte_1231E0; // weak
int word_1231E2; // weak
int word_1231E4; // weak
int word_1231E6; // weak
int word_1231E8; // weak
int word_1231EA; // weak
char byte_1231EC; // weak
char byte_1231ED; // weak
char byte_1231EE; // weak
int word_1231F0; // weak
int word_1231F2; // weak
int word_1231F4; // weak
int word_1231F6; // weak
int word_1231F8; // weak
char byte_1231FA; // weak
char byte_1231FB; // weak
char byte_1231FC; // weak
int word_1231FE; // weak
int word_123200; // weak
int word_123202; // weak
int word_123204; // weak
int word_123206; // weak
char byte_123208; // weak
char byte_123209; // weak
char byte_12320A; // weak
int word_12320C; // weak
int word_12320E; // weak
int word_123210; // weak
int word_123212; // weak
int word_123214; // weak
char byte_123216; // weak
char byte_123217; // weak
char byte_123218; // weak
int word_12321A; // weak
int word_12321C; // weak
int word_12321E; // weak
int word_123220; // weak
int word_123222; // weak
char byte_123224; // weak
char byte_123225; // weak
char byte_123226; // weak
int word_123228; // weak
int word_12322A; // weak
int word_12322C; // weak
int word_12322E; // weak
int word_123230; // weak
char byte_123240; // weak
char byte_123250; // weak
int dword_123254; // weak
char byte_123258[60]; // weak
int dword_123294; // weak
int dword_1232D0; // weak
int dword_1232F0; // weak
char byte_1232F9; // weak
char byte_123308[60]; // weak
_UNKNOWN unk_123354; // weak
_UNKNOWN unk_123358; // weak


//----- (00101BF0) --------------------------------------------------------
void init_proc()
{
  ;
}

//----- (00101BF8) --------------------------------------------------------
int sub_101BF8()
{
  return call1Back();
}


//----- (00101FF0) --------------------------------------------------------
void __noreturn btext(int a1, int a2, int a3, int a4, int a5, ...)
{
  const char **v5; // r3
  va_list va; // [sp+4h] [bp+4h] BYREF

  va_start(va, a5);
  v5 = &((const char **)va)[a5 + 1];
  while ( *v5++ )
    ;
  init_libc(a5);
  preinit_array(stateCalls, stateCalls);
  atexit(term_proc);
  fini_array(&_f_finalizeCall, &dword_11EC34);
  init_proc();
  init_array(stateCalls, &_f_finalizeCall);
  errno = 0;
  main(a5, (const char **)va, &((const char **)va)[a5 + 1]);
}


//----- (001020B0) --------------------------------------------------------
void __fastcall __noreturn sub_1020B0(int a1)
{
  exit(a1);
}

//----- (00102100) --------------------------------------------------------
int _finalizeCall()
{
  int result; // r0

  if ( !isFinalize )
  {
    if ( _cxaFinalize )
      result = _cxa_finalize(_data_start);
    if ( _DeregisterFrameInfo )
      result = _deregister_frame_info(&dword_11DC20);
    isFinalize = 1;
  }
  return result;
}


//----- (0010217C) --------------------------------------------------------
int *registerFrameInfo()
{
  int *result; // r0

  if ( _register_frame_info )
    _register_frame_info(&dword_11DC20, &unk_121EFC);
  result = &dword_11EC34;
  if ( dword_11EC34 )
  {
    if ( _JvRegisterClasses )
      return (int *)((int (__fastcall *)(int *))_JvRegisterClasses)(&dword_11EC34);
  }
  return result;
}

//----- (001021F4) --------------------------------------------------------
unsigned int __fastcall sub_1021F4(unsigned int result, unsigned int a2, int a3)
{
  unsigned int i; // r12
  char v4; // r4

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v4 = *(_BYTE *)(a3 + i);
      result = dword_117068[(unsigned int)(result ^ v4)] ^ (result >> 8);
    }
  }
  return result;
}
// 117068: using guessed type int dword_117068[];

//----- (00102244) --------------------------------------------------------
int __fastcall HandleButtonStatusEvent(int result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r5
  int v3; // r7
  _DWORD *v4; // r6
  int v5; // r2
  _DWORD *v6; // r6
  _DWORD *v7; // r7
  char v8[32]; // [sp+10h] [bp-20h] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x38, 0xB, "HandleButtonStatusEvent", "+");
  if ( v1 )
  {
    v2 = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
    v3 = *((_DWORD *)modHandleTable + 2);
    if ( v2 )
    {
      if ( !v3 )
      {
        v3 = McOpenSender("HMI_MID");
        result = setApplicationQueueHandle(2, v3);
      }
      if ( v2[2] )
      {
        v4 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v5 < 0 )
        {
          result = NsLog(
                     0x6D,
                     0x1F,
                     "HandleButtonStatusEvent",
                     "Unsupported event (fc : %d ) over button channel , Ignoring...",
                     v2[2]);
          v5 = v4[0xBC5];
        }
      }
      else
      {
        v8[1] = v2[2];
        v8[0] = 4;
        v8[2] = 0xC1;
        v8[3] = 2;
        v8[4] = v2[4];
        v8[5] = v2[5];
        if ( v3 )
        {
          result = McSend(v3, "IPC_MID", 0x2410, 6, v8);
          if ( result )
          {
            v6 = _PasLogParams;
            v5 = *((_DWORD *)_PasLogParams + 0xBC5);
            if ( v5 < 0 )
            {
              result = NsLog(0x5B, 0x1F, "HandleButtonStatusEvent", "Error sending Button Event from VMCU to the PM.");
              v5 = v6[0xBC5];
            }
          }
          else
          {
            v7 = _PasLogParams;
            v5 = *((_DWORD *)_PasLogParams + 0xBC5);
            if ( (v5 & 0x20000000) != 0 )
            {
              result = NsLog(
                         0x62,
                         0x1D,
                         "HandleButtonStatusEvent",
                         "===>>>>> Button Event ( BID : %d and BS : %d , TID : %d ) forwarded to the application===>>>>>",
                         v2[4],
                         v2[5],
                         v2[3]);
              v5 = v7[0xBC5];
            }
          }
        }
        else
        {
          v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        }
      }
      if ( (v5 & 0x800) != 0 )
        return NsLog(0x70, 0xB, "HandleButtonStatusEvent", "-");
    }
  }
  return result;
}

//----- (00102480) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanDiagTPSendMsgToVMCU(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int *v2; // r6
  _BYTE *v3; // r3
  int v4; // r2
  int v5; // r2

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x377, 0xB, "sendIPCCanDiagTPSendMsgToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(0x22, (v1[7] | (v1[8] << 8)) + 0xB);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 5;
      *v3 = 0x88;
      v3[1] = 0;
      v3[3] = v1[4];
      v4 = v1[5] | (v1[6] << 8);
      v3[4] = v1[5];
      v3[5] = HIBYTE(v4);
      v5 = v1[7] | (v1[8] << 8);
      v3[6] = v1[7];
      v3[7] = HIBYTE(v5);
      v3[8] = v1[9];
      v3[9] = v1[0xA];
      v3[0xA] = v1[0xB];
      memcpy(v3 + 0xB, v1 + 0xC, v1[7] | (v1[8] << 8));
      result = (unsigned int *)some_check_or_CRC(v2);
      if ( result )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(
            0x39B,
            0x1F,
            "sendIPCCanDiagTPSendMsgToVMCU",
            " Error while sending the DIAG TP_SEND message with TID:%d , HDL: %d ,TA: %d  ",
            v1[5] | (v1[6] << 8),
            v1[4],
            v1[0xA]);
        return lost_sub_can_edian(v2);
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        return (unsigned int *)NsLog(
                                    0x3A1,
                                    0x1D,
                                    "sendIPCCanDiagTPSendMsgToVMCU",
                                    "Successfully sent DIAG TP_SEND message with TID:%d HDL :%d TA :%d ",
                                    v1[5] | (v1[6] << 8),
                                    v1[4],
                                    v1[0xA]);
      }
    }
  }
  return result;
}

//----- (00102680) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanDiagTPSetConfigMsgToVMCU(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r6
  int v3; // r3
  int v4; // r12
  int v5; // r3
  _DWORD *v6; // r7

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x33B, 0xB, "sendIPCCanDiagTPSetConfigMsgToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(0x22, 0x45);
    v2 = result;
    if ( result )
    {
      v3 = result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18);
      *(_BYTE *)(v3 + 2) = 4;
      *(_WORD *)v3 = 0x88;
      *(_BYTE *)(v3 + 3) = v1[4];
      v4 = v1[5] | (v1[6] << 8);
      *(_BYTE *)(v3 + 4) = v1[5];
      *(_BYTE *)(v3 + 5) = HIBYTE(v4);
      *(_BYTE *)(v3 + 6) = v1[7];
      memcpy((void *)(v3 + 7), v1 + 8, 0x3Eu);
      result = (unsigned int *)some_check_or_CRC(v2);
      if ( !result )
      {
        v6 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v5 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x35F,
                                        0x1D,
                                        "sendIPCCanDiagTPSetConfigMsgToVMCU",
                                        "Successfully sent DIAG TP_SET_CONFIGURATION message with TID:%d HDL :%d",
                                        v1[5] | (v1[6] << 8),
                                        v1[4]);
          v5 = v6[0xBC5];
        }
        goto LABEL_10;
      }
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x35A,
          0x1F,
          "sendIPCCanDiagTPSetConfigMsgToVMCU",
          " Error while sending the DIAG TP_SET_CONFIGURATION message with TID:%d , HDL: %d  ",
          v1[5] | (v1[6] << 8),
          v1[4]);
      result = lost_sub_can_edian(v2);
    }
    v5 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_10:
    if ( (v5 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x363, 0xB, "sendIPCCanDiagTPSetConfigMsgToVMCU", "-");
  }
  return result;
}


//----- (00102878) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanDiagTPGetConfigMsgToVMCU(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r6
  _BYTE *v3; // r3
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r7

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x301, 0xB, "sendIPCCanDiagTPGetConfigMsgToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(0x22, 7);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 3;
      *v3 = 0x88;
      v3[1] = 0;
      v3[3] = v1[4];
      v4 = v1[5] | (v1[6] << 8);
      v3[4] = v1[5];
      v3[5] = HIBYTE(v4);
      v3[6] = v1[7];
      result = (unsigned int *)some_check_or_CRC(result);
      if ( !result )
      {
        v6 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v5 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x324,
                                        0x1D,
                                        "sendIPCCanDiagTPGetConfigMsgToVMCU",
                                        "Successfully sent DIAG TP_GET_CONFIGURATION message with TID:%d HDL :%d",
                                        v1[5] | (v1[6] << 8),
                                        v1[4]);
          v5 = v6[0xBC5];
        }
        goto LABEL_10;
      }
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x31F,
          0x1F,
          "sendIPCCanDiagTPGetConfigMsgToVMCU",
          " Error while sending the DIAG TP_GET_CONFIGURATION message with TID:%d , HDL: %d  ",
          v1[5] | (v1[6] << 8),
          v1[4]);
      result = lost_sub_can_edian(v2);
    }
    v5 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_10:
    if ( (v5 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x328, 0xB, "sendIPCCanDiagTPGetConfigMsgToVMCU", "-");
  }
  return result;
}


//----- (00102A5C) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanDiagTPCloseMsgToVMCU(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r6
  _BYTE *v3; // r3
  int v4; // r2
  int v5; // r3
  _DWORD *v6; // r7

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x2C8, 0xB, "sendIPCCanDiagTPCloseMsgToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(0x22, 6);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 2;
      *v3 = 0x88;
      v3[1] = 0;
      v3[3] = v1[4];
      v4 = v1[5] | (v1[6] << 8);
      v3[4] = v1[5];
      v3[5] = HIBYTE(v4);
      result = (unsigned int *)some_check_or_CRC(result);
      if ( !result )
      {
        v6 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v5 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x2EA,
                                        0x1D,
                                        "sendIPCCanDiagTPCloseMsgToVMCU",
                                        "Successfully sent DIAG TP_CLOSE message with TID:%d HDL :%d",
                                        v1[5] | (v1[6] << 8),
                                        v1[4]);
          v5 = v6[0xBC5];
        }
        goto LABEL_10;
      }
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x2E5,
          0x1F,
          "sendIPCCanDiagTPCloseMsgToVMCU",
          " Error while sending the DIAG TP_CLOSE message with TID:%d , HDL: %d  ",
          v1[5] | (v1[6] << 8),
          v1[4]);
      result = lost_sub_can_edian(v2);
    }
    v5 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_10:
    if ( (v5 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x2EE, 0xB, "sendIPCCanDiagTPCloseMsgToVMCU", "-");
  }
  return result;
}

//----- (00102C38) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanDiagTPOpenMsgToVMCU(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r6
  _BYTE *v3; // r3
  char v4; // r2
  int v5; // r1
  char v6; // r2
  int v7; // r3
  _DWORD *v8; // r7

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x28E, 0xB, "sendIPCCanDiagTPOpenMsgToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(0x22, 6);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 1;
      *v3 = 0x88;
      v3[1] = 0;
      v4 = v3[3];
      v5 = v1[6] | (v1[7] << 8);
      v3[4] = v1[6];
      v3[5] = HIBYTE(v5);
      v6 = v4 & 0xFC | v1[4] & 3;
      v3[3] = v6;
      v3[3] = v6 & 3 | (4 * (v1[5] & 0x3F));
      result = (unsigned int *)some_check_or_CRC(result);
      if ( !result )
      {
        v8 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v7 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x2B1,
                                        0x1D,
                                        "sendIPCCanDiagTPOpenMsgToVMCU",
                                        "Successfully sent DIAG TP_OPEN message with TID:%d",
                                        v1[6] | (v1[7] << 8));
          v7 = v8[0xBC5];
        }
        goto LABEL_10;
      }
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x2AC,
          0x1F,
          "sendIPCCanDiagTPOpenMsgToVMCU",
          " Error while sending the DIAG TP_OPEN message with TID:%d ",
          v1[6] | (v1[7] << 8));
      result = lost_sub_can_edian(v2);
    }
    v7 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_10:
    if ( (v7 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x2B5, 0xB, "sendIPCCanDiagTPOpenMsgToVMCU", "-");
  }
  return result;
}

//----- (00102E18) --------------------------------------------------------
int __fastcall HandleCanDiagTpCloseComplete(_BYTE *a1)
{
  int v2; // r12
  int v3; // r2
  char v4; // r1
  int v5; // r8
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD s[8]; // [sp+10h] [bp-20h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x249, 0xB, "HandleCanDiagTpCloseComplete", "+");
  memset(s, 0, 8u);
  v2 = (unsigned int)a1[5];
  v3 = (unsigned int)a1[4];
  LOBYTE(s[1]) = a1[3];
  v4 = a1[6];
  s[1] = s[1] & 0xFF0000FF | ((unsigned int)(v3 | (v2 << 8)) << 8);
  HIBYTE(s[1]) = v4;
  s[0] = 0x4CB0004;
  v5 = sub_10D110(0x1Au);
  if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 8, s);
    if ( result )
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x26D,
                 0x1F,
                 "HandleCanDiagTpCloseComplete",
                 " Error while sending DIAG TP_CLOSE_COMPLETE with TID: %d and STATUS : %d , HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3]);
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x268,
                 0x1D,
                 "HandleCanDiagTpCloseComplete",
                 " Successfully sent a DIAG TP_CLOSE_COMPLETE with TID:%d , STATUS: %d and HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3]);
    }
    goto LABEL_11;
  }
  v7 = _PasLogParams;
  v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( v8 < 0 )
  {
    result = NsLog(
               0x278,
               0x1F,
               "HandleCanDiagTpCloseComplete",
               "Could not send DIAG TP_CLOSE_COMPLETE with TID:%d and STATUS :%d HDL:%d",
               (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
               (unsigned int)a1[6],
               (unsigned int)a1[3]);
LABEL_11:
    v8 = v7[0xBC5];
  }
LABEL_6:
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x27B, 0xB, "HandleCanDiagTpCloseComplete", "-");
  return result;
}

//----- (00103038) --------------------------------------------------------
int __fastcall HandleCanDiagTpOpenComplete(_BYTE *a1)
{
  int v2; // r12
  int v3; // r2
  char v4; // r1
  int v5; // r8
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD s[8]; // [sp+10h] [bp-20h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x203, 0xB, "HandleCanDiagTpOpenComplete", "+");
  memset(s, 0, 8u);
  v2 = (unsigned int)a1[5];
  v3 = (unsigned int)a1[4];
  LOBYTE(s[1]) = a1[3];
  v4 = a1[6];
  s[1] = s[1] & 0xFF0000FF | ((unsigned int)(v3 | (v2 << 8)) << 8);
  HIBYTE(s[1]) = v4;
  s[0] = 0x4C90004;
  v5 = sub_10D110(0x1Au);
  if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 8, s);
    if ( result )
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x226,
                 0x1F,
                 "HandleCanDiagTpOpenComplete",
                 " Error while sending DIAG TP_OPEN_COMPLETE with TID: %d and STATUS : %d , HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3]);
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x221,
                 0x1D,
                 "HandleCanDiagTpOpenComplete",
                 " Successfully sent a DIAG TP_OPEN_COMPLETE with TID:%d , STATUS: %d and HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3]);
    }
    goto LABEL_11;
  }
  v7 = _PasLogParams;
  v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( v8 < 0 )
  {
    result = NsLog(
               0x231,
               0x1F,
               "HandleCanDiagTpOpenComplete",
               "Could not send DIAG TP_OPEN_COMPLETE with TID:%d and STATUS :%d HDL:%d",
               (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
               (unsigned int)a1[6],
               (unsigned int)a1[3]);
LABEL_11:
    v8 = v7[0xBC5];
  }
LABEL_6:
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x234, 0xB, "HandleCanDiagTpOpenComplete", "-");
  return result;
}

//----- (00103258) --------------------------------------------------------
int __fastcall HandleCanDiagTpSetConfigComplete(_BYTE *a1)
{
  int v2; // r12
  int v3; // r2
  char v4; // r1
  int v5; // r8
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD s[8]; // [sp+10h] [bp-20h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x1BE, 0xB, "HandleCanDiagTpSetConfigComplete", "+");
  memset(s, 0, 8u);
  v2 = (unsigned int)a1[5];
  v3 = (unsigned int)a1[4];
  LOBYTE(s[1]) = a1[3];
  v4 = a1[6];
  s[1] = s[1] & 0xFF0000FF | ((unsigned int)(v3 | (v2 << 8)) << 8);
  HIBYTE(s[1]) = v4;
  s[0] = 0x4CF0004;
  v5 = sub_10D110(0x1Au);
  if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 8, s);
    if ( result )
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x1E1,
                 0x1F,
                 "HandleCanDiagTpSetConfigComplete",
                 " Error while sending DIAG TP_SET_CONFIG_COMPLETE with TID: %d and STATUS : %d , HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3]);
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x1DC,
                 0x1D,
                 "HandleCanDiagTpSetConfigComplete",
                 " Successfully sent a DIAG TP_SET_CONFIG_COMPLETE with TID:%d , STATUS: %d and HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3]);
    }
    goto LABEL_11;
  }
  v7 = _PasLogParams;
  v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( v8 < 0 )
  {
    result = NsLog(
               0x1EC,
               0x1F,
               "HandleCanDiagTpSetConfigComplete",
               "Could not send DIAG TP_SET_CONFIG_COMPLETE with TID:%d and STATUS :%d HDL:%d ",
               (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
               (unsigned int)a1[6],
               (unsigned int)a1[3]);
LABEL_11:
    v8 = v7[0xBC5];
  }
LABEL_6:
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x1EF, 0xB, "HandleCanDiagTpSetConfigComplete", "-");
  return result;
}

//----- (00103478) --------------------------------------------------------
int __fastcall HandleCanDiagTpGetConfigComplete(_BYTE *a1)
{
  int v2; // lr
  int v3; // r3
  char v4; // r12
  int v5; // r8
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r3
  __int64 s[12]; // [sp+10h] [bp-60h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x178, 0xB, "HandleCanDiagTpGetConfigComplete", "+");
  memset(s, 0, 0x46u);
  v2 = (unsigned int)a1[5];
  v3 = (unsigned int)a1[4];
  BYTE4(s[0]) = a1[3];
  v4 = a1[6];
  LODWORD(s[0]) = 0x42CD0004;
  HIDWORD(s[0]) = HIDWORD(s[0]) & 0xFF0000FF | ((unsigned int)(v3 | (v2 << 8)) << 8);
  HIBYTE(s[0]) = v4;
  memcpy(&s[1], a1 + 7, 0x3Eu);
  v5 = sub_10D110(0x1Au);
  if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 0x46, s);
    if ( result )
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x19C,
                 0x1F,
                 "HandleCanDiagTpGetConfigComplete",
                 " Error while sending DIAG TP_GET_CONFIG_COMPLETE with TID: %d and STATUS : %d , HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3],
                 s[0]);
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x197,
                 0x1D,
                 "HandleCanDiagTpGetConfigComplete",
                 " Successfully sent a DIAG TP_GET_CONFIG_COMPLETE with TID:%d , STATUS: %d and HDL :%d ",
                 (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
                 (unsigned int)a1[6],
                 (unsigned int)a1[3],
                 s[0]);
    }
    goto LABEL_11;
  }
  v7 = _PasLogParams;
  v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( v8 < 0 )
  {
    result = NsLog(
               0x1A7,
               0x1F,
               "HandleCanDiagTpGetConfigComplete",
               "Could not send DIAG TP_GET_CONFIG_COMPLETE with TID:%d and STATUS :%d HDL :%d ",
               (unsigned int)a1[4] | ((unsigned int)a1[5] << 8),
               (unsigned int)a1[6],
               (unsigned int)a1[3],
               s[0]);
LABEL_11:
    v8 = v7[0xBC5];
  }
LABEL_6:
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x1AA, 0xB, "HandleCanDiagTpGetConfigComplete", "-");
  return result;
}

//----- (001036AC) --------------------------------------------------------
int __fastcall HandleCanDiagTpSendConfirm(int result)
{
  _BYTE *v1; // r5
  char v2; // r3
  int v3; // r12
  unsigned int v4; // r1
  int v5; // r8
  _DWORD *v6; // r7
  int v7; // r3
  int s[8]; // [sp+10h] [bp-20h] BYREF

  v1 = (_BYTE *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x12D, 0xB, "HandleCanDiagTpSendConfirm", "+");
  if ( v1 )
  {
    memset(s, 0, 8u);
    v2 = v1[6];
    v3 = (unsigned int)v1[5];
    LOBYTE(s[1]) = v1[3];
    HIBYTE(s[1]) = v2;
    v4 = (unsigned int)v1[4] | (unsigned int)(v3 << 8);
    LOWORD(s[0]) = 4;
    s[1] = s[1] & 0xFF0000FF | (v4 << 8);
    HIBYTE(s[0]) += 4;
    BYTE2(s[0]) = 0xD2;
    v5 = sub_10D110(0x1Au);
    if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
    {
      result = McSend(v5, "IPC_MID", 0x2410, 8, s);
      if ( result )
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v7 >= 0 )
          goto LABEL_7;
        result = NsLog(
                   0x156,
                   0x1F,
                   "HandleCanDiagTpSendConfirm",
                   " Error while sending DIAG TP_SEND_CONFIRM with TID: %d , STATUS : %d and HDL:%d  ",
                   (unsigned int)v1[4] | ((unsigned int)v1[5] << 8),
                   (unsigned int)v1[6],
                   (unsigned int)v1[3]);
      }
      else
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v7 & 0x20000000) == 0 )
          goto LABEL_7;
        result = NsLog(
                   0x151,
                   0x1D,
                   "HandleCanDiagTpSendConfirm",
                   " Successfully sent a  DIAG TP_SEND_CONFIRM with TID:%d and STATUS: %d ,HDL :%d",
                   (unsigned int)v1[4] | ((unsigned int)v1[5] << 8),
                   (unsigned int)v1[6],
                   (unsigned int)v1[3]);
      }
    }
    else
    {
      v6 = _PasLogParams;
      v7 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v7 >= 0 )
      {
LABEL_7:
        if ( (v7 & 0x800) != 0 )
          return NsLog(0x164, 0xB, "HandleCanDiagTpSendConfirm", "-");
        return result;
      }
      result = NsLog(
                 0x161,
                 0x1F,
                 "HandleCanDiagTpSendConfirm",
                 "Could not send DIAG TP_SEND_CONFIRM with TID:%d and STATUS :%d HDL :%d ",
                 (unsigned int)v1[4] | ((unsigned int)v1[5] << 8),
                 (unsigned int)v1[6],
                 (unsigned int)v1[3]);
    }
    v7 = v6[0xBC5];
    goto LABEL_7;
  }
  return result;
}

//----- (001038DC) --------------------------------------------------------
int __fastcall HandleCanDiagTpSendComplete(int result)
{
  _BYTE *v1; // r5
  char v2; // r3
  int v3; // r12
  unsigned int v4; // r1
  int v5; // r8
  _DWORD *v6; // r7
  int v7; // r3
  int s[8]; // [sp+10h] [bp-20h] BYREF

  v1 = (_BYTE *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0xDF, 0xB, "HandleCanDiagTpSendComplete", "+");
  if ( v1 )
  {
    memset(s, 0, 8u);
    v2 = v1[6];
    v3 = (unsigned int)v1[5];
    LOBYTE(s[1]) = v1[3];
    HIBYTE(s[1]) = v2;
    v4 = (unsigned int)v1[4] | (unsigned int)(v3 << 8);
    LOWORD(s[0]) = 4;
    s[1] = s[1] & 0xFF0000FF | (v4 << 8);
    HIBYTE(s[0]) += 4;
    BYTE2(s[0]) = 0xD1;
    v5 = sub_10D110(0x1Au);
    if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
    {
      result = McSend(v5, "IPC_MID", 0x2410, 8, s);
      if ( result )
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v7 >= 0 )
          goto LABEL_7;
        result = NsLog(
                   0x109,
                   0x1F,
                   "HandleCanDiagTpSendComplete",
                   " Error while sending DIAG TP_SEND_COMPLETE with TID: %d , STATUS : %d and HDL:%d  ",
                   (unsigned int)v1[4] | ((unsigned int)v1[5] << 8),
                   (unsigned int)v1[6],
                   (unsigned int)v1[3]);
      }
      else
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v7 & 0x20000000) == 0 )
          goto LABEL_7;
        result = NsLog(
                   0x104,
                   0x1D,
                   "HandleCanDiagTpSendComplete",
                   " Successfully sent a  DIAG TP_SEND_COMPLETE with TID:%d and STATUS: %d HDL: %d ",
                   (unsigned int)v1[4] | ((unsigned int)v1[5] << 8),
                   (unsigned int)v1[6],
                   (unsigned int)v1[3]);
      }
    }
    else
    {
      v6 = _PasLogParams;
      v7 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v7 >= 0 )
      {
LABEL_7:
        if ( (v7 & 0x800) != 0 )
          return NsLog(0x117, 0xB, "HandleCanDiagTpSendComplete", "-");
        return result;
      }
      result = NsLog(
                 0x114,
                 0x1F,
                 "HandleCanDiagTpSendComplete",
                 "Could not acquire handle to send DIAG TP_SEND_COMPLETE with TID: %d , STATUS : %d and HDL:%d",
                 (unsigned int)v1[4] | ((unsigned int)v1[5] << 8),
                 (unsigned int)v1[6],
                 (unsigned int)v1[3]);
    }
    v7 = v6[0xBC5];
    goto LABEL_7;
  }
  return result;
}

//----- (00103B0C) --------------------------------------------------------
int __fastcall HandleCanDiagTpReceiveIndicate(int result)
{
  unsigned int *v1; // r4
  int v2; // r2
  unsigned int v3; // r11
  unsigned int v4; // r9
  int v5; // r7
  _DWORD *v6; // r7
  int v7; // r3
  unsigned int v8; // [sp+10h] [bp-1040h]
  unsigned int v9; // [sp+14h] [bp-103Ch]
  _DWORD v10[1037]; // [sp+1Ch] [bp-1034h] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x80, 0xB, "HandleCanDiagTpReceiveIndicate", "+");
  if ( v1 )
  {
    memset(v10, 0, 0x100Cu);
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      NsLog(
        0x91,
        0x1D,
        "HandleCanDiagTpReceiveIndicate",
        " Received a Diag TP_RECEIVE_INDICATE message with Function Code : %x , TID : %d , SA :%x ,and MsgLen :%d",
        v1[2],
        v1[4] | (v1[5] << 8),
        v1[8],
        v1[6] | (v1[7] << 8));
    v8 = v1[8];
    v2 = v1[6] | (v1[7] << 8);
    v3 = v1[9];
    v9 = v1[0xA];
    v4 = v1[4] | (v1[5] << 8);
    LOBYTE(v10[1]) = v1[3];
    BYTE2(v10[2]) = v3;
    LOBYTE(v10[0]) = 4;
    LOBYTE(v10[2]) = BYTE1(v2);
    v10[1] = v10[1] & 0xFF0000FF | (v4 << 8);
    BYTE1(v10[2]) = v8;
    HIBYTE(v10[1]) = v2;
    HIBYTE(v10[2]) = v9;
    *(_WORD *)((char *)v10 + 1) = 0xD300;
    memcpy(&v10[3], v1 + 0xB, v2);
    HIBYTE(v10[0]) = 0;
    v5 = sub_10D110(0x1Au);
    if ( v5 || (v5 = McOpenSender("VS_OutBoundDiagService"), result = setApplicationQueueHandle(0x1A, v5), v5) )
    {
      result = McSend(v5, "IPC_MID", 0x2410, 0x100C, v10);
      if ( result )
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v7 >= 0 )
          goto LABEL_9;
        result = NsLog(
                   0xBE,
                   0x1F,
                   "HandleCanDiagTpReceiveIndicate",
                   " Error while sending DIAG TP_RECEIVE_INDICATE with TID: %d and HDL:%d  ",
                   v1[4] | (v1[5] << 8),
                   v1[3]);
      }
      else
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v7 & 0x20000000) == 0 )
          goto LABEL_9;
        result = NsLog(
                   0xB9,
                   0x1D,
                   "HandleCanDiagTpReceiveIndicate",
                   " Successfully sent a  DIAG TP_RECEIVE_INDICATE with TID:%d and  HDL :%d ",
                   v1[4] | (v1[5] << 8),
                   v1[3]);
      }
    }
    else
    {
      v6 = _PasLogParams;
      v7 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v7 >= 0 )
      {
LABEL_9:
        if ( (v7 & 0x800) != 0 )
          return NsLog(0xCC, 0xB, "HandleCanDiagTpReceiveIndicate", "-");
        return result;
      }
      result = NsLog(
                 0xC9,
                 0x1F,
                 "HandleCanDiagTpReceiveIndicate",
                 "Could not acquire handle to send DIAG TP_RECEIVE_INDICATE with TID: %d and HDL:%d ",
                 v1[4] | (v1[5] << 8),
                 v1[3]);
    }
    v7 = v6[0xBC5];
    goto LABEL_9;
  }
  return result;
}

//----- (00103DF8) --------------------------------------------------------
unsigned int *__fastcall HandleIpcCanDiagTPMessage(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int v2; // r3
  _DWORD *v3; // r6
  int v4; // r2
  _DWORD *v5; // r6

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x3D, 0xB, "HandleIpcCanDiagTPMessage", "+");
  if ( v1 )
  {
    result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
    if ( !result )
    {
      v5 = _PasLogParams;
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v4 < 0 )
      {
        result = (unsigned int *)NsLog(
                                      0x6A,
                                      0x1F,
                                      "HandleIpcCanDiagTPMessage",
                                      "Could not derive function code from the CAN Diag TP message. IpcMsgHdrPtr is NULL !!");
        v4 = v5[0xBC5];
      }
      goto LABEL_12;
    }
    v2 = *(unsigned int *)((v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2);
    if ( v2 == 0x83 )
    {
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        NsLog(0x50, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_GET_CONFIG_COMPLETE ");
        result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
      }
      result = (unsigned int *)HandleCanDiagTpGetConfigComplete(result);
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      goto LABEL_12;
    }
    if ( v2 <= 0x83 )
    {
      if ( v2 == 0x81 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        {
          NsLog(0x48, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_OPEN_COMPLETE ");
          result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        }
        result = (unsigned int *)HandleCanDiagTpCloseComplete(result);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_12;
      }
      if ( v2 > 0x81 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        {
          NsLog(0x4C, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_CLOSE_COMPLETE ");
          result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        }
        result = (unsigned int *)HandleCanDiagTpCloseComplete(result);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_12;
      }
      if ( v2 == 7 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        {
          NsLog(0x60, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_RECEIVE_INDICATE ");
          result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        }
        result = (unsigned int *)HandleCanDiagTpReceiveIndicate((int)result);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_12;
      }
    }
    else
    {
      if ( v2 == 0x85 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        {
          NsLog(0x58, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_SEND_CONFIG_COMPLETE ");
          result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        }
        result = (unsigned int *)HandleCanDiagTpSendComplete((int)result);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_12;
      }
      if ( v2 < 0x85 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        {
          NsLog(0x54, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_SET_CONFIG_COMPLETE ");
          result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        }
        result = (unsigned int *)HandleCanDiagTpSetConfigComplete(result);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_12;
      }
      if ( v2 == 0x86 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        {
          NsLog(0x5C, 0x1D, "HandleIpcCanDiagTPMessage", "Got a TP_SEND_CONFIRM ");
          result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        }
        result = (unsigned int *)HandleCanDiagTpSendConfirm((int)result);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_12;
      }
    }
    v3 = _PasLogParams;
    v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v4 < 0 )
    {
      result = (unsigned int *)NsLog(
                                    0x64,
                                    0x1F,
                                    "HandleIpcCanDiagTPMessage",
                                    "The CAN Diag TP message with function code : %d is currently not supported ",
                                    *(unsigned int *)((v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18))
                                                       + 2));
      v4 = v3[0xBC5];
    }
LABEL_12:
    if ( (v4 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x6D, 0xB, "HandleIpcCanDiagTPMessage", "-");
  }
  return result;
}

//----- (00104294) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanDisplayTPSendMsgToVMCU(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int *v2; // r6
  int v3; // r3
  int v4; // r2
  int v5; // r12
  int v6; // r2
  int v7; // r3
  _DWORD *v8; // r7

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x145, 0xB, "sendIPCCanDisplayTPSendMsgToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(0x21, (v1[7] | (v1[8] << 8)) + 0xB);
    v2 = result;
    if ( result )
    {
      v3 = result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18);
      *(_BYTE *)(v3 + 2) = 5;
      *(_BYTE *)(v3 + 3) = 1;
      *(_BYTE *)v3 = 0x84;
      *(_BYTE *)(v3 + 1) = 0;
      v4 = v1[4] | (v1[5] << 8);
      *(_BYTE *)(v3 + 4) = v1[4];
      *(_BYTE *)(v3 + 5) = HIBYTE(v4);
      v5 = v1[8];
      v6 = v1[7];
      *(_BYTE *)(v3 + 8) = 0xD0;
      *(_WORD *)(v3 + 6) = v6 | (v5 << 8);
      *(_BYTE *)(v3 + 9) = v1[6];
      memcpy((void *)(v3 + 0xB), v1 + 9, v1[7] | (v1[8] << 8));
      result = (unsigned int *)some_check_or_CRC(v2);
      if ( !result )
      {
        v8 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v7 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x171,
                                        0x1D,
                                        "sendIPCCanDisplayTPSendMsgToVMCU",
                                        "Successfully sent TP message with TA : %x , TID : %d LEN : %d to VMCU ",
                                        v1[6],
                                        v1[4] | (v1[5] << 8),
                                        v1[7] | (v1[8] << 8));
          v7 = v8[0xBC5];
        }
        goto LABEL_10;
      }
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x169,
          0x1F,
          "sendIPCCanDisplayTPSendMsgToVMCU",
          "Error %d while sending TP message with TA : %x , TID : %d LEN : %d to VMCU ",
          result,
          v1[6],
          v1[4] | (v1[5] << 8),
          v1[7] | (v1[8] << 8));
      result = lost_sub_can_edian(v2);
    }
    v7 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_10:
    if ( (v7 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x174, 0xB, "sendIPCCanDisplayTPSendMsgToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001044E0) --------------------------------------------------------
int __fastcall HandleCanDisplayTpSendConfirm(int result)
{
  unsigned int *v1; // r5
  int v2; // r2
  int v3; // r3
  int v4; // r5
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r6
  _DWORD *v8; // r6
  _WORD s[16]; // [sp+8h] [bp-20h] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0xFD, 0xB, "HandleCanDisplayTpSendConfirm", "+");
  if ( v1 )
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      NsLog(
        0x107,
        0x1D,
        "HandleCanDisplayTpSendConfirm",
        "Received a TP_SEND_CONFIRM from VMCU with tid: %d and Status : %d ",
        v1[4] | (v1[5] << 8),
        v1[6]);
    memset(s, 0, 7u);
    v2 = v1[5];
    v3 = v1[4];
    LOBYTE(s[3]) = v1[6];
    s[2] = v3 | (v2 << 8);
    s[0] = 4;
    s[1] = 0x3D9;
    v4 = sub_10D110(0x18u);
    if ( v4 || (v4 = McOpenSender("VS_CANShadow"), result = setApplicationQueueHandle(0x18, v4), v4) )
    {
      result = McSend(v4, "IPC_MID", 0x2410, 7, s);
      if ( result )
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = NsLog(
                     0x125,
                     0x1F,
                     "HandleCanDisplayTpSendConfirm",
                     " Error while sending DISPLAY_TP CONFIRM Message with TID : %d and STATUS : %d ",
                     s[2],
                     LOBYTE(s[3]));
          v6 = v5[0xBC5];
        }
      }
      else
      {
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0x121,
                     0x1D,
                     "HandleCanDisplayTpSendConfirm",
                     " Successfully sent a DISPLAY_TP CONFIRM Message with TID : %d and STATUS : %d ",
                     s[2],
                     LOBYTE(s[3]));
          v6 = v7[0xBC5];
        }
      }
    }
    else
    {
      v8 = _PasLogParams;
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v6 < 0 )
      {
        result = NsLog(
                   0x12F,
                   0x1F,
                   "HandleCanDisplayTpSendConfirm",
                   " Error while sending DISPLAY_TP CONFIRM Message with TID : %d and STATUS : %d , HANDLE is NULL",
                   s[2],
                   LOBYTE(s[3]));
        v6 = v8[0xBC5];
      }
    }
    if ( (v6 & 0x800) != 0 )
      return NsLog(0x132, 0xB, "HandleCanDisplayTpSendConfirm", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00104754) --------------------------------------------------------
int __fastcall HandleCanDisplayTpSendComplete(int result)
{
  unsigned int *v1; // r5
  int v2; // r2
  int v3; // r3
  int v4; // r5
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r6
  _DWORD *v8; // r6
  _WORD s[16]; // [sp+8h] [bp-20h] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0xB5, 0xB, "HandleCanDisplayTpSendComplete", "+");
  if ( v1 )
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      NsLog(
        0xBD,
        0x1D,
        "HandleCanDisplayTpSendComplete",
        "Received a TP_SEND_COMPLETE from VMCU with tid: %d and Status : %d ",
        v1[4] | (v1[5] << 8),
        v1[6]);
    memset(s, 0, 7u);
    v2 = v1[5];
    v3 = v1[4];
    LOBYTE(s[3]) = v1[6];
    s[2] = v3 | (v2 << 8);
    s[0] = 4;
    s[1] = 0x3D8;
    v4 = sub_10D110(0x18u);
    if ( v4 || (v4 = McOpenSender("VS_CANShadow"), result = setApplicationQueueHandle(0x18, v4), v4) )
    {
      result = McSend(v4, "IPC_MID", 0x2410, 7, s);
      if ( result )
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = NsLog(
                     0xDD,
                     0x1F,
                     "HandleCanDisplayTpSendComplete",
                     " Error while sending DISPLAY_TP Complete Message with TID : %d and STATUS : %d ",
                     s[2],
                     LOBYTE(s[3]));
          v6 = v5[0xBC5];
        }
      }
      else
      {
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0xD9,
                     0x1D,
                     "HandleCanDisplayTpSendComplete",
                     " Successfully sent a DISPLAY_TP Complete Message with TID : %d and STATUS : %d ",
                     s[2],
                     LOBYTE(s[3]));
          v6 = v7[0xBC5];
        }
      }
    }
    else
    {
      v8 = _PasLogParams;
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v6 < 0 )
      {
        result = NsLog(
                   0xE7,
                   0x1F,
                   "HandleCanDisplayTpSendComplete",
                   " Error while sending DISPLAY_TP Complete Message with TID : %d and STATUS : %d , HANDLE is NULL",
                   s[2],
                   LOBYTE(s[3]));
        v6 = v8[0xBC5];
      }
    }
    if ( (v6 & 0x800) != 0 )
      return NsLog(0xEA, 0xB, "HandleCanDisplayTpSendComplete", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001049C8) --------------------------------------------------------
int __fastcall HandleCanDisplayTpReceiveIndicate(int result)
{
  unsigned int *v1; // r5
  unsigned int v2; // r10
  int v3; // r2
  const void *v4; // r1
  int v5; // r3
  int v6; // lr
  int v7; // r5
  int v8; // r2
  int v9; // r5
  int v10[2070]; // [sp+14h] [bp-102Ch] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x6B, 0xB, "HandleCanDisplayTpReceiveIndicate", "+");
  if ( v1 )
  {
    memset(v10, 0, 0x1009u);
    v2 = v1[8];
    v3 = v1[7];
    v4 = v1 + 0xB;
    v5 = v1[6];
    v6 = v1[5];
    v7 = v1[4];
    LOBYTE(v10[3]) = v2;
    v8 = v5 | (v3 << 8);
    v10[2] = v7 | (v6 << 8);
    v10[0] = 4;
    *(int *)((char *)&v10[3] + 1) = v8;
    v10[1] = 0xA7;
    memcpy((char *)&v10[4] + 1, v4, v8);
    v9 = sub_10D110(0x18u);
    if ( v9 || (v9 = McOpenSender("VS_CANShadow"), result = setApplicationQueueHandle(0x18, v9), v9) )
    {
      result = McSend(v9, "IPC_MID", 0x2410, 0x1009, v10);
      if ( result )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          return NsLog(
                   0x96,
                   0x1F,
                   "HandleCanDisplayTpReceiveIndicate",
                   " Error while sending a TP Message with SA : %x , TID : %d , LEN : %d , SIGID :%x to CAN SHADOW ",
                   LOBYTE(v10[3]),
                   (unsigned int)v10[2],
                   HIBYTE(v10[3]) | (LOBYTE(v10[4]) << 8),
                   HIBYTE(v10[4]));
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        return NsLog(
                 0x8E,
                 0x1D,
                 "HandleCanDisplayTpReceiveIndicate",
                 " Successfully sent a TP Message with SA : %x , TID : %d , LEN : %d , SIGID :%x to CAN SHADOW ",
                 LOBYTE(v10[3]),
                 (unsigned int)v10[2],
                 HIBYTE(v10[3]) | (LOBYTE(v10[4]) << 8),
                 HIBYTE(v10[4]));
      }
    }
    else if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    {
      return NsLog(
               0xA0,
               0x1F,
               "HandleCanDisplayTpReceiveIndicate",
               "Could not send TP message to CAN SHADOW as handle couldn't be acquired");
    }
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00104BF8) --------------------------------------------------------
int __fastcall HandleIpcCanDisplayTPMessage(int result)
{
  unsigned int *v1; // r5
  int v2; // r3
  _DWORD *v3; // r6
  int v4; // r2
  _DWORD *v5; // r6

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x3C, 0xB, "HandleIpcCanDisplayTPMessage", "+");
  if ( v1 )
  {
    result = v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18);
    if ( result )
    {
      v2 = *(unsigned int *)((v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2);
      switch ( v2 )
      {
        case 0x85:
          result = HandleCanDisplayTpSendComplete(result);
          v4 = *((_DWORD *)_PasLogParams + 0xBC5);
          break;
        case 0x86:
          result = HandleCanDisplayTpSendConfirm(result);
          v4 = *((_DWORD *)_PasLogParams + 0xBC5);
          break;
        case 7:
          result = HandleCanDisplayTpReceiveIndicate(result);
          v4 = *((_DWORD *)_PasLogParams + 0xBC5);
          break;
        default:
          v3 = _PasLogParams;
          v4 = *((_DWORD *)_PasLogParams + 0xBC5);
          if ( v4 < 0 )
          {
            result = NsLog(
                       0x50,
                       0x1F,
                       "HandleIpcCanDisplayTPMessage",
                       "The CAN TP message with function code : %d is currently not supported ",
                       *(unsigned int *)((v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2));
            v4 = v3[0xBC5];
          }
          break;
      }
    }
    else
    {
      v5 = _PasLogParams;
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v4 < 0 )
      {
        result = NsLog(
                   0x56,
                   0x1F,
                   "HandleIpcCanDisplayTPMessage",
                   "Could not derive function code from the CAN TP message. IpcMsgHdrPtr is NULL !!");
        v4 = v5[0xBC5];
      }
    }
    if ( (v4 & 0x800) != 0 )
      return NsLog(0x59, 0xB, "HandleIpcCanDisplayTPMessage", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00104DAC) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanILGetCapabilitiesMsgToVMCU(unsigned int *result, int a2)
{
  unsigned int *v2; // r5
  const void *v4; // r8
  unsigned int v5; // r7
  char v6; // cc
  char v7; // r5
  unsigned int *v8; // r7
  const void *v9; // r1
  unsigned int *v10; // r8

  v2 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x353, 0xB, "sendIPCCanILGetCapabilitiesMsgToVMCU", "+");
  v4 = v2 + 4;
  v5 = (unsigned int)(a2 - 4);
  v6 = (v2 + 4 != 0) & __CFADD__(v2, 4);
  if ( v2 != (unsigned int *)0xFFFFFFFC )
    v6 = v5 > 1;
  if ( v6 )
    v7 = 0;
  else
    v7 = 1;
  if ( v6 )
  {
    result = sub_110C70(0x1C, 4);
    v8 = result;
    if ( result )
    {
      v9 = v4;
      v10 = (unsigned int *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v10[2] = 0xB;
      *v10 = v7 & 3 | 0x70;
      v10[1] = v7 & 1 | (2 * (v7 & 0x7F));
      memcpy(v10 + 3, v9, sizeof(unsigned int));
      result = (unsigned int *)some_check_or_CRC(v8);
      if ( result )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(
            0x36F,
            0x1F,
            "sendIPCCanILGetCapabilitiesMsgToVMCU",
            "Error while sending Can IL message with TID: %d , RC : %d  , CID : %d ",
            v10[3],
            result,
            *v10 >> 2);
        return lost_sub_can_edian(v8);
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        return (unsigned int *)NsLog(
                                    0x374,
                                    0x1D,
                                    "sendIPCCanILGetCapabilitiesMsgToVMCU",
                                    "Successfully sent the CAN IL GET_CAPABILITIES to VMCU  with transaction Id : %d ",
                                    v10[3]);
      }
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00104F50) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanILRegisterSignalNotificationToVMCU(unsigned int *result, unsigned int a2)
{
  unsigned int *v2; // r5
  bool v4; // cc
  char v5; // r8
  bool v6; // cc
  int v7; // r9
  unsigned int *v8; // r10
  unsigned int *v9; // r6

  v2 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
  {
    result = (unsigned int *)NsLog(0x2C1, 0xB, "sendIPCCanILRegisterSignalNotificationToVMCU", "+");
    v6 = v2 != 0;
    if ( v2 )
      v6 = a2 > 3;
    if ( !v6 )
      goto LABEL_8;
    v5 = 0;
  }
  else
  {
    v4 = result != 0;
    if ( result )
      v4 = a2 > 3;
    v5 = !v4;
    if ( !v4 )
    {
LABEL_8:
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        return (unsigned int *)NsLog(
                                    0x2C9,
                                    0x1F,
                                    "sendIPCCanILRegisterSignalNotificationToVMCU",
                                    "Invalid params, dataBuffer:%p, data_len:%d",
                                    v2,
                                    a2);
      return result;
    }
  }
  v7 = (unsigned int)(a2 - 4);
  result = sub_110C70(0x1C, v7 + 5);
  v8 = result;
  if ( result )
  {
    v9 = (unsigned int *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
    v9[2] = 6;
    *v9 = v5 & 3 | 0x70;
    v9[1] = v5 & 1 | (2 * (v5 & 0x7F));
    memcpy(v9 + 4, v2 + 4, 2u);
    memcpy(v9 + 3, v2 + 6, sizeof(unsigned int));
    memcpy(v9 + 6, v2 + 7, 2u);
    memcpy(v9 + 8, v2 + 9, (unsigned int)(v7 - 5));
    result = (unsigned int *)some_check_or_CRC(v8);
    if ( result )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x2F3,
          0x1F,
          "sendIPCCanILRegisterSignalNotificationToVMCU",
          "Error while sending Can IL message with TID: %d , RC : %d  , CID : %d ,Notify class:%d",
          v9[4] | (v9[5] << 8),
          result,
          *v9 >> 2,
          v9[3]);
      return lost_sub_can_edian(v8);
    }
    else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
    {
      return (unsigned int *)NsLog(
                                  0x2F8,
                                  0x1D,
                                  "sendIPCCanILRegisterSignalNotificationToVMCU",
                                  "Successfully sent the CAN IL REGISTER_SIGNAL_NOTIFICATION to VMCU  with transaction Id"
                                  " : %d, Notify class:%d,signal number:%d, fc:%d",
                                  v9[4] | (v9[5] << 8),
                                  v9[3],
                                  v9[6] | (v9[7] << 8),
                                  v9[2]);
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001051AC) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanILRecvSignalArrayMsgToVMCU(unsigned int *result, unsigned int a2)
{
  unsigned int *v2; // r5
  bool v4; // cc
  char v5; // r8
  bool v6; // cc
  int v7; // r9
  unsigned int *v8; // r10
  unsigned int *v9; // r6

  v2 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
  {
    result = (unsigned int *)NsLog(0x280, 0xB, "sendIPCCanILRecvSignalArrayMsgToVMCU", "+");
    v6 = v2 != 0;
    if ( v2 )
      v6 = a2 > 3;
    if ( !v6 )
      goto LABEL_8;
    v5 = 0;
  }
  else
  {
    v4 = result != 0;
    if ( result )
      v4 = a2 > 3;
    v5 = !v4;
    if ( !v4 )
    {
LABEL_8:
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        return (unsigned int *)NsLog(
                                    0x287,
                                    0x1F,
                                    "sendIPCCanILRecvSignalArrayMsgToVMCU",
                                    "Invalid params, dataBuffer:%p, data_len:%d",
                                    v2,
                                    a2);
      return result;
    }
  }
  v7 = (unsigned int)(a2 - 4);
  result = sub_110C70(0x1C, v7 + 6);
  v8 = result;
  if ( result )
  {
    v9 = (unsigned int *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
    v9[2] = 4;
    v9[1] = v5 & 1 | (2 * (v5 & 0x7F));
    *v9 = v5 & 3 | 0x70;
    v9[3] = v5;
    memcpy(v9 + 4, v2 + 4, 2u);
    memcpy(v9 + 6, v2 + 6, (unsigned int)(v7 - 2));
    result = (unsigned int *)some_check_or_CRC(v8);
    if ( result )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x2A6,
          0x1F,
          "sendIPCCanILRecvSignalArrayMsgToVMCU",
          "Error while sending Can IL message with TID: %d , RC : %d  , CID : %d ",
          v9[4] | (v9[5] << 8),
          result,
          *v9 >> 2);
      return lost_sub_can_edian(v8);
    }
    else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
    {
      return (unsigned int *)NsLog(
                                  0x2AB,
                                  0x1D,
                                  "sendIPCCanILRecvSignalArrayMsgToVMCU",
                                  "Successfully sent the CAN IL RECV_SIGNAL_ARRAY to VMCU  with transaction Id : %d ",
                                  v9[4] | (v9[5] << 8));
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001053C4) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanILSendSignalArrayMsgToVMCU(unsigned int *result, int a2)
{
  unsigned int *v2; // r6
  int v3; // r11
  int v4; // r11
  unsigned int *v5; // r5
  unsigned int *v6; // r7
  char v7; // r12
  unsigned int v8; // [sp+24h] [bp-2Ch] BYREF
  int dest[21]; // [sp+26h] [bp-2Ah] BYREF

  v2 = result;
  v3 = a2;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x23D, 0xB, "sendIPCCanILSendSignalArrayMsgToVMCU", "+ Data length : %d ", a2);
  if ( v2 )
  {
    v8 = 0;
    v4 = (unsigned int)(v3 - 4);
    dest[0] = 0;
    result = sub_110C70(0x1C, v4 + 4);
    v5 = result;
    if ( result )
    {
      v6 = (unsigned int *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v7 = v6[1] & 0xFE;
      v6[3] = 0;
      v6[1] = v7 & 1;
      *v6 = 0x70;
      v6[2] = 2;
      memcpy(v6 + 4, v2 + 4, 2u);
      memcpy(v6 + 6, v2 + 6, (unsigned int)(v4 - 2));
      memcpy(dest, v2 + 6, 2u);
      memcpy(&v8, v2 + 8, sizeof(v8));
      result = (unsigned int *)some_check_or_CRC(v5);
      if ( result )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(
            0x264,
            0x1F,
            "sendIPCCanILSendSignalArrayMsgToVMCU",
            "Error while sending Can IL message with TID: %d , RC : %d  , CID : %d NOS:%d SIGNAL ID:%d",
            v6[4] | (v6[5] << 8),
            result,
            *v6 >> 2,
            (unsigned int)dest[0],
            v8);
        return lost_sub_can_edian(v5);
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        return (unsigned int *)NsLog(
                                    0x269,
                                    0x1D,
                                    "sendIPCCanILSendSignalArrayMsgToVMCU",
                                    "Successfully sent the CAN IL SEND_SIGNAL_ARRAY to VMCU  with transaction Id : %d ",
                                    v6[4] | (v6[5] << 8));
      }
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001055C0) --------------------------------------------------------
unsigned int *__fastcall _sendIPCCanILSetSignalFilterToVMCU(unsigned int *result)
{
  unsigned int *v1; // r4
  unsigned int *v2; // r8
  _BYTE *v3; // r7
  unsigned int v4; // r3
  int v5; // r10
  int v6; // r3
  unsigned int *v7; // r10
  _DWORD *v8; // r6
  int v9; // r3
  _DWORD *v10; // r4
  unsigned __int64 v11; // r0
  double v12; // [sp+10h] [bp-38h]

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x30B, 0xB, "sendIPCCanILSetSignalFilterToVMCU", "+");
  if ( v1 )
  {
    delay(1);
    result = sub_110C70(0x1C, 0x1C);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 5;
      v3[3] = 0;
      *v3 = 0x70;
      v3[1] = 0;
      v4 = v1[6];
      v3[0xB] = 0;
      v3[0xA] = v4;
      v5 = v1[7] | (v1[8] << 8) | (v1[9] << 0x10) | (v1[0xA] << 0x18);
      v3[6] = v1[7];
      v3[7] = BYTE1(v5);
      v3[9] = HIBYTE(v5);
      v3[8] = BYTE2(v5);
      v6 = v1[4] | (v1[5] << 8);
      v3[4] = v1[4];
      v3[5] = HIBYTE(v6);
      memcpy(v3 + 0xC, v1 + 0xB, 8u);
      memcpy(v3 + 0x14, v1 + 0x13, 8u);
      result = (unsigned int *)some_check_or_CRC(v2);
      v7 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v10 = _PasLogParams;
        v9 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v9 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x331,
                                        0x1F,
                                        "sendIPCCanILSetSignalFilterToVMCU",
                                        " Failed to send SET_SIGNAL_FILTER (Signal Id :%lx and TID : %d) to VMCU.Error Code : %d ",
                                        (unsigned int)v3[6] | ((unsigned int)v3[7] << 8) | ((unsigned int)v3[8] << 0x10) | ((unsigned int)v3[9] << 0x18),
                                        (unsigned int)v3[4] | ((unsigned int)v3[5] << 8),
                                        v7);
          v9 = v10[0xBC5];
        }
      }
      else
      {
        v8 = _PasLogParams;
        v9 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v9 & 0x20000000) != 0 )
        {
          LODWORD(v11) = v1[0xB] | (v1[0xC] << 8) | (v1[0xD] << 0x10) | (v1[0xE] << 0x18);
          HIDWORD(v11) = v1[0xF] | (v1[0x10] << 8) | (v1[0x11] << 0x10) | (v1[0x12] << 0x18);
          v12 = (double)v11;
          LODWORD(v11) = v1[0x13] | (v1[0x14] << 8) | (v1[0x15] << 0x10) | (v1[0x16] << 0x18);
          HIDWORD(v11) = v1[0x17] | (v1[0x18] << 8) | (v1[0x19] << 0x10) | (v1[0x1A] << 0x18);
          result = (unsigned int *)NsLog(
                                        0x336,
                                        0x1D,
                                        "sendIPCCanILSetSignalFilterToVMCU",
                                        " Successfully sent the SET_SIGNAL_FILTER to VMCU with SIGID: 0x%lx TID : %d FID:"
                                        " %d , PAR1: %f and PAR2 :%f ",
                                        (unsigned int)v3[6] | ((unsigned int)v3[7] << 8) | ((unsigned int)v3[8] << 0x10) | ((unsigned int)v3[9] << 0x18),
                                        (unsigned int)v3[4] | ((unsigned int)v3[5] << 8),
                                        (unsigned int)v3[0xA],
                                        v12,
                                        (double)v11);
          v9 = v8[0xBC5];
        }
      }
    }
    else
    {
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v9 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x340, 0xB, "sendIPCCanILSetSignalFilterToVMCU", "-");
  }
  return result;
}
// 101CE4: using guessed type int __fastcall delay(_DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001058D8) --------------------------------------------------------
int __fastcall HandleCanILRegisterSignalNotifyComplete(int result, int a2)
{
  _BYTE *v2; // r5
  int v3; // r1
  char v4; // r3
  int v5; // r2
  int v6; // r10
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD *v9; // r6
  _DWORD *v10; // r6
  _WORD s[20]; // [sp+10h] [bp-28h] BYREF

  v2 = (_BYTE *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x1F6, 0xB, "HandleCanILRegisterSignalNotifyComplete", "+ Message Length : %d + ", a2);
  if ( v2 )
  {
    memset(s, 0, 7u);
    v3 = (unsigned int)v2[5];
    v4 = v2[3];
    v5 = (unsigned int)v2[4];
    s[0] = 4;
    LOBYTE(s[3]) = v4;
    s[1] = 0x3E3;
    s[2] = v5 | (v3 << 8);
    v6 = sub_10D110(0x18u);
    if ( v6 )
      goto LABEL_5;
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(
        0x20C,
        0x1F,
        "HandleCanILRegisterSignalNotifyComplete",
        " Queue handle is NULL , Acquiring a new handle to %s ",
        "VS_CANShadow");
    v6 = McOpenSender("VS_CANShadow");
    result = setApplicationQueueHandle(0x18, v6);
    if ( v6 )
    {
LABEL_5:
      result = McSend(v6, "IPC_MID", 0x2410, 7, s);
      if ( result )
      {
        v7 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v8 < 0 )
        {
          result = NsLog(
                     0x217,
                     0x1F,
                     "HandleCanILRegisterSignalNotifyComplete",
                     "Error while sending REGISTER_SIGNAL_NOTIFICATION_COMPLETE to the recipient : %s , length :%d tid :%d ",
                     "VS_CANShadow",
                     7,
                     (unsigned int)v2[4] | ((unsigned int)v2[5] << 8));
          v8 = v7[0xBC5];
        }
      }
      else
      {
        v9 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v8 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0x21C,
                     0x1D,
                     "HandleCanILRegisterSignalNotifyComplete",
                     "Successfully sent the REGISTER_SIGNAL_NOTIFICATION_COMPLETE to RECIPIENT: %s , LENGTH : %d TID : %d STATUS :%d ",
                     "VS_CANShadow",
                     7,
                     s[2],
                     LOBYTE(s[3]));
          v8 = v9[0xBC5];
        }
      }
    }
    else
    {
      v10 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0x226,
                   0x1D,
                   "HandleCanILRegisterSignalNotifyComplete",
                   "Could not get a handle to the queue : %s ",
                   "VS_CANShadow");
        v8 = v10[0xBC5];
      }
    }
    if ( (v8 & 0x800) != 0 )
      return NsLog(0x229, 0xB, "HandleCanILRegisterSignalNotifyComplete", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00105B68) --------------------------------------------------------
void *__fastcall sub_105B68(unsigned int *a1, int a2)
{
  void *result; // r0
  int v5; // r9
  _DWORD *v6; // r5
  int v7; // r3
  _DWORD *v8; // r6
  _DWORD *v9; // r6
  _WORD s[52]; // [sp+10h] [bp-68h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x1A5, 0xB, "HandleCanILRecvSignalArrayComplete", "+ Message Length : %d +", a2);
  result = memset(s, 0, 0x48u);
  if ( a1 )
  {
    memcpy(&s[2], a1 + 4, sizeof(_WORD));
    memcpy(&s[3], a1 + 6, sizeof(_WORD));
    memcpy(&s[4], a1 + 8, 0x40u);
    HIBYTE(s[1]) = a2;
    s[0] = 4;
    LOBYTE(s[1]) = 0xA4;
    v5 = sub_10D110(0x18u);
    if ( v5 )
      goto LABEL_5;
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(
        0x1CA,
        0x1F,
        "HandleCanILRecvSignalArrayComplete",
        " Queue handle is NULL , Acquiring a new handle to %s ",
        "VS_CANShadow");
    v5 = McOpenSender("VS_CANShadow");
    result = (void *)setApplicationQueueHandle(0x18, v5);
    if ( v5 )
    {
LABEL_5:
      result = (void *)McSend(v5, "IPC_MID", 0x2410, a2, s);
      if ( result )
      {
        v6 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v7 < 0 )
        {
          result = (void *)NsLog(
                             0x1D5,
                             0x1F,
                             "HandleCanILRecvSignalArrayComplete",
                             "Error while sending a message to the recipient : %s , length :%d tid :%d ",
                             "VS_CANShadow",
                             a2,
                             a1[4] | (a1[5] << 8));
          v7 = v6[0xBC5];
        }
      }
      else
      {
        v8 = _PasLogParams;
        v7 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v7 & 0x20000000) != 0 )
        {
          result = (void *)NsLog(
                             0x1DA,
                             0x1D,
                             "HandleCanILRecvSignalArrayComplete",
                             "Successfully sent RECV_SIGNAL_ARRAY_COMPLETE to RECIPIENT: %s ,LENGTH: %d , TID: %d , NOS: %d",
                             "VS_CANShadow",
                             a2,
                             s[2],
                             s[3]);
          v7 = v8[0xBC5];
        }
      }
    }
    else
    {
      v9 = _PasLogParams;
      v7 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v7 < 0 )
      {
        result = (void *)NsLog(
                           0x1E4,
                           0x1F,
                           "HandleCanILRecvSignalArrayComplete",
                           "Could not get a handle to the queue : %s ",
                           "VS_CANShadow");
        v7 = v9[0xBC5];
      }
    }
    if ( (v7 & 0x800) != 0 )
      return (void *)NsLog(0x1E7, 0xB, "HandleCanILRecvSignalArrayComplete", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00105E04) --------------------------------------------------------
void *__fastcall HandleCanILRecvSignalArrayIndicate(unsigned int *a1, int a2)
{
  void *result; // r0
  unsigned int v5; // r8
  size_t v6; // r2
  unsigned int v7; // r8
  int v8; // r9
  _DWORD *v9; // r5
  int v10; // r3
  _DWORD *v11; // r5
  _DWORD *v12; // r6
  int s[26]; // [sp+18h] [bp-68h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x13F, 0xB, "HandleCanILRecvSignalArrayIndicate", "+ Message Length : %d +", a2);
  result = memset(s, 0, 0x47u);
  if ( a1 && (unsigned int)(a2 - 2) <= 0x40 && (unsigned int)(a2 - 2) > 5 )
  {
    v5 = a2 - 5;
    memcpy(&s[1], a1 + 3, 1u);
    memcpy((char *)&s[1] + 1, a1 + 6, 2u);
    v6 = v5 - 3;
    v7 = v5 + 4;
    memcpy((char *)&s[1] + 3, a1 + 8, v6);
    LOWORD(s[0]) = 4;
    HIBYTE(s[0]) = v7;
    BYTE2(s[0]) = 0xA3;
    v8 = sub_10D110(0x18u);
    if ( v8 )
      goto LABEL_10;
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(
        0x177,
        0x1F,
        "HandleCanILRecvSignalArrayIndicate",
        " Queue handle is NULL , Acquiring a new handle to %s ",
        "VS_CANShadow");
    v8 = McOpenSender("VS_CANShadow");
    result = (void *)setApplicationQueueHandle(0x18, v8);
    if ( v8 )
    {
LABEL_10:
      result = (void *)McSend(v8, "IPC_MID", 0x2410, v7, s);
      if ( result )
      {
        v11 = _PasLogParams;
        v10 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v10 < 0 )
        {
          result = (void *)NsLog(
                             0x182,
                             0x1F,
                             "HandleCanILRecvSignalArrayIndicate",
                             "Error while sending a message to the recipient : %s , length :%d tid :%d ",
                             "VS_CANShadow",
                             v7,
                             a1[4] | (a1[5] << 8));
          v10 = v11[0xBC5];
        }
      }
      else
      {
        v9 = _PasLogParams;
        v10 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v10 & 0x20000000) != 0 )
        {
          result = (void *)NsLog(
                             0x187,
                             0x1D,
                             "HandleCanILRecvSignalArrayIndicate",
                             "Successfully sent RECV_SIGNAL_ARRAY_INDICATE to RECIPIENT: %s ,LENGTH: %d , TID: %d , NOS: %d,status:%d",
                             "VS_CANShadow",
                             v7,
                             a1[4] | (a1[5] << 8),
                             (unsigned int)((unsigned int)s[1] >> 8),
                             a1[3]);
          v10 = v9[0xBC5];
        }
      }
    }
    else
    {
      v12 = _PasLogParams;
      v10 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v10 < 0 )
      {
        result = (void *)NsLog(
                           0x191,
                           0x1F,
                           "HandleCanILRecvSignalArrayIndicate",
                           "Could not get a handle to the queue : %s ",
                           "VS_CANShadow");
        v10 = v12[0xBC5];
      }
    }
    if ( (v10 & 0x800) != 0 )
      return (void *)NsLog(0x194, 0xB, "HandleCanILRecvSignalArrayIndicate", "-");
  }
  else if ( *((int *)_PasLogParams + 0xBC5) < 0 )
  {
    return (void *)NsLog(
                     0x146,
                     0x1F,
                     "HandleCanILRecvSignalArrayIndicate",
                     "Error in messagePtr with messageLength :%d",
                     a2);
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00106118) --------------------------------------------------------
int __fastcall HandleCanILSendSignalArrayComplete(int result, int a2)
{
  _BYTE *v2; // r5
  int v3; // r1
  char v4; // r3
  int v5; // r2
  int v6; // r10
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD *v9; // r6
  _DWORD *v10; // r6
  _WORD s[20]; // [sp+10h] [bp-28h] BYREF

  v2 = (_BYTE *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0xF8, 0xB, "HandleCanILSendSignalArrayComplete", "+ Message Length : %d + ", a2);
  if ( v2 )
  {
    memset(s, 0, 7u);
    v3 = (unsigned int)v2[5];
    v4 = v2[3];
    v5 = (unsigned int)v2[4];
    s[0] = 4;
    LOBYTE(s[3]) = v4;
    s[1] = 0x3A2;
    s[2] = v5 | (v3 << 8);
    v6 = sub_10D110(0x18u);
    if ( v6 )
      goto LABEL_5;
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(
        0x10E,
        0x1F,
        "HandleCanILSendSignalArrayComplete",
        " Queue handle is NULL , Acquiring a new handle to %s ",
        "VS_CANShadow");
    v6 = McOpenSender("VS_CANShadow");
    result = setApplicationQueueHandle(0x18, v6);
    if ( v6 )
    {
LABEL_5:
      result = McSend(v6, "IPC_MID", 0x2410, 7, s);
      if ( result )
      {
        v7 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v8 < 0 )
        {
          result = NsLog(
                     0x119,
                     0x1F,
                     "HandleCanILSendSignalArrayComplete",
                     "Error while sending SEND_SIGNAL_ARRAY_COMPLETE to the recipient : %s , length :%d tid :%d ",
                     "VS_CANShadow",
                     7,
                     (unsigned int)v2[4] | ((unsigned int)v2[5] << 8));
          v8 = v7[0xBC5];
        }
      }
      else
      {
        v9 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v8 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0x11E,
                     0x1D,
                     "HandleCanILSendSignalArrayComplete",
                     "Successfully sent the SEND_SIGNAL_ARRAY_COMPLETE to RECIPIENT: %s , LENGTH : %d TID : %d STATUS :%d ",
                     "VS_CANShadow",
                     7,
                     s[2],
                     LOBYTE(s[3]));
          v8 = v9[0xBC5];
        }
      }
    }
    else
    {
      v10 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 < 0 )
      {
        result = NsLog(
                   0x128,
                   0x1F,
                   "HandleCanILSendSignalArrayComplete",
                   "Could not get a handle to the queue : %s ",
                   "VS_CANShadow");
        v8 = v10[0xBC5];
      }
    }
    if ( (v8 & 0x800) != 0 )
      return NsLog(0x12B, 0xB, "HandleCanILSendSignalArrayComplete", "-");
  }
  return result;
}

//----- (001063A8) --------------------------------------------------------
int __fastcall HandleCanILSetSignalFilterComplete(int result, int a2)
{
  _BYTE *v2; // r5
  int v3; // r1
  char v4; // r3
  int v5; // r2
  int v6; // r10
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD *v9; // r6
  _DWORD *v10; // r6
  _WORD s[20]; // [sp+10h] [bp-28h] BYREF

  v2 = (_BYTE *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0xB4, 0xB, "HandleCanILSetSignalFilterComplete", "+ Message Length : %d + ", a2);
  if ( v2 )
  {
    memset(s, 0, 7u);
    v3 = (unsigned int)v2[5];
    v4 = v2[3];
    v5 = (unsigned int)v2[4];
    s[0] = 4;
    LOBYTE(s[3]) = v4;
    s[1] = 0x3A9;
    s[2] = v5 | (v3 << 8);
    v6 = sub_10D110(0x18u);
    if ( v6 )
      goto LABEL_5;
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(
        0xCA,
        0x1F,
        "HandleCanILSetSignalFilterComplete",
        " Queue handle is NULL , Acquiring a new handle to %s ",
        "VS_CANShadow");
    v6 = McOpenSender("VS_CANShadow");
    result = setApplicationQueueHandle(0x18, v6);
    if ( v6 )
    {
LABEL_5:
      result = McSend(v6, "IPC_MID", 0x2410, 7, s);
      if ( result )
      {
        v7 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v8 < 0 )
        {
          result = NsLog(
                     0xD5,
                     0x1F,
                     "HandleCanILSetSignalFilterComplete",
                     "Error while sending SET_SIGNAL_FILTER_COMPLETE to the recipient : %s , length :%d tid :%d ",
                     "VS_CANShadow",
                     7,
                     (unsigned int)v2[4] | ((unsigned int)v2[5] << 8));
          v8 = v7[0xBC5];
        }
      }
      else
      {
        v9 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v8 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0xDA,
                     0x1D,
                     "HandleCanILSetSignalFilterComplete",
                     "Successfully sent the SET_SIGNAL_FILTER_COMPLETE to recipient:%s ,LENGTH: %d ,TID: %d STATUS: %d ",
                     "VS_CANShadow",
                     7,
                     s[2],
                     LOBYTE(s[3]));
          v8 = v9[0xBC5];
        }
      }
    }
    else
    {
      v10 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 < 0 )
      {
        result = NsLog(
                   0xE4,
                   0x1F,
                   "HandleCanILSetSignalFilterComplete",
                   "Could not get a handle to the queue : %s ",
                   "VS_CANShadow");
        v8 = v10[0xBC5];
      }
    }
    if ( (v8 & 0x800) != 0 )
      return NsLog(0xE7, 0xB, "HandleCanILSetSignalFilterComplete", "-");
  }
  return result;
}

//----- (00106638) --------------------------------------------------------
int __fastcall sub_106638(int result, int a2)
{
  _BYTE *v2; // r4
  char v3; // r2
  int v4; // r1
  int v5; // r9
  int v6; // r3
  unsigned int v7; // r3
  char v8; // lr
  unsigned int v9; // r10
  int v10; // r4
  _DWORD *v11; // r6
  int v12; // r3
  _DWORD *v13; // r6
  _DWORD *v14; // r6
  _OWORD s[3]; // [sp+10h] [bp-30h] BYREF

  v2 = (_BYTE *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x6C, 0xB, "HandleCanILGetCapabilitiesComplete", "+ Message Length : %d + ", a2);
  if ( v2 )
  {
    memset(s, 0, 0xFu);
    v3 = v2[6];
    v4 = (unsigned int)v2[0xF];
    v5 = (unsigned int)v2[9];
    v6 = (unsigned int)v2[0xC] | ((unsigned int)v2[0xD] << 8) | ((unsigned int)v2[0xE] << 0x10);
    BYTE8(s[0]) = v2[7];
    v7 = v6 | (v4 << 0x18);
    v8 = v2[3];
    v9 = (unsigned int)v2[8] | (unsigned int)(v5 << 8);
    WORD2(s[0]) = (unsigned int)v2[4] | ((unsigned int)v2[5] << 8);
    DWORD2(s[0]) = DWORD2(s[0]) & 0xFF0000FF | (v9 << 8);
    LODWORD(s[0]) = 0xBAB0004;
    BYTE6(s[0]) = v8;
    HIDWORD(s[0]) = HIDWORD(s[0]) & 0xFF000000 | (v7 >> 8);
    BYTE7(s[0]) = v3;
    BYTE11(s[0]) = v7;
    v10 = sub_10D110(0x18u);
    if ( v10 )
      goto LABEL_5;
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(
        0x85,
        0x1F,
        "HandleCanILGetCapabilitiesComplete",
        " Queue handle is NULL , Acquiring a new handle to %s ",
        "VS_CANShadow");
    v10 = McOpenSender("VS_CANShadow");
    result = setApplicationQueueHandle(0x18, v10);
    if ( v10 )
    {
LABEL_5:
      result = McSend(v10, "IPC_MID", 0x2410, 0xF, s);
      if ( result )
      {
        v11 = _PasLogParams;
        v12 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v12 < 0 )
        {
          result = NsLog(
                     0x90,
                     0x1F,
                     "HandleCanILGetCapabilitiesComplete",
                     "Error while sending a message to the recipient : %s ",
                     "VS_CANShadow");
          v12 = v11[0xBC5];
        }
      }
      else
      {
        v13 = _PasLogParams;
        v12 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v12 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0x95,
                     0x1D,
                     "HandleCanILGetCapabilitiesComplete",
                     "Successfully sent GET_CAPABILITES_COMPLETE with TID :%d , LENGTH :%d , STATUS :%d ",
                     WORD2(s[0]),
                     0xF,
                     BYTE6(s[0]));
          v12 = v13[0xBC5];
        }
      }
    }
    else
    {
      v14 = _PasLogParams;
      v12 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v12 < 0 )
      {
        result = NsLog(
                   0x9F,
                   0x1F,
                   "HandleCanILGetCapabilitiesComplete",
                   "Could not get a handle to the queue : %s  to send GET CAPABLITIES COMPLETE with tid : %d ",
                   "VS_CANShadow",
                   WORD2(s[0]));
        v12 = v14[0xBC5];
      }
    }
    if ( (v12 & 0x800) != 0 )
      return NsLog(0xA2, 0xB, "HandleCanILGetCapabilitiesComplete", "-");
  }
  return result;
}


//----- (0010690C) --------------------------------------------------------
unsigned int *__fastcall HandleIpcCanILMessage(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int v2; // r3
  _DWORD *v3; // r6
  int v4; // r2

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x38, 0xB, "HandleIpcCanILMessage", "+");

  if ( v1 )
  {
    result = (unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
    if ( result )
    {
      v2 = *(unsigned int *)((v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2);
      if ( v2 != 0x84 )
      {
        if ( v2 <= 0x84 )
        {
          if ( v2 == 0xA )
          {
            result = (unsigned int *)HandleCanILRecvSignalArrayIndicate(result, v1[4] | (v1[5] << 8));
            v4 = *((_DWORD *)_PasLogParams + 0xBC5);
          }
          else
          {
            if ( v2 != 0x82 )
              goto LABEL_11;
            result = (unsigned int *)HandleCanILSendSignalArrayComplete((int)result, v1[4] | (v1[5] << 8));
            v4 = *((_DWORD *)_PasLogParams + 0xBC5);
          }
        }
        else if ( v2 == 0x86 )
        {
          result = (unsigned int *)HandleCanILRegisterSignalNotifyComplete((int)result, v1[4] | (v1[5] << 8));
          v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        }
        else
        {
          if ( v2 < 0x86 )
          {
            result = (unsigned int *)HandleCanILSetSignalFilterComplete((int)result, v1[4] | (v1[5] << 8));
            v4 = *((_DWORD *)_PasLogParams + 0xBC5);
            goto LABEL_19;
          }
          if ( v2 != 0x8B )
          {
LABEL_11:
            v3 = _PasLogParams;
            v4 = *((_DWORD *)_PasLogParams + 0xBC5);
            if ( v4 < 0 )
            {
              result = (unsigned int *)NsLog(
                                            0x55,
                                            0x1F,
                                            "HandleIpcCanILMessage",
                                            "The CAN IL message with function code : %d is currently not supported ",
                                            *(unsigned int *)((v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18))
                                                               + 2));
              v4 = v3[0xBC5];
            }
            goto LABEL_19;
          }
          result = (unsigned int *)sub_106638((int)result, v1[4] | (v1[5] << 8));
          v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        }
LABEL_19:
        if ( (v4 & 0x800) != 0 )
          return (unsigned int *)NsLog(0x59, 0xB, "HandleIpcCanILMessage", "-");
        return result;
      }
      result = (unsigned int *)sub_105B68(result, v1[4] | (v1[5] << 8));
    }
    v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    goto LABEL_19;
  }
  return result;
}

//----- (00106AF8) --------------------------------------------------------
int __fastcall sub_106AF8(void *a1)
{
  struct itimerspec v2; // [sp+0h] [bp-18h] BYREF

  v2.it_interval.tv_sec = 0;
  v2.it_interval.tv_nsec = 0;
  return timer_settime(a1, 0, &v2, 0);
}

//----- (00106B28) --------------------------------------------------------
timer_t __fastcall sub_106B28(int a1, unsigned int a2, int a3)
{
  timer_t result; // r0
  struct itimerspec value; // [sp+4h] [bp-3Ch] BYREF
  _DWORD v8[3]; // [sp+14h] [bp-2Ch] BYREF
  int v9; // [sp+20h] [bp-20h]
  int v10; // [sp+22h] [bp-1Eh]
  timer_t v11; // [sp+24h] [bp-1Ch] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x222, 0xB, "ipc_create_cyclic_timer", "+");
  v8[1] = a1;
  v8[0] = 4;
  v9 = a3;
  v11 = (timer_t)0xFFFFFFFF;
  v8[2] = 0;
  v10 = getprio(0);
  result = (timer_t)timer_create(0, (struct sigevent *)v8, &v11);
  if ( result != (timer_t)0xFFFFFFFF )
  {
    value.it_value.tv_sec = a2 / 0x3E8;
    value.it_value.tv_nsec = 0xF4240 * (a2 - 0x3E8 * value.it_value.tv_sec);
    value.it_interval = value.it_value;
    timer_settime(v11, 0, &value, 0);
    return v11;
  }
  return result;
}

//----- (00106C3C) --------------------------------------------------------
int __fastcall sub_106C3C(sem_t *a1)
{
  int result; // r0

  if ( !a1 )
    return 0xFFFFFFFF;
  result = sem_wait(a1);
  if ( result )
    return 0xFFFFFFFF;
  return result;
}

//----- (00106C5C) --------------------------------------------------------
int __fastcall sub_106C5C(sem_t *a1)
{
  int result; // r0

  if ( !a1 )
    return 0xFFFFFFFF;
  result = sem_trywait(a1);
  if ( result )
    return 0xFFFFFFFF;
  return result;
}

//----- (00106C7C) --------------------------------------------------------
int __fastcall sub_106C7C(sem_t *a1, unsigned int a2)
{
  int result; // r0
  unsigned int v5; // r4

  if ( !a1 )
    return 0xFFFFFFFF;
  result = sem_trywait(a1);
  if ( result )
  {
    if ( a2 )
    {
      v5 = 0;
      while ( 1 )
      {
        result = sem_trywait(a1);
        if ( !result )
          break;
        if ( v5 > 7u )
        {
          if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
            NsLog(0x172, 0x17, "RxWaitForSemaphorewithcount", "retry count:%d");
          *bRxSemCountRetrySet = 1;
        }
        ++v5;
        sched_yield();
        if ( a2 <= v5 )
          goto LABEL_12;
      }
      *bRxSemCountRetrySet = 0;
    }
    else
    {
LABEL_12:
      result = 0xFFFFFFFF;
      *bRxSemCountRetrySet = 0;
    }
  }
  return result;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEF8: using guessed type int *bRxSemCountRetrySet;

//----- (00106D80) --------------------------------------------------------
int __fastcall __sem_unlock((sem_t *a1)
{
  int result; // r0

  if ( !a1 )
    return 0xFFFFFFFF;
  result = sem_post(a1);    // Функция sem_post() увеличивает (разблокирует) семафор, на который указывает
  if ( result )
    return 0xFFFFFFFF;
  return result;
}

//----- (00106DA0) --------------------------------------------------------
unsigned int __fastcall __sem_destroy(sem_t *a1)
{
  if ( !a1 || __sem_destroy(a1) ) // Функция __sem_destroy() уничтожает безымянный семафор, расположенный по адресу sem.
    return 0xFFFFFFFF;
  free(a1);
  return 0;
}

//----- (00106DD0) --------------------------------------------------------
sem_t *__fastcall __sem_init(unsigned int a1)
{
  sem_t *v2; // r0
  sem_t *v3; // r4

  v2 = (sem_t *)malloc(8u);
  v3 = v2;
  if ( !v2 || !sem_init(v2, 0, a1) )    //  инициализирует безымянный семафор 
    return v3;
  free(v3);
  return 0;
}

//----- (00106E14) --------------------------------------------------------
unsigned int __fastcall _pthread_mutex_unlock(pthread_mutex_t *a1)
{
  if ( !a1 )
    return 0xFFFFFFFF;
  if ( pthread_mutex_unlock(a1) )
    return 0;
  return 0xFFFFFFFF;
}

//----- (00106E38) --------------------------------------------------------
int __fastcall __pthread_mutex_lock(pthread_mutex_t *a1)
{
  int result; // r0

  if ( !a1 )
    return 0xFFFFFFFF;
  result = pthread_mutex_lock(a1);
  if ( result )
    return 0xFFFFFFFF;
  return result;
}

//----- (00106E58) --------------------------------------------------------
unsigned int __fastcall sub_106E58(pthread_mutex_t *a1)
{
  if ( !a1 || pthread_mutex_destroy(a1) )
    return 0xFFFFFFFF;
  free(a1);
  return 0;
}

//----- (00106E88) --------------------------------------------------------
pthread_mutex_t *sub_106E88()
{
  pthread_mutex_t *v0; // r4

  v0 = (pthread_mutex_t *)malloc(8u);
  pthread_mutex_init(v0, 0);
  return v0;
}

//----- (00106EA8) --------------------------------------------------------
int sub_106EA8()
{
  return 0x7530;
}

//----- (00106EB0) --------------------------------------------------------
int __fastcall sub_106EB0(unsigned int a1)
{
  int v1; // r5
  int *v2; // r3
  int v3; // r2

  v1 = a1;
  if ( getBoardType() != 1 )
  {
    v2 = dword_11931C;
    if ( v1 != 4 )
      goto LABEL_3;
LABEL_20:
    v3 = 0;
    return (int)&v2[6 * v3 + 7];
  }
  v2 = dword_1193F8;
  if ( v1 == 4 )
    goto LABEL_20;
LABEL_3:
  if ( getBoardType() == 1 )
  {
    v2 = dword_1193F8;
    if ( v1 == 8 )
    {
      v3 = 1;
      return (int)&v2[6 * v3 + 7];
    }
    if ( getBoardType() != 1 )
    {
LABEL_7:
      v2 = dword_11931C;
      if ( v1 != 0x18 )
        goto LABEL_8;
      goto LABEL_26;
    }
LABEL_25:
    v2 = dword_1193F8;
    if ( v1 != 0x18 )
    {
LABEL_8:
      if ( getBoardType() == 1 )
      {
        v2 = dword_1193F8;
        if ( v1 != 0x1C )
        {
LABEL_10:
          if ( getBoardType() == 1 )
          {
            v2 = dword_1193F8;
            if ( v1 != 0x21 )
            {
LABEL_12:
              if ( getBoardType() == 1 )
              {
                v2 = dword_1193F8;
                if ( v1 != 0x22 )
                {
LABEL_14:
                  if ( getBoardType() == 1 )
                  {
                    v2 = dword_1193F8;
                    if ( v1 != 0x26 )
                    {
LABEL_16:
                      if ( getBoardType() == 1 )
                      {
                        v2 = dword_1193F8;
                        if ( v1 != 0x3F )
                          return 0;
                      }
                      else
                      {
                        v2 = dword_11931C;
                        if ( v1 != 0x3F )
                          return 0;
                      }
                      v3 = 7;
                      return (int)&v2[6 * v3 + 7];
                    }
                  }
                  else
                  {
                    v2 = dword_11931C;
                    if ( v1 != 0x26 )
                      goto LABEL_16;
                  }
                  v3 = 6;
                  return (int)&v2[6 * v3 + 7];
                }
              }
              else
              {
                v2 = dword_11931C;
                if ( v1 != 0x22 )
                  goto LABEL_14;
              }
              v3 = 5;
              return (int)&v2[6 * v3 + 7];
            }
          }
          else
          {
            v2 = dword_11931C;
            if ( v1 != 0x21 )
              goto LABEL_12;
          }
          v3 = 4;
          return (int)&v2[6 * v3 + 7];
        }
      }
      else
      {
        v2 = dword_11931C;
        if ( v1 != 0x1C )
          goto LABEL_10;
      }
      v3 = 3;
      return (int)&v2[6 * v3 + 7];
    }
LABEL_26:
    v3 = 2;
    return (int)&v2[6 * v3 + 7];
  }
  v2 = dword_11931C;
  if ( v1 != 8 )
  {
    if ( getBoardType() != 1 )
      goto LABEL_7;
    goto LABEL_25;
  }
  v3 = 1;
  return (int)&v2[6 * v3 + 7];
}
// 11931C: using guessed type int dword_11931C[6];
// 1193F8: using guessed type int dword_1193F8[6];

//----- (001070D4) --------------------------------------------------------
int *sub_1070D4()
{
  if ( getBoardType() == 1 )
    return dword_1193F8;
  else
    return dword_11931C;
}
// 11931C: using guessed type int dword_11931C[6];
// 1193F8: using guessed type int dword_1193F8[6];

//----- (00107110) --------------------------------------------------------
unsigned int GetIpcCfgSignature()
{
  if ( getBoardType() == 1 )
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
      NsLog(0x319, 0x17, "GetIpcCfgSignature", "RETURNING PRODUCTION SIGNATURE");
    return sub_1021F4(0xFFFFFFFF, 0xDCu, (int)dword_1193F8);
  }
  else
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
      NsLog(0x31E, 0x17, "GetIpcCfgSignature", "RETURNING PANDA SIGNATURE");
    return sub_1021F4(0xFFFFFFFF, 0xDCu, (int)dword_11931C);
  }
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11931C: using guessed type int dword_11931C[6];
// 1193F8: using guessed type int dword_1193F8[6];
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001071E4) --------------------------------------------------------
unsigned int *__fastcall _sendIPCEolDiagResponseToVMCU(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r8
  _BYTE *v3; // r7
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  _DWORD *v9; // r6

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x9A, 0xB, "sendIPCEolDiagResponseToVMCU", "+");
  if ( v1 )
  {
    result = (unsigned int *)sub_114778();
    if ( !result )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        return (unsigned int *)NsLog(
                                    0xA1,
                                    0x1F,
                                    "sendIPCEolDiagResponseToVMCU",
                                    "***Invalid IBD EOL_RESPONSE while EOL is inactive***");
      return result;
    }
    result = sub_110C70(0x21, (v1[0xB] | (v1[0xC] << 8)) + 0xC);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      *v3 = 0xFC;
      v3[2] = 0x81;
      v3[1] = 0;
      v3[3] = v1[4];
      v4 = v1[5] | (v1[6] << 8);
      v3[4] = v1[5];
      v3[5] = HIBYTE(v4);
      v5 = v1[7] | (v1[8] << 8);
      v3[6] = v1[7];
      v3[7] = HIBYTE(v5);
      v6 = v1[9] | (v1[0xA] << 8);
      v3[8] = v1[9];
      v3[9] = HIBYTE(v6);
      v7 = v1[0xB] | (v1[0xC] << 8);
      v3[0xA] = v1[0xB];
      v3[0xB] = HIBYTE(v7);
      memcpy(v3 + 0xC, v1 + 0xD, v1[0xB] | (v1[0xC] << 8));
      result = (unsigned int *)some_check_or_CRC(v2);
      if ( !result )
      {
        v9 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v8 & 0x800000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0xC5,
                                        0x17,
                                        "sendIPCEolDiagResponseToVMCU",
                                        "Successfully sent EOL Response message with transaction Id: %d , Status :%d ",
                                        (unsigned int)v3[3],
                                        (unsigned int)v3[8] | ((unsigned int)v3[9] << 8));
          v8 = v9[0xBC5];
        }
        goto LABEL_13;
      }
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0xC0,
          0x1F,
          "sendIPCEolDiagResponseToVMCU",
          " Error while sending the EOL Response Message to VMCU  with transaction Id : %d , Status :%d , rc : %d ",
          (unsigned int)v3[3],
          result,
          (unsigned int)v3[8] | ((unsigned int)v3[9] << 8));
      result = lost_sub_can_edian(v2);
    }
    v8 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_13:
    if ( (v8 & 0x800) != 0 )
      return (unsigned int *)NsLog(0xC9, 0xB, "sendIPCEolDiagResponseToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00107470) --------------------------------------------------------
int __fastcall sub_107470(unsigned int *a1)
{
  _BYTE *v2; // r5
  unsigned int v3; // r12
  int v4; // r3
  int v5; // r5
  int result; // r0
  _DWORD *v7; // r6
  int v8; // r3
  _DWORD *v9; // r6
  int v10[1025]; // [sp+Ch] [bp-1004h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x58, 0xB, "HandleEolDiagRequestMessage", "+");
  v2 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  memset(v10, 0, 0xFE9u);
  LOWORD(v10[0]) = 4;
  BYTE2(v10[0]) = 0xD4;
  v3 = (unsigned int)v2[8] | ((unsigned int)v2[9] << 8);
  HIBYTE(v10[0]) = v2[8] + 6;
  LOBYTE(v10[1]) = v2[3];
  v10[1] = v10[1] & 0xFF0000FF | ((unsigned int)((unsigned int)v2[4] | ((unsigned int)v2[5] << 8)) << 8);
  v4 = (unsigned int)v2[6] | ((unsigned int)v2[7] << 8);
  HIBYTE(v10[1]) = v2[6];
  LOBYTE(v10[2]) = HIBYTE(v4);
  v10[2] = v10[2] & 0xFF0000FF | (v3 << 8);
  memcpy((char *)&v10[2] + 3, v2 + 0xA, 0xFDEu);
  v5 = sub_10D110(0x19u);
  if ( v5 || (v5 = McOpenSender("VS_DiagService"), result = setApplicationQueueHandle(0x19, v5), v5) )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 0xFE9, v10);
    if ( result )
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x7A,
                 0x1F,
                 "HandleEolDiagRequestMessage",
                 " Error while sending EOL Request Message to recipient : %s,length : %d ",
                 "VS_DiagService",
                 HIBYTE(v10[0]));
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x800000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x76,
                 0x17,
                 "HandleEolDiagRequestMessage",
                 " Successfully sent a EOL Request Message to recipient : %s , length : %d ",
                 "VS_DiagService",
                 HIBYTE(v10[0]));
    }
    v8 = v7[0xBC5];
  }
  else
  {
    v9 = _PasLogParams;
    v8 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v8 < 0 )
    {
      result = NsLog(
                 0x84,
                 0x1F,
                 "HandleEolDiagRequestMessage",
                 "Could not acquire handle to the diagnostics queue : %s,length : %d ",
                 "VS_DiagService",
                 HIBYTE(v10[0]));
      v8 = v9[0xBC5];
    }
  }
LABEL_6:
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x87, 0xB, "HandleEolDiagRequestMessage", "-");
  return result;
}

//----- (001076F0) --------------------------------------------------------
int __fastcall sub_1076F0(int result)
{
  unsigned int *v1; // r5
  int v2; // r3
  _DWORD *v3; // r6
  int v4; // r2

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x36, 0xB, "HandleEolDiagnosticsMessage", "+");
  if ( v1 )
  {
    result = v1[9];
    v2 = *(unsigned int *)((v1[8] | (result << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2);
    if ( v2 == 1 )
    {
      result = sub_107470(v1);
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    else
    {
      v3 = _PasLogParams;
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v4 < 0 )
      {
        result = NsLog(
                   0x42,
                   0x1F,
                   "HandleEolDiagnosticsMessage",
                   " Unsupported EOL message received with function code : %d , Ignoring....",
                   v2);
        v4 = v3[0xBC5];
      }
    }
    if ( (v4 & 0x800) != 0 )
      return NsLog(0x45, 0xB, "HandleEolDiagnosticsMessage", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010780C) --------------------------------------------------------
unsigned int *__fastcall _sendIpcIBDSetOIDDataRequest(unsigned int *a1, unsigned int a2)
{
  unsigned int *result; // r0
  bool v5; // cc
  char v6; // r10
  unsigned int *v7; // r8
  size_t v8; // r5
  _BYTE *v9; // r7
  unsigned int *v10; // r10
  _DWORD *v11; // r6
  int v12; // r3
  _DWORD *v13; // r6

  result = (unsigned int *)sub_114778();
  if ( result )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x319,
                                  0x1F,
                                  "sendIpcIBDSetOIDDataRequest",
                                  "***Invalid IBD SET_OID_DATA_REQUEST while EOL is active***");
    return result;
  }
  v5 = a1 != 0;
  if ( a1 )
    v5 = a2 > 3;
  v6 = !v5;
  if ( !v5 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x324,
                                  0x1F,
                                  "sendIpcIBDSetOIDDataRequest",
                                  "Invalid params, dataBuffer:%p, data_len:%d",
                                  a1,
                                  a2);
    return result;
  }
  result = sub_110C70(0x26, (a1[7] | (a1[8] << 8)) + 6);
  v7 = result;
  if ( result )
  {
    v8 = (unsigned int)(a2 - 9);
    v9 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
    v9[2] = 3;
    v9[1] = v6 & 1 | (2 * (v6 & 0x7F));
    *v9 = v6 & 3 | 0x98;
    memcpy(v9 + 3, a1 + 4, sizeof(_BYTE));
    memcpy(v9 + 4, a1 + 5, 2u);
    if ( v8 > 0xFFF )
    {
      result = lost_sub_can_edian(v7);
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        return (unsigned int *)NsLog(
                                    0x345,
                                    0x1F,
                                    "sendIpcIBDSetOIDDataRequest",
                                    "Error: Exp len:%d, rx:%d",
                                    0xFFF,
                                    v8);
      return result;
    }
    memcpy(v9 + 6, a1 + 9, v8);
    result = (unsigned int *)some_check_or_CRC(v7);
    v10 = result;
    if ( result )
    {
      result = lost_sub_can_edian(v7);
      v13 = _PasLogParams;
      v12 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v12 < 0 )
      {
        result = (unsigned int *)NsLog(
                                      0x356,
                                      0x1F,
                                      "sendIpcIBDSetOIDDataRequest",
                                      "Failed to send SET_OID_DATA_REQUEST to VMCU rc: %d ",
                                      v10);
        v12 = v13[0xBC5];
      }
    }
    else
    {
      v11 = _PasLogParams;
      v12 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v12 & 0x20000000) != 0 )
      {
        result = (unsigned int *)NsLog(
                                      0x35B,
                                      0x1D,
                                      "sendIpcIBDSetOIDDataRequest",
                                      "Successfully sent the SET_OID_DATA_REQUEST to VMCU with OID count : %d , TID : %d, ",
                                      (unsigned int)v9[4] | ((unsigned int)v9[5] << 8),
                                      (unsigned int)v9[3]);
        v12 = v11[0xBC5];
      }
    }
  }
  else
  {
    v12 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v12 & 0x800) != 0 )
    return (unsigned int *)NsLog(0x360, 0xB, "sendIpcIBDSetOIDDataRequest", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00107ACC) --------------------------------------------------------
unsigned int *__fastcall _sendIpcIBDGetOIDDataResponseToVMCU(int a1, unsigned int a2)
{
  unsigned int *result; // r0
  bool v5; // cc
  char v6; // r8
  int v7; // r10
  unsigned int *v8; // r11
  unsigned int *v9; // r6
  size_t v10; // r10
  int v11; // r3
  unsigned int *v12; // r8
  _DWORD *v13; // r10
  int v14; // r7
  unsigned int *v15; // r7
  _DWORD *v16; // r5
  _DWORD *v17; // r5
  unsigned int v18; // [sp+18h] [bp-38h]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x2B9, 0xB, "sendIpcIBDGetOIDDataResponseToVMCU", "+");
  result = (unsigned int *)sub_114778();
  if ( result )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x2BD,
                                  0x1F,
                                  "sendIpcIBDGetOIDDataResponseToVMCU",
                                  "***Invalid IBD GET_OID_DATA_RESPONSE while EOL is active***");
    return result;
  }
  v5 = a1 != 0;
  if ( a1 )
    v5 = a2 > 3;
  v6 = !v5;
  if ( !v5 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x2C8,
                                  0x1F,
                                  "sendIpcIBDGetOIDDataResponseToVMCU",
                                  "Invalid params, dataBuffer:%p, data_len:%d",
                                  (const void *)a1,
                                  a2);
    return result;
  }
  v7 = (unsigned int)(a2 - 4);
  result = sub_110C70(0x26, v7 + 3);
  v8 = result;
  if ( result )
  {
    v9 = (unsigned int *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
    v10 = (unsigned int)(v7 - 5);
    v9[2] = 0x82;
    *v9 = v6 & 3 | 0x98;
    v9[1] = v6 & 1 | (2 * (v6 & 0x7F));
    memcpy(v9 + 3, (const void *)(a1 + 4), sizeof(unsigned int));
    memcpy(v9 + 4, (const void *)(a1 + 5), 2u);
    memcpy(v9 + 6, (const void *)(a1 + 7), 2u);
    v18 = v10;
    if ( v10 > 0xFFF )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(0x2EA, 0x1F, "sendIpcIBDGetOIDDataResponseToVMCU", "Error: Exp len:%d, rx:%d", 0xFFF, v10);
      return lost_sub_can_edian(v8);
    }
    memcpy(v9 + 8, (const void *)(a1 + 9), v10);
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      NsLog(
        0x2F1,
        0x1D,
        "sendIpcIBDGetOIDDataResponseToVMCU",
        "request code: %d status code: %d tid: %d and oid count : %d, data length:%d ",
        v9[2],
        v9[4] | (v9[5] << 8),
        v9[3],
        v9[6] | (v9[7] << 8),
        v10);
    if ( v10 )
    {
      v12 = v9;
      v13 = _PasLogParams;
      v14 = 0;
      do
      {
        if ( (v13[0xBC5] & 0x20000000) != 0 )
          NsLog(0x2F4, 0x1D, "sendIpcIBDGetOIDDataResponseToVMCU", "Buffer[%d] : %d ", v14, v12[8]);
        ++v14;
        ++v12;
      }
      while ( v18 > (unsigned int)v14 );
    }
    result = (unsigned int *)some_check_or_CRC(v8);
    v15 = result;
    if ( result )
    {
      result = lost_sub_can_edian(v8);
      v17 = _PasLogParams;
      v11 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v11 < 0 )
      {
        result = (unsigned int *)NsLog(
                                      0x2FB,
                                      0x1F,
                                      "sendIpcIBDGetOIDDataResponseToVMCU",
                                      (const char *)sub_119958,
                                      v15);
        v11 = v17[0xBC5];
      }
    }
    else
    {
      v16 = _PasLogParams;
      v11 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v11 & 0x20000000) != 0 )
      {
        result = (unsigned int *)NsLog(
                                      0x300,
                                      0x1D,
                                      "sendIpcIBDGetOIDDataResponseToVMCU",
                                      (const char *)&loc_119998,
                                      v9[6] | (v9[7] << 8),
                                      v9[3],
                                      v18);
        v11 = v16[0xBC5];
      }
    }
  }
  else
  {
    v11 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v11 & 0x800) != 0 )
    return (unsigned int *)NsLog(0x304, 0xB, "sendIpcIBDGetOIDDataResponseToVMCU", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 119958: using guessed type int sub_119958();
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00107ECC) --------------------------------------------------------
unsigned int *__fastcall _sendIpcIBDSetOIDDataResponse(int a1, unsigned int a2)
{
  unsigned int *result; // r0
  bool v5; // cc
  char v6; // r8
  unsigned int *v7; // r10
  _BYTE *v8; // r7
  char v9; // r12
  unsigned int *v10; // r8
  _DWORD *v11; // r6
  int v12; // r3
  _DWORD *v13; // r5

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x27D, 0xB, "sendIpcIBDSetOIDDataResponse", "+");
  result = (unsigned int *)sub_114778();
  if ( result )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x281,
                                  0x1F,
                                  "sendIpcIBDSetOIDDataResponse",
                                  "***Invalid IBD SET_OID_DATA_RESPONSE while EOL is active***");
  }
  else
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      result = (unsigned int *)NsLog(0x289, 0x1F, "sendIpcIBDSetOIDDataResponse", "length:%d", a2);
    v5 = a1 != 0;
    if ( a1 )
      v5 = a2 > 3;
    v6 = !v5;
    if ( v5 )
    {
      result = sub_110C70(0x26, 6);
      v7 = result;
      if ( result )
      {
        v8 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
        v9 = v8[1] & 0xFE | v6 & 1;
        v8[2] = 0x83;
        v8[1] = v9 & 1 | (2 * (v6 & 0x7F));
        *v8 = v6 & 3 | 0x98;
        memcpy(v8 + 3, (const void *)(a1 + 4), sizeof(_BYTE));
        memcpy(v8 + 4, (const void *)(a1 + 5), 2u);
        result = (unsigned int *)some_check_or_CRC(v7);
        v10 = result;
        if ( result )
        {
          result = lost_sub_can_edian(v7);
          v13 = _PasLogParams;
          v12 = *((_DWORD *)_PasLogParams + 0xBC5);
          if ( v12 < 0 )
          {
            result = (unsigned int *)NsLog(
                                          0x2A9,
                                          0x1F,
                                          "sendIpcIBDSetOIDDataResponse",
                                          "Failed to send SET_OID_RESPONSE to VMCU rc :%d ",
                                          v10);
            v12 = v13[0xBC5];
          }
        }
        else
        {
          v11 = _PasLogParams;
          v12 = *((_DWORD *)_PasLogParams + 0xBC5);
          if ( (v12 & 0x20000000) != 0 )
          {
            result = (unsigned int *)NsLog(
                                          0x2AD,
                                          0x1D,
                                          "sendIpcIBDSetOIDDataResponse",
                                          "Successfully sent SET_OID_RESPONSE to VMCU with tid:%d and status:%d",
                                          (unsigned int)v8[3],
                                          (unsigned int)v8[4] | ((unsigned int)v8[5] << 8));
            v12 = v11[0xBC5];
          }
        }
      }
      else
      {
        v12 = *((_DWORD *)_PasLogParams + 0xBC5);
      }
      if ( (v12 & 0x800) != 0 )
        return (unsigned int *)NsLog(0x2B1, 0xB, "sendIpcIBDSetOIDDataResponse", "-");
    }
    else if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    {
      return (unsigned int *)NsLog(
                                  0x28E,
                                  0x1F,
                                  "sendIpcIBDSetOIDDataResponse",
                                  "Invalid params, dataBuffer:%p, data_len:%d",
                                  (const void *)a1,
                                  a2);
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00108174) --------------------------------------------------------
unsigned int *__fastcall _sendIpcIBDGetOIDDataRequest(int a1, unsigned int a2)
{
  unsigned int *result; // r0
  bool v5; // cc
  char v6; // r8
  int v7; // r9
  unsigned int *v8; // r10
  _BYTE *v9; // r7
  unsigned int *v10; // r11
  char v11; // r12
  unsigned int *v12; // r6
  int v13; // r3
  _DWORD *v14; // r5

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x21C, 0xB, "sendIpcIBDGetOIDDataRequest", "+");
  result = (unsigned int *)sub_114778();
  if ( result )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x220,
                                  0x1F,
                                  "sendIpcIBDGetOIDDataRequest",
                                  "***Invalid IBD GET_OID_DATA_REQUEST while EOL is active***");
    return result;
  }
  v5 = a1 != 0;
  if ( a1 )
    v5 = a2 > 3;
  v6 = !v5;
  if ( !v5 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x22A,
                                  0x1F,
                                  "sendIpcIBDGetOIDDataRequest",
                                  "Invalid params, dataBuffer:%p, data_len:%d",
                                  (const void *)a1,
                                  a2);
    return result;
  }
  v7 = (unsigned int)(a2 - 4);
  result = sub_110C70(0x26, v7 + 4);
  v8 = result;
  if ( result )
  {
    v9 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
    v10 = (unsigned int *)ibdTransactionId;
    v11 = v9[1] & 0xFE | v6 & 1;
    v9[2] = 2;
    v9[1] = v11 & 1 | (2 * (v6 & 0x7F));
    *v9 = v6 & 3 | 0x98;
    v9[3] = *v10;
    memcpy(v9 + 4, (const void *)(a1 + 4), 2u);
    if ( (unsigned int)(v7 - 2) > 0xFFBu )
    {
      result = lost_sub_can_edian(v8);
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        return (unsigned int *)NsLog(
                                    0x245,
                                    0x1F,
                                    "sendIpcIBDGetOIDDataRequest",
                                    "Error: Exp len:%d, rx:%d",
                                    0xFFB,
                                    (unsigned int)(v7 - 2));
      return result;
    }
    memcpy(v9 + 6, (const void *)(a1 + 6), (unsigned int)(v7 - 2));
    result = (unsigned int *)some_check_or_CRC(v8);
    v12 = result;
    if ( result )
    {
      result = lost_sub_can_edian(v8);
      v14 = _PasLogParams;
      v13 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v13 < 0 )
      {
        result = (unsigned int *)NsLog(
                                      0x25F,
                                      0x1F,
                                      "sendIpcIBDGetOIDDataRequest",
                                      "Failed to send GET_OID_DATA_REQUEST to VMCU rc: %d ",
                                      v12);
        v13 = v14[0xBC5];
      }
    }
    else
    {
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        result = (unsigned int *)NsLog(
                                      0x264,
                                      0x1D,
                                      "sendIpcIBDGetOIDDataRequest",
                                      "Successfully sent the GET_OID_DATA_REQUEST to VMCU with OID count : %d , TID : %d and length :%d ",
                                      (unsigned int)v9[4] | ((unsigned int)v9[5] << 8),
                                      *v10,
                                      (unsigned int)(v7 - 2));
      v13 = *((_DWORD *)_PasLogParams + 0xBC5);
      ++*(_BYTE *)ibdTransactionId;
    }
  }
  else
  {
    v13 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v13 & 0x800) != 0 )
    return (unsigned int *)NsLog(0x269, 0xB, "sendIpcIBDGetOIDDataRequest", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEFC: using guessed type void *;

//----- (00108484) --------------------------------------------------------
unsigned int *__fastcall _sendIpcIBDSelfTestResponse(_BYTE *a1)
{
  unsigned int *result; // r0
  unsigned int *v3; // r8
  _BYTE *v4; // r3
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v8; // r2
  unsigned int *v9; // r5

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x194, 0xB, "sendIpcIBDSelfTestResponse", "+");
  result = (unsigned int *)sub_114778();
  if ( result )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (unsigned int *)NsLog(
                                  0x198,
                                  0x1F,
                                  "sendIpcIBDSelfTestResponse",
                                  "***Invalid Operation ! Cannot send IBD SELF_TEST_RESPONSE while EOL mode is active***");
  }
  else if ( a1 )
  {
    result = sub_110C70(0x26, ((unsigned int)a1[0xB] | ((unsigned int)a1[0xC] << 8)) + 0xC);
    v3 = result;
    if ( result )
    {
      v4 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v4[2] = 0x81;
      *v4 = 0x98;
      v4[1] = 0;
      v4[3] = a1[4];
      v5 = (unsigned int)a1[5] | ((unsigned int)a1[6] << 8);
      v4[4] = a1[5];
      v4[5] = HIBYTE(v5);
      v6 = (unsigned int)a1[7] | ((unsigned int)a1[8] << 8);
      v4[6] = a1[7];
      v4[7] = HIBYTE(v6);
      v7 = (unsigned int)a1[9] | ((unsigned int)a1[0xA] << 8);
      v4[8] = a1[9];
      v4[9] = HIBYTE(v7);
      v8 = (unsigned int)a1[0xB] | ((unsigned int)a1[0xC] << 8);
      v4[0xA] = a1[0xB];
      v4[0xB] = HIBYTE(v8);
      memcpy(v4 + 0xC, a1 + 0xD, (unsigned int)a1[0xB] | ((unsigned int)a1[0xC] << 8));
      result = (unsigned int *)some_check_or_CRC(v3);
      v9 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v3);
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          return (unsigned int *)NsLog(
                                      0x1BC,
                                      0x1F,
                                      "sendIpcIBDSelfTestResponse",
                                      "Error while sending SELF_TEST_RESPONSE to VMCU Major:%d , Minor : %d , Status :%d "
                                      " TID:%d and rc: %d ",
                                      (unsigned int)a1[5] | ((unsigned int)a1[6] << 8),
                                      (unsigned int)a1[7] | ((unsigned int)a1[8] << 8),
                                      (unsigned int)a1[9] | ((unsigned int)a1[0xA] << 8),
                                      (unsigned int)a1[4],
                                      v9);
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        return (unsigned int *)NsLog(
                                    0x1C1,
                                    0x1D,
                                    "sendIpcIBDSelfTestResponse",
                                    "Successfully sent the SELF_TEST_RESPONSE to VMCU with Major: %d , Minor :%d , Status"
                                    " :%d , Length : %d and TID :%d ",
                                    (unsigned int)a1[5] | ((unsigned int)a1[6] << 8),
                                    (unsigned int)a1[7] | ((unsigned int)a1[8] << 8),
                                    (unsigned int)a1[9] | ((unsigned int)a1[0xA] << 8),
                                    (unsigned int)a1[0xB] | ((unsigned int)a1[0xC] << 8),
                                    (unsigned int)a1[4]);
      }
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010872C) --------------------------------------------------------
int __fastcall sub_10872C(unsigned int *a1)
{
  unsigned int *v2; // r6
  int v3; // r3
  int v4; // r2
  int v5; // r2
  int v6; // r7
  int result; // r0
  _DWORD *v8; // r8
  int v9; // r3
  _DWORD *v10; // r6
  int v11[2068]; // [sp+18h] [bp-1028h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x1D4, 0xB, "HandleIBDGetOIDDataResponse", "+");
  v2 = (unsigned int *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  memset(v11, 0, 0x1005u);
  v3 = a1[7];
  v4 = a1[4] | (a1[5] << 8) | (a1[6] << 0x10);
  v11[0] = 4;
  v5 = v4 | (v3 << 0x18);
  HIBYTE(v11[1]) = v5;
  LOBYTE(v11[1]) = 0xDF;
  v11[2] = v2[6] | (v2[7] << 8);
  memcpy(&v11[3], v2 + 8, v5);
  v6 = sub_10D110(0x19u);
  if ( v6 || (v6 = McOpenSender("VS_DiagService"), result = setApplicationQueueHandle(0x19, v6), v6) )
  {
    result = McSend(v6, "IPC_MID", 0x2410, a1[4] | (a1[5] << 8) | (a1[6] << 0x10) | (a1[7] << 0x18), v11);
    if ( result )
    {
      v10 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v9 < 0 )
      {
        result = NsLog(
                   0x1F5,
                   0x1F,
                   "HandleIBDGetOIDDataResponse",
                   "Error while sending a message to the recipient : %s ",
                   "VS_DiagService");
        v9 = v10[0xBC5];
      }
    }
    else
    {
      v8 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v9 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0x1FE,
                   0x1D,
                   "HandleIBDGetOIDDataResponse",
                   ">>>>>>>>>>> Successfully sent the GET_OID_DATA_RESPONSE to %s with OID COUNT: %d ,LENGTH : %d  ,STATU"
                   "S: %d ,TID :%d >>>>>>>>>",
                   "VS_DiagService",
                   (unsigned int)v11[2],
                   a1[4] | (a1[5] << 8) | (a1[6] << 0x10) | (a1[7] << 0x18),
                   v2[4] | (v2[5] << 8),
                   v2[3]);
        v9 = v8[0xBC5];
      }
    }
  }
  else
  {
    v9 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v9 & 0x800) != 0 )
    return NsLog(0x207, 0xB, "HandleIBDGetOIDDataResponse", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001089B8) --------------------------------------------------------
int __fastcall sub_1089B8(unsigned int *a1)
{
  _BYTE *v2; // r4
  int v3; // r3
  int v4; // r2
  int v5; // r6
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD *v9; // r7
  _DWORD v10[1033]; // [sp+14h] [bp-1024h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x153, 0xB, "HandleIBDSelfTestRequest", "+");
  v2 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  memset(v10, 0, 0x1002u);
  LOBYTE(v10[0]) = 4;
  *(_WORD *)((char *)v10 + 1) = 0xDA00;
  LOBYTE(v10[1]) = v2[3];
  v10[1] = v10[1] & 0xFF0000FF | ((unsigned int)((unsigned int)v2[4] | ((unsigned int)v2[5] << 8)) << 8);
  v3 = (unsigned int)v2[6] | ((unsigned int)v2[7] << 8);
  HIBYTE(v10[1]) = v2[6];
  LOBYTE(v10[2]) = HIBYTE(v3);
  v4 = (unsigned int)v2[8] | ((unsigned int)v2[9] << 8);
  v10[2] = v10[2] & 0xFF0000FF | ((unsigned int)((unsigned int)v2[8] | ((unsigned int)v2[9] << 8)) << 8);
  memcpy((char *)&v10[2] + 3, v2 + 0xA, v4);
  v5 = sub_10D110(0x19u);
  if ( v5 || (v5 = McOpenSender("VS_DiagService"), result = setApplicationQueueHandle(0x19, v5), v5) )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 0x1002, v10);
    if ( result )
    {
      v9 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 < 0 )
      {
        result = NsLog(
                   0x172,
                   0x1F,
                   "HandleIBDSelfTestRequest",
                   "Error while sending SELF_TEST_REQUEST message to the Diag Service,Major : %d Minor :%d and  TID :%d ",
                   (unsigned int)v2[4] | ((unsigned int)v2[5] << 8),
                   (unsigned int)v2[6] | ((unsigned int)v2[7] << 8),
                   (unsigned int)v2[3]);
        v8 = v9[0xBC5];
      }
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0x177,
                   0x1D,
                   "HandleIBDSelfTestRequest",
                   ">>>>>>>>>>> Successfully sent the SELF_TEST_REQUEST to Diag Service with Major: %d , Minor :%d , LENG"
                   "TH : %d  ,TID :%d >>>>>>>>>",
                   (unsigned int)v2[4] | ((unsigned int)v2[5] << 8),
                   (unsigned int)v2[6] | ((unsigned int)v2[7] << 8),
                   (unsigned int)v2[8] | ((unsigned int)v2[9] << 8),
                   (unsigned int)v2[3]);
        v8 = v7[0xBC5];
      }
    }
  }
  else
  {
    v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x180, 0xB, "HandleIBDSelfTestRequest", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00108C58) --------------------------------------------------------
int __fastcall sub_108C58(unsigned int *a1)
{
  _BYTE *v2; // r6
  int v3; // r3
  int v4; // r8
  int v5; // r10
  int result; // r0
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD *v9; // r6
  _DWORD v10[1034]; // [sp+10h] [bp-1028h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x10A, 0xB, "HandleIBDSetOIDDataRequest", "+");
  memset(v10, 0, 0x1008u);
  v2 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  v3 = a1[4] | (a1[5] << 8);
  LOBYTE(v10[0]) = 4;
  *(_WORD *)((char *)v10 + 1) = 0xDC00;
  HIBYTE(v10[0]) = v3;
  LOBYTE(v10[1]) = v2[3];
  v10[1] = v10[1] & 0xFF0000FF | ((unsigned int)((unsigned int)v2[4] | ((unsigned int)v2[5] << 8)) << 8);
  *(_WORD *)((char *)&v10[1] + 3) = v3 - 6;
  memcpy((char *)&v10[2] + 1, v2 + 6, (unsigned int)(v3 - 6));
  v4 = HIBYTE(v10[1]) | (LOBYTE(v10[2]) << 8);
  v5 = sub_10D110(0x19u);
  if ( v5 )
    goto LABEL_4;
  if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x123, 0x1F, "HandleIBDSetOIDDataRequest", "Handle Null");
  v5 = McOpenSender("VS_DiagService");
  result = setApplicationQueueHandle(0x19, v5);
  if ( v5 )
  {
LABEL_4:
    result = McSend(v5, "IPC_MID", 0x2410, (unsigned int)(v4 + 9), v10);
    if ( result )
    {
      v9 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 < 0 )
      {
        result = NsLog(
                   0x12F,
                   0x1F,
                   "HandleIBDSetOIDDataRequest",
                   "Error while sending a message to the recipient : %s ",
                   "VS_DiagService");
        v8 = v9[0xBC5];
      }
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0x137,
                   0x1D,
                   "HandleIBDSetOIDDataRequest",
                   ">>>>>>>>>>> Successfully sent the SET_OID_DATA_REQUEST to %s with OID COUNT: %d ,LENGTH : %d ,TID :%d >>>>>>>>>",
                   "VS_DiagService",
                   (unsigned int)(v10[1] >> 8),
                   a1[4] | (a1[5] << 8) | (a1[6] << 0x10) | (a1[7] << 0x18),
                   (unsigned int)v2[3]);
        v8 = v7[0xBC5];
      }
    }
  }
  else
  {
    v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x140, 0xB, "HandleIBDSetOIDDataRequest", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00108F30) --------------------------------------------------------
int __fastcall sub_108F30(unsigned int *a1)
{
  _BYTE *v2; // r5
  int v3; // r12
  int v4; // r2
  int v5; // r8
  int v6; // r10
  int result; // r0
  _DWORD *v8; // r7
  int v9; // r3
  _DWORD *v10; // r6
  _DWORD v11[1033]; // [sp+14h] [bp-1024h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0xB1, 0xB, "HandleIBDGetOIDDataRequest", "+");
  v2 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  memset(v11, 0, 0x1002u);
  LOBYTE(v11[0]) = 4;
  *(_WORD *)((char *)v11 + 1) = 0xDE00;
  LOBYTE(v11[1]) = v2[3];
  v3 = (unsigned int)v2[5];
  v4 = (unsigned int)v2[4] | (v3 << 8);
  v11[1] = v11[1] & 0xFF0000FF | ((unsigned int)((unsigned int)v2[4] | (unsigned int)((_WORD)v3 << 8)) << 8);
  memcpy((char *)&v11[1] + 3, v2 + 6, 4 * v4);
  v5 = (unsigned int)v2[4] | ((unsigned int)v2[5] << 8);
  v6 = sub_10D110(0x19u);
  if ( v6 )
    goto LABEL_4;
  if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0xDB, 0x1F, "HandleIBDGetOIDDataRequest", "Handle Null");
  v6 = McOpenSender("VS_DiagService");
  result = setApplicationQueueHandle(0x19, v6);
  if ( v6 )
  {
LABEL_4:
    result = McSend(v6, "IPC_MID", 0x2410, (unsigned int)(4 * v5 + 7), v11);
    if ( result )
    {
      v10 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v9 < 0 )
      {
        result = NsLog(
                   0xE7,
                   0x1F,
                   "HandleIBDGetOIDDataRequest",
                   "Error while sending a message to the recipient : %s ",
                   "VS_DiagService");
        v9 = v10[0xBC5];
      }
    }
    else
    {
      v8 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v9 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0xEF,
                   0x1D,
                   "HandleIBDGetOIDDataRequest",
                   ">>>>>>>>>>> Successfully sent the GET_OID_DATA_RESPONSE to %s with OID COUNT: %d ,LENGTH : %d  ,TID :%d >>>>>>>>>",
                   "VS_DiagService",
                   (unsigned int)v2[4] | ((unsigned int)v2[5] << 8),
                   a1[4] | (a1[5] << 8) | (a1[6] << 0x10) | (a1[7] << 0x18),
                   (unsigned int)v2[3]);
        v9 = v8[0xBC5];
      }
    }
  }
  else
  {
    v9 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v9 & 0x800) != 0 )
    return NsLog(0xF8, 0xB, "HandleIBDGetOIDDataRequest", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001091D8) --------------------------------------------------------
int __fastcall sub_1091D8(_BYTE *a1)
{
  unsigned int *v2; // r7
  char v3; // r3
  int v4; // r10
  int result; // r0
  _DWORD s[10]; // [sp+10h] [bp-28h] BYREF

  v2 = (unsigned int *)((unsigned int)a1[8] | ((unsigned int)a1[9] << 8) | ((unsigned int)a1[0xA] << 0x10) | ((unsigned int)a1[0xB] << 0x18));
  memset(s, 0, 5u);
  v3 = a1[4];
  LOWORD(s[0]) = 4;
  HIBYTE(s[0]) = v3;
  BYTE2(s[0]) = 0xDD;
  memcpy(&s[1], v2 + 4, 1u);
  v4 = sub_10D110(0x19u);
  if ( v4 )
    goto LABEL_2;
  if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x80, 0x1F, "HandleIBDSetOidDataResponse", "Handle Null");
  v4 = McOpenSender("VS_DiagService");
  result = setApplicationQueueHandle(0x19, v4);
  if ( v4 )
  {
LABEL_2:
    result = McSend(
               v4,
               "IPC_MID",
               0x2410,
               (unsigned int)a1[4] | ((unsigned int)a1[5] << 8) | ((unsigned int)a1[6] << 0x10) | ((unsigned int)a1[7] << 0x18),
               s);
    if ( result )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        return NsLog(
                 0x8D,
                 0x1F,
                 "HandleIBDSetOidDataResponse",
                 "Error while sending a message to the recipient : %s ",
                 "VS_DiagService");
    }
    else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
    {
      return NsLog(
               0x95,
               0x1D,
               "HandleIBDSetOidDataResponse",
               ">>>>>>>>>>> Successfully sent the SET_OID_DATA_RESPONSE to %s with LENGTH : %d  ,STATUS: %d ,TID :%d >>>>>>>>>",
               "VS_DiagService",
               (unsigned int)a1[4] | ((unsigned int)a1[5] << 8) | ((unsigned int)a1[6] << 0x10) | ((unsigned int)a1[7] << 0x18),
               v2[4] | (v2[5] << 8),
               v2[3],
               s[0]);
    }
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001093D8) --------------------------------------------------------
int __fastcall sub_1093D8(int result)
{
  unsigned int *v1; // r5
  unsigned int v2; // r3
  _DWORD *v3; // r6
  int v4; // r2

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x3A, 0xB, "HandleInboundDiagnosticsMessage", "+");
  if ( v1 )
  {
    result = v1[9];
    v2 = *(unsigned int *)((v1[8] | (result << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2);
    if ( v2 == 3 )
    {
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        NsLog(0x47, 0x1D, "HandleInboundDiagnosticsMessage", "Got a SET_OID_REQUEST ");
      result = sub_108C58(v1);
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      goto LABEL_10;
    }
    if ( v2 <= 3 )
    {
      if ( v2 == 1 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
          NsLog(0x4F, 0x1D, "HandleInboundDiagnosticsMessage", "Got a SELF_TEST_REQUEST ");
        result = sub_1089B8(v1);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_10;
      }
      if ( v2 == 2 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
          NsLog(0x43, 0x1D, "HandleInboundDiagnosticsMessage", "Got a GET_OID_REQUEST ");
        result = sub_108F30(v1);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_10;
      }
    }
    else
    {
      if ( v2 == 0x82 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
          NsLog(0x4B, 0x1D, "HandleInboundDiagnosticsMessage", "Got a GET_OID_RESPONSE ");
        result = sub_10872C(v1);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_10;
      }
      if ( v2 == 0x83 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
          NsLog(0x53, 0x1D, "HandleInboundDiagnosticsMessage", "Got a SET_OID_RESPONSE ");
        result = sub_1091D8(v1);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        goto LABEL_10;
      }
    }
    v3 = _PasLogParams;
    v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v4 < 0 )
    {
      result = NsLog(
                 0x57,
                 0x1F,
                 "HandleInboundDiagnosticsMessage",
                 " Unsupported IBD message received with function code : %d , Ignoring....",
                 v2);
      v4 = v3[0xBC5];
    }
LABEL_10:
    if ( (v4 & 0x800) != 0 )
      return NsLog(0x5A, 0xB, "HandleInboundDiagnosticsMessage", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00109690) --------------------------------------------------------
int sub_109690()
{
  return isSome_121F24;
}
// 121F24: using guessed type int isSome_121F24;

//----- (001096AC) --------------------------------------------------------
int __fastcall sub_1096AC(int result)
{
  dword_121F2C = result;
  if ( isSome_121F24 == 1 )
  {
    result = dword_121F18;
    if ( dword_121F18 )
      byte_121F30 = isSome_121F24;
    else
      dword_121F18 = isSome_121F24;
  }
  else if ( dword_121F18 )
  {
    byte_121F30 = 1;
  }
  else
  {
    dword_121F18 = 5;
  }
  return result;
}


//----- (00109720) --------------------------------------------------------
int sub_109720()
{
  int v0; // r1
  int result; // r0

  v0 = dword_121F18;
  if ( dword_121F18 == 4 )
    v0 = 2;
  else
    result = 1;
  if ( dword_121F18 == 4 )
  {
    result = 0;
    dword_121F18 = v0;
  }
  return result;
}
// 121F18: using guessed type int dword_121F18;

//----- (00109750) --------------------------------------------------------
bool sub_109750()
{
  bool v0; // zf

  v0 = dword_121F18 == 0;
  if ( dword_121F18 )
    v0 = dword_121F18 == 5;
  return v0 || dword_121F18 == 6;
}
// 121F18: using guessed type int dword_121F18;

//----- (00109788) --------------------------------------------------------
bool sub_109788()
{
  return (unsigned int)(dword_121F18 - 4) <= 2;
}
// 121F18: using guessed type int dword_121F18;

//----- (001097B4) --------------------------------------------------------
int __fastcall sub_1097B4(_DWORD *a1)
{
  int v2; // r6
  int v3; // r1
  char *v4; // r3
  char v5; // r2

  __pthread_mutex_lock((pthread_mutex_t *)*_IpcFifoMutex);
  if ( *_IpcMessageFifo )
  {
    v3 = (unsigned int)_IpcMessageFifo[0x15];
    v2 = 0;
    if ( v3 == 5 )
    {
      v3 = 0;
      _IpcMessageFifo[0x15] = 0;
    }
    v4 = _IpcMessageFifo;
    *a1 = *(__int64 *)&_IpcMessageFifo[4 * v3] >> 8;
    v5 = *v4;
    ++v4[0x15];
    *v4 = v5 - 1;
  }
  else
  {
    v2 = 0x24;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)*_IpcFifoMutex);
  return v2;
}
// 11EE88: using guessed type char *_IpcMessageFifo;
// 11EEC4: using guessed type int *_IpcFifoMutex;

//----- (00109854) --------------------------------------------------------
int __fastcall sub_109854(int a1)
{
  int v2; // r7
  int v3; // r2
  char *v4; // r3
  char v5; // r2

  __pthread_mutex_lock((pthread_mutex_t *)*_IpcFifoMutex);
  if ( *_IpcMessageFifo == 5 )
  {
    v2 = 0x22;
  }
  else
  {
    v3 = (unsigned int)_IpcMessageFifo[0x16];
    v2 = 0;
    if ( v3 == 5 )
    {
      v3 = 0;
      _IpcMessageFifo[0x16] = 0;
    }
    v4 = _IpcMessageFifo;
    *(_DWORD *)&_IpcMessageFifo[4 * v3] = (unsigned int)_IpcMessageFifo[4 * v3] | (a1 << 8);
    v4[4 * v3 + 4] = HIBYTE(a1);
    v5 = *v4;
    ++v4[0x16];
    *v4 = v5 + 1;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)*_IpcFifoMutex);
  return v2;
}
// 11EE88: using guessed type char *_IpcMessageFifo;
// 11EEC4: using guessed type int *_IpcFifoMutex;

//----- (001098F4) --------------------------------------------------------
unsigned int *__fastcall sub_1098F4(unsigned int *a1)
{
  unsigned int *result; // r0

  result = (unsigned int *)sub_109854((int)a1);
  if ( result )
    return lost_sub_can_edian(a1);
  return result;
}

//----- (00109914) --------------------------------------------------------
unsigned int *__fastcall sub_109914(unsigned int *a1, int a2)
{
  int v4; // r3
  int v5; // r7
  int v6; // r0

  if ( !a2 && dword_121F18 == 3 )
  {
    v4 = *(unsigned int *)((a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18)) + 2);
    if ( v4 == 3 )
    {
      isSome_121F24 = 0;
    }
    else if ( v4 == 0x83 )
    {
      v5 = (unsigned int)byte_121F30;
      if ( byte_121F30 )
      {
        dword_121F18 = 5;
      }
      else
      {
        word_121F32 = 3;
        word_121F58 = (unsigned int)byte_121F30;
        word_121F1C = (unsigned int)byte_121F30;
        word_121F28 = (unsigned int)byte_121F30;
        word_121F50 = (unsigned int)byte_121F30;
        v6 = sub_106EA8();
        dword_121F18 = v5;
        byte_121F31 = v5;
        byte_121F2A = v5;
        byte_121F34 = v5;
        byte_121F15 = v5;
        byte_121F1E = v5;
        word_121F36 = v5;
        dword_121F54 = v5;
        isSome_121F24 = v5;
        word_121F20 = v6;
      }
    }
  }
  return lost_sub_can_edian(a1);
}
// 121F15: using guessed type char byte_121F15;
// 121F18: using guessed type int dword_121F18;
// 121F1C: using guessed type int word_121F1C;
// 121F1E: using guessed type char byte_121F1E;
// 121F20: using guessed type int word_121F20;
// 121F24: using guessed type int isSome_121F24;
// 121F28: using guessed type int word_121F28;
// 121F2A: using guessed type char byte_121F2A;
// 121F30: using guessed type char byte_121F30;
// 121F31: using guessed type char byte_121F31;
// 121F32: using guessed type int word_121F32;
// 121F34: using guessed type char byte_121F34;
// 121F36: using guessed type int word_121F36;
// 121F50: using guessed type int word_121F50;
// 121F54: using guessed type int dword_121F54;
// 121F58: using guessed type int word_121F58;

//----- (00109A64) --------------------------------------------------------
int sub_109A64()
{
  unsigned int *v0; // r0
  unsigned int *v1; // r6
  int v2; // r4
  int v3; // r4
  char v4; // r0
  char v5; // r2
  unsigned int v6; // r0
  int v7; // r0

  v0 = sub_110C70(0, 0xE);
  v1 = v0;
  if ( !v0 )
    return 1;
  v3 = v0[8] | (v0[9] << 8) | (v0[0xA] << 0x10) | (v0[0xB] << 0x18);
  v4 = byte_121F15;
  v5 = *(_BYTE *)v3 & 0xFC | 1;
  *(_BYTE *)(v3 + 4) = 1;
  *(_BYTE *)v3 = v5 & 3;
  *(_BYTE *)(v3 + 1) = 0;
  *(_BYTE *)(v3 + 2) = 1;
  *(_BYTE *)(v3 + 3) = v4;
  *(_BYTE *)(v3 + 5) = 0;
  v6 = GetIpcCfgSignature();
  *(_BYTE *)(v3 + 0xD) = 0;
  *(_BYTE *)(v3 + 0xA) = 0;
  *(_BYTE *)(v3 + 0xB) = 0;
  *(_BYTE *)(v3 + 0xC) = 0;
  *(_DWORD *)(v3 + 6) = v6;
  v7 = some_check_or_CRC(v1);
  v2 = v7;
  if ( v7 )
  {
    sub_116E70((int)"IPC_MID", " Sent a Link Setup Request failed rc:%d ", v7);
    lost_sub_can_edian(v1);
    return v2;
  }
  else
  {
    ++byte_121F15;
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) == 0 )
      return v2;
    NsLog(0x1F0, 0x17, "SendLinkSetup", " Sent a Link Setup Request ");
    return 0;
  }
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 121F15: using guessed type char byte_121F15;

//----- (00109BBC) --------------------------------------------------------
int __fastcall sub_109BBC(char a1)
{
  unsigned int *v2; // r0
  unsigned int *v3; // r6
  int v4; // r4
  _BYTE *v5; // r3
  char v6; // r2

  v2 = sub_110C70(0, 4);
  v3 = v2;
  if ( !v2 )
    return 1;
  v5 = (_BYTE *)(v2[8] | (v2[9] << 8) | (v2[0xA] << 0x10) | (v2[0xB] << 0x18));
  v6 = *v5 & 0xFC | 1;
  v5[3] = a1;
  v5[2] = 0x83;
  v5[1] = 0;
  *v5 = v6 & 3;
  v4 = some_check_or_CRC(v2);
  if ( v4 )
  {
    lost_sub_can_edian(v3);
    return v4;
  }
  else
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) == 0 )
      return v4;
    NsLog(0x2B0, 0x17, "SendLinkTeardownComplete", " Send a Link Tear Down Complete ");
    return 0;
  }
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00109CA0) --------------------------------------------------------
int __fastcall sub_109CA0(char a1)
{
  unsigned int *v2; // r0
  unsigned int *v3; // r6
  int v4; // r4
  int v5; // r1
  unsigned int v6; // r12
  int v7; // r3
  unsigned int v8; // r3
  unsigned int v9; // r2
  int v10; // lr
  int v11; // r0

  v2 = sub_110C70(0, 0xA);
  v3 = v2;
  if ( !v2 )
    return 1;
  v5 = v2[8] | (v2[9] << 8) | (v2[0xA] << 0x10) | (v2[0xB] << 0x18);
  v6 = -v5 & 3;
  v7 = *(_BYTE *)v5 & 0xFC | 1;
  *(_BYTE *)(v5 + 3) = a1;
  v8 = v7 & 0xFFFFFF03;
  LOBYTE(v9) = 0;
  *(_BYTE *)(v5 + 1) = 0;
  if ( !v6 )
    LOBYTE(v9) = 6;
  *(_BYTE *)v5 = v8;
  if ( (-v5 & 3) == 0 )
    v8 = -v5 & 3;
  *(_BYTE *)(v5 + 2) = 0x81;
  if ( (-v5 & 3) != 0 )
  {
    v8 = 0;
    do
    {
      v9 = v5 + v8;
      v8 = (unsigned int)(v8 + 1);
      *(_BYTE *)(v9 + 4) = 0;
      LOBYTE(v9) = 6 - v8;
    }
    while ( v6 > v8 );
  }
  v10 = (unsigned int)(6 - v6);
  v11 = v10 & 0xFC;
  if ( (v10 & 0xFC) == 0
    || (LOBYTE(v9) = v9 - v11, v8 = (unsigned int)(v8 + v11), *(_DWORD *)(v5 + v6 + 4) = 0, v10 != v11) )
  {
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *(_BYTE *)(v5 + v8 + 4) = 0;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( v9 );
  }
  v4 = some_check_or_CRC(v3);
  if ( v4 )
  {
    lost_sub_can_edian(v3);
    return v4;
  }
  else
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) == 0 )
      return v4;
    NsLog(0x221, 0x17, "SendLinkSetupResponse", " Sent a Link Setup Response ");
    return 0;
  }
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00109E1C) --------------------------------------------------------
int sub_109E1C()
{
  unsigned int *v0; // r0
  unsigned int *v1; // r8
  int v2; // r7
  _BYTE *v3; // r3
  char v4; // r2
  char v5; // r2
  struct tm s[2]; // [sp+8h] [bp-70h] BYREF

  v0 = sub_110C70(0, 6);
  v1 = v0;
  if ( !v0 )
    return 1;
  v3 = (_BYTE *)(v0[8] | (v0[9] << 8) | (v0[0xA] << 0x10) | (v0[0xB] << 0x18));
  v4 = *v3 & 0xFC | 1;
  v3[3] = byte_121F15;
  v3[2] = 3;
  v3[1] = 0;
  *v3 = v4 & 3;
  v5 = dword_121F2C;
  v3[5] = 0;
  v3[4] = v5;
  v2 = some_check_or_CRC(v0);
  if ( v2 )
  {
    lost_sub_can_edian(v1);
  }
  else
  {
    memset(s, 0, 0x50u);
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0x280, 0x1F, "SendLinkTeardown", " Send a Link Tear Down Request reason:%d ", dword_121F2C);
    sub_116E70((int)"IPC_MID", " Send a Link Tear Down Request reason:%d ", dword_121F2C);
    sub_114A0C(s, 0x50);
    printf("%s:%s:Send a Link Tear Down Request reason:%d\n", (const char *)s, "IPC_MID", dword_121F2C);
    ++byte_121F15;
  }
  return v2;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 121F15: using guessed type char byte_121F15;
// 121F2C: using guessed type int dword_121F2C;

//----- (00109F94) --------------------------------------------------------
int sub_109F94()
{
  int result; // r0

  trace_logf(9, "IPC: Initiating Link Setup with VMCU");
  word_121F58 = 0;
  word_121F32 = 3;
  word_121F1C = 0;
  word_121F28 = 0;
  word_121F50 = 0;
  result = sub_106EA8();
  dword_121F18 = 0;
  byte_121F31 = 0;
  byte_121F30 = 0;
  byte_121F34 = 0;
  byte_121F15 = 0;
  byte_121F1E = 0;
  word_121F36 = 0;
  dword_121F54 = 0;
  isSome_121F24 = 0;
  byte_121F2A = 0;
  word_121F20 = result;
  return result;
}
// 101DC8: using guessed type int __fastcall trace_logf(_DWORD, _DWORD);
// 121F15: using guessed type char byte_121F15;
// 121F18: using guessed type int dword_121F18;
// 121F1C: using guessed type int word_121F1C;
// 121F1E: using guessed type char byte_121F1E;
// 121F20: using guessed type int word_121F20;
// 121F24: using guessed type int isSome_121F24;
// 121F28: using guessed type int word_121F28;
// 121F2A: using guessed type char byte_121F2A;
// 121F30: using guessed type char byte_121F30;
// 121F31: using guessed type char byte_121F31;
// 121F32: using guessed type int word_121F32;
// 121F34: using guessed type char byte_121F34;
// 121F36: using guessed type int word_121F36;
// 121F50: using guessed type int word_121F50;
// 121F54: using guessed type int dword_121F54;
// 121F58: using guessed type int word_121F58;

//----- (0010A08C) --------------------------------------------------------
int sub_10A08C()
{
  int result; // r0
  int v1; // r3
  unsigned int v2; // r2

  if ( !byte_121F2A )
    return sub_109F94();
  word_121F28 = 0;
  word_121F50 = 0;
  result = sub_106EA8();
  v1 = (unsigned int)word_121F36;
  byte_121F2A = 0;
  byte_121F15 = 0;
  dword_121F18 = 0;
  word_121F20 = result;
  if ( (unsigned int)word_121F36 > 1u )
  {
    word_121F32 = 0;
    v2 = *((unsigned int *)sub_1070D4() + 6);
    word_121F1C = 0;
    word_121F58 = (v2 >> 1) + 3;
    result = sub_109A64();
    v1 = (unsigned int)word_121F36;
  }
  if ( !v1 )
  {
    word_121F58 = 0;
    byte_121F31 = 4;
    word_121F1C = 3;
    word_121F32 = 0;
  }
  return result;
}
// 121F15: using guessed type char byte_121F15;
// 121F18: using guessed type int dword_121F18;
// 121F1C: using guessed type int word_121F1C;
// 121F20: using guessed type int word_121F20;
// 121F28: using guessed type int word_121F28;
// 121F2A: using guessed type char byte_121F2A;
// 121F31: using guessed type char byte_121F31;
// 121F32: using guessed type int word_121F32;
// 121F36: using guessed type int word_121F36;
// 121F50: using guessed type int word_121F50;
// 121F58: using guessed type int word_121F58;

//----- (0010A18C) --------------------------------------------------------
int sub_10A18C()
{
  int v0; // r3
  int v1; // r0
  bool v2; // zf
  int v3; // r0
  bool v4; // zf
  unsigned int *v5; // r3
  unsigned int *v6; // r0
  unsigned int *v7; // r6
  unsigned int v8; // r2
  int v9; // r0
  bool v10; // zf
  unsigned int v11; // r0
  int v12; // r0
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  unsigned int *v18; // r0
  unsigned int *v19; // r6
  int v20; // r3
  int v21; // r0
  bool v22; // zf
  unsigned int *v23; // r0
  unsigned int *v24; // r6
  int v25; // r3
  char v26; // r2
  int v27; // r0
  bool v28; // zf
  int *v29; // r0
  int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // r2
  unsigned int v33; // r3
  char v34; // r0
  unsigned int v35; // r2
  int v36; // [sp+18h] [bp-A8h]
  int v37; // [sp+18h] [bp-A8h]
  unsigned int v38; // [sp+3Ch] [bp-84h]
  char s[80]; // [sp+44h] [bp-7Ch] BYREF
  unsigned int *v40[11]; // [sp+94h] [bp-2Ch] BYREF

  v0 = dword_121F18;
  if ( (unsigned int)(dword_121F18 - 4) <= 2 )
  {
    while ( 1 )
    {
      v27 = sub_1097B4(v40);
      v28 = v27 == 0x22;
      if ( v27 != 0x22 )
        v28 = v27 == 0;
      if ( !v28 )
        break;
      lost_sub_can_edian(v40[0]);
    }
    return 0;
  }
  if ( dword_121F18 )
  {
    if ( dword_121F18 == 1 )
    {
      if ( !sub_109E1C() )
      {
        v29 = sub_1070D4();
        dword_121F18 = 3;
        LOWORD(v29) = *((_WORD *)v29 + 7);
        byte_121F34 = 3;
        word_121F28 = (int)v29;
        goto LABEL_5;
      }
      v0 = dword_121F18;
    }
    if ( v0 == 2 && !sub_109BBC(byte_121F1E) )
    {
      dword_121F18 = 3;
      word_121F50 = 0x32;
    }
LABEL_5:
    if ( !isSome_121F24 )
      goto LABEL_6;
    goto LABEL_53;
  }
  if ( !byte_121F30 )
    goto LABEL_5;
  dword_121F18 = 5;
  if ( !isSome_121F24 )
  {
LABEL_6:
    v1 = sub_1097B4(v40);
    v2 = v1 == 0;
    if ( v1 )
      v2 = v1 == 0x22;
    if ( !v2 )
    {
LABEL_28:
      if ( !word_121F32 )
        goto LABEL_32;
      if ( (unsigned int)word_121F32 > 2u )
      {
        word_121F32 -= 3;
        if ( word_121F32 )
          goto LABEL_32;
      }
      else
      {
        word_121F32 = 0;
      }
      if ( sub_109A64() )
        word_121F32 = 3;
      else
        word_121F32 = *((_WORD *)sub_1070D4() + 6);
LABEL_32:
      if ( !word_121F1C )
        goto LABEL_36;
      if ( (unsigned int)word_121F1C > 2u )
      {
        word_121F1C -= 3;
        if ( word_121F1C )
          goto LABEL_36;
      }
      else
      {
        word_121F1C = 0;
      }
      if ( byte_121F31 )
      {
        if ( sub_109CA0(byte_121F1E) )
        {
          word_121F1C = 3;
        }
        else
        {
          v35 = *((unsigned int *)sub_1070D4() + 6);
          --byte_121F31;
          word_121F1C = v35 >> 1;
        }
      }
      else if ( sub_109A64() )
      {
        word_121F32 = 3;
      }
      else
      {
        word_121F32 = *((_WORD *)sub_1070D4() + 6);
      }
LABEL_36:
      if ( !word_121F58 )
        goto LABEL_40;
      if ( (unsigned int)word_121F58 > 2u )
      {
        word_121F58 -= 3;
        if ( word_121F58 )
          goto LABEL_40;
      }
      else
      {
        word_121F58 = 0;
      }
      if ( sub_109A64() )
        word_121F32 = 3;
      else
        word_121F32 = *((_WORD *)sub_1070D4() + 6);
LABEL_40:
      if ( !word_121F28 )
        goto LABEL_44;
      if ( (unsigned int)word_121F28 > 2u )
      {
        word_121F28 -= 3;
        if ( word_121F28 )
          goto LABEL_44;
      }
      else
      {
        word_121F28 = 0;
      }
      if ( byte_121F34 )
      {
        if ( sub_109E1C() )
        {
          word_121F28 = 3;
        }
        else
        {
          v30 = *((_WORD *)sub_1070D4() + 7);
          --byte_121F34;
          word_121F28 = v30;
        }
      }
      else
      {
        dword_121F18 = 6;
      }
LABEL_44:
      if ( !word_121F50 )
      {
LABEL_45:
        v11 = (unsigned int)word_121F20;
        goto LABEL_46;
      }
      if ( (unsigned int)word_121F50 > 2u )
      {
        word_121F50 -= 3;
        if ( word_121F50 )
          goto LABEL_45;
      }
      else
      {
        word_121F50 = 0;
      }
      word_121F28 = 0;
      word_121F1C = 0;
      word_121F32 = 3;
      word_121F50 = 0;
      word_121F58 = 0;
      v11 = sub_106EA8();
      byte_121F31 = 0;
      dword_121F18 = 0;
      isSome_121F24 = 0;
      byte_121F2A = 0;
      byte_121F34 = 0;
      byte_121F15 = 0;
      byte_121F1E = 0;
      word_121F36 = 0;
      dword_121F54 = 0;
      word_121F20 = v11;
LABEL_46:
      if ( v11 )
      {
        if ( v11 <= 2 )
        {
          word_121F20 = 0;
LABEL_139:
          word_121F32 = 0;
          word_121F58 = 0;
          word_121F1C = 0;
          word_121F20 = sub_106EA8();
          return 0;
        }
        v12 = (unsigned int)(v11 - 3);
        word_121F20 = v12;
        if ( !v12 )
          goto LABEL_139;
      }
      return 0;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = v40[0];
        v6 = v40[0];
        v7 = (unsigned int *)(v40[0][8] | (v40[0][9] << 8) | (v40[0][0xA] << 0x10) | (v40[0][0xB] << 0x18));
        v8 = v7[2];
        if ( v8 == 3 )
        {
          if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
            NsLog(0x3B2, 0x17, "IpcLcTask", " Link is presently down ,  Got a Link Tear Down ");
          if ( dword_121F18 == 3 && !word_121F28 )
          {
            byte_121F1E = v7[3];
            v2 = sub_109BBC(byte_121F1E) == 0;
            v6 = v40[0];
            if ( !v2 )
              dword_121F18 = 2;
            goto LABEL_13;
          }
LABEL_78:
          v6 = v40[0];
          goto LABEL_13;
        }
        if ( v8 > 3 )
          break;
        if ( v8 == 1 )
        {
          if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
            NsLog(0x333, 0x17, "IpcLcTask", " Link is presently down ,  Got a Link Setup Request ");
          if ( !dword_121F18 )
          {
            if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
            {
              v37 = v7[6] | (v7[7] << 8) | (v7[8] << 0x10) | (v7[9] << 0x18);
              v31 = GetIpcCfgSignature();
              NsLog(
                0x33F,
                0x17,
                "IpcLcTask",
                " Incoming Message Signature : %lu our signature :%lu , incoming TB :%d and our TB: %d ",
                v37,
                v31,
                v7[4] | (v7[5] << 8),
                1);
            }
            v36 = v7[6] | (v7[7] << 8) | (v7[8] << 0x10) | (v7[9] << 0x18);
            if ( v36 == GetIpcCfgSignature() )
            {
              v32 = v7[4] | (v7[5] << 8);
              if ( v32 > 1 )
              {
                word_121F32 = 0;
                v33 = *((unsigned int *)sub_1070D4() + 6);
                word_121F1C = 0;
                word_121F58 = (v33 >> 1) + 3;
                v32 = v7[4] | (v7[5] << 8);
              }
              if ( !v32 )
              {
                word_121F58 = 0;
                word_121F32 = 0;
                v34 = v7[3];
                byte_121F1E = v34;
                if ( !word_121F1C )
                {
                  byte_121F31 = 3;
                  if ( sub_109CA0(v34) )
                    word_121F1C = 6;
                  else
                    word_121F1C = (*((_WORD *)sub_1070D4() + 6) >> 1) + 3;
                }
              }
              v6 = v40[0];
              dword_121F54 = 1;
            }
            else
            {
              v6 = v40[0];
              dword_121F54 = 2;
            }
            goto LABEL_13;
          }
          if ( dword_121F18 == 3 && word_121F28 )
          {
            v6 = v40[0];
            byte_121F2A = 1;
            word_121F36 = v7[4] | (v7[5] << 8);
            v26 = v7[3];
            word_121F28 = 0;
            dword_121F18 = 5;
            byte_121F1E = v26;
            goto LABEL_13;
          }
          goto LABEL_78;
        }
        if ( v8 == 2 )
        {
          if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
            NsLog(0x39B, 0x17, "IpcLcTask", " Link is presently down ,  Got a Link Setup Complete ");
          NSLogPrintPerformanceLog(0x39C, "IpcLcTask", "P12: : IPC Link Setup Complete");
          if ( !byte_121F30 )
          {
            isSome_121F24 = 1;
            dword_121F18 = (unsigned int)byte_121F30;
            word_121F32 = (unsigned int)byte_121F30;
            word_121F50 = (unsigned int)byte_121F30;
            word_121F58 = (unsigned int)byte_121F30;
            word_121F1C = (unsigned int)byte_121F30;
            word_121F28 = (unsigned int)byte_121F30;
            trace_logf(8, "IPC: Link Setup to VMCU complete");
            if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x400) != 0 )
              NsLog(0x3A8, 0xA, "IpcLcTask", " Link setup Complete ...Sending watchdog and filter messages....");
            sub_11540C();
            sub_11572C(1);
            v6 = v40[0];
            goto LABEL_13;
          }
          goto LABEL_78;
        }
LABEL_13:
        lost_sub_can_edian(v6);
        v3 = sub_1097B4(v40);
        v4 = v3 == 0;
        if ( v3 )
          v4 = v3 == 0x22;
        if ( !v4 )
          goto LABEL_28;
      }
      if ( v8 == 0x81 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
          NsLog(0x387, 0x17, "IpcLcTask", " Link is presently down ,  Got a Link Setup Response ");
        if ( word_121F58 )
        {
          if ( v7[3] == (unsigned int)byte_121F1E )
          {
            v23 = sub_110C70(0, 0xA);
            v24 = v23;
            if ( v23 )
            {
              v25 = v23[8] | (v23[9] << 8) | (v23[0xA] << 0x10) | (v23[0xB] << 0x18);
              v38 = byte_121F15;
              *(_BYTE *)(v25 + 9) = 0;
              *(_BYTE *)(v25 + 2) = 2;
              *(_BYTE *)(v25 + 1) = 0;
              *(_BYTE *)v25 = 1;
              *(_WORD *)(v25 + 3) = v38;
              *(_BYTE *)(v25 + 5) = 0;
              *(_BYTE *)(v25 + 6) = 0;
              *(_BYTE *)(v25 + 7) = 0;
              *(_BYTE *)(v25 + 8) = 0;
              if ( some_check_or_CRC(v23) )
              {
                lost_sub_can_edian(v24);
                v6 = v40[0];
              }
              else
              {
                if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
                  NsLog(0x251, 0x17, "SendLinkSetupComplete", " Sent a Link Setup Complete ");
                dword_121F18 = 0;
                ++byte_121F15;
                isSome_121F24 = 1;
                word_121F32 = 0;
                word_121F50 = 0;
                word_121F58 = 0;
                word_121F1C = 0;
                word_121F28 = 0;
                v6 = v40[0];
              }
              goto LABEL_13;
            }
          }
        }
        goto LABEL_78;
      }
      if ( v8 != 0x83 )
        goto LABEL_13;
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
      {
        NsLog(0x3C2, 0x17, "IpcLcTask", " Link is presently down ,  Got a Link Tear Down Complete");
        v5 = v40[0];
      }
      if ( word_121F28 )
      {
        word_121F28 = 0;
        dword_121F18 = 5;
      }
      lost_sub_can_edian(v5);
      v9 = sub_1097B4(v40);
      v10 = v9 == 0;
      if ( v9 )
        v10 = v9 == 0x22;
      if ( !v10 )
        goto LABEL_28;
    }
  }
LABEL_53:
  memset(s, 0, sizeof(s));
  v14 = sub_1097B4(v40);
  v15 = v14 == 0;
  if ( v14 )
    v15 = v14 == 0x22;
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        v18 = v40[0];
        v19 = (unsigned int *)(v40[0][8] | (v40[0][9] << 8) | (v40[0][0xA] << 0x10) | (v40[0][0xB] << 0x18));
        v20 = v19[2];
        if ( v20 != 1 )
          break;
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
          NsLog(0x46E, 0x17, "IpcLcTask", " Link is presently Up ,  Got a Link Setup ");
        if ( !dword_121F18 )
        {
          word_121F36 = v19[4] | (v19[5] << 8);
          byte_121F1E = v19[3];
          byte_121F2A = 1;
          if ( !sub_110BE0(5, 2) )
          {
            dword_121F18 = 4;
            isSome_121F24 = 0;
            v18 = v40[0];
            goto LABEL_59;
          }
        }
LABEL_67:
        lost_sub_can_edian(v40[0]);
        v21 = sub_1097B4(v40);
        v22 = v21 == 0;
        if ( v21 )
          v22 = v21 == 0x22;
        if ( !v22 )
          goto LABEL_70;
      }
      if ( v20 == 3 )
      {
        if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
          NsLog(0x489, 0x17, "IpcLcTask", " Link is presently Up ,  Got a Link Tear Down ");
        sub_116E70((int)"IPC_MID", " Link is presently Up ,  Got a Link Tear Down ");
        sub_114A0C((struct tm *)s, 0x50);
        printf("%s:%s:Link is presently Up ,  Got a Link Tear Down\n", s, "IPC_MID");
        if ( !dword_121F18 )
        {
          byte_121F1E = v19[3];
          if ( !sub_110BE0(7, 2) )
          {
            v18 = v40[0];
            dword_121F18 = 4;
            isSome_121F24 = 0;
            goto LABEL_59;
          }
        }
        goto LABEL_67;
      }
LABEL_59:
      lost_sub_can_edian(v18);
      v16 = sub_1097B4(v40);
      v17 = v16 == 0;
      if ( v16 )
        v17 = v16 == 0x22;
    }
    while ( v17 );
  }
LABEL_70:
  if ( word_121F28 )
  {
    if ( (unsigned int)word_121F28 > 2u )
    {
      word_121F28 -= 3;
      if ( word_121F28 )
        return 0;
    }
    else
    {
      word_121F28 = 0;
    }
    word_121F28 = 3;
    isSome_121F24 = 0;
  }
  return 0;
}
// 101C3C: using guessed type int __fastcall NSLogPrintPerformanceLog(_DWORD, _DWORD, _DWORD);
// 101DC8: using guessed type int __fastcall trace_logf(_DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 121F15: using guessed type char byte_121F15;
// 121F18: using guessed type int dword_121F18;
// 121F1C: using guessed type int word_121F1C;
// 121F1E: using guessed type char byte_121F1E;
// 121F20: using guessed type int word_121F20;
// 121F24: using guessed type int isSome_121F24;
// 121F28: using guessed type int word_121F28;
// 121F2A: using guessed type char byte_121F2A;
// 121F30: using guessed type char byte_121F30;
// 121F31: using guessed type char byte_121F31;
// 121F32: using guessed type int word_121F32;
// 121F34: using guessed type char byte_121F34;
// 121F36: using guessed type int word_121F36;
// 121F50: using guessed type int word_121F50;
// 121F54: using guessed type int dword_121F54;
// 121F58: using guessed type int word_121F58;

//----- (0010AEF8) --------------------------------------------------------
unsigned int __fastcall sub_10AEF8(int a1)
{
  _BYTE *v1; // r5
  _DWORD *v2; // r1
  _BYTE *v3; // r4
  unsigned int result; // r0

  byte_122054 = 9;
  dword_1223AC = a1;
  v1 = mbuf_Rx_Queue;
  byte_1223A8 = 9;
  v2 = _mbufTxQueue;
  v3 = _mbufConfirmQueue;
  result = 0x32B8u;
  *((_BYTE *)mbuf_Rx_Queue + 0x101) = 0;
  v3[0x101] = 0;
  dword_121FE4 = 0;
  dword_121FB0 = 0;
  dword_1221A0 = 0;
  v2[0x11] = 0;
  dword_121FD8 = 0;
  v1[0x100] = 0;
  dword_122080 = 0;
  v2[1] = 0;
  dword_1220A4 = 0;
  v2[3] = 0;
  dword_1220C8 = 0;
  v2[5] = 0;
  dword_1220EC = 0;
  v2[7] = 0;
  dword_122110 = 0;
  v2[9] = 0;
  dword_122134 = 0;
  v2[0xB] = 0;
  dword_122158 = 0;
  v2[0xD] = 0;
  dword_12217C = 0;
  v2[0xF] = 0;
  v3[0x100] = 0;
  return result;
}
// 11EEB8: using guessed type void *_mbufTxQueue;
// 11EEC0: using guessed type void *_mbufConfirmQueue;
// 11EEDC: using guessed type void *mbuf_Rx_Queue;
// 121FB0: using guessed type int dword_121FB0;
// 121FD8: using guessed type int dword_121FD8;
// 121FE4: using guessed type int dword_121FE4;
// 122054: using guessed type char byte_122054;
// 122080: using guessed type int dword_122080;
// 1220A4: using guessed type int dword_1220A4;
// 1220C8: using guessed type int dword_1220C8;
// 1220EC: using guessed type int dword_1220EC;
// 122110: using guessed type int dword_122110;
// 122134: using guessed type int dword_122134;
// 122158: using guessed type int dword_122158;
// 12217C: using guessed type int dword_12217C;
// 1221A0: using guessed type int dword_1221A0;
// 1223A8: using guessed type char byte_1223A8;
// 1223AC: using guessed type int dword_1223AC;

//----- (0010AFF0) --------------------------------------------------------
unsigned int openUART()
{
  int v0; // r0
  int v1; // r6
  const char *v3; // r0
  _BYTE s[76]; // [sp+4h] [bp-5Ch] BYREF



// struct termios {
//     tcflag_t        c_iflag;    /* Input Modes */
//     tcflag_t        c_oflag;    /* Ouput modes */
//     tcflag_t        c_cflag;    /* Control Modes */
//     tcflag_t        c_lflag;    /* Local Modes */
//     cc_t            c_cc[NCCS]; /* Control Characters */
//         _Uint32t                reserved[3];
//     speed_t         c_ispeed;   /* Input Baud rate */
//     speed_t         c_ospeed;   /* Output baud rate */
// };


  memset(s, 0, sizeof(s));
  v0 = open("/dev/ser2", 0x802);	//  0x802 (flags O_RDWR|O_NONBLOCK) /?MAP_PRIVATE,MAP_DENYWRITE?
  v1 = v0;
  if ( v0 < 0 )
  {
    v1 = 0xFFFFFFFF;
    printf("Cannot open UART");
    return v1;
  }
  // 
  tcflush(v0, 2);	// 2 = TCIOFLUSH  отказывается от данных, записанных, но не переданных на объект
  
  if ( tcgetattr(v1, (struct termios *)s) < 0 )
  {
    v3 = "Cannot get port atr";
LABEL_15:
    printf(v3);
    close(v1);
    return 0xFFFFFFFF;
  }
  
  
  cfmakeraw((struct termios *)s);
  if ( getBoardType() == 1 )
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
      NsLog(0x7F5, 0x17, "IpcUartConfig", " Configuring UART of 500000 Kpbs Speed");
    cfsetospeed((struct termios *)s, 0x7A120u);	// 500000
    cfsetispeed((struct termios *)s, 0x7A120u);
  }
  else
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
      NsLog(0x7FB, 0x17, "IpcUartConfig", " Configuring UART of 250000 Kpbs Speed");
    cfsetospeed((struct termios *)s, 0x3E800u);	// 256000
    cfsetispeed((struct termios *)s, 0x3E800u);
  }
  
  *(_DWORD *)&s[8] = *(_DWORD *)&s[8] & 0xFFFFFE8C | 0x30;
  *(_DWORD *)s &= 0xFFFFFA14;
  s[0x20] = 1;
  s[0x21] = 0;
  if ( tcsetattr(v1, 1, (const struct termios *)s) < 0 )
  {
    v3 = "Cannot change port atr";
    goto LABEL_15;
  }
  tcflush(v1, 2);
  _fd_dev_ser = v1;
  return v1;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EF28: using guessed type int _fd_dev_ser;

//----- (0010B1D4) --------------------------------------------------------
const void *__fastcall _write_dev_ser(const void *result, size_t n)
{
  bool v2; // zf
  int v4; // r1

  v2 = n == 0;
  if ( n )
    v2 = result == 0;
  v4 = !v2;
  if ( !v2 || (result = (const void *)v4, !v2) )
  {
    result = (const void *)write(_fd_dev_ser, result, n);
    if ( result == (const void *)0xFFFFFFFF )
      return 0;
  }
  return result;
}
// 11EF28: using guessed type int _fd_dev_ser;

//----- (0010B220) --------------------------------------------------------
bool __fastcall sub_10B220(char a1)
{
  char v2; // [sp+7h] [bp-9h] BYREF

  v2 = a1;
  return (unsigned int)(write(_fd_dev_ser, &v2, 1u) + 1) > 1;
}
// 11EF28: using guessed type int _fd_dev_ser;

//----- (0010B268) --------------------------------------------------------
void __fastcall __noreturn IpcLlDrvTxInterruptTask(void *a1)
{
  int v1; // r6
  int v2; // r10
  int v3; // r3
  char *v4; // r8
  int v5; // r12
  unsigned int v6; // r1
  unsigned int v7; // r0
  unsigned int v8; // lr
  unsigned int v9; // r2
  _DWORD *v10; // r3
  int v11; // r9
  char *v12; // r10
  unsigned int v13; // r11
  unsigned int v14; // r6
  char *v15; // r6
  int v16; // r7
  char *v17; // r3
  bool v18; // zf
  char *v19; // r8
  int v20; // r2
  sem_t **v21; // r6
  _BYTE *v22; // r2
  int v23; // lr
  unsigned int v24; // r3
  sem_t *v25; // r0
  char *v26; // r7
  char *v27; // r1
  int v28; // r12
  int v29; // r1
  char *v30; // r6
  _DWORD *v31; // r2
  char *v32; // r3
  char *v33; // lr
  _BYTE *v34; // r1
  unsigned int v35; // r2
  char v36; // t1
  _BOOL4 v37; // r0
  _DWORD *v38; // r2
  int v39; // r7
  char *v40; // r6
  unsigned int *v41; // r3
  int v42; // t1
  bool v43; // cc
  int v44; // r12
  int v45; // r1
  _DWORD *v46; // r8
  const void *v47; // r10
  char *v48; // r9
  char *v49; // r11
  const void *v50; // r7
  char *v51; // r8
  char *v52; // r0
  _DWORD *v53; // r3
  int v54; // r0
  int v55; // r2
  int v56; // r2
  int v57; // r2
  unsigned int v58; // [sp+Ch] [bp-74h]

  if ( setprio(0, 0x3C) == 0xFFFFFFFF )
    printf("IpcLIDrv Recv task Set prio err\n");
LABEL_3:
  while ( 2 )
  {
    if ( sub_106C3C(*(sem_t **)_phySendTriggerBuff[0]) == 0xFFFFFFFF )
    {
LABEL_79:
      printf("g_phy_send_trigger semaphore fail \n");
      continue;
    }
    break;
  }
LABEL_4:
  LOWORD(v58) = 0;
  byte_121FA4[0] = 0;
  while ( 1 )
  {
    v1 = (unsigned int)byte_1223A8;
    if ( byte_1223A8 != 9 )
      break;
LABEL_13:
    if ( sub_106C3C((sem_t *)*_XGATE_TXQUEUE_SEMAPHORE) == 0xFFFFFFFF )
      goto LABEL_34;
    v5 = 0;
    v6 = (unsigned int)byte_1223A8;
    v7 = 0;
    v8 = (unsigned int)byte_122054;
    v9 = (unsigned int)byte_1223A8;
    v10 = &unk_122060;
    v11 = dword_1223AC & 2;
    v12 = (char *)_mbufTxQueue;
    while ( 1 )
    {
      v15 = &v12[v5];
      v16 = *(_DWORD *)&v12[v5 + 4];
      if ( v16 )
      {
        if ( v10[8] )
          goto LABEL_29;
        v13 = *(unsigned int *)v15;
        v10[1] = v16;
        *(_WORD *)v10 = v13;
        if ( v11 )
        {
          if ( v9 == 9 )
          {
            if ( v8 != 9 )
              goto LABEL_18;
            v10[2] = v16;
            *((_BYTE *)v10 + 0x1E) = 1;
            *((_WORD *)v10 + 0xE) = 0;
            v10[3] = &unk_1221A4;
            v10[4] = &unk_1221A4;
            v10[5] = 0;
            v10[6] = &unk_1221A4;
            v10[8] = 2;
          }
          else
          {
            if ( v8 == 9 )
            {
              if ( v9 < v7 )
                goto LABEL_66;
              if ( v13 > 0x42 )
                goto LABEL_66;
              v46 = (_DWORD *)((char *)&unk_122060 + 0x24 * v9);
              if ( v46[8] == 7 && v46[6] == v46[5] )
                goto LABEL_66;
LABEL_20:
              v10[2] = v16;
              v10[3] = &unk_121F5C;
              v10[4] = &unk_121F5C;
              v10[5] = 0;
              v10[6] = &unk_121F5C;
            }
            else
            {
LABEL_18:
              if ( v7 <= v8 && v13 <= 0x42 )
                goto LABEL_20;
LABEL_66:
              v10[2] = v16;
              v10[3] = &unk_1221A4;
              v10[4] = &unk_1221A4;
              v10[5] = 0;
              v10[6] = &unk_1221A4;
            }
            *((_WORD *)v10 + 0xE) = 0;
            *((_BYTE *)v10 + 0x1E) = 1;
            v10[8] = 2;
          }
        }
        else
        {
          v10[2] = v16;
          *((_BYTE *)v10 + 0x1E) = 1;
          v10[3] = &unk_1221A4;
          v10[4] = &unk_1221A4;
          v10[5] = 0;
          v10[6] = &unk_1221A4;
          *((_WORD *)v10 + 0xE) = 0;
          v10[8] = 2;
        }
        *((_DWORD *)v15 + 1) = 0;
      }
      if ( !v10[8] )
        goto LABEL_24;
LABEL_29:
      if ( v9 != 9 )
      {
        if ( v8 != 9 || v7 >= v9 || (_UNKNOWN *)v10[3] != &unk_121F5C )
          goto LABEL_31;
        if ( (*((_BYTE *)&unk_122060 + 0x24 * v9 + 0x1E) & 1) == 0 )
          *((_BYTE *)&unk_122060 + 0x24 * v9 + 0x1E) |= 4u;
        goto LABEL_75;
      }
      if ( v8 != 9 )
        break;
LABEL_75:
      v6 = (unsigned int)v7;
      v14 = (unsigned int)v7;
LABEL_25:
      v5 += 8;
      v10 += 9;
      v7 = (unsigned int)(v7 + 1);
      if ( v7 == 9 )
        goto LABEL_32;
LABEL_26:
      v8 = v9;
      v9 = v6;
      v6 = v14;
    }
    if ( v7 < v8 && (_UNKNOWN *)v10[3] == &unk_121F5C )
    {
      v6 = (unsigned int)v7;
LABEL_24:
      v9 = v8;
      v14 = v6;
      goto LABEL_25;
    }
LABEL_31:
    v14 = v6;
    v5 += 8;
    v6 = v9;
    v7 = (unsigned int)(v7 + 1);
    v9 = v8;
    v10 += 9;
    if ( v7 != 9 )
      goto LABEL_26;
LABEL_32:
    v17 = &byte_122054;
    byte_122054 = v9;
    byte_1223A8 = v14;
    if ( v6 == 9 )
    {
      if ( v9 == 9 )
        LOBYTE(v17) = 1;
      else
        byte_122054 = 9;
      if ( v9 == 9 )
        byte_121FA4[0] = (unsigned int)v17;
      else
        byte_1223A8 = v9;
    }
    __sem_unlock(((sem_t *)*_XGATE_TXQUEUE_SEMAPHORE);
LABEL_34:
    v58 = (unsigned int)(v58 + 1);
    if ( v58 == 0x2710 )
    {
      printf(" Loop over \n");
      if ( sub_106C3C(*(sem_t **)_phySendTriggerBuff[0]) == 0xFFFFFFFF )
        goto LABEL_79;
      goto LABEL_4;
    }
    v18 = v58 == 0x270F;
    if ( v58 <= 0x270F )
      v18 = byte_121FA4[0] == 0;
    if ( !v18 )
      goto LABEL_3;
  }
  v2 = (unsigned int)byte_1223A8;
  v3 = *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8);
  switch ( v3 )
  {
    case 2:
      v39 = 0x24 * (unsigned int)byte_1223A8;
      v40 = (char *)&unk_122060 + v39;
      COBSEncode(
        **(_BYTE **)((char *)&unk_122060 + v39 + 8),
        (unsigned int **)((char *)&unk_122060 + v39 + 0x10),
        (unsigned int **)((char *)&unk_122060 + v39 + 0x14));
      v41 = *(unsigned int **)((char *)&unk_122060 + v39 + 8);
      v42 = *v41;
      v43 = *((_DWORD *)v40 + 5) > *((_DWORD *)v40 + 6);
      v44 = *(_WORD *)((char *)&unk_122060 + v39 + 0x1C);
      v45 = (unsigned int)(*(_WORD *)((char *)&unk_122060 + v39) - 1);
      *((_DWORD *)v40 + 2) = v41 + 1;
      *(_WORD *)((char *)&unk_122060 + v39) = v45;
      *((_WORD *)v40 + 0xE) = v42 + v44;
      if ( !v43 )
      {
        if ( !v45 )
        {
          v2 = (unsigned int)byte_1223A8;
          *((_DWORD *)v40 + 8) = 5;
          v3 = *((_DWORD *)&unk_122060 + 9 * v2 + 8);
          goto LABEL_12;
        }
        goto LABEL_88;
      }
      v2 = (unsigned int)byte_1223A8;
      *((_DWORD *)v40 + 8) = 4;
      v3 = *((_DWORD *)&unk_122060 + 9 * v2 + 8);
      goto LABEL_12;
    case 3:
      v31 = (_DWORD *)((char *)&unk_122060 + 0x24 * (unsigned int)byte_1223A8);
      v32 = (char *)v31[5];
      v33 = (char *)v31[4];
      v34 = (_BYTE *)v31[6];
      if ( v32 < v33 )
      {
        LOBYTE(v35) = 0;
        do
        {
          v36 = *v32++;
          v35 = (unsigned int)(v35 + 1);
          v37 = v33 > v32;
          *v34++ = v36;
          if ( v35 > 0xF )
            v37 = 0;
        }
        while ( v37 );
      }
      if ( v33 != v32 )
      {
        v38 = (_DWORD *)((char *)&unk_122060 + 0x24 * v1);
        v38[5] = v32;
        v38[6] = v34;
        v3 = v38[8];
        goto LABEL_12;
      }
      v53 = (_DWORD *)((char *)&unk_122060 + 0x24 * v1);
      v54 = *(unsigned int *)v53;
      v55 = v53[3];
      v53[4] = v34;
      v53[5] = v55;
      v53[6] = v55;
      if ( v54 )
        v56 = 2;
      else
        v56 = 5;
      v53[8] = v56;
      goto LABEL_13;
    case 4:
      v30 = (char *)&unk_122060 + 0x24 * (unsigned int)byte_1223A8;
      if ( (v30[0x1E] & 1) == 0 )
      {
        if ( (v30[0x1E] & 4) != 0 )
        {
          if ( sub_10B220(0xD1) )
          {
            v30[0x1E] &= ~4u;
            goto LABEL_11;
          }
LABEL_92:
          v2 = (unsigned int)byte_1223A8;
          v3 = *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8);
          goto LABEL_12;
        }
        v50 = (const void *)*((_DWORD *)v30 + 6);
        v51 = (char *)*((_DWORD *)v30 + 5);
        v52 = (char *)_write_dev_ser(v50, v51 - (_BYTE *)v50) + (_DWORD)v50;
        if ( v51 == v52 )
        {
          v57 = *((_DWORD *)v30 + 3);
          v2 = (unsigned int)byte_1223A8;
          *((_DWORD *)v30 + 8) = 3;
          *((_DWORD *)v30 + 6) = v57;
        }
        else
        {
          v2 = (unsigned int)byte_1223A8;
          *((_DWORD *)v30 + 6) = v52;
        }
        v3 = *((_DWORD *)&unk_122060 + 9 * v2 + 8);
        goto LABEL_12;
      }
      if ( sub_10B220(0) )
      {
        v30[0x1E] &= ~1u;
        v2 = (unsigned int)byte_1223A8;
        v3 = *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8);
        goto LABEL_12;
      }
      break;
    case 5:
      COBSEncode(
        *((_BYTE *)&unk_122060 + 0x24 * (unsigned int)byte_1223A8 + 0x1C),
        (unsigned int **)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 4,
        (unsigned int **)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 5);
      goto LABEL_40;
    case 6:
LABEL_40:
      v19 = (char *)&unk_122060 + 0x24 * v1;
      COBSEncode(
        HIBYTE(*((_WORD *)v19 + 0xE)),
        (unsigned int **)&unk_122060 + 9 * v1 + 4,
        (unsigned int **)&unk_122060 + 9 * v1 + 5);
      v20 = *((_DWORD *)v19 + 4);
      v2 = (unsigned int)byte_1223A8;
      *((_DWORD *)v19 + 8) = 7;
      *((_DWORD *)v19 + 5) = v20;
      if ( *((_DWORD *)&unk_122060 + 9 * v2 + 8) == 8 )
        goto LABEL_41;
      goto LABEL_13;
    case 7:
      v4 = (char *)&unk_122060 + 0x24 * (unsigned int)byte_1223A8;
      if ( (v4[0x1E] & 1) == 0 )
      {
        if ( (v4[0x1E] & 4) != 0 )
        {
          if ( sub_10B220(0xD1) )
          {
            v4[0x1E] &= ~4u;
LABEL_11:
            v2 = (unsigned int)byte_1223A8;
            v3 = *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8);
            goto LABEL_12;
          }
          goto LABEL_92;
        }
        v47 = (const void *)*((_DWORD *)v4 + 6);
        v48 = (char *)*((_DWORD *)v4 + 5);
        v49 = (char *)_write_dev_ser(v47, v48 - (_BYTE *)v47) + (_DWORD)v47;
        if ( v48 == v49 && sub_10B220(0) )
          *((_DWORD *)v4 + 8) = 8;
        v2 = (unsigned int)byte_1223A8;
        *((_DWORD *)&unk_122060 + 9 * v1 + 6) = v49;
        v3 = *((_DWORD *)&unk_122060 + 9 * v2 + 8);
LABEL_12:
        if ( v3 == 8 )
        {
LABEL_41:
          v21 = (sem_t **)_ipcRxSemaphore[0];
          if ( sub_106C5C(*(sem_t **)_ipcRxSemaphore[0]) != 0xFFFFFFFF )
          {
            v22 = _mbufConfirmQueue;
            v23 = *((unsigned int *)_mbufConfirmQueue + 0x100);
            v24 = (unsigned int)(v23 + 1);
            if ( v24 > 0x1F )
              v24 = 0;
            if ( *((unsigned int *)_mbufConfirmQueue + 0x101) == v24 )
            {
              if ( *((int *)_PasLogParams + 0xBC5) < 0 )
                NsLog(0x5F0, 0x1F, "IpcLlDrvTxComplete", "Overran the confirm queue");
              __sem_unlock((*(sem_t **)_ipcRxSemaphore[0]);
            }
            else
            {
              v25 = *v21;
              v26 = (char *)_mbufConfirmQueue + 8 * v23;
              v27 = (char *)&unk_122060 + 0x24 * v2;
              v28 = *(_WORD *)v27;
              v29 = *((_DWORD *)v27 + 1);
              *(_WORD *)v26 = v28;
              *((_DWORD *)v26 + 1) = v29;
              v22[0x100] = v24;
              __sem_unlock((v25);
              *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8) = 0;
              byte_1223A8 = 9;
            }
          }
        }
        goto LABEL_13;
      }
      if ( sub_10B220(0) )
      {
        v4[0x1E] &= ~1u;
LABEL_88:
        v2 = (unsigned int)byte_1223A8;
        v3 = *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8);
        goto LABEL_12;
      }
      break;
    case 8:
      goto LABEL_12;
    default:
      *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8) = 0;
      goto LABEL_13;
  }
  v2 = (unsigned int)byte_1223A8;
  v3 = *((_DWORD *)&unk_122060 + 9 * (unsigned int)byte_1223A8 + 8);
  goto LABEL_12;
}


//----- (0010BCA0) --------------------------------------------------------
int __fastcall sub_10BCA0(int a1)
{
  unsigned int v1; // r7
  int v3; // r10
  unsigned int v4; // r0
  size_t v5; // r8
  unsigned int v6; // r6
  unsigned int v7; // r5
  unsigned int v8; // r0
  unsigned int v9; // r8
  unsigned int v10; // r1
  _BOOL4 v11; // r2
  bool v12; // cc
  int v13; // r3
  int v14; // r3
  int v15; // r10
  unsigned int v16; // r1
  int v17; // r2
  unsigned int v18; // r3
  int v19; // r1
  int v20; // r3
  int v22; // r3

  v1 = a1 + 0x10;
  if ( (unsigned int)(*(_DWORD *)(a1 + 0xC) - (a1 + 0x10)) <= 1 )
    return 0;
  v3 = sub_116BE4(*(unsigned int *)(a1 + 0x10) >> 2);
  if ( v3 <= 8 )
  {
    v4 = sub_116C38(*(unsigned int *)(a1 + 0x10) >> 2);
    if ( *(unsigned int *)(a1 + 0x10) >> 2 <= 0x1Fu )
    {
LABEL_6:
      if ( v4 >= 0x44 )
        LOWORD(v5) = 0x44;
      else
        LOWORD(v5) = v4;
      v5 = (unsigned int)v5;
      goto LABEL_10;
    }
  }
  else
  {
    v4 = 0;
    if ( *(unsigned int *)(a1 + 0x10) >> 2 <= 0x1Fu )
      goto LABEL_6;
  }
  LOWORD(v5) = 0x100E;
  if ( v4 < 0x100E )
    LOWORD(v5) = v4;
  v5 = (unsigned int)v5;
LABEL_10:
  v6 = *(_DWORD *)(a1 + 0xC);
  v7 = v1;
  if ( v5 >= v6 - v1 )
  {
    v8 = (unsigned int)__malloc(v3, v5);
    *(_DWORD *)(a1 + 8) = v8;
    if ( v8 )
    {
      *(_DWORD *)(a1 + 4) = v8 + v5;
      if ( v6 <= v1 )
      {
LABEL_30:
        *(_DWORD *)(a1 + 0xC) = v8;
        return 1;
      }
      v9 = v6 - (a1 + 0x11) + 1;
      v10 = v8 + 4;
      v11 = v9 > 3 && (v8 & 3) == 0;
      v12 = v1 > v10;
      if ( v1 <= v10 )
        v12 = v8 > a1 + 0x14;
      v13 = v12;
      v14 = v11 & v13;
      if ( !v14 )
      {
        do
        {
          *(_BYTE *)(v8 + v14) = *(_BYTE *)(v1 + v14);
          v22 = v14 + 1;
          if ( v6 <= v1 + v22 )
            break;
          *(_BYTE *)(v8 + v22) = *(_BYTE *)(v1 + v22);
          v14 = v22 + 1;
        }
        while ( v6 > v1 + v14 );
        goto LABEL_29;
      }
      v15 = 4 * (v9 >> 2);
      if ( v15 )
      {
        v17 = a1;
        v18 = 0;
        do
        {
          v19 = *(_DWORD *)(v17 + 0x10);
          v17 += 4;
          *(_DWORD *)(v8 + 4 * v18++) = v19;
        }
        while ( v18 < v9 >> 2 );
        v7 = a1 + v15 + 0x10;
        v16 = v8 + v15;
        if ( v9 == v15 )
          goto LABEL_29;
      }
      else
      {
        v16 = v8;
      }
      v20 = 0;
      do
      {
        *(_BYTE *)(v16 + v20) = *(_BYTE *)(v7 + v20);
        ++v20;
      }
      while ( v6 > v7 + v20 );
LABEL_29:
      v8 += v6 + 1 - (a1 + 0x11);
      goto LABEL_30;
    }
  }
  return 0;
}

//----- (0010BE60) --------------------------------------------------------
int __fastcall sub_10BE60(int a1)
{
  int v1; // r3
  void *v3; // r0
  int result; // r0
  _BYTE *v5; // r2
  int v6; // r1
  int v7; // r7
  unsigned int v8; // r3
  int v9; // r0
  int v10; // r12
  char *v11; // lr

  v1 = *(_DWORD *)(a1 + 0xC);
  v3 = *(void **)(a1 + 8);
  if ( (unsigned int)(v1 - (_DWORD)v3) <= 3
    || (*(_DWORD *)(a1 + 0xC) = v1 - 2,
        *(unsigned int *)(a1 + 2) != (*(unsigned int *)(v1 - 2) | (*(unsigned int *)(v1 - 1) << 8))) )
  {
LABEL_3:
    result = freeIfS(v3);
    goto LABEL_4;
  }
  nullsub_1(v3, (unsigned int)(v1 - 2 - (_WORD)v3));
  if ( sub_106C7C(*(sem_t **)_RXSemaphoreChar[0], 0xAu) == 0xFFFFFFFF )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0x278, 0x1F, "NotifyRx", "WaitForSemaphore -1");
    v3 = *(void **)(a1 + 8);
    goto LABEL_3;
  }
  v5 = mbuf_Rx_Queue;
  v6 = *((unsigned int *)mbuf_Rx_Queue + 0x100);
  v7 = *((unsigned int *)mbuf_Rx_Queue + 0x101);
  v8 = (unsigned int)(v6 + 1);
  if ( v8 > 0x1F )
    v8 = 0;
  if ( v7 == v8 )
  {
    freeIfS(*(void **)(a1 + 8));
    if ( sub_109690() == 1 && *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0x2BA, 0x1F, "NotifyRx", "IPC Rx queue overrun. Index %d", v7);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 8);
    v10 = *(_DWORD *)(a1 + 0xC);
    v11 = (char *)mbuf_Rx_Queue + 8 * v6;
    *((_DWORD *)v11 + 1) = v9;
    *(_WORD *)v11 = v10 - v9;
    v5[0x100] = v8;
  }
  result = __sem_unlock((*(sem_t **)_RXSemaphoreChar[0]);
LABEL_4:
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 116C10: using guessed type int __fastcall nullsub_1(_DWORD, _DWORD);
// 11EEA0: using guessed type int *_RXSemaphoreChar[2];
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEDC: using guessed type void *mbuf_Rx_Queue;

//----- (0010BFEC) --------------------------------------------------------
unsigned int sub_10BFEC()
{
  pthread_mutex_t **v0; // r5
  unsigned int result; // r0

  if ( dword_121FE4 )
  {
    freeIfS((void *)dword_121FE4);
    dword_121FE4 = 0;
  }
  if ( dword_121FB0 )
  {
    freeIfS((void *)dword_121FB0);
    dword_121FB0 = 0;
  }
  v0 = (pthread_mutex_t **)_RxTimerMutex;
  // ---------------------------------------
  __pthread_mutex_lock((pthread_mutex_t *)*_RxTimerMutex);
  sub_106B24(*(void **)ipcRxtimerCountRetry[0]);
  result = _pthread_mutex_unlock(*v0);
  // ---------------------------------------
  dword_121FD8 = 0;
  return result;
}
// 11EE80: using guessed type int *_RxTimerMutex;
// 11EEF4: using guessed type int *ipcRxtimerCountRetry[2];
// 121FB0: using guessed type int dword_121FB0;
// 121FD8: using guessed type int dword_121FD8;
// 121FE4: using guessed type int dword_121FE4;

//----- (0010C088) --------------------------------------------------------
// use _C-OBSDecode_
unsigned int __fastcall MsgC_O_B_S_Decode(unsigned int a1)
{
  int v1; // r8
  char *v2; // r8
  unsigned int result; // r0
  int v4; // r3
  int v5; // r5
  char *v6; // r8
  int v7; // r2
  pthread_mutex_t **v8; // r5

  if ( dword_121FD8 == 6 )
  {
    v1 = dword_121FB4;
    if ( (unsigned int)(dword_121FB4 - (_DWORD)&unk_121FB8) <= 1 )
    {
      v2 = (char *)&unk_121FB8;
      goto LABEL_4;
    }
  }
  else
  {
    v1 = dword_121FB4;
  }
  v2 = (char *)(v1 - 2);
LABEL_4:
  result = COBSDecode(
             a1,
             (unsigned int **)&dword_121FB4,
             (const unsigned int *)dword_121FAC,
             (unsigned int *)&word_121FA8);
  v4 = dword_121FB4;
  if ( dword_121FB4
    && dword_121FB4 != dword_121FAC
    && (dword_121FD8 != 7 || (unsigned int)(dword_121FB4 - dword_121FB0) <= 0x45) )
  {
    if ( (unsigned int)v2 >= dword_121FB4 - 2 )
      v4 = 0;
    if ( (unsigned int)v2 < dword_121FB4 - 2 )
    {
      v5 = v4 - 1;
      v6 = v2 + 1;
      LOWORD(v4) = 0;
      do
      {
        v7 = (unsigned int)(v6++)[0xFFFFFFFF];
        LOWORD(v4) = v4 + v7;
      }
      while ( v6 != (char *)v5 );
    }
    word_121FAA += v4;
    if ( dword_121FD8 != 6 )
    {
      if ( !result )
        return result;
LABEL_15:
      result = sub_10BE60((int)&word_121FA8);
      dword_121FD8 = 8;
      return result;
    }
    if ( result )
    {
      if ( sub_10BCA0((int)&word_121FA8) )
        goto LABEL_15;
    }
    else
    {
      if ( (unsigned int)(dword_121FB4 - (_DWORD)&unk_121FB8) <= 1 )
        return result;
      result = sub_10BCA0((int)&word_121FA8);
      if ( result )
      {
        dword_121FD8 = 7;
        return result;
      }
    }
    return sub_10BFEC();
  }
  if ( dword_121FE4 )
  {
    freeIfS((void *)dword_121FE4);
    dword_121FE4 = 0;
  }
  if ( dword_121FB0 )
  {
    freeIfS((void *)dword_121FB0);
    dword_121FB0 = 0;
  }
  v8 = (pthread_mutex_t **)_RxTimerMutex;
  __pthread_mutex_lock((pthread_mutex_t *)*_RxTimerMutex);
  sub_106B24(*(void **)ipcRxtimerCountRetry[0]);
  result = _pthread_mutex_unlock(*v8);
  dword_121FD8 = 0;
  return result;
}
// 11EE80: using guessed type int *_RxTimerMutex;
// 11EEF4: using guessed type int *ipcRxtimerCountRetry[2];
// 121FA8: using guessed type int word_121FA8;
// 121FAA: using guessed type int word_121FAA;
// 121FAC: using guessed type int dword_121FAC;
// 121FB0: using guessed type int dword_121FB0;
// 121FB4: using guessed type int dword_121FB4;
// 121FD8: using guessed type int dword_121FD8;
// 121FE4: using guessed type int dword_121FE4;

//----- (0010C264) --------------------------------------------------------
// _C-OBSDecode
int __fastcall MsgC_O_B_S_Reads(unsigned int a1)
{
  int v1; // r8
  char *v2; // r8
  unsigned int v3; // r10
  int result; // r0
  int v5; // r3
  char *v6; // r8
  int v7; // r2
  int v8; // r11
  size_t v9; // r9
  char *v10; // r10
  unsigned int v11; // r5
  char v12; // t1

  if ( dword_121FD8 == 4 )
  {
    v1 = dword_121FE8;
    if ( (unsigned int)(dword_121FE8 - (_DWORD)&byte_121FEC) <= 1 )
    {
      v2 = &byte_121FEC;
      goto LABEL_4;
    }
  }
  else
  {
    v1 = dword_121FE8;
  }
  v2 = (char *)(v1 - 2);
LABEL_4:
  v3 = COBSDecode(
         a1,
         (unsigned int **)&dword_121FE8,
         (const unsigned int *)dword_121FE0,
         (unsigned int *)&word_121FDC);
  if ( !dword_121FE8 || dword_121FE8 == dword_121FE0 )
    return sub_10BFEC();
  result = (unsigned int)word_121FDE;
  if ( (unsigned int)v2 < dword_121FE8 - 2 )
  {
    v6 = v2 + 1;
    v5 = 0;
    do
    {
      v7 = (unsigned int)(v6++)[0xFFFFFFFF];
      v5 += v7;
    }
    while ( v6 != (char *)(dword_121FE8 - 1) );
  }
  else
  {
    v5 = 0;
  }
  word_121FDE += v5;
  if ( dword_121FD8 != 4 )
  {
    if ( !v3 )
      return result;
LABEL_15:
    result = sub_10BE60((int)&word_121FDC);
    dword_121FD8 = 0;
    return result;
  }
  if ( v3 )
  {
    if ( sub_10BCA0((int)&word_121FDC) )
      goto LABEL_15;
    return sub_10BFEC();
  }
  if ( (unsigned int)(dword_121FE8 - (_DWORD)&byte_121FEC) > 1 )
  {
    v8 = sub_116BE4((unsigned int)byte_121FEC >> 2);
    if ( v8 <= 8 )
      v3 = sub_116C38((unsigned int)byte_121FEC >> 2);
    if ( (unsigned int)byte_121FEC >> 2 > 0x1Fu )
    {
      if ( v3 >= 0x100E )
        LOWORD(v3) = 0x100E;
      v9 = (unsigned int)v3;
    }
    else
    {
      if ( v3 >= 0x44 )
        LOWORD(v3) = 0x44;
      v9 = (unsigned int)v3;
    }
    v10 = &byte_121FEC;
    v11 = dword_121FE8;
    if ( v9 < dword_121FE8 - (int)&byte_121FEC )
      return sub_10BFEC();
    result = (int)__malloc(v8, v9);
    dword_121FE4 = result;
    if ( !result )
      return sub_10BFEC();
    dword_121FE0 = result + v9;
    if ( v11 > (unsigned int)&byte_121FEC )
    {
      do
      {
        v12 = *v10++;
        *(_BYTE *)result++ = v12;
      }
      while ( v11 > (unsigned int)v10 );
    }
    dword_121FD8 = 5;
    dword_121FE8 = result;
  }
  return result;
}
// 121FD8: using guessed type int dword_121FD8;
// 121FDC: using guessed type int word_121FDC;
// 121FDE: using guessed type int word_121FDE;
// 121FE0: using guessed type int dword_121FE0;
// 121FE4: using guessed type int dword_121FE4;
// 121FE8: using guessed type int dword_121FE8;
// 121FEC: using guessed type char byte_121FEC;

//----- (0010C464) --------------------------------------------------------

// _C-OBSDecode_
unsigned int __fastcall _reader_message_from_FD(unsigned int readChar)
{
  int v1; // r6
  int v2; // r3

  unsigned int v4; // r2

  v1 = readChar;
  v2 = dword_121FD8;
  switch ( dword_121FD8 )
  {
    case 0:
      if ( !readChar )
        goto LABEL_13;
      dword_121FD8 = 1;
      break;
    case 1:
      if ( !readChar )
        dword_121FD8 = 0;
      break;
    case 2:
      if ( readChar )
      {
        dword_121FD8 = 6;
        word_121FA8 = 0;
        word_121FAA = 0;
        dword_121FAC = (int)&dword_121FD8;
        dword_121FB0 = 0;
        dword_121FB4 = (int)&unk_121FB8;
        goto LABEL_26;
      }
      dword_121FD8 = dword_12205C;
      readChar = MsgC_O_B_S_Reads(0);   // Read COBS decode a1=0
      if ( !dword_121FD8 )
      {
LABEL_13:
        dword_121FD8 = 4;
        word_121FDC = v1;
        word_121FDE = v1;
        dword_121FE8 = (int)&byte_121FEC;
        dword_121FE0 = (int)&mbufTxQueue;
        dword_121FE4 = v1;
      }
      break;
    case 3:
      LOBYTE(readChar) = 0;
      dword_121FD8 = dword_12205C;
      goto LABEL_21;
    case 4:
    case 5:
      v4 = ((unsigned int)dword_1223AC >> 1) & 1;
      if ( readChar )
        v4 = 0;
      if ( v4 )
      {
        dword_121FD8 = 2;
        dword_12205C = v2;
      }
      else
      {
LABEL_21:
        readChar = MsgC_O_B_S_Reads(readChar);
      }
      break;
    case 6:


    case 7:
LABEL_26:
      result = MsgC_O_B_S_Decode(readChar);  // Read Decode
      break;



    case 8:
      if ( readChar == 0xD1 )
      {
        dword_121FD8 = dword_12205C;
      }
      else
      {
        word_121FA8 = 0;
        word_121FAA = 0;
        dword_121FB4 = (int)&unk_121FB8;
        dword_121FAC = (int)&dword_121FD8;
        dword_121FB0 = 0;
        readChar = COBSDecode(    //  A struct containing the success status of the decoding
                   readChar,                            //
                   (unsigned int **)&dword_121FB4, //
                   (const unsigned int *)&dword_121FD8,
                   (unsigned int *)&word_121FA8); //
        if ( dword_121FB4 )
          dword_121FD8 = 6;
        else
          result = sub_10BFEC();
      }
      break;



    default:
      if ( dword_121FE4 )
      {
        freeIfS((void *)dword_121FE4);
        dword_121FE4 = 0;
      }
      if ( dword_121FB0 )
      {
        freeIfS((void *)dword_121FB0);
        dword_121FB0 = 0;
      }
      _mutex = (pthread_mutex_t **)_RxTimerMutex;
      
      
      __pthread_mutex_lock((pthread_mutex_t *)*_RxTimerMutex);
      // ---------------------------------------
      sub_106B24(*(void **)ipcRxtimerCountRetry[0]);
      // ---------------------------------------
      result = _pthread_mutex_unlock(*_mutex);
      dword_121FD8 = 0;
      break;
  }
  return result;
}

//----- (0010C6A8) --------------------------------------------------------
unsigned int _reader_message_from_FD2()
{
  unsigned int result; // r0

  if ( dword_121FD8 == 2 )
  {
    dword_121FD8 = 3;
    return _reader_message_from_FD(0);
  }
  return result;
}
// 121FD8: using guessed type int dword_121FD8;

//----- (0010C6D8) --------------------------------------------------------
void __fastcall __noreturn IpcLlDrvReceiveTask(void *a1)
{
  int v1; // lr

  ssize_t len_read
  ssize_t v4; // r7
  ssize_t v5; // r4
  unsigned int v6; // r0
  char buffer[4096]; // [sp+20h] [bp-1050h] BYREF
  _DWORD _fdSets[8]; 
  struct timeval timeout; // [sp+1040h] [bp-30h] BYREF

  memset(buffer, 0, sizeof(buffer));
  
  if ( setprio(0, 0x3C) == 0xFFFFFFFF ) printf("IpcLIDrv Recv task Set prio err\n");
  if ( sub_106C3C(*(sem_t **)_1Semaphore) == 0xFFFFFFFF ) printf("g_phy_recv_trigger semaphore fail \n");
  
  // 
  timeout.tv_sec = 0;
  timeout.tv_usec = 0x7D0;
  while ( true )
  {
    while ( true )
    {
      memset(v8, 0, sizeof(_fdSets));
      v1 = _fd_dev_ser;
      _fdSets[_fd_dev_ser / 0x20] |= 1 << (_fd_dev_ser % 0x20);

      // Функции select и pselect ждут изменения статуса нескольких файловых описателей.
      int _sel = select(v1 + 1, (fd_set *)_fdSets, 0 /* writefds */ , 0 /* exceptfds */ , &timeout);
      if ( _sel == 0xFFFFFFFF ) break;    //if error in poll
      
      
      if ( _sel > 0 && (((int)_fdSets[_fd_dev_ser / 0x20] >> (_fd_dev_ser % 0x20)) & 1) != 0 )
      {
        ssize_t len_read = read(_fd_dev_ser, buffer, 0x1000u);
        if ( len_read +1 > 1 )
        {
          *iUartReceiveByte += len_read;
          if ( len_read > 0 )
          {
            pos = 0;
            do
            {
              v6 = (unsigned int)buffer[pos++];
              _reader_message_from_FD(v6);
            }
            while ( len_read > pos );
          }
        }
      }
      else
      {
          _reader_message_from_FD2();
      }
    }
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0x4F7, 0x1F, "IpcLlDrvReceiveTask", "Error in poll");
  }
}

//----- (0010C920) --------------------------------------------------------
unsigned int __fastcall sub_10C920(unsigned int a1)
{
  int v1; // r2
  int v2; // r5
  int *v3; // r2
  unsigned int result; // r0
  unsigned int *v5; // t1

  if ( a1 <= 0x3F )
  {
    v1 = *((unsigned int *)dword_11A714 + a1);
    if ( v1 != 9 )
    {
      v2 = *((_DWORD *)_mbufTxQueue + 2 * v1 + 1);
      if ( v2 )
      {
        if ( byte_1224B8 )
        {
          v3 = &dword_1224BC;
          if ( v2 == (*(unsigned int *)(dword_1224BC + 8) | (*(unsigned int *)(dword_1224BC + 9) << 8) | (*(unsigned int *)(dword_1224BC + 0xA) << 0x10) | (*(unsigned int *)(dword_1224BC + 0xB) << 0x18)) )
            return 0;
          LOBYTE(result) = 0;
          while ( 1 )
          {
            result = (unsigned int)(result + 1);
            if ( (unsigned int)byte_1224B8 <= result )
              break;
            v5 = (unsigned int *)v3[1];
            ++v3;
            if ( v2 == (v5[8] | (v5[9] << 8) | (v5[0xA] << 0x10) | (v5[0xB] << 0x18)) )
              return result;
          }
        }
      }
    }
  }
  return 0xFF;
}
// 11A714: using guessed type int dword_11A714[16];
// 11EEB8: using guessed type void *_mbufTxQueue;
// 1224B8: using guessed type char byte_1224B8;
// 1224BC: using guessed type int dword_1224BC;

//----- (0010CA04) --------------------------------------------------------
int __fastcall sub_10CA04(unsigned int a1)
{
  if ( (unsigned int)byte_1224B8 > a1 )
    return dword_1224BC[a1];
  else
    return 0;
}
// 1224B8: using guessed type char byte_1224B8;
// 1224BC: using guessed type int dword_1224BC[];

//----- (0010CA3C) --------------------------------------------------------
int __fastcall sub_10CA3C(unsigned int a1)
{
  unsigned int *v2; // r2
  int v3; // r12
  unsigned int **v4; // r12
  int result; // r0
  unsigned int v6; // r3

  if ( (unsigned int)byte_1224B8 <= a1 )
    return 0;
  v2 = (unsigned int *)(*(unsigned int *)(dword_1224BC[a1] + 8) | (*(unsigned int *)(dword_1224BC[a1] + 9) << 8) | (*(unsigned int *)(dword_1224BC[a1] + 0xA) << 0x10) | (*(unsigned int *)(dword_1224BC[a1] + 0xB) << 0x18));
  v3 = *((unsigned int *)dword_11A714 + (*v2 >> 2));
  if ( v3 == 9 )
    return 0;
  v4 = (unsigned int **)((char *)_mbufTxQueue + 8 * v3);
  if ( v2 != v4[1] )
    return 0;
  result = 1;
  v6 = --byte_1224B8;
  v4[1] = 0;
  dword_1224BC[a1] = dword_1224BC[v6];
  return result;
}
// 11A714: using guessed type int dword_11A714[16];
// 11EEB8: using guessed type void *_mbufTxQueue;
// 1224B8: using guessed type char byte_1224B8;
// 1224BC: using guessed type int dword_1224BC[];

//----- (0010CAFC) --------------------------------------------------------
int __fastcall sub_10CAFC(unsigned int a1, unsigned int *a2)
{
  unsigned int *v2; // r2
  int v3; // r12
  int v4; // r12
  char *v5; // r5
  char *v6; // r3
  int result; // r0

  if ( (unsigned int)byte_1224B8 <= a1 )
    return 0;
  v2 = (unsigned int *)(*(unsigned int *)(dword_1224BC[a1] + 8) | (*(unsigned int *)(dword_1224BC[a1] + 9) << 8) | (*(unsigned int *)(dword_1224BC[a1] + 0xA) << 0x10) | (*(unsigned int *)(dword_1224BC[a1] + 0xB) << 0x18));
  v3 = *((unsigned int *)dword_11A714 + (*v2 >> 2));
  if ( v3 == 9 )
    return 0;
  v4 = 8 * v3;
  v5 = (char *)_mbufTxQueue;
  v6 = (char *)_mbufTxQueue + v4;
  if ( v2 != *(unsigned int **)((char *)_mbufTxQueue + v4 + 4) )
    return 0;
  dword_1224BC[a1] = (int)a2;
  result = 1;
  *(_WORD *)&v5[v4] = a2[4] | (a2[5] << 8);
  *((_DWORD *)v6 + 1) = a2[8] | (a2[9] << 8) | (a2[0xA] << 0x10) | (a2[0xB] << 0x18);
  return result;
}
// 11A714: using guessed type int dword_11A714[16];
// 11EEB8: using guessed type void *_mbufTxQueue;
// 1224B8: using guessed type char byte_1224B8;
// 1224BC: using guessed type int dword_1224BC[];

//----- (0010CBD0) --------------------------------------------------------
int sub_10CBD0()
{
  sem_t **v0; // r5
  int v1; // r1
  sem_t *v2; // r0
  char v3; // r2
  int v4; // r5
  int *v5; // r1
  int result; // r0
  int v7; // r9
  int v8; // r3
  unsigned int v9; // r2
  unsigned int *v10; // t1

  v0 = (sem_t **)_ipcRxSemaphore[0];
  if ( sub_106C5C(*(sem_t **)_ipcRxSemaphore[0]) == 0xFFFFFFFF )
    return 0;
  v1 = *((unsigned int *)_mbufConfirmQueue + 0x101);
  if ( *((unsigned int *)_mbufConfirmQueue + 0x100) == v1 )
  {
    __sem_unlock((*v0);
    return 0;
  }
  v2 = *v0;
  v3 = v1 + 1;
  v4 = *((_DWORD *)_mbufConfirmQueue + 2 * v1 + 1);
  if ( (unsigned int)(v1 + 1) > 0x1Fu )
    v3 = 0;
  *((_BYTE *)_mbufConfirmQueue + 0x101) = v3;
  __sem_unlock((v2);
  if ( !byte_1224B8 )
    return 0;
  v5 = dword_1224BC;
  result = dword_1224BC[0];
  if ( v4 != (*(unsigned int *)(dword_1224BC[0] + 8) | (*(unsigned int *)(dword_1224BC[0] + 9) << 8) | (*(unsigned int *)(dword_1224BC[0] + 0xA) << 0x10) | (*(unsigned int *)(dword_1224BC[0] + 0xB) << 0x18)) )
  {
    v8 = 0;
    LOBYTE(v9) = 0;
    while ( 1 )
    {
      v7 = ++v8;
      v9 = (unsigned int)(v9 + 1);
      if ( v9 >= (unsigned int)byte_1224B8 )
        return 0;
      v10 = (unsigned int *)v5[1];
      ++v5;
      result = (int)v10;
      if ( v4 == (v10[8] | (v10[9] << 8) | (v10[0xA] << 0x10) | (v10[0xB] << 0x18)) )
        goto LABEL_12;
    }
  }
  v7 = 0;
LABEL_12:
  dword_1224BC[v7] = dword_1224BC[(unsigned int)--byte_1224B8];
  return result;
}
// 11EEC0: using guessed type void *_mbufConfirmQueue;
// 11EEF0: using guessed type int *_ipcRxSemaphore[3];
// 1224B8: using guessed type char byte_1224B8;
// 1224BC: using guessed type int dword_1224BC[];

//----- (0010CD20) --------------------------------------------------------
int __fastcall sub_10CD20(unsigned int *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  char *v5; // r12
  sem_t **v7; // r0
  sem_t *v8; // r0

  v2 = *((unsigned int *)dword_11A714
       + (*(unsigned int *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18)) >> 2));
  if ( v2 == 9 )
    return 0;
  v3 = (unsigned int)byte_1224B8;
  if ( (unsigned int)byte_1224B8 > 0x1Fu )
    return 0;
  v4 = 8 * v2;
  v5 = (char *)_mbufTxQueue + v4;
  if ( *(_DWORD *)((char *)_mbufTxQueue + v4 + 4) )
    return 0;
  *(_WORD *)((char *)_mbufTxQueue + v4) = a1[4] | (a1[5] << 8);
  v7 = (sem_t **)_phySendTriggerBuff[0];
  *((_DWORD *)v5 + 1) = a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18);
  v8 = *v7;
  dword_1224BC[v3] = (int)a1;
  byte_1224B8 = v3 + 1;
  __sem_unlock((v8);
  return 1;
}
// 11A714: using guessed type int dword_11A714[16];
// 11EE78: using guessed type int *_phySendTriggerBuff[3];
// 11EEB8: using guessed type void *_mbufTxQueue;
// 1224B8: using guessed type char byte_1224B8;
// 1224BC: using guessed type int dword_1224BC[];

//----- (0010CE10) --------------------------------------------------------
int sub_10CE10()
{
  return __sem_unlock(((sem_t *)*_XGATE_TXQUEUE_SEMAPHORE);
}
// 11EF20: using guessed type int *_XGATE_TXQUEUE_SEMAPHORE;

//----- (0010CE30) --------------------------------------------------------
bool sub_10CE30()
{
  return sub_106C3C((sem_t *)*_XGATE_TXQUEUE_SEMAPHORE) != 0xFFFFFFFF;
}
// 11EF20: using guessed type int *_XGATE_TXQUEUE_SEMAPHORE;

//----- (0010CE60) --------------------------------------------------------
_BYTE *sub_10CE60()
{
  sem_t **v0; // r4
  int v1; // r1
  unsigned int *v2; // r12
  sem_t *v3; // r0
  char v4; // r2
  int v5; // r6
  int v6; // r5
  _BYTE *v7; // r0
  _BYTE *v8; // r4

  v0 = (sem_t **)_RXSemaphoreChar[0];
  if ( sub_106C5C(*(sem_t **)_RXSemaphoreChar[0]) != 0xFFFFFFFF )
  {
    v1 = *((unsigned int *)mbuf_Rx_Queue + 0x101);
    if ( *((unsigned int *)mbuf_Rx_Queue + 0x100) != v1 )
    {
      v2 = (unsigned int *)((char *)mbuf_Rx_Queue + 8 * v1);
      v3 = *v0;
      v4 = v1 + 1;
      v5 = *v2;
      v6 = *((_DWORD *)v2 + 1);
      if ( (unsigned int)(v1 + 1) > 0x1Fu )
        v4 = 0;
      *((_BYTE *)mbuf_Rx_Queue + 0x101) = v4;
      __sem_unlock((v3);
      if ( *bRxSemCountRetrySet && *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(0xF8, 0x1F, "IpcLlReceive", "RXQUEUE_SEMAPHORE0 release");
      v7 = ___malloc(0xCu);
      v8 = v7;
      if ( v7 )
      {
        v7[8] = v6;
        v7[0xB] = HIBYTE(v6);
        v7[4] = v5;
        v7[7] = HIBYTE(v5);
        v7[9] = BYTE1(v6);
        v7[0xA] = BYTE2(v6);
        v7[5] = BYTE1(v5);
        v7[6] = 0;
      }
      else
      {
        sub_116D74(v6);
      }
      return v8;
    }
    __sem_unlock((*v0);
    if ( *bRxSemCountRetrySet && *((int *)_PasLogParams + 0xBC5) < 0 )
    {
      v8 = 0;
      NsLog(0x120, 0x1F, "IpcLlReceive", "RXQUEUE_SEMAPHORE1 release");
      return v8;
    }
  }
  return 0;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 116D74: using guessed type int __fastcall sub_116D74(_DWORD);
// 11EEA0: using guessed type int *_RXSemaphoreChar[2];
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEDC: using guessed type void *mbuf_Rx_Queue;
// 11EEF8: using guessed type int *bRxSemCountRetrySet;

//----- (0010CFF4) --------------------------------------------------------
int sub_10CFF4()
{
  int result; // r0

  result = nullsub_3();
  byte_1224B8 = 0;
  return result;
}
// 116D6C: using guessed type int nullsub_3(void);
// 1224B8: using guessed type char byte_1224B8;

//----- (0010D01C) --------------------------------------------------------
int __fastcall setApplicationQueueHandle(int result, int a2)
{
  unsigned int v2; // r6
  _DWORD *v4; // r7
  int v5; // r3
  int v6; // r3

  v2 = result;
  v4 = _PasLogParams;
  v5 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( (v5 & 0x800) != 0 )
  {
    result = NsLog(0xB9, 0xB, "setApplicationQueueHandle", "+");
    v5 = v4[0xBC5];
  }
  if ( v2 <= 0x1A )
  {
    v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    *((_DWORD *)modHandleTable + v2) = a2;
    if ( (v6 & 0x800) == 0 )
      return result;
    return NsLog(0xC4, 0xB, "setApplicationQueueHandle", "-");
  }
  if ( v5 < 0 )
  {
    result = NsLog(0xBD, 0x1F, "setApplicationQueueHandle", " ModId unrecognized , Couldn't set the handle");
    v5 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v5 & 0x800) != 0 )
    return NsLog(0xC4, 0xB, "setApplicationQueueHandle", "-");
  return result;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010D110) --------------------------------------------------------
int __fastcall sub_10D110(unsigned int a1)
{
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
  {
    NsLog(0x9B, 0xB, "getApplicationQueueHandle", "-");
    if ( a1 <= 0x1A )
      return *((_DWORD *)modHandleTable + a1);
  }
  else if ( a1 <= 0x1A )
  {
    return *((_DWORD *)modHandleTable + a1);
  }
  if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x9F, 0x1F, "getApplicationQueueHandle", " ModId unrecognized , Couldn't fetch the handle");
  return 0;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010D1C8) --------------------------------------------------------
unsigned int *__fastcall sendIPCMessageToVMCU(unsigned int *result, unsigned int a2)
{
  unsigned int *v2; // r5

  v2 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
  {
    result = (unsigned int *)NsLog(0xD8, 0xB, "sendIPCMessageToVMCU", "+");
    if ( !v2 )
      return result;
  }
  else if ( !result )
  {
    return result;
  }
  switch ( v2[2] )
  {
    case 0xA1u:
      result = _sendIPCCanILSendSignalArrayMsgToVMCU(v2, a2);
      break;
    case 0xA5u:
      result = _sendIPCCanILRecvSignalArrayMsgToVMCU(v2, a2);
      break;
    case 0xA6u:
      result = _sendIPCCanDisplayTPSendMsgToVMCU(v2);
      break;
    case 0xA8u:
      result = _sendIPCCanILSetSignalFilterToVMCU(v2);
      break;
    case 0xAAu:
      result = _sendIPCCanILGetCapabilitiesMsgToVMCU(v2, a2);
      break;
    case 0xACu:
      result = _sendIPCPmGetPMStateToVMCU(v2);
      break;
    case 0xADu:
      result = _sendIPCPmGetPMStateCompleteToVMCU(v2);
      break;
    case 0xAEu:
      result = _sendIPCPmSetPMStateToVMCU(v2);
      break;
    case 0xAFu:
      result = _sendIPCPmSetPMStateCompleteToVMCU(v2);
      break;
    case 0xB0u:
      result = _sendIPCPmGetPmWakeSourceToVMCU(v2);
      break;
    case 0xB2u:
      result = _sendIPCPmGetVmcuActivityTimerToVMCU(v2);
      break;
    case 0xB4u:
      result = _sendIPCPmGetRebootSourceToVMCU(v2);
      break;
    case 0xB6u:
      result = _sendIPCPmActivityTimerToVMCU(v2);
      break;
    case 0xB7u:
      result = _sendIPCPmSetPhoneActiveToVMCU(v2);
      break;
    case 0xB8u:
      result = _sendIPCPmSetPhoneExpiredToVMCU(v2);
      break;
    case 0xB9u:
      result = _sendIPCPmSetVmcuRtcTimeToVMCU(v2);
      break;
    case 0xBBu:
      result = _sendIPCPmSetNmStatusToVMCU(v2);
      break;
    case 0xC8u:
      result = _sendIPCCanDiagTPOpenMsgToVMCU(v2);
      break;
    case 0xCAu:
      result = _sendIPCCanDiagTPCloseMsgToVMCU(v2);
      break;
    case 0xCCu:
      result = _sendIPCCanDiagTPGetConfigMsgToVMCU(v2);
      break;
    case 0xCEu:
      result = _sendIPCCanDiagTPSetConfigMsgToVMCU(v2);
      break;
    case 0xD0u:
      result = _sendIPCCanDiagTPSendMsgToVMCU(v2);
      break;
    case 0xD5u:
      result = _sendIPCEolDiagResponseToVMCU(v2);
      break;
    case 0xD7u:
      result = _sendIPCPmSetEolStatusCompleteToVMCU(v2);
      break;
    case 0xDBu:
      result = _sendIpcIBDSelfTestResponse(v2);
      break;
    case 0xDCu:
      result = _sendIpcIBDSetOIDDataRequest(v2, a2);
      break;
    case 0xDDu:
      result = _sendIpcIBDSetOIDDataResponse((int)v2, a2);
      break;
    case 0xDEu:
      result = _sendIpcIBDGetOIDDataRequest((int)v2, a2);
      break;
    case 0xDFu:
      result = _sendIpcIBDGetOIDDataResponseToVMCU((int)v2, a2);
      break;
    case 0xE2u:
      result = _sendIPCCanILRegisterSignalNotificationToVMCU(v2, a2);
      break;
    case 0xE4u:
      result = _sendIPCSetGpsStatusToVMCU(v2);
      break;
    default:
      break;
  }
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return (unsigned int *)NsLog(0x140, 0xB, "sendIPCMessageToVMCU", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010D57C) --------------------------------------------------------
int sub_10D57C()
{
  int v0; // r6
  char *v1; // r7
  int v2; // r3
  int result; // r0

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x7B, 0xB, "closeApplicationHandles", "+");
  v0 = 0;
  v1 = (char *)modHandleTable;
  do
  {
    v2 = *(_DWORD *)&v1[v0];
    v0 += 4;
    result = v2;
    if ( v2 )
      result = McClose(v2);
  }
  while ( v0 != 0x6C );
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return NsLog(0x88, 0xB, "closeApplicationHandles", "-");
  return result;
}
// 101C90: using guessed type int __fastcall McClose(_DWORD);
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010D634) --------------------------------------------------------
int sub_10D634()
{
  int v0; // r6
  char *v1; // r7
  int result; // r0

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x62, 0xB, "populateApplicationHandles", "+");
  v0 = 0;
  v1 = _mod_table;
  do
  {
    result = McOpenSender(*(_DWORD *)&v1[v0]);
    *(_DWORD *)((char *)modHandleTable + v0) = result;
    v0 += 4;
  }
  while ( v0 != 0x6C );
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return NsLog(0x68, 0xB, "populateApplicationHandles", "-");
  return result;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;
// 11EF08: using guessed type char *_mod_table;

//----- (0010D6F4) --------------------------------------------------------
int __fastcall sub_10D6F4(unsigned int *a1)
{
  int v2; // r0
  int v3; // r12
  int v4; // r1
  int v5; // r3
  int v6; // r3
  int v7; // r5
  int result; // r0
  _DWORD *v9; // r6
  int v10; // r3
  _DWORD *v11; // r6
  char v12[4]; // [sp+8h] [bp-18h] BYREF
  unsigned int v13; // [sp+Ch] [bp-14h]
  unsigned int v14; // [sp+Dh] [bp-13h]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x6DA, 0xB, "HandleSetGpsStatusComplete", "+");
  v2 = sub_10D110(0x18u);
  v3 = a1[0xA];
  v4 = a1[0xB];
  v5 = a1[8] | (a1[9] << 8);
  v12[3] = 0;
  v12[1] = 0;
  v6 = v5 | (v3 << 0x10) | (v4 << 0x18);
  v12[0] = 4;
  v12[2] = 0xE5;
  v13 = *(_BYTE *)(v6 + 3);
  v14 = *(_BYTE *)(v6 + 4);
  v7 = v2;
  if ( v2 || (v7 = McOpenSender("VS_CANShadow"), result = setApplicationQueueHandle(0x18, v7), v7) )
  {
    result = McSend(v7, "IPC_MID", 0x2410, 7, v12);
    if ( result )
    {
      v11 = _PasLogParams;
      v10 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v10 < 0 )
      {
        result = NsLog(
                   0x6F3,
                   0x1F,
                   "HandleSetGpsStatusComplete",
                   "===>>>>> Error while sending SET_GPS_STATUS_COMPLETE TID : %d and Staus:%d from VMCU ===>>>>>",
                   v13,
                   v14);
        v10 = v11[0xBC5];
      }
    }
    else
    {
      v9 = _PasLogParams;
      v10 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v10 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0x6F8,
                   0x1D,
                   "HandleSetGpsStatusComplete",
                   "===>>>>> Successfully sent SET_GPS_STATUS_COMPLETE and TID : %d and Staus:%d from VMCU ===>>>>>",
                   v13,
                   v14);
        v10 = v9[0xBC5];
      }
    }
  }
  else
  {
    v10 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v10 & 0x800) != 0 )
    return NsLog(0x701, 0xB, "HandleSetGpsStatusComplete", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010D8D4) --------------------------------------------------------
int __fastcall sub_10D8D4(int result)
{
  unsigned int *v1; // r5
  int v2; // r5
  int v3; // r7
  _DWORD *v4; // r7
  int v5; // r3
  _DWORD *v6; // r7
  char v7[32]; // [sp+8h] [bp-20h] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x5E8, 0xB, "HandleSetRtcTimeCompleteMessage", "+");
  v2 = v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18);
  v3 = *((_DWORD *)modHandleTable + 0x16);
  if ( v2 )
  {
    v7[3] = 0;
    v7[1] = 0;
    v7[0] = 4;
    v7[2] = 0xBA;
    v7[4] = *(_BYTE *)(v2 + 3);
    v7[5] = *(_BYTE *)(v2 + 4);
    if ( v3 || (v3 = McOpenSender("VS_CLOCK_QUEUE"), result = setApplicationQueueHandle(0x16, v3), v3) )
    {
      result = McSend(v3, "IPC_MID", 0x2410, 6, v7);
      if ( result )
      {
        v6 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v5 < 0 )
        {
          result = NsLog(
                     0x605,
                     0x1F,
                     "HandleSetRtcTimeCompleteMessage",
                     "===>>>>> Error while sending SET_VMCU_RTC_TIME_COMPLETE ( TID :%d ) to CLOCK Service ===>>>>>",
                     *(unsigned int *)(v2 + 3));
          v5 = v6[0xBC5];
        }
      }
      else
      {
        v4 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v5 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0x609,
                     0x1D,
                     "HandleSetRtcTimeCompleteMessage",
                     "===>>>>> Successfully sent SET_VMCU_RTC_TIME_COMPLETE ( TID :%d ) to CLOCK Service ===>>>>>",
                     *(unsigned int *)(v2 + 3));
          v5 = v4[0xBC5];
        }
      }
    }
    else
    {
      v5 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v5 & 0x800) != 0 )
      return NsLog(0x612, 0xB, "HandleSetRtcTimeCompleteMessage", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010DAB0) --------------------------------------------------------
int __fastcall sub_10DAB0(int result)
{
  unsigned int *v1; // r5
  int v2; // r5
  int v3; // r7
  _DWORD *v4; // r7
  int v5; // r3
  _DWORD *v6; // r7
  char v7[32]; // [sp+8h] [bp-20h] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x500, 0xB, "HandleSetNmStatusCompleteMessage", "+");
  v2 = v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18);
  v3 = *((_DWORD *)modHandleTable + 4);
  if ( v2 )
  {
    v7[3] = 0;
    v7[1] = 0;
    v7[0] = 4;
    v7[2] = 0xBC;
    v7[4] = *(_BYTE *)(v2 + 3);
    v7[5] = *(_BYTE *)(v2 + 4);
    if ( v3 || (v3 = McOpenSender("PowerManager"), result = setApplicationQueueHandle(4, v3), v3) )
    {
      result = McSend(v3, "IPC_MID", 0x2410, 6, v7);
      if ( result )
      {
        v6 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v5 < 0 )
        {
          result = NsLog(
                     0x51D,
                     0x1F,
                     "HandleSetNmStatusCompleteMessage",
                     "===>>>>> Error while sending SET_NM_STATUS_COMPLETE ( TID :%d ) to Power Manager Service ===>>>>>",
                     *(unsigned int *)(v2 + 3));
          v5 = v6[0xBC5];
        }
      }
      else
      {
        v4 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v5 & 0x800000) != 0 )
        {
          result = NsLog(
                     0x521,
                     0x17,
                     "HandleSetNmStatusCompleteMessage",
                     "===>>>>> Successfully sent SET_NM_STATUS_COMPLETE ( TID :%d ) to Power Manager Service ===>>>>>",
                     *(unsigned int *)(v2 + 3));
          v5 = v4[0xBC5];
        }
      }
    }
    else
    {
      v5 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v5 & 0x800) != 0 )
      return NsLog(0x52A, 0xB, "HandleSetNmStatusCompleteMessage", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010DC8C) --------------------------------------------------------
int __fastcall sub_10DC8C(unsigned int *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // r5
  int result; // r0
  _DWORD *v8; // r6
  int v9; // r3
  char v10[4]; // [sp+14h] [bp-24h] BYREF
  unsigned int v11; // [sp+18h] [bp-20h]
  unsigned int v12; // [sp+19h] [bp-1Fh]
  unsigned int v13; // [sp+1Ah] [bp-1Eh]
  char v14; // [sp+1Bh] [bp-1Dh]
  unsigned int v15; // [sp+1Ch] [bp-1Ch]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x3A7, 0xB, "HandleGetPMRebootSourceCompleteMessage", "+");
  v2 = a1[0xA];
  v3 = a1[0xB];
  v4 = a1[8] | (a1[9] << 8);
  v10[3] = 0;
  v10[2] = 0xB5;
  v5 = (_BYTE *)(v4 | (v2 << 0x10) | (v3 << 0x18));
  v10[0] = 4;
  v10[1] = 0;
  v11 = v5[3];
  v12 = v5[4];
  v6 = *((_DWORD *)modHandleTable + 4);
  v13 = v5[5];
  v14 = v5[6];
  v15 = v5[7];
  if ( v6 || (v6 = McOpenSender("PowerManager"), result = setApplicationQueueHandle(4, v6), v6) )
  {
    result = McSend(v6, "IPC_MID", 0x2410, 9, v10);
    if ( result )
    {
      v8 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v9 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x3C8,
                 0x1F,
                 "HandleGetPMRebootSourceCompleteMessage",
                 "===>>>>> Error while sending GET_PM_REBOOT_SOURCE_COMPLETE( Status :  %x , RC : %d , RS : %d and TID : "
                 "%x ) from VMCU to PM ===>>>>>",
                 v12,
                 v13,
                 v15,
                 v11);
    }
    else
    {
      v8 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v9 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x3D0,
                 0x1D,
                 "HandleGetPMRebootSourceCompleteMessage",
                 "===>>>>> Successfully sent GET_PM_REBOOT_SOURCE_COMPLETE( Status :  %x , RC : %d , RS : %d and TID : %x"
                 " ) from VMCU to PM ===>>>>>",
                 v12,
                 v13,
                 v15,
                 v11);
    }
    v9 = v8[0xBC5];
  }
  else
  {
    v9 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
LABEL_6:
  if ( (v9 & 0x800) != 0 )
    return NsLog(0x3D9, 0xB, "HandleGetPMRebootSourceCompleteMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010DE90) --------------------------------------------------------
int __fastcall sub_10DE90(int result)
{
  unsigned int *v1; // r6
  int v2; // r5
  int v3; // r2
  int v4; // r3
  int v5; // r6
  _BYTE *v6; // r5
  _DWORD *v7; // r7
  int v8; // r3
  _DWORD *v9; // r7
  char v10[4]; // [sp+1Ch] [bp-24h] BYREF
  unsigned int v11; // [sp+20h] [bp-20h]
  unsigned int v12; // [sp+21h] [bp-1Fh]
  unsigned int v13; // [sp+22h] [bp-1Eh]
  unsigned int v14; // [sp+23h] [bp-1Dh]
  char v15; // [sp+24h] [bp-1Ch]

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x332, 0xB, "HandleGetVmcuActivityTimerCompleteMessage", "+");
  v2 = v1[8] | (v1[9] << 8);
  v3 = v1[0xA];
  v4 = v1[0xB];
  v5 = *((_DWORD *)modHandleTable + 4);
  v6 = (_BYTE *)(v2 | (v3 << 0x10) | (v4 << 0x18));
  if ( !v5 )
  {
    v5 = McOpenSender("PowerManager");
    result = setApplicationQueueHandle(4, v5);
  }
  v10[3] = 0;
  v10[1] = 0;
  v10[0] = 4;
  v10[2] = 0xB3;
  v11 = v6[3];
  v12 = v6[4];
  v13 = v6[5];
  v14 = v6[6];
  v15 = v6[7];
  if ( v5 )
  {
    result = McSend(v5, "IPC_MID", 0x2410, 9, v10);
    if ( result )
    {
      v9 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v8 < 0 )
      {
        result = NsLog(
                   0x350,
                   0x1F,
                   "HandleGetVmcuActivityTimerCompleteMessage",
                   "===>>>>> Error while sending GET_VMCU_ACTIVITY_TIMER_COMPLETE( Status :%x , TRHours :%d , TRMin :%d  "
                   "TRSec : %d and TID :%x ) from VMCU to PM ===>>>>>",
                   v12,
                   v13,
                   v14,
                   (unsigned int)v6[7],
                   v11);
        v8 = v9[0xBC5];
      }
    }
    else
    {
      v7 = _PasLogParams;
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v8 & 0x20000000) != 0 )
      {
        result = NsLog(
                   0x355,
                   0x1D,
                   "HandleGetVmcuActivityTimerCompleteMessage",
                   "===>>>>> Successfully sent GET_VMCU_ACTIVITY_TIMER_COMPLETE( Status :%x , TRHours :%d , TRMin :%d  TR"
                   "Sec : %d and TID :%x ) from VMCU to PM ===>>>>>",
                   v12,
                   v13,
                   v14,
                   (unsigned int)v6[7],
                   v11);
        v8 = v7[0xBC5];
      }
    }
  }
  else
  {
    v8 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v8 & 0x800) != 0 )
    return NsLog(0x35F, 0xB, "HandleGetVmcuActivityTimerCompleteMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010E0BC) --------------------------------------------------------
void *__fastcall sub_10E0BC(unsigned int *a1)
{
  void *result; // r0
  int v3; // r7
  _BYTE *v4; // r5
  _DWORD *v5; // r6
  int v6; // r3
  char v7[4]; // [sp+14h] [bp-24h] BYREF
  unsigned int v8; // [sp+18h] [bp-20h]
  unsigned int v9; // [sp+19h] [bp-1Fh]
  char v10; // [sp+1Ah] [bp-1Eh]
  unsigned int v11; // [sp+1Bh] [bp-1Dh]
  unsigned int v12; // [sp+1Ch] [bp-1Ch]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x2B8, 0xB, "HandleGetPMWakeupSourceCompleteMessage", "+");
  result = modHandleTable;
  v3 = *((_DWORD *)modHandleTable + 4);
  v4 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  if ( !v3 )
  {
    v3 = McOpenSender("PowerManager");
    result = (void *)setApplicationQueueHandle(4, v3);
  }
  v7[3] = 0;
  v7[1] = 0;
  v7[0] = 4;
  v7[2] = 0xB1;
  v8 = v4[3];
  v9 = v4[4];
  v10 = v4[5];
  v11 = v4[6];
  v12 = v4[7];
  if ( v3 )
  {
    result = (void *)McSend(v3, "IPC_MID", 0x2410, 9, v7);
    if ( result )
    {
      v5 = _PasLogParams;
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v6 >= 0 )
        goto LABEL_8;
      result = (void *)NsLog(
                         0x2D9,
                         0x1F,
                         "HandleGetPMWakeupSourceCompleteMessage",
                         "===>>>>> Error while sending GET_PM_WAKE_SOURCE_COMPLETE( Status :  %x , WS1 : %x , WS2 : %x an"
                         "d TID : %x ) from VMCU to PM ===>>>>>",
                         v9,
                         v11,
                         v12,
                         v8);
    }
    else
    {
      v5 = _PasLogParams;
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v6 & 0x20000000) == 0 )
        goto LABEL_8;
      result = (void *)NsLog(
                         0x2E1,
                         0x1D,
                         "HandleGetPMWakeupSourceCompleteMessage",
                         "===>>>>> Successfully sent GET_PM_WAKE_SOURCE_COMPLETE( Status :  %x , WS1 : %x , WS2 : %x and "
                         "TID : %x ) from VMCU to PM ===>>>>>",
                         v9,
                         v11,
                         v12,
                         v8);
    }
    v6 = v5[0xBC5];
  }
  else
  {
    v6 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
LABEL_8:
  if ( (v6 & 0x800) != 0 )
    return (void *)NsLog(0x2EA, 0xB, "HandleGetPMWakeupSourceCompleteMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010E2C4) --------------------------------------------------------
int __fastcall HandleSetPMStateCompleteMessage(unsigned int *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r7
  _BYTE *v6; // r5
  int result; // r0
  _DWORD *v8; // r6
  int v9; // r3
  char v10; // [sp+10h] [bp-20h] BYREF
  char v11; // [sp+11h] [bp-1Fh]
  char v12; // [sp+12h] [bp-1Eh]
  char v13; // [sp+13h] [bp-1Dh]
  unsigned int v14; // [sp+14h] [bp-1Ch]
  unsigned int v15; // [sp+15h] [bp-1Bh]
  unsigned int v16; // [sp+16h] [bp-1Ah]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x242, 0xB, "HandleSetPMStateCompleteMessage", "+");
  v2 = a1[0xA];
  v3 = a1[8] | (a1[9] << 8);
  v4 = a1[0xB];
  v5 = *((_DWORD *)modHandleTable + 4);
  v6 = (_BYTE *)(v3 | (v2 << 0x10) | (v4 << 0x18));
  if ( v5 )
  {
    v13 = 0;
    v11 = 0;
    v10 = 4;
    v12 = 0xAF;
    v14 = *(_BYTE *)((v3 | (v2 << 0x10) | (v4 << 0x18)) + 3);
    v15 = *(_BYTE *)((v3 | (v2 << 0x10) | (v4 << 0x18)) + 4);
    v16 = *(_BYTE *)((v3 | (v2 << 0x10) | (v4 << 0x18)) + 5);
  }
  else
  {
    v5 = McOpenSender("PowerManager");
    result = setApplicationQueueHandle(4, v5);
    v13 = 0;
    v10 = 4;
    v11 = 0;
    v12 = 0xAF;
    v14 = v6[3];
    v15 = v6[4];
    v16 = v6[5];
    if ( !v5 )
    {
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      goto LABEL_7;
    }
  }
  result = McSend(v5, "IPC_MID", 0x2410, 7, &v10);
  if ( result )
  {
    v8 = _PasLogParams;
    v9 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v9 >= 0 )
      goto LABEL_7;
    result = NsLog(
               0x260,
               0x1F,
               "HandleSetPMStateCompleteMessage",
               "===>>>>> Error while sending SET_PM_STATE_COMPLETE( Status : %x , PMAF :%x  and TID : %x ) from VMCU to PM ===>>>>>",
               v15,
               v16,
               v14);
  }
  else
  {
    v8 = _PasLogParams;
    v9 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( (v9 & 0x20000000) == 0 )
      goto LABEL_7;
    result = NsLog(
               0x267,
               0x1D,
               "HandleSetPMStateCompleteMessage",
               "===>>>>> Successfully sent SET_PM_STATE_COMPLETE( Status : %x , PMAF :%x  and TID : %x ) from VMCU to PM ===>>>>>",
               v15,
               v16,
               v14);
  }
  v9 = v8[0xBC5];
LABEL_7:
  if ( (v9 & 0x800) != 0 )
    return NsLog(0x270, 0xB, "HandleSetPMStateCompleteMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010E4E4) --------------------------------------------------------
void *__fastcall HandleSetPMStateMessage(unsigned int *a1)
{
  void *result; // r0
  int v3; // r7
  _BYTE *v4; // r5
  _DWORD *v5; // r6
  int v6; // r3
  char v7[4]; // [sp+14h] [bp-24h] BYREF
  unsigned int v8; // [sp+18h] [bp-20h]
  unsigned int v9; // [sp+19h] [bp-1Fh]
  unsigned int v10; // [sp+1Ah] [bp-1Eh]
  char v11; // [sp+1Bh] [bp-1Dh]
  unsigned int v12; // [sp+1Ch] [bp-1Ch]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x188, 0xB, "HandleSetPMStateMessage", "+");
  result = modHandleTable;
  v3 = *((_DWORD *)modHandleTable + 4);
  v4 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  if ( !v3 )
  {
    v3 = McOpenSender("PowerManager");
    result = (void *)setApplicationQueueHandle(4, v3);
  }
  v7[3] = 0;
  v7[1] = 0;
  v7[0] = 4;
  v7[2] = 0xAE;
  v8 = v4[3];
  v9 = v4[4];
  v10 = v4[5];
  v11 = v4[6];
  v12 = v4[7];
  if ( v3 )
  {
    result = (void *)McSend(v3, "IPC_MID", 0x2410, 9, v7);
    if ( result )
    {
      v5 = _PasLogParams;
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v6 >= 0 )
        goto LABEL_8;
      result = (void *)NsLog(
                         0x1A8,
                         0x1F,
                         "HandleSetPMStateMessage",
                         "===>>>>> Error while sending SET_POWER_STATE( PL : %x  , PS : %x from , PSS : %x and TID : %d) "
                         "from VMCU to PM ===>>>>>",
                         v9,
                         v10,
                         v12,
                         v8);
    }
    else
    {
      v5 = _PasLogParams;
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v6 & 0x20000000) == 0 )
        goto LABEL_8;
      result = (void *)NsLog(
                         0x1B0,
                         0x1D,
                         "HandleSetPMStateMessage",
                         "===>>>>> Successfully sent SET_POWER_STATE( PL : %x  , PS : %x from , PSS : %x and TID : %d) fr"
                         "om VMCU to PM ===>>>>>",
                         v9,
                         v10,
                         v12,
                         v8);
    }
    v6 = v5[0xBC5];
  }
  else
  {
    v6 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
LABEL_8:
  if ( (v6 & 0x800) != 0 )
    return (void *)NsLog(0x1B9, 0xB, "HandleSetPMStateMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010E6EC) --------------------------------------------------------
int __fastcall HandleGetPMStateCompleteMessage(unsigned int *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // r5
  int result; // r0
  _DWORD *v8; // r6
  int v9; // r3
  char v10[4]; // [sp+14h] [bp-24h] BYREF
  unsigned int v11; // [sp+18h] [bp-20h]
  char v12; // [sp+19h] [bp-1Fh]
  char v13; // [sp+1Ah] [bp-1Eh]
  unsigned int v14; // [sp+1Bh] [bp-1Dh]
  unsigned int v15; // [sp+1Ch] [bp-1Ch]
  char v16; // [sp+1Dh] [bp-1Bh]
  unsigned int v17; // [sp+1Eh] [bp-1Ah]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x149, 0xB, "HandleGetPMStateCompleteMessage", "+");
  v2 = a1[0xA];
  v3 = a1[0xB];
  v4 = a1[8] | (a1[9] << 8);
  v10[3] = 0;
  v10[2] = 0xAD;
  v5 = (_BYTE *)(v4 | (v2 << 0x10) | (v3 << 0x18));
  v10[0] = 4;
  v10[1] = 0;
  v11 = v5[3];
  v12 = v5[4];
  v6 = *((_DWORD *)modHandleTable + 4);
  v13 = v5[5];
  v14 = v5[6];
  v15 = v5[7];
  v16 = v5[8];
  v17 = v5[9];
  if ( v6 || (v6 = McOpenSender("PowerManager"), result = setApplicationQueueHandle(4, v6), v6) )
  {
    result = McSend(v6, "IPC_MID", 0x2410, 0xB, v10);
    if ( result )
    {
      v8 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v9 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x168,
                 0x1F,
                 "HandleGetPMStateCompleteMessage",
                 "===>>>>> Error while sending GET_PM_STATE_COMPLETE( PL : %x  , PS : %x  , PSS : %x  and TID : %d) from "
                 "VMCU to PM ===>>>>>",
                 v14,
                 v15,
                 v17,
                 v11);
    }
    else
    {
      v8 = _PasLogParams;
      v9 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v9 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x16D,
                 0x1D,
                 "HandleGetPMStateCompleteMessage",
                 "===>>>>> Successfully sent GET_PM_STATE_COMPLETE( PL : %x  , PS : %x  , PSS : %x  and TID : %d) from VM"
                 "CU to PM ===>>>>>",
                 v14,
                 v15,
                 v17,
                 v11);
    }
    v9 = v8[0xBC5];
  }
  else
  {
    v9 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
LABEL_6:
  if ( (v9 & 0x800) != 0 )
    return NsLog(0x176, 0xB, "HandleGetPMStateCompleteMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010E900) --------------------------------------------------------
int __fastcall HandleGetPmStateMessage(int result)
{
  unsigned int *v1; // r5
  int v2; // r2
  int v3; // r7
  int v4; // r8
  int v5; // r5
  int v6; // r8
  int v7; // r3
  _DWORD *v8; // r6
  char v9[4]; // [sp+8h] [bp-20h] BYREF
  unsigned int v10; // [sp+Ch] [bp-1Ch]

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x8C, 0xB, "HandleGetPmStateMessage", "+");
  v2 = v1[0xB];
  v3 = *((_DWORD *)modHandleTable + 4);
  v4 = v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10);
  v5 = *((_DWORD *)modHandleTable + 5);
  v6 = v4 | (v2 << 0x18);
  if ( !v3 )
  {
    v3 = McOpenSender("PowerManager");
    result = setApplicationQueueHandle(4, v3);
  }
  if ( !v5 )
  {
    v5 = McOpenSender("IPC_MID");
    result = setApplicationQueueHandle(5, v5);
  }
  v9[3] = 0;
  v9[0] = 0;
  v9[2] = 0xAC;
  v9[1] = 0;
  v10 = *(_BYTE *)(v6 + 3);
  if ( v3 )
  {
    result = McSend(v3, "IPC_MID", 0x2410, 5, v9);
    if ( result )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        result = NsLog(
                   0xAC,
                   0x1F,
                   "HandleGetPmStateMessage",
                   "===>>>>> Error while sending GET_PM_STATE from VMCU to PM (TID : %d)===>>>>>",
                   v10);
    }
    else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
    {
      result = NsLog(
                 0xB0,
                 0x1D,
                 "HandleGetPmStateMessage",
                 "===>>>>> Successfully sent GET_PM_STATE from VMCU to PM (TID : %d)===>>>>>",
                 v10);
    }
  }
  if ( v5 && (result = McSend(v5, "IPC_MID", 0x2428, 0, 0)) != 0 )
  {
    v8 = _PasLogParams;
    v7 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v7 < 0 )
    {
      result = NsLog(
                 0xBD,
                 0x1F,
                 "HandleGetPmStateMessage",
                 "===>>>>> Error while sending MSG_IPC_LINK_MONITOR_TIMER_START_REQ to IPC_Main_Thread>>>>>");
      v7 = v8[0xBC5];
    }
  }
  else
  {
    v7 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  if ( (v7 & 0x800) != 0 )
    return NsLog(0xC1, 0xB, "HandleGetPmStateMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010EB5C) --------------------------------------------------------
int __fastcall HandleIndicateNmStatus(unsigned int *a1)
{
  int v2; // r12
  int v3; // r0
  int v4; // r3
  int v5; // r1
  int v6; // r3
  int v7; // r7
  int result; // r0
  _DWORD *v9; // r6
  int v10; // r3
  char v11[4]; // [sp+14h] [bp-24h] BYREF
  unsigned int v12; // [sp+18h] [bp-20h]
  char v13[6]; // [sp+19h] [bp-1Fh] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x65F, 0xB, "HandleIndicateNmStatus", "+");
  v2 = a1[9];
  v3 = a1[0xA];
  v4 = a1[8];
  v5 = a1[0xB];
  v11[3] = 0;
  v11[1] = 0;
  v6 = v4 | (v2 << 8) | (v3 << 0x10) | (v5 << 0x18);
  v11[0] = 4;
  v11[2] = 0xBF;
  v7 = *((_DWORD *)modHandleTable + 4);
  v12 = *(_BYTE *)(v6 + 3);
  memcpy(v13, (const void *)(v6 + 4), sizeof(v13));
  if ( v7 || (v7 = McOpenSender("PowerManager"), result = setApplicationQueueHandle(4, v7), v7) )
  {
    result = McSend(v7, "IPC_MID", 0x2410, 0xB, v11);
    if ( result )
    {
      v9 = _PasLogParams;
      v10 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v10 >= 0 )
        goto LABEL_6;
      result = NsLog(
                 0x679,
                 0x1F,
                 "HandleIndicateNmStatus",
                 "===>>>>> Error while sending INDICATE_NM_STATUS( NM_STATUS0 : %x  , NM_STATUS1 : %x  , NM_STATUS2 : %x "
                 " and TID : %d) from VMCU to PM ===>>>>>",
                 (unsigned int)v13[1],
                 (unsigned int)v13[3],
                 (unsigned int)v13[5],
                 v12);
    }
    else
    {
      v9 = _PasLogParams;
      v10 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v10 & 0x20000000) == 0 )
        goto LABEL_6;
      result = NsLog(
                 0x67E,
                 0x1D,
                 "HandleIndicateNmStatus",
                 "===>>>>> Successfully sent INDICATE_NM_STATUS( NM_STATUS0 : %x  , NM_STATUS1 : %x  , NM_STATUS2 : %x  a"
                 "nd TID : %d) from VMCU to PM ===>>>>>",
                 (unsigned int)v13[1],
                 (unsigned int)v13[3],
                 (unsigned int)v13[5],
                 v12);
    }
    v10 = v9[0xBC5];
  }
  else
  {
    v10 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
LABEL_6:
  if ( (v10 & 0x800) != 0 )
    return NsLog(0x687, 0xB, "HandleIndicateNmStatus", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010ED50) --------------------------------------------------------
int __fastcall HandleRtcTimerMessage(int result)
{
  unsigned int *v1; // r5
  int v2; // r5
  int v3; // r8
  _DWORD *v4; // r7
  int v5; // r3
  _DWORD *v6; // r7
  char v7[5]; // [sp+Ch] [bp-24h] BYREF
  _BYTE v8[4]; // [sp+11h] [bp-1Fh] BYREF

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x624, 0xB, "HandleRtcTimerMessage", "+");
  v2 = v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18);
  v3 = *((_DWORD *)modHandleTable + 0x16);
  if ( v2 )
  {
    v7[0] = 4;
    v7[3] = 0;
    v7[1] = 0;
    v7[2] = 0xC0;
    v7[4] = *(_BYTE *)(v2 + 3);
    memcpy(v8, (const void *)(v2 + 4), sizeof(v8));
    if ( v3 || (v3 = McOpenSender("VS_CLOCK_QUEUE"), result = setApplicationQueueHandle(0x16, v3), v3) )
    {
      result = McSend(v3, "IPC_MID", 0x2410, 9, v7);
      if ( result )
      {
        v4 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v5 < 0 )
        {
          result = NsLog(
                     0x641,
                     0x1F,
                     "HandleRtcTimerMessage",
                     "===>>>>> Error while sending RTC_TIMER ( TID :%d ) to CLOCK Service ===>>>>>",
                     *(unsigned int *)(v2 + 3));
          v5 = v4[0xBC5];
        }
      }
      else
      {
        v6 = _PasLogParams;
        v5 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v5 & 0x20000000) != 0 )
        {
          result = NsLog(
                     0x645,
                     0x1D,
                     "HandleRtcTimerMessage",
                     "===>>>>> Successfully sent RTC_TIMER ( TID :%d ) to CLOCK Service ===>>>>>",
                     *(unsigned int *)(v2 + 3));
          v5 = v6[0xBC5];
        }
      }
    }
    else
    {
      v5 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v5 & 0x800) != 0 )
      return NsLog(0x64E, 0xB, "HandleRtcTimerMessage", "-");
  }
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (0010EF30) --------------------------------------------------------
unsigned int *__fastcall _sendIPCSetGpsStatusToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  unsigned int *v3; // r4

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x69A, 0xB, "sendIPCSetGpsStatusToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 8);
    v2 = result;
    if ( result )
    {
      v3 = (unsigned int *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 0xB;
      *v3 = 0x20;
      v3[1] = 0;
      memcpy(v3 + 3, v1 + 4, sizeof(unsigned int));
      memcpy(v3 + 4, v1 + 5, sizeof(unsigned int));
      memcpy(v3 + 5, v1 + 6, sizeof(unsigned int));
      memcpy(v3 + 6, v1 + 7, sizeof(unsigned int));
      memcpy(v3 + 7, v1 + 8, sizeof(unsigned int));
      result = (unsigned int *)some_check_or_CRC(v2);
      if ( result )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(
            0x6C1,
            0x1F,
            "sendIPCSetGpsStatusToVMCU",
            "Error while sending Set Gps message with TID: %d , RC : %d  , CID : %d ",
            v3[3],
            result,
            *v3 >> 2);
        return lost_sub_can_edian(v2);
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        return (unsigned int *)NsLog(
                                    0x6C6,
                                    0x1D,
                                    "sendIPCSetGpsStatusToVMCU",
                                    "Successfully sent the Set Gps message to VMCU  with transaction Id : %d gpsPdop:%d,g"
                                    "psCompassDirection:%d,gpsActualVsInterpos:%d gpsBFault:%d",
                                    v3[3],
                                    v3[4],
                                    v3[5],
                                    v3[6],
                                    v3[7]);
      }
    }
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010F114) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetVmcuRtcTimeToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x5B2, 0xB, "sendIPCPmSetVmcuRtcTimeToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 8);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 9;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      memcpy(v3 + 4, v1 + 5, 4u);
      result = (unsigned int *)some_check_or_CRC(v2);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x5CF,
                                        0x1F,
                                        "sendIPCPmSetVmcuRtcTimeToVMCU",
                                        "<<<<<=== Error while sending SET_VMCU_RTC_TIME to VMCU (TID :%d) , RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x5D3,
                                        0x1D,
                                        "sendIPCPmSetVmcuRtcTimeToVMCU",
                                        "<<<<<=== Successfully sent SET_VMCU_RTC_TIME to VMCU (TID :%d )  <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x5D7, 0xB, "sendIPCPmSetVmcuRtcTimeToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010F2D4) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetEolStatusCompleteToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x53D, 0xB, "sendIPCPmSetEolStatusCompleteToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 6);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 0xC3;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      v3[4] = v1[5];
      v3[5] = v1[6];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x55B,
                                        0x1F,
                                        "sendIPCPmSetEolStatusCompleteToVMCU",
                                        "<<<<<=== Error while sending SET_EOL_STATUS_COMPLETE to VMCU (TID :%d) , RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x800000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x55F,
                                        0x17,
                                        "sendIPCPmSetEolStatusCompleteToVMCU",
                                        "<<<<<=== Successfully sent SET_EOL_STATUS_COMPLETE to VMCU (TID :%d , STATUS :%d)  <<<<<===",
                                        (unsigned int)v3[3],
                                        (unsigned int)v3[4]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x563, 0xB, "sendIPCPmSetEolStatusCompleteToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010F498) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetNmStatusToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x4CC, 0xB, "sendIPCPmSetNmStatusToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 8);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 0x42;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      memcpy(v3 + 4, v1 + 5, 4u);
      result = (unsigned int *)some_check_or_CRC(v2);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x4E8,
                                        0x1F,
                                        "sendIPCPmSetNmStatusToVMCU",
                                        "<<<<<=== Error while sending SET_NM_STATUS to VMCU (TID :%d) , RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x800000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x4EC,
                                        0x17,
                                        "sendIPCPmSetNmStatusToVMCU",
                                        "<<<<<=== Successfully sent SET_NM_STATUS to VMCU (TID :%d )  <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x4EF, 0xB, "sendIPCPmSetNmStatusToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010F658) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetPhoneExpiredToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  char v4; // r12
  unsigned int v5; // r2
  unsigned int *v6; // r6
  _DWORD *v7; // r6
  int v8; // r3
  _DWORD *v9; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x45D, 0xB, "sendIPCPmSetPhoneExpiredToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 6);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v4 = v3[1] & 0xFE;
      v3[2] = 8;
      v3[1] = v4 & 1;
      *v3 = 0x20;
      v5 = v1[4];
      v3[5] = 0;
      v3[4] = 0;
      v3[3] = v5;
      result = (unsigned int *)some_check_or_CRC(result);
      v6 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v9 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v8 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x47A,
                                        0x1F,
                                        "sendIPCPmSetPhoneExpiredToVMCU",
                                        "<<<<<=== Error while sending PM_ACTIVITY_PHONE_EXPIRED to VMCU (TID :%d), RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v6);
          v8 = v9[0xBC5];
        }
      }
      else
      {
        v7 = _PasLogParams;
        v8 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v8 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x47E,
                                        0x1D,
                                        "sendIPCPmSetPhoneExpiredToVMCU",
                                        "<<<<<=== Successfully sent the PM_ACTIVITY_PHONE_EXPIRED to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v8 = v7[0xBC5];
        }
      }
    }
    else
    {
      v8 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v8 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x482, 0xB, "sendIPCPmSetPhoneExpiredToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010F80C) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetPhoneActiveToVMCU(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r5
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r6

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x424, 0xB, "sendIPCPmSetPhoneActiveToVMCU", "-");
  if ( v1 )
  {
    result = sub_110C70(8, 6);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 7;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      v3[4] = v1[5];
      v3[5] = v1[6];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x441,
                                        0x1F,
                                        "sendIPCPmSetPhoneActiveToVMCU",
                                        "<<<<<=== Error while sending PM_ACTIVITY_TIMER_PHONE to VMCU (TID :%d), RC :%d  <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x445,
                                        0x1D,
                                        "sendIPCPmSetPhoneActiveToVMCU",
                                        "<<<<<=== Successfully sent the PM_ACTIVITY_TIMER_PHONE to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x449, 0xB, "sendIPCPmSetPhoneActiveToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010F9C4) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmActivityTimerToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x3EC, 0xB, "sendIPCPmActivityTimerToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 4);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 6;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x408,
                                        0x1F,
                                        "sendIPCPmActivityTimerToVMCU",
                                        "<<<<<=== Error while sending PM_ACTIVITY_TIMER to VMCU (TID :%d) , RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x40C,
                                        0x1D,
                                        "sendIPCPmActivityTimerToVMCU",
                                        "<<<<<=== Successfully sent the PM_ACTIVITY_TIMER to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x410, 0xB, "sendIPCPmActivityTimerToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010FB70) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmGetRebootSourceToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x372, 0xB, "sendIPCPmGetRebootSourceToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 4);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 5;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x38E,
                                        0x1F,
                                        "sendIPCPmGetRebootSourceToVMCU",
                                        "<<<<<=== Error while sending GET_PM_REBOOT_SOURCE to VMCU (TID :%d) , RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x392,
                                        0x1D,
                                        "sendIPCPmGetRebootSourceToVMCU",
                                        "<<<<<=== Successfully sent GET_PM_REBOOT_SOURCE to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x396, 0xB, "sendIPCPmGetRebootSourceToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010FD1C) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmGetVmcuActivityTimerToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x2FD, 0xB, "sendIPCPmGetVmcuActivityTimerToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 4);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 4;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x318,
                                        0x1F,
                                        "sendIPCPmGetVmcuActivityTimerToVMCU",
                                        "<<<<<=== Error while sending GET_VMCU_ACTIVITY_TIMER to VMCU (TID :%d) , RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x31C,
                                        0x1D,
                                        "sendIPCPmGetVmcuActivityTimerToVMCU",
                                        "<<<<<=== Successfully sent the GET_VMCU_ACTIVITY_TIMER to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x320, 0xB, "sendIPCPmGetVmcuActivityTimerToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (0010FEC8) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmGetPmWakeSourceToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x283, 0xB, "sendIPCPmGetPmWakeSourceToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 4);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 3;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x29F,
                                        0x1F,
                                        "sendIPCPmGetPmWakeSourceToVMCU",
                                        "<<<<<=== Error while sending GET_PM_WAKE_SOURCE to VMCU (TID :%d) RC :%d <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x2A3,
                                        0x1D,
                                        "sendIPCPmGetPmWakeSourceToVMCU",
                                        "<<<<<=== Successfully sent the GET_PM_WAKE_SOURCE to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x2A7, 0xB, "sendIPCPmGetPmWakeSourceToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00110074) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetPMStateToVMCU(unsigned int *result)
{
  unsigned int *v1; // r7
  unsigned int *v2; // r8
  _BYTE *v3; // r5
  unsigned int *v4; // r7
  _DWORD *v5; // r7
  int v6; // r3
  _DWORD *v7; // r6

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x206, 0xB, "sendIPCPmSetPMStateToVMCU", "-");
  if ( v1 )
  {
    result = sub_110C70(8, 8);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 2;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      v3[4] = v1[5];
      v3[5] = v1[6];
      v3[7] = v1[8];
      v3[6] = v1[7];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x226,
                                        0x1F,
                                        "sendIPCPmSetPMStateToVMCU",
                                        "<<<<<=== Error while sending SET_PM_STATE to VMCU (PL : %x , PS : %x , PSS : %x "
                                        " TID :%d) RC :%d <<<<<===",
                                        (unsigned int)v3[4],
                                        (unsigned int)v3[5],
                                        (unsigned int)v3[7],
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x22B,
                                        0x1D,
                                        "sendIPCPmSetPMStateToVMCU",
                                        "<<<<<=== Successfully sent the SET_PM_STATE to VMCU (PL : %x , PS : %x , RES : %"
                                        "x and PSS : %x  TID :%d) <<<<<===",
                                        (unsigned int)v3[4],
                                        (unsigned int)v3[5],
                                        (unsigned int)v3[6],
                                        (unsigned int)v3[7],
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x230, 0xB, "sendIPCPmSetPMStateToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00110278) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmSetPMStateCompleteToVMCU(unsigned int *result)
{
  unsigned int *v1; // r7
  unsigned int *v2; // r8
  _BYTE *v3; // r5
  unsigned int *v4; // r7
  _DWORD *v5; // r7
  int v6; // r3
  _DWORD *v7; // r6

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x1CB, 0xB, "sendIPCPmSetPMStateCompleteToVMCU", "+");
  if ( v1 )
  {
    result = sub_110C70(8, 6);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 0x82;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      v3[4] = v1[5];
      v3[5] = v1[6];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x1EA,
                                        0x1F,
                                        "sendIPCPmSetPMStateCompleteToVMCU",
                                        "<<<<<=== Error while sending SET_PM_STATE_COMPLETE to VMCU ( STATUS : %d , PF : "
                                        "%d TID : %d) RC :%d  <<<<<===",
                                        (unsigned int)v3[4],
                                        (unsigned int)v3[5],
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x1EF,
                                        0x1D,
                                        "sendIPCPmSetPMStateCompleteToVMCU",
                                        "<<<<<=== Successfully sent the SET_PM_STATE_COMPLETE to VMCU ( STATUS : %d , PF "
                                        ": %d TID : %d) <<<<<===",
                                        (unsigned int)v3[4],
                                        (unsigned int)v3[5],
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x1F3, 0xB, "sendIPCPmSetPMStateCompleteToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00110458) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmGetPMStateToVMCU(unsigned int *result)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r7
  _BYTE *v3; // r8
  unsigned int *v4; // r6
  _DWORD *v5; // r6
  int v6; // r3
  _DWORD *v7; // r5

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0x114, 0xB, "sendIPCPmGetPMStateToVMCU", "-");
  if ( v1 )
  {
    result = sub_110C70(8, 4);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 1;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x12F,
                                        0x1F,
                                        "sendIPCPmGetPMStateToVMCU",
                                        "<<<<<=== Error while sending GET_PM_STATE to VMCU (TID :%d) , RC :%d  <<<<<===",
                                        (unsigned int)v3[3],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0x133,
                                        0x1D,
                                        "sendIPCPmGetPMStateToVMCU",
                                        "<<<<<=== Successfully sent the GET_PM_STATE to VMCU (TID :%d) <<<<<===",
                                        (unsigned int)v3[3]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x137, 0xB, "sendIPCPmGetPMStateToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00110600) --------------------------------------------------------
unsigned int *__fastcall _sendIPCPmGetPMStateCompleteToVMCU(unsigned int *result)
{
  unsigned int *v1; // r7
  unsigned int *v2; // r8
  _BYTE *v3; // r4
  unsigned int *v4; // r7
  _DWORD *v5; // r7
  int v6; // r3
  _DWORD *v7; // r6

  v1 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = (unsigned int *)NsLog(0xD4, 0xB, "sendIPCPmGetPMStateCompleteToVMCU", "-");
  if ( v1 )
  {
    result = sub_110C70(8, 0xA);
    v2 = result;
    if ( result )
    {
      v3 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
      v3[2] = 0x81;
      *v3 = 0x20;
      v3[1] = 0;
      v3[3] = v1[4];
      v3[4] = v1[5];
      v3[5] = v1[6];
      v3[6] = v1[7];
      v3[7] = v1[8];
      v3[8] = v1[9];
      v3[9] = v1[0xA];
      result = (unsigned int *)some_check_or_CRC(result);
      v4 = result;
      if ( result )
      {
        result = lost_sub_can_edian(v2);
        v7 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v6 < 0 )
        {
          result = (unsigned int *)NsLog(
                                        0xF7,
                                        0x1F,
                                        "sendIPCPmGetPMStateCompleteToVMCU",
                                        "<<<<<=== Error while sending GET_PM_STATE_COMPLETE to VMCU (PL: %x ,PS :%x ,PSS:"
                                        "%x  TID:%d STATUS: %d), RC:%d <<<<<===",
                                        (unsigned int)v3[6],
                                        (unsigned int)v3[7],
                                        (unsigned int)v3[9],
                                        (unsigned int)v3[3],
                                        (unsigned int)v3[4],
                                        v4);
          v6 = v7[0xBC5];
        }
      }
      else
      {
        v5 = _PasLogParams;
        v6 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v6 & 0x20000000) != 0 )
        {
          result = (unsigned int *)NsLog(
                                        0xFC,
                                        0x1D,
                                        "sendIPCPmGetPMStateCompleteToVMCU",
                                        "<<<<<=== Successfully sent the GET_PM_STATE_COMPLETE to VMCU (PL : %x , PS : %x "
                                        ", RES : %x and PSS : %x  TID :%d , STATUS: %d) <<<<<===",
                                        (unsigned int)v3[6],
                                        (unsigned int)v3[7],
                                        (unsigned int)v3[8],
                                        (unsigned int)v3[9],
                                        (unsigned int)v3[3],
                                        (unsigned int)v3[4]);
          v6 = v5[0xBC5];
        }
      }
    }
    else
    {
      v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    if ( (v6 & 0x800) != 0 )
      return (unsigned int *)NsLog(0x100, 0xB, "sendIPCPmGetPMStateCompleteToVMCU", "-");
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00110824) --------------------------------------------------------
int __fastcall HandleSetPmEolStatusMessage(unsigned int *a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r3
  _BYTE *v5; // r3
  int v6; // r5
  int result; // r0
  char v8[4]; // [sp+8h] [bp-18h] BYREF
  unsigned int v9; // [sp+Ch] [bp-14h]
  unsigned int v10; // [sp+Dh] [bp-13h]
  char v11; // [sp+Eh] [bp-12h]

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x575, 0xB, "HandleSetPmEolStatusMessage", "+");
  v2 = a1[0xA];
  v3 = a1[0xB];
  v4 = a1[8] | (a1[9] << 8);
  v8[3] = 0;
  v8[1] = 0;
  v5 = (_BYTE *)(v4 | (v2 << 0x10) | (v3 << 0x18));
  v8[2] = 0xD6;
  v8[0] = 4;
  v9 = v5[3];
  v6 = *((_DWORD *)modHandleTable + 0x19);
  v10 = v5[4];
  v11 = v5[5];
  if ( v6 || (v6 = McOpenSender("VS_DiagService"), setApplicationQueueHandle(0x19, v6), v6) )
  {
    if ( McSend(v6, "IPC_MID", 0x2410, 7, v8) )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(
          0x590,
          0x1F,
          "HandleSetPmEolStatusMessage",
          "===>>>>> Error while sending SET_EOL_STATUS ( EOL: %d , TID :%d ) to DIAG ===>>>>>",
          v10,
          v9);
    }
    else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
    {
      NsLog(
        0x594,
        0x17,
        "HandleSetPmEolStatusMessage",
        "===>>>>> Successfully sent SET_EOL_STATUS ( EOL: %d , TID :%d ) to DIAG ===>>>>>",
        v10,
        v9);
    }
  }
  result = sub_1147DC(v10);
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return NsLog(0x59F, 0xB, "HandleSetPmEolStatusMessage", "-");
  return result;
}
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEE4: using guessed type void *modHandleTable;

//----- (00110A14) --------------------------------------------------------
int __fastcall HandleIpcPmNmMessage(int result)
{
  unsigned int *v1; // r5
  unsigned int v2; // r3

  v1 = (unsigned int *)result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
  {
    result = NsLog(0x3A, 0xB, "HandleIpcPmNmMessage", "+");
    if ( !v1 )
      return result;
  }
  else if ( !result )
  {
    return result;
  }
  result = v1[9];
  v2 = *(unsigned int *)((v1[8] | (result << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18)) + 2);
  if ( v2 == 0x82 )
  {
    result = HandleSetPMStateCompleteMessage(v1);
  }
  else if ( v2 <= 0x82 )
  {
    if ( v2 == 0xA )
    {
      result = HandleRtcTimerMessage((int)v1);
    }
    else if ( v2 <= 0xA )
    {
      if ( v2 == 1 )
      {
        result = HandleGetPmStateMessage((int)v1);
      }
      else if ( v2 == 2 )
      {
        result = (int)HandleSetPMStateMessage(v1);
      }
    }
    else
    {
      switch ( v2 )
      {
        case 0x43u:
          result = HandleSetPmEolStatusMessage(v1);
          break;
        case 0x81u:
          result = HandleGetPMStateCompleteMessage(v1);
          break;
        case 0x40u:
          result = HandleIndicateNmStatus(v1);
          break;
      }
    }
  }
  else if ( v2 == 0x85 )
  {
    result = sub_10DC8C(v1);
  }
  else if ( v2 > 0x85 )
  {
    switch ( v2 )
    {
      case 0x8Bu:
        result = sub_10D6F4(v1);
        break;
      case 0xC2u:
        result = sub_10DAB0((int)v1);
        break;
      case 0x89u:
        result = sub_10D8D4((int)v1);
        break;
    }
  }
  else if ( v2 == 0x83 )
  {
    result = (int)sub_10E0BC(v1);
  }
  else
  {
    result = sub_10DE90((int)v1);
  }
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return NsLog(0x7A, 0xB, "HandleIpcPmNmMessage", "-");
  return result;
}
// 110A88: conditional instruction was optimized away because r3.4==84
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00110BE0) --------------------------------------------------------
int __fastcall sub_110BE0(int a1, int a2)
{
  int v2; // r12
  int v3; // r4

  v2 = dword_1225B4;
  if ( dword_1225B4 )
    return 1;
  dword_1225B4 = a1;
  v3 = v2;
  dword_1225A8 = a2;
  dword_1225AC = v2;
  return v3;
}
// 1225A8: using guessed type int dword_1225A8;
// 1225AC: using guessed type int dword_1225AC;
// 1225B4: using guessed type int dword_1225B4;

//----- (00110C34) --------------------------------------------------------
unsigned int *__fastcall lost_sub_can_edian(unsigned int *result)
{
  unsigned int *v1; // r4

  v1 = result;
  if ( result )
  {
    if ( result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18) )
      ((void (*)(void))sub_116D74)();
    return (unsigned int *)sub_116D74(v1);
  }
  return result;
}
// 116D74: using guessed type int __fastcall sub_116D74(_DWORD);

//----- (00110C70) --------------------------------------------------------
_BYTE *__fastcall sub_110C70(int a1, int a2)
{
  _BYTE *v3; // r0
  _BYTE *v4; // r4
  void *v5; // r0
  _BYTE *v7; // r0

  v3 = ___malloc(0xCu);
  v4 = v3;
  if ( v3 )
  {
    v3[4] = a2;
    v3[3] = 0xFF;
    *v3 = 0xFF;
    v3[5] = BYTE1(a2);
    v3[1] = 0xFF;
    v3[6] = BYTE2(a2);
    v3[2] = 0xFF;
    v3[7] = HIBYTE(a2);
    v5 = ___malloc((unsigned int)a2);
    *((_DWORD *)v4 + 2) = v5;
    if ( !v5 )
    {
      v7 = v4;
      v4 = 0;
      sub_116D74(v7);
    }
  }
  return v4;
}
// 116D74: using guessed type int __fastcall sub_116D74(_DWORD);

//----- (00110D00) --------------------------------------------------------
int __fastcall some_check_or_CRC(unsigned int *a1)
{
  _BYTE *v2; // r7
  unsigned int v3; // r10
  int v4; // r6
  int v5; // r7
  pthread_mutex_t *v6; // r0

  v2 = (_BYTE *)(a1[8] | (a1[9] << 8) | (a1[0xA] << 0x10) | (a1[0xB] << 0x18));
  v3 = (unsigned int)*v2 >> 2;
  if ( !v3 )
  {
    v4 = 4;
    goto LABEL_4;
  }
  if ( sub_109690() != 1 || dword_1225B4 )
    return 4;
  if ( dword_1225B0 == 2 )
  {
    if ( v3 != 0x26 )
      goto LABEL_15;
    return 2;
  }
  if ( v3 == 0x3F )
    return 2;
LABEL_15:
  if ( v3 > 0x1F )
  {
    if ( (a1[4] | (a1[5] << 8) | (a1[6] << 0x10) | (a1[7] << 0x18)) <= 0x100Bu )
    {
      v4 = 2;
      goto LABEL_21;
    }
    return 3;
  }
  v4 = 2;
LABEL_4:
  if ( (a1[4] | (a1[5] << 8) | (a1[6] << 0x10) | (a1[7] << 0x18)) > 0x42u )
    return 3;
  if ( v3 )
  {
LABEL_21:
    if ( (unsigned int)byte_1225B8 <= 0xF3u
      || ((*v2 & 3) == 2 || (*v2 & 0xFC) == 0x10) && (unsigned int)byte_1225B8 <= 0xFDu )
    {
LABEL_7:
      v5 = sub_106EB0(v3);
      if ( !__pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]) )
      {
        *((_DWORD *)&unk_1225BC + 3 * (unsigned int)byte_1225B8 + 2) = a1;
        *((_WORD *)&unk_1225BC + 6 * (unsigned int)byte_1225B8 + 3) = 3;
        *((_DWORD *)&unk_1225BC + 3 * (unsigned int)byte_1225B8) = 0;
        if ( v5 )
          *((_WORD *)&unk_1225BC + 6 * (unsigned int)byte_1225B8 + 2) = *(_WORD *)(v5 + 0xE) >> 1;
        else
          *((_WORD *)&unk_1225BC + 6 * (unsigned int)byte_1225B8 + 2) = 2;
        v4 = 0;
        v6 = *(pthread_mutex_t **)_mutexList[0];
        ++byte_1225B8;
        _pthread_mutex_unlock(v6);
      }
      return v4;
    }
    return 1;
  }
  if ( (unsigned int)byte_1225B8 != 0xFF )
    goto LABEL_7;
  return 1;
}
// 11EF10: using guessed type int _mutexList[2];
// 1225B0: using guessed type int dword_1225B0;
// 1225B4: using guessed type int dword_1225B4;
// 1225B8: using guessed type char byte_1225B8;

//----- (00110F2C) --------------------------------------------------------
int __fastcall sub_110F2C(char a1)
{
  int result; // r0
  unsigned int i; // r6
  unsigned int v4; // r1
  int v5; // r7
  char *v6; // r0
  int v7; // r1
  char *v8; // r1
  pthread_mutex_t *v9; // r0

  result = __pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]);
  if ( !result )
  {
    for ( i = (unsigned int)(a1 + 1); (unsigned int)byte_1225B8 > i; *((_DWORD *)v8 + 2) = *((_DWORD *)v6 + 2) )
    {
      v4 = i - 1;
      v5 = dword_1225BC[3 * i];
      v6 = (char *)&dword_1225BC[3 * i];
      i = (unsigned int)(i + 1);
      v7 = 3 * v4;
      dword_1225BC[v7] = v5;
      v8 = (char *)&dword_1225BC[v7];
      *((_WORD *)v8 + 2) = *((_WORD *)v6 + 2);
      *((_WORD *)v8 + 3) = *((_WORD *)v6 + 3);
    }
    v9 = *(pthread_mutex_t **)_mutexList[0];
    --byte_1225B8;
    return _pthread_mutex_unlock(v9);
  }
  return result;
}
// 11EF10: using guessed type int _mutexList[2];
// 1225B8: using guessed type char byte_1225B8;
// 1225BC: using guessed type _DWORD dword_1225BC[1];

//----- (00110FF4) --------------------------------------------------------
unsigned int *__fastcall sub_110FF4(unsigned int *result, unsigned int *a2)
{
  switch ( (unsigned int)result )
  {
    case 0u:
      return sub_1098F4(a2);
    case 1u:
      return result;
    case 2u:
      // HandleIpcPmNmMessage
      HandleIpcPmNmMessage((int)a2);
      return lost_sub_can_edian(a2);
    case 3u:
      // HandleButtonStatusEvent
      HandleButtonStatusEvent((int)a2);
      return lost_sub_can_edian(a2);
    case 4u:
      HandleIpcCanILMessage(a2);
      return lost_sub_can_edian(a2);
    case 5u:
      HandleIpcCanDisplayTPMessage((int)a2);
      return lost_sub_can_edian(a2);
    case 6u:
      HandleIpcCanDiagTPMessage(a2);
      return lost_sub_can_edian(a2);
    case 7u:
      if ( sub_114778() )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(0x3EE, 0x1F, "DispatchIpcMsg", " Dropping IBD Data as the mode is EOL");
      }
      else
      {
        sub_1093D8((int)a2);
      }
      return lost_sub_can_edian(a2);
    case 8u:
      if ( sub_114778() )
      {
        sub_1076F0((int)a2);
      }
      else if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      {
        NsLog(0x3FD, 0x1F, "DispatchIpcMsg", " Dropping EOL Data as the mode is  Functional");
      }
      return lost_sub_can_edian(a2);
    default:
      return lost_sub_can_edian(a2);
  }
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00111164) --------------------------------------------------------
unsigned int *__fastcall sub_111164(int a1, unsigned int *a2, int a3)
{
  unsigned int *result; // r0

  switch ( a1 )
  {
    case 0:
      result = sub_109914(a2, a3);
      break;
    default:
      result = lost_sub_can_edian(a2);
      break;
  }
  return result;
}

//----- (001111A8) --------------------------------------------------------
unsigned int sub_1111A8()
{
  int v0; // r4
  unsigned int *v1; // r0
  unsigned int v2; // r3
  int v3; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r3
  int v11; // r0
  bool v12; // zf
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r0
  pthread_mutex_t *v20; // r0

  sub_10CFF4();
  __pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]);
  if ( byte_1225B8 )
  {
    v0 = 0;
    do
    {
      while ( 1 )
      {
        v1 = (unsigned int *)dword_1225BC[3 * v0 + 2];
        v2 = *(unsigned int *)(v1[8] | (v1[9] << 8) | (v1[0xA] << 0x10) | (v1[0xB] << 0x18));
        if ( (v2 & 3) == 2 )
          break;
        sub_111164(*((unsigned int *)dword_11C314 + (v2 >> 2)), v1, 1);
        v0 = (unsigned int)(v0 + 1);
        if ( (unsigned int)byte_1225B8 <= (unsigned int)(unsigned int)v0 )
          goto LABEL_6;
      }
      lost_sub_can_edian(v1);
      v0 = (unsigned int)(v0 + 1);
    }
    while ( (unsigned int)byte_1225B8 > (unsigned int)(unsigned int)v0 );
  }
LABEL_6:
  byte_1231B4 = 0;
  word_1231BE = 8;
  byte_1231B5 = 0;
  byte_1231B6 = 0;
  word_1231C0 = 0;
  v3 = sub_106EB0(0);
  word_1231BC = 0;
  if ( v3 )
    v4 = 1;
  if ( v3 )
    word_1231B8 = v4;
  if ( !v3 )
    word_1231B8 = 0;
  word_1231CC = 8;
  word_1231BA = 0;
  byte_1231C4 = 0;
  byte_1231C2 = 0;
  byte_1231C3 = 0;
  word_1231CE = 0;
  v5 = sub_106EB0(4u);
  word_1231CA = 0;
  if ( v5 )
    v6 = 2;
  if ( v5 )
    word_1231C6 = v6;
  if ( !v5 )
    word_1231C6 = 0;
  word_1231DC = 0;
  byte_1231D2 = 0;
  word_1231C8 = 0;
  byte_1231D0 = 0;
  byte_1231D1 = 0;
  word_1231DA = 8;
  v7 = sub_106EB0(8u);
  v8 = v7 == 0;
  if ( v7 )
  {
    word_1231D4 = 3;
    LOWORD(v7) = *(_WORD *)(v7 + 0xA);
  }
  else
  {
    word_1231D8 = 0;
  }
  if ( v8 )
    word_1231D4 = v7;
  else
    word_1231D8 = v7;
  word_1231E8 = 8;
  word_1231D6 = 0;
  byte_1231E0 = 0;
  byte_1231DE = 0;
  byte_1231DF = 0;
  word_1231EA = 0;
  v9 = sub_106EB0(0x18u);
  word_1231E6 = 0;
  if ( v9 )
    v10 = 4;
  if ( v9 )
    word_1231E2 = v10;
  if ( !v9 )
    word_1231E2 = 0;
  word_1231F8 = 0;
  byte_1231EE = 0;
  word_1231E4 = 0;
  byte_1231EC = 0;
  byte_1231ED = 0;
  word_1231F6 = 8;
  v11 = sub_106EB0(0x1Cu);
  v12 = v11 == 0;
  if ( v11 )
  {
    word_1231F0 = 5;
    LOWORD(v11) = *(_WORD *)(v11 + 0xA);
  }
  else
  {
    word_1231F4 = 0;
  }
  if ( v12 )
    word_1231F0 = v11;
  else
    word_1231F4 = v11;
  word_123204 = 8;
  word_1231F2 = 0;
  byte_1231FC = 0;
  byte_1231FA = 0;
  byte_1231FB = 0;
  word_123206 = 0;
  v13 = sub_106EB0(0x21u);
  word_123202 = 0;
  if ( v13 )
    v14 = 6;
  if ( v13 )
    word_1231FE = v14;
  if ( !v13 )
    word_1231FE = 0;
  word_123212 = 8;
  word_123200 = 0;
  byte_12320A = 0;
  byte_123208 = 0;
  byte_123209 = 0;
  word_123214 = 0;
  v15 = sub_106EB0(0x22u);
  word_123210 = 0;
  if ( v15 )
    v16 = 7;
  if ( v15 )
    word_12320C = v16;
  if ( !v15 )
    word_12320C = 0;
  word_123220 = 8;
  word_12320E = 0;
  byte_123218 = 0;
  byte_123216 = 0;
  byte_123217 = 0;
  word_123222 = 0;
  v17 = sub_106EB0(0x26u);
  word_12321E = 0;
  if ( v17 )
    v18 = 8;
  if ( v17 )
    word_12321A = v18;
  if ( !v17 )
    word_12321A = 0;
  word_12322E = 8;
  word_12321C = 0;
  byte_123226 = 0;
  byte_123224 = 0;
  byte_123225 = 0;
  word_123230 = 0;
  v19 = sub_106EB0(0x3Fu);
  if ( v19 )
    word_123228 = 9;
  else
    word_12322C = 0;
  dword_1225B0 = 0;
  if ( v19 )
    word_12322C = 0;
  else
    word_123228 = 0;
  word_12322A = 0;
  v20 = *(pthread_mutex_t **)_mutexList[0];
  byte_1225B8 = 0;
  dword_1225B4 = 0;
  return _pthread_mutex_unlock(v20);
}


//----- (0011152C) --------------------------------------------------------
int sub_11152C()
{
  int v0; // r0
  int v1; // r0
  
  int v2; // r2
  int v3; // r0
  bool v4; // zf
  int v5; // r0
  int v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r3
  int result; // r0
  int v16; // r3

  nullsub_2();
  byte_123240 = 1;
  word_1231BE = 8;
  word_1231C0 = 0;
  dword_1225AC = 1;
  byte_1231B4[0] = 0;
  byte_1231B5 = 0;
  byte_1231B6 = 0;
  v0 = sub_106EB0(0);
  word_1231BC = 0;
  if ( !v0 )
    word_1231B8 = 0;
  if ( v0 )
    word_1231B8 = 1;
  word_1231CC = 8;
  word_1231BA = 0;
  byte_1231C4 = 0;
  byte_1231C2 = 0;
  byte_1231C3 = 0;
  word_1231CE = 0;
  v1 = sub_106EB0(4u);
  word_1231CA = 0;
  if ( v1 )
    v2 = 2;
  if ( v1 )
    word_1231C6 = v2;
  if ( !v1 )
    word_1231C6 = 0;
  word_1231DC = 0;
  byte_1231D2 = 0;
  word_1231C8 = 0;
  byte_1231D0 = 0;
  byte_1231D1 = 0;
  word_1231DA = 8;
  v3 = sub_106EB0(8u);
  v4 = v3 == 0;
  if ( v3 )
  {
    word_1231D4 = 3;
    LOWORD(v3) = *(_WORD *)(v3 + 0xA);
  }
  else
  {
    word_1231D8 = 0;
  }
  if ( v4 )
    word_1231D4 = v3;
  else
    word_1231D8 = v3;
  word_1231E8 = 8;
  word_1231D6 = 0;
  byte_1231E0 = 0;
  byte_1231DE = 0;
  byte_1231DF = 0;
  word_1231EA = 0;
  v5 = sub_106EB0(0x18u);
  word_1231E6 = 0;
  if ( v5 )
    v6 = 4;
  if ( v5 )
    word_1231E2 = v6;
  if ( !v5 )
    word_1231E2 = 0;
  word_1231F8 = 0;
  byte_1231EE = 0;
  word_1231E4 = 0;
  byte_1231EC = 0;
  byte_1231ED = 0;
  word_1231F6 = 8;
  v7 = sub_106EB0(0x1Cu);
  v8 = v7 == 0;
  if ( v7 )
  {
    word_1231F0 = 5;
    LOWORD(v7) = *(_WORD *)(v7 + 0xA);
  }
  else
  {
    word_1231F4 = 0;
  }
  if ( v8 )
    word_1231F0 = v7;
  else
    word_1231F4 = v7;
  word_123204 = 8;
  word_1231F2 = 0;
  byte_1231FC = 0;
  byte_1231FA = 0;
  byte_1231FB = 0;
  word_123206 = 0;
  v9 = sub_106EB0(0x21u);
  word_123202 = 0;
  if ( v9 )
    v10 = 6;
  if ( v9 )
    word_1231FE = v10;
  if ( !v9 )
    word_1231FE = 0;
  word_123212 = 8;
  word_123200 = 0;
  byte_12320A = 0;
  byte_123208 = 0;
  byte_123209 = 0;
  word_123214 = 0;
  v11 = sub_106EB0(0x22u);
  word_123210 = 0;
  if ( v11 )
    v12 = 7;
  if ( v11 )
    word_12320C = v12;
  if ( !v11 )
    word_12320C = 0;
  word_123220 = 8;
  word_12320E = 0;
  byte_123218 = 0;
  byte_123216 = 0;
  byte_123217 = 0;
  word_123222 = 0;
  v13 = sub_106EB0(0x26u);
  word_12321E = 0;
  if ( v13 )
    v14 = 8;
  if ( v13 )
    word_12321A = v14;
  if ( !v13 )
    word_12321A = 0;
  word_12322E = 8;
  word_12321C = 0;
  byte_123226 = 0;
  byte_123224 = 0;
  byte_123225 = 0;
  word_123230 = 0;
  result = sub_106EB0(0x3Fu);
  if ( result )
    v16 = 9;
  else
    word_12322C = 0;
  if ( result )
    word_123228 = v16;
  else
    word_123228 = 0;
  if ( result )
    word_12322C = 0;
  word_12322A = 0;
  byte_1225B8 = 0;
  dword_1225B0 = 0;
  dword_1225B4 = 0;
  return result;
}
// 1115D0: variable 'v2' is possibly undefined
// 11165C: variable 'v6' is possibly undefined
// 1116E8: variable 'v10' is possibly undefined
// 11172C: variable 'v12' is possibly undefined
// 111770: variable 'v14' is possibly undefined
// 1117B8: variable 'v16' is possibly undefined
// 116D68: using guessed type int nullsub_2(void);
// 1225AC: using guessed type int dword_1225AC;
// 1225B0: using guessed type int dword_1225B0;
// 1225B4: using guessed type int dword_1225B4;
// 1225B8: using guessed type char byte_1225B8;
// 1231B5: using guessed type char byte_1231B5;
// 1231B6: using guessed type char byte_1231B6;
// 1231B8: using guessed type int word_1231B8;
// 1231BA: using guessed type int word_1231BA;
// 1231BC: using guessed type int word_1231BC;
// 1231BE: using guessed type int word_1231BE;
// 1231C0: using guessed type int word_1231C0;
// 1231C2: using guessed type char byte_1231C2;
// 1231C3: using guessed type char byte_1231C3;
// 1231C4: using guessed type char byte_1231C4;
// 1231C6: using guessed type int word_1231C6;
// 1231C8: using guessed type int word_1231C8;
// 1231CA: using guessed type int word_1231CA;
// 1231CC: using guessed type int word_1231CC;
// 1231CE: using guessed type int word_1231CE;
// 1231D0: using guessed type char byte_1231D0;
// 1231D1: using guessed type char byte_1231D1;
// 1231D2: using guessed type char byte_1231D2;
// 1231D4: using guessed type int word_1231D4;
// 1231D6: using guessed type int word_1231D6;
// 1231D8: using guessed type int word_1231D8;
// 1231DA: using guessed type int word_1231DA;
// 1231DC: using guessed type int word_1231DC;
// 1231DE: using guessed type char byte_1231DE;
// 1231DF: using guessed type char byte_1231DF;
// 1231E0: using guessed type char byte_1231E0;
// 1231E2: using guessed type int word_1231E2;
// 1231E4: using guessed type int word_1231E4;
// 1231E6: using guessed type int word_1231E6;
// 1231E8: using guessed type int word_1231E8;
// 1231EA: using guessed type int word_1231EA;
// 1231EC: using guessed type char byte_1231EC;
// 1231ED: using guessed type char byte_1231ED;
// 1231EE: using guessed type char byte_1231EE;
// 1231F0: using guessed type int word_1231F0;
// 1231F2: using guessed type int word_1231F2;
// 1231F4: using guessed type int word_1231F4;
// 1231F6: using guessed type int word_1231F6;
// 1231F8: using guessed type int word_1231F8;
// 1231FA: using guessed type char byte_1231FA;
// 1231FB: using guessed type char byte_1231FB;
// 1231FC: using guessed type char byte_1231FC;
// 1231FE: using guessed type int word_1231FE;
// 123200: using guessed type int word_123200;
// 123202: using guessed type int word_123202;
// 123204: using guessed type int word_123204;
// 123206: using guessed type int word_123206;
// 123208: using guessed type char byte_123208;
// 123209: using guessed type char byte_123209;
// 12320A: using guessed type char byte_12320A;
// 12320C: using guessed type int word_12320C;
// 12320E: using guessed type int word_12320E;
// 123210: using guessed type int word_123210;
// 123212: using guessed type int word_123212;
// 123214: using guessed type int word_123214;
// 123216: using guessed type char byte_123216;
// 123217: using guessed type char byte_123217;
// 123218: using guessed type char byte_123218;
// 12321A: using guessed type int word_12321A;
// 12321C: using guessed type int word_12321C;
// 12321E: using guessed type int word_12321E;
// 123220: using guessed type int word_123220;
// 123222: using guessed type int word_123222;
// 123224: using guessed type char byte_123224;
// 123225: using guessed type char byte_123225;
// 123226: using guessed type char byte_123226;
// 123228: using guessed type int word_123228;
// 12322A: using guessed type int word_12322A;
// 12322C: using guessed type int word_12322C;
// 12322E: using guessed type int word_12322E;
// 123230: using guessed type int word_123230;
// 123240: using guessed type char byte_123240;

//----- (001117FC) --------------------------------------------------------
int sub_1117FC()
{
  Elf32_Dyn **v0; // r4
  unsigned int *i; // r1
  unsigned int v2; // r5
  unsigned int v3; // r2
  unsigned int v4; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r11
  int v8; // r0
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  int v11; // r3
  int v12; // r5
  bool v13; // zf
  unsigned int *ii; // r5
  int v15; // r0
  unsigned int *v16; // r7
  unsigned int v17; // r11
  unsigned int v18; // r9
  unsigned int v19; // r6
  bool v20; // zf
  unsigned int v21; // r11
  int v22; // r12
  int v23; // lr
  unsigned int v24; // r6
  Elf32_Dyn **v25; // r2
  Elf32_Dyn **v26; // r8
  Elf32_Dyn **v27; // r7
  char *v28; // r10
  Elf32_Dyn **v29; // lr
  unsigned int *v30; // r4
  unsigned int *v31; // r2
  unsigned int v32; // r1
  int v33; // r5
  int v34; // r1
  bool v35; // zf
  Elf32_Dyn *v36; // r0
  Elf32_Dyn **v37; // r1
  int v38; // r12
  int v39; // r12
  unsigned int *v40; // r1
  int v41; // r5
  unsigned int *v42; // r7
  unsigned int *v43; // r6
  Elf32_Dyn **v44; // r11
  unsigned int v45; // r3
  int v46; // r0
  int v47; // r3
  unsigned int v48; // r0
  unsigned int *v49; // r0
  int v50; // r3
  unsigned int *v51; // r8
  _BYTE *v52; // r10
  int v53; // r1
  bool v54; // zf
  bool v55; // zf
  unsigned int v56; // r8
  int v58; // r12
  _WORD *v59; // r2
  unsigned int v60; // r3
  int v61; // lr
  int v62; // r1
  unsigned int v63; // r1
  unsigned int v64; // r1
  int v65; // r3
  int v66; // r0
  int v67; // r2
  unsigned int v68; // r9
  unsigned int v69; // lr
  unsigned int v70; // r9
  unsigned int *v71; // r4
  unsigned int v72; // r0
  _DWORD *v73; // r5
  unsigned int v74; // r3
  _BOOL4 v75; // r1
  int v76; // r0
  int v77; // r12
  Elf32_Dyn **v78; // r1
  unsigned int jj; // r3
  unsigned int v80; // r1
  Elf32_Dyn *v81; // r0
  Elf32_Dyn **v82; // r2
  int v83; // r1
  Elf32_Dyn **v84; // r1
  pthread_mutex_t *d_tag; // r0
  int v86; // r6
  char v87; // r11
  int v88; // r7
  unsigned int *v89; // r0
  unsigned int *v90; // r9
  int v91; // r2
  char v92; // r1
  char v93; // lr
  unsigned int j; // r3
  unsigned int v95; // r2
  int v96; // r0
  _DWORD *v97; // r1
  int v98; // r2
  _DWORD *v99; // r2
  unsigned int k; // r3
  unsigned int v101; // r2
  int v102; // r0
  _DWORD *v103; // r1
  int v104; // r2
  _DWORD *v105; // r2
  unsigned int m; // r3
  unsigned int v107; // r2
  int v108; // r0
  _DWORD *v109; // r1
  int v110; // r2
  _DWORD *v111; // r2
  int v112; // r2
  int v113; // r0
  int v114; // r0
  unsigned int *v115; // r1
  _BYTE *v116; // r1
  unsigned int v117; // r7
  int v118; // r3
  unsigned int v119; // r2
  int v120; // r2
  unsigned int v121; // r7
  int v122; // r3
  unsigned int v123; // r2
  int v124; // r2
  unsigned int v125; // r7
  int v126; // r3
  unsigned int v127; // r2
  int v128; // r2
  unsigned int v129; // r7
  int v130; // r3
  unsigned int v131; // r2
  int v132; // r2
  unsigned int v133; // r7
  int v134; // r3
  unsigned int v135; // r2
  int v136; // r2
  unsigned int v137; // r7
  int v138; // r3
  unsigned int v139; // r2
  int v140; // r2
  unsigned int v141; // r5
  int v142; // r3
  unsigned int v143; // r2
  int v144; // r2
  unsigned int v145; // r6
  int v146; // r7
  unsigned int *v147; // r0
  unsigned int *v148; // r8
  int v149; // r3
  char v150; // r12
  int v151; // r0
  int v152; // r0
  unsigned int v153; // r10
  Elf32_Dyn *v154; // r2
  unsigned int v155; // r3
  unsigned int n; // r3
  unsigned int v157; // r2
  int v158; // r0
  _DWORD *v159; // r1
  int v160; // r2
  _DWORD *v161; // r2
  pthread_mutex_t *v162; // r0
  int v163; // r3
  int v164; // r2
  int v165; // r1
  unsigned int *v166; // r0
  unsigned int *v167; // r7
  _BYTE *v168; // r1
  int v169; // r7
  unsigned int *v170; // r0
  unsigned int *v171; // r9
  _BYTE *v172; // r3
  unsigned int v173; // r8
  int v174; // r10
  unsigned int *v175; // r0
  unsigned int *v176; // r9
  int v177; // lr
  char v178; // r2
  int v179; // r0
  int v180; // r0
  unsigned int v181; // r8
  int v182; // r10
  unsigned int *v183; // r0
  unsigned int *v184; // r9
  int v185; // lr
  char v186; // r2
  int v187; // r0
  int v188; // r0
  unsigned int v189; // r8
  int v190; // r10
  unsigned int *v191; // r0
  unsigned int *v192; // r9
  int v193; // lr
  char v194; // r2
  int v195; // r0
  int v196; // r0
  unsigned int v197; // r8
  int v198; // r10
  unsigned int *v199; // r0
  unsigned int *v200; // r9
  int v201; // lr
  char v202; // r2
  int v203; // r0
  int v204; // r0
  unsigned int v205; // r8
  int v206; // r10
  unsigned int *v207; // r0
  unsigned int *v208; // r9
  int v209; // lr
  char v210; // r2
  int v211; // r0
  int v212; // r0
  unsigned int v213; // r8
  int v214; // r10
  unsigned int *v215; // r0
  unsigned int *v216; // r9
  int v217; // lr
  char v218; // r2
  int v219; // r0
  int v220; // r0
  char v221; // r0
  _DWORD *v222; // r1
  int v223; // r11
  unsigned int v224; // r3
  bool v225; // cf
  char v226; // r0
  unsigned int v227; // r9
  unsigned int *v228; // r4
  int v229; // r2
  _DWORD *v230; // r1
  unsigned int v231; // r3
  _BOOL4 v232; // r11
  int v233; // r3
  bool v234; // zf
  char v235; // r0
  int v236; // r3
  bool v237; // zf
  int v238; // r3
  int v239; // r3
  int v240; // r2
  int v241; // r1
  unsigned int v242; // r0
  _DWORD *v243; // r4
  unsigned int v244; // r3
  bool v245; // cf
  char v246; // r0
  int v247; // r0
  int v248; // [sp+20h] [bp-58h]
  int v249; // [sp+20h] [bp-58h]
  int v250; // [sp+20h] [bp-58h]
  int v251; // [sp+20h] [bp-58h]
  int v252; // [sp+24h] [bp-54h]
  unsigned int v253; // [sp+24h] [bp-54h]
  char v254; // [sp+24h] [bp-54h]
  char v255; // [sp+24h] [bp-54h]
  _DWORD *v256; // [sp+30h] [bp-48h]
  unsigned int v257; // [sp+30h] [bp-48h]
  unsigned int v258; // [sp+34h] [bp-44h]
  _BYTE *v259; // [sp+34h] [bp-44h]
  char v260; // [sp+34h] [bp-44h]
  char *v261; // [sp+38h] [bp-40h]
  char *v262; // [sp+3Ch] [bp-3Ch]
  const char *v263; // [sp+40h] [bp-38h]
  char *v264; // [sp+40h] [bp-38h]
  int v265; // [sp+40h] [bp-38h]
  Elf32_Dyn **v266; // [sp+40h] [bp-38h]
  Elf32_Dyn **v267; // [sp+40h] [bp-38h]
  unsigned int *v268; // [sp+40h] [bp-38h]
  int v269; // [sp+44h] [bp-34h]
  unsigned int *v270; // [sp+44h] [bp-34h]
  Elf32_Dyn **v271; // [sp+44h] [bp-34h]
  int v272; // [sp+48h] [bp-30h]
  int v273; // [sp+4Ch] [bp-2Ch]

  v0 = &GLOBAL_OFFSET_TABLE_;
  if ( byte_123240 )
  {
    byte_123240 = 0;
    sub_116D84();
  }
  switch ( dword_1225B4 )
  {
    case 1:
      sub_1096AC(dword_1225A8);
      dword_1225B4 = 2;
      break;
    case 2:
      if ( sub_109750() )
      {
        sub_1111A8();
        sub_10A08C();
        dword_1225AC = 2;
      }
      break;
    case 3:
      sub_1096AC(dword_1225A8);
      dword_1225B4 = 4;
      i = (unsigned int *)sub_10CBD0();
      if ( !i )
        goto LABEL_31;
      goto LABEL_8;
    case 4:
      if ( sub_109750() )
      {
        sub_1111A8();
        dword_1225AC = 2;
      }
      break;
    case 5:
      sub_1111A8();
      if ( sub_109788() )
      {
        sub_10A08C();
        dword_1225AC = 2;
      }
      else
      {
        dword_1225B4 = 6;
      }
      break;
    case 6:
      if ( sub_109788() )
      {
        sub_10A08C();
        dword_1225B4 = 0;
        dword_1225AC = 2;
      }
      break;
    case 7:
      sub_1111A8();
      if ( !sub_109720() )
        goto LABEL_6;
      dword_1225B4 = 8;
      break;
    case 8:
      if ( sub_109720() )
        break;
      dword_1225B4 = 0;
LABEL_6:
      dword_1225AC = 2;
      break;
    default:
      break;
  }
  for ( i = (unsigned int *)sub_10CBD0(); i; i = (unsigned int *)sub_10CBD0() )
  {
LABEL_8:
    if ( !byte_1225B8 || i == (unsigned int *)dword_1225C4 )
    {
      v2 = 0;
    }
    else
    {
      LOBYTE(v2) = 0;
      do
        v2 = (unsigned int)(v2 + 1);
      while ( (unsigned int)byte_1225B8 > v2 && i != (unsigned int *)dword_1225BC[3 * v2 + 2] );
    }
    if ( (unsigned int)byte_1225B8 <= v2 )
      continue;
    v3 = *(unsigned int *)(i[8] | (i[9] << 8) | (i[0xA] << 0x10) | (i[0xB] << 0x18));
    v4 = v3 >> 2;
    v5 = *((unsigned int *)dword_11C314 + (v3 >> 2));
    if ( v5 == 9 )
    {
      lost_sub_can_edian(i);
      if ( !__pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]) )
      {
        for ( j = (unsigned int)(v2 + 1); j < (unsigned int)byte_1225B8; v99[2] = v97[2] )
        {
          v95 = j - 1;
          v96 = dword_1225BC[3 * j];
          v97 = &dword_1225BC[3 * j];
          j = (unsigned int)(j + 1);
          v98 = 3 * v95;
          dword_1225BC[v98] = v96;
          v99 = &dword_1225BC[v98];
          *((_WORD *)v99 + 2) = *((_WORD *)v97 + 2);
          *((_WORD *)v99 + 3) = *((_WORD *)v97 + 3);
        }
        goto LABEL_276;
      }
    }
    else
    {
      v6 = v3 & 3;
      if ( v6 == 2 )
      {
        *(_WORD *)&byte_1231B4[0xE * v5 + 0xC] += i[4] | (i[5] << 8);
        lost_sub_can_edian(i);
        if ( !__pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]) )
        {
          for ( k = (unsigned int)(v2 + 1); k < (unsigned int)byte_1225B8; v105[2] = v103[2] )
          {
            v101 = k - 1;
            v102 = dword_1225BC[3 * k];
            v103 = &dword_1225BC[3 * k];
            k = (unsigned int)(k + 1);
            v104 = 3 * v101;
            dword_1225BC[v104] = v102;
            v105 = &dword_1225BC[v104];
            *((_WORD *)v105 + 2) = *((_WORD *)v103 + 2);
            *((_WORD *)v105 + 3) = *((_WORD *)v103 + 3);
          }
          goto LABEL_276;
        }
      }
      else if ( v6 == 1 )
      {
        *(_WORD *)&byte_1231B4[0xE * v5 + 0xC] += i[4] | (i[5] << 8);
        sub_111164(v5, i, 0);
        if ( !__pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]) )
        {
          for ( m = (unsigned int)(v2 + 1); m < (unsigned int)byte_1225B8; v111[2] = v109[2] )
          {
            v107 = m - 1;
            v108 = dword_1225BC[3 * m];
            v109 = &dword_1225BC[3 * m];
            m = (unsigned int)(m + 1);
            v110 = 3 * v107;
            dword_1225BC[v110] = v108;
            v111 = &dword_1225BC[v110];
            *((_WORD *)v111 + 2) = *((_WORD *)v109 + 2);
            *((_WORD *)v111 + 3) = *((_WORD *)v109 + 3);
          }
          goto LABEL_276;
        }
      }
      else if ( v6 )
      {
        *(_WORD *)&byte_1231B4[0xE * v5 + 0xC] += i[4] | (i[5] << 8);
      }
      else
      {
        v7 = dword_1225BC[3 * v2];
        v256 = &dword_1225BC[3 * v2];
        v258 = *(unsigned int *)&byte_1231B4[0xE * v5 + 0xC];
        *(_WORD *)&byte_1231B4[0xE * v5 + 0xC] = (i[4] | (i[5] << 8)) + v258;
        if ( v7 != 5 )
        {
          v8 = sub_106EB0(v4);
          v12 = 3 * v2;
          v13 = v8 == 0;
          if ( v8 )
            v11 = *(_WORD *)(v8 + 8);
          else
            LOWORD(v8) = 2;
          if ( v13 )
          {
            v9 = v256;
          }
          else
          {
            v10 = v256;
            v11 += 2;
          }
          if ( v13 )
            *((_WORD *)v9 + 2) = v8;
          else
            *((_WORD *)v10 + 2) = v11;
          dword_1225BC[v12] = 4;
          continue;
        }
        sub_111164(v5, i, 0);
        if ( !__pthread_mutex_lock(*(pthread_mutex_t **)_mutexList[0]) )
        {
          for ( n = (unsigned int)(v2 + 1); n < (unsigned int)byte_1225B8; v161[2] = v159[2] )
          {
            v157 = n - 1;
            v158 = dword_1225BC[3 * n];
            v159 = &dword_1225BC[3 * n];
            n = (unsigned int)(n + 1);
            v160 = 3 * v157;
            dword_1225BC[v160] = v158;
            v161 = &dword_1225BC[v160];
            *((_WORD *)v161 + 2) = *((_WORD *)v159 + 2);
            *((_WORD *)v161 + 3) = *((_WORD *)v159 + 3);
          }
LABEL_276:
          v162 = *(pthread_mutex_t **)_mutexList[0];
          --byte_1225B8;
          _pthread_mutex_unlock(v162);
        }
      }
    }
  }
LABEL_31:
  dword_1231B0 = 0;
  for ( ii = sub_10CE60(); ii; ii = sub_10CE60() )
  {
    v15 = sub_109690();
    v16 = (unsigned int *)(ii[8] | (ii[9] << 8) | (ii[0xA] << 0x10) | (ii[0xB] << 0x18));
    if ( !v16 )
      goto LABEL_47;
    v17 = *v16;
    v18 = v17 >> 2;
    v19 = *((unsigned int *)dword_11C314 + (v17 >> 2));
    if ( v19 > 8 )
      goto LABEL_47;
    v20 = v15 == 1;
    if ( v15 != 1 )
      v20 = v19 == 0;
    if ( !v20 )
      goto LABEL_47;
    v21 = v17 & 3;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        sub_110FF4((unsigned int *)v19, ii);
        continue;
      }
      if ( v21 != 2 )
        goto LABEL_47;
      v58 = 0x10 * v19;
      v249 = 2 * v19;
      v59 = (_WORD *)v0 + 7 * v19 + 0x224A;
      v60 = (_BYTE)v0 - 0x6C + 0xE * v19 + 8;
      v61 = v59[5];
      v62 = v59[6];
      v59[4] = v16[2] | (v16[3] << 8);
      v59[6] = 0;
      v59[5] = v61 - v62;
      v63 = v16[1];
      if ( (v63 & 1) != 0 )
        goto LABEL_47;
      v64 = v63 >> 1;
      if ( v64 )
      {
        v60 = v64 - 1;
      }
      else
      {
        v21 = 0x7F;
        v258 = 0x7F;
      }
      if ( v64 )
      {
        v258 = v60;
        v21 = v60;
      }
      v253 = *((unsigned int *)v0 + v58 - v249 + 0x4495);
      if ( v21 >= v253 )
      {
        v65 = 1;
        v68 = 0;
        v273 = 2;
        v66 = 1;
        v269 = 1;
        v67 = 0;
        v265 = 0;
        v272 = 3;
      }
      else
      {
        v65 = 0;
        v66 = 0;
        v272 = 7;
        v67 = 4;
        v68 = 1;
        v269 = 5;
        v265 = 1;
        v273 = 6;
      }
      v69 = *((unsigned int *)v0 + v58 - v249 + 0x4496);
      if ( v253 <= v69 )
        v66 = 0;
      else
        v65 = 0;
      if ( v253 <= v69 )
      {
        v265 = v66;
      }
      else
      {
        v67 = v272;
        v68 = v65;
      }
      if ( v253 > v69 )
      {
        v269 = v67;
        v67 = v273;
      }
      if ( v258 >= v69 )
        v65 = v66;
      if ( v258 >= v69 )
      {
        v67 = v269;
        v68 = v265;
      }
      if ( v67 == 6 )
      {
        if ( *((_BYTE *)v0 + 0x3898) )
        {
          v267 = v0;
          v227 = 0;
          v228 = (unsigned int *)(v0 + 0xE26);
          do
          {
            v229 = 0xC * v227;
            v230 = &dword_1225BC[3 * v227];
            if ( *v16 >> 2 == *(unsigned int *)(*(unsigned int *)(v230[2] + 8) | (*(unsigned int *)(v230[2] + 9) << 8) | (*(unsigned int *)(v230[2] + 0xA) << 0x10) | (*(unsigned int *)(v230[2] + 0xB) << 0x18)) >> 2 )
            {
              v231 = *(unsigned int *)((*(unsigned int *)(v230[2] + 8) | (*(unsigned int *)(v230[2] + 9) << 8) | (*(unsigned int *)(v230[2] + 0xA) << 0x10) | (*(unsigned int *)(v230[2] + 0xB) << 0x18))
                                        + 1) >> 1;
              v232 = v258 < v231;
              if ( v253 <= v231 )
                v232 = 0;
              if ( v232 )
              {
                if ( dword_1225BC[3 * v227] == 4 )
                {
                  v233 = *((unsigned int *)v230 + 3);
                  v234 = v233 == 0;
                  if ( *((_WORD *)v230 + 3) )
                  {
                    dword_1225BC[3 * v227] = 1;
                    LOWORD(v233) = *((_WORD *)v230 + 3);
                  }
                  else
                  {
                    dword_1225BC[3 * v227] = 6;
                    v229 = 0x7D0;
                  }
                  if ( v234 )
                    *((_WORD *)v230 + 2) = v229;
                  else
                    LOWORD(v233) = v233 - 1;
                  if ( !v234 )
                    *((_WORD *)v230 + 3) = v233;
                }
              }
              else if ( dword_1225BC[3 * v227] == 2 || dword_1225BC[3 * v227] == 3 )
              {
                dword_1225BC[3 * v227] = 5;
              }
              else if ( dword_1225BC[3 * v227] == 4 || dword_1225BC[3 * v227] == 1 || dword_1225BC[3 * v227] == 6 )
              {
                sub_111164(v19, (unsigned int *)dword_1225BC[3 * v227 + 2], 0);
                v235 = v227;
                LOBYTE(v227) = v227 - 1;
                sub_110F2C(v235);
              }
            }
            v227 = (unsigned int)(v227 + 1);
          }
          while ( *v228 > v227 );
          v0 = v267;
          v58 = 0x10 * v19;
          v64 = v16[1] >> 1;
        }
      }
      else if ( v68 )
      {
        if ( *((_BYTE *)v0 + 0x3898) )
        {
          v266 = v0;
          v70 = 0;
          v270 = ii;
          v71 = (unsigned int *)(v0 + 0xE26);
          do
          {
            v72 = *v16;
            v73 = &dword_1225BC[3 * v70];
            if ( v72 >> 2 == *(unsigned int *)(*(unsigned int *)(v73[2] + 8) | (*(unsigned int *)(v73[2] + 9) << 8) | (*(unsigned int *)(v73[2] + 0xA) << 0x10) | (*(unsigned int *)(v73[2] + 0xB) << 0x18)) >> 2 )
            {
              v74 = *(unsigned int *)((*(unsigned int *)(v73[2] + 8) | (*(unsigned int *)(v73[2] + 9) << 8) | (*(unsigned int *)(v73[2] + 0xA) << 0x10) | (*(unsigned int *)(v73[2] + 0xB) << 0x18))
                                       + 1) >> 1;
              v75 = v258 < v74;
              if ( v253 <= v74 )
                v75 = 0;
              if ( v75 )
              {
                if ( dword_1225BC[3 * v70] == 4 )
                {
                  v76 = sub_106EB0(v72 >> 2);
                  if ( v76 )
                    *((_WORD *)v73 + 2) = *(_WORD *)(v76 + 8) + 2;
                  else
                    *((_WORD *)v73 + 2) = 2;
                }
              }
              else if ( dword_1225BC[3 * v70] == 2 || dword_1225BC[3 * v70] == 3 )
              {
                dword_1225BC[3 * v70] = 5;
              }
              else if ( dword_1225BC[3 * v70] == 4 || dword_1225BC[3 * v70] == 1 || dword_1225BC[3 * v70] == 6 )
              {
                sub_111164(v19, (unsigned int *)dword_1225BC[3 * v70 + 2], 0);
                v221 = v70;
                LOBYTE(v70) = v70 - 1;
                sub_110F2C(v221);
              }
            }
            v70 = (unsigned int)(v70 + 1);
          }
          while ( *v71 > v70 );
          v0 = v266;
          ii = v270;
          *((_BYTE *)v266 + 0xE * v19 + 0x4496) = v16[1] >> 1;
          goto LABEL_47;
        }
      }
      else if ( v67 == 1 )
      {
        if ( *((_BYTE *)v0 + 0x3898) )
        {
          v268 = (unsigned int *)(v0 + 0xE26);
          v271 = v0;
          do
          {
            v242 = *v16;
            v243 = &dword_1225BC[3 * v68];
            if ( v242 >> 2 == *(unsigned int *)(*(unsigned int *)(v243[2] + 8) | (*(unsigned int *)(v243[2] + 9) << 8) | (*(unsigned int *)(v243[2] + 0xA) << 0x10) | (*(unsigned int *)(v243[2] + 0xB) << 0x18)) >> 2 )
            {
              v244 = *(unsigned int *)((*(unsigned int *)(v243[2] + 8) | (*(unsigned int *)(v243[2] + 9) << 8) | (*(unsigned int *)(v243[2] + 0xA) << 0x10) | (*(unsigned int *)(v243[2] + 0xB) << 0x18))
                                        + 1) >> 1;
              v245 = v244 >= v258;
              if ( v244 <= v258 )
                v245 = v253 >= v244;
              if ( v245 )
              {
                if ( dword_1225BC[3 * v68] == 4 )
                {
                  v247 = sub_106EB0(v242 >> 2);
                  if ( v247 )
                    *((_WORD *)v243 + 2) = *(_WORD *)(v247 + 8) + 2;
                  else
                    *((_WORD *)v243 + 2) = 2;
                }
              }
              else if ( dword_1225BC[3 * v68] == 2 || dword_1225BC[3 * v68] == 3 )
              {
                dword_1225BC[3 * v68] = 5;
              }
              else if ( dword_1225BC[3 * v68] == 4 || dword_1225BC[3 * v68] == 1 || dword_1225BC[3 * v68] == 6 )
              {
                sub_111164(v19, (unsigned int *)dword_1225BC[3 * v68 + 2], 0);
                v246 = v68;
                LOBYTE(v68) = v68 - 1;
                sub_110F2C(v246);
              }
            }
            v68 = (unsigned int)(v68 + 1);
          }
          while ( *v268 > v68 );
          v0 = v271;
          v58 = 0x10 * v19;
          v64 = v16[1] >> 1;
        }
      }
      else if ( v65 && *((_BYTE *)v0 + 0x3898) )
      {
        do
        {
          v222 = &dword_1225BC[3 * v68];
          if ( *v16 >> 2 == *(unsigned int *)(*(unsigned int *)(v222[2] + 8) | (*(unsigned int *)(v222[2] + 9) << 8) | (*(unsigned int *)(v222[2] + 0xA) << 0x10) | (*(unsigned int *)(v222[2] + 0xB) << 0x18)) >> 2 )
          {
            v223 = v253;
            v224 = *(unsigned int *)((*(unsigned int *)(v222[2] + 8) | (*(unsigned int *)(v222[2] + 9) << 8) | (*(unsigned int *)(v222[2] + 0xA) << 0x10) | (*(unsigned int *)(v222[2] + 0xB) << 0x18))
                                      + 1) >> 1;
            v225 = v224 >= v258;
            if ( v224 <= v258 )
              v225 = v253 >= v224;
            if ( v225 )
            {
              if ( dword_1225BC[3 * v68] == 4 )
              {
                v236 = *((unsigned int *)v222 + 3);
                v237 = v236 == 0;
                if ( *((_WORD *)v222 + 3) )
                {
                  dword_1225BC[3 * v68] = 1;
                  LOWORD(v238) = *((_WORD *)v222 + 3);
                }
                else
                {
                  v238 = v236 + 6;
                  v223 = 0x7D0;
                  dword_1225BC[3 * v68] = v238;
                }
                if ( v237 )
                  *((_WORD *)v222 + 2) = v223;
                else
                  LOWORD(v238) = v238 - 1;
                if ( !v237 )
                  *((_WORD *)v222 + 3) = v238;
              }
            }
            else if ( dword_1225BC[3 * v68] == 2 || dword_1225BC[3 * v68] == 3 )
            {
              dword_1225BC[3 * v68] = 5;
            }
            else if ( dword_1225BC[3 * v68] == 4 || dword_1225BC[3 * v68] == 1 || dword_1225BC[3 * v68] == 6 )
            {
              sub_111164(v19, (unsigned int *)dword_1225BC[3 * v68 + 2], 0);
              v226 = v68;
              LOBYTE(v68) = v68 - 1;
              sub_110F2C(v226);
            }
          }
          v68 = (unsigned int)(v68 + 1);
        }
        while ( *((unsigned int *)v0 + 0x3898) > v68 );
        v58 = 0x10 * v19;
        v64 = v16[1] >> 1;
      }
      *((_BYTE *)v0 + v58 - v249 + 0x4496) = v64;
    }
    else
    {
      v248 = 2 * v19;
      v22 = 0x10 * v19;
      v23 = *((unsigned int *)v0 + 0xE * v19 + 0x4494);
      v252 = *(unsigned int *)((ii[8] | (ii[9] << 8) | (ii[0xA] << 0x10) | (ii[0xB] << 0x18)) + 1) >> 1;
      if ( v252 == v23 )
      {
        v250 = sub_116D70(v18);
        v166 = sub_110C70(v18, 4);
        v167 = v166;
        if ( v166 )
        {
          v254 = (v252 + 1) & 0x7F;
          v168 = (_BYTE *)(v166[8] | (v166[9] << 8) | (v166[0xA] << 0x10) | (v166[0xB] << 0x18));
          v260 = v168[1];
          v168[3] = HIBYTE(v250);
          v258 = v260 & 0xFE;
          *v168 = (4 * (v18 & 0x3F)) | 2;
          v168[1] = v258 & 1 | (2 * (v254 & 0x7F));
          v168[2] = v250;
          v166[7] = 0;
          v166[4] = 4;
          v166[5] = 0;
          v166[6] = 0;
          if ( !some_check_or_CRC(v166) )
          {
            *((_BYTE *)v0 + 0xE * v19 + 0x4494) = v254;
            sub_110FF4((unsigned int *)v19, ii);
            continue;
          }
          lost_sub_can_edian(v167);
        }
      }
      else
      {
        if ( (int)v0[0x62][0x5E2].d_un.d_val < 0 )
        {
          NsLog(
            0x793,
            0x1F,
            "IpcTpTask",
            " Sequence # incorrect recived seq:%d, expecting seq:%d idx:%d",
            v252,
            v23,
            v19);
          v22 = 0x10 * v19;
        }
        if ( v19 == 4 )
        {
          if ( v0[0x1124] )
          {
            if ( (int)v0[0x62][0x5E2].d_un.d_val < 0 )
              NsLog(0x7A4, 0x1F, "IpcTpTask", (const char *)v0 + 0xFFFFD6D8, v16[1] >> 1);
          }
          else
          {
            v169 = *v16 >> 2;
            v255 = *((_BYTE *)v0 + 0x44CC);
            v251 = sub_116D70(v169);
            v170 = sub_110C70(v169, 4);
            v171 = v170;
            if ( v170 )
            {
              v172 = (_BYTE *)(v170[8] | (v170[9] << 8) | (v170[0xA] << 0x10) | (v170[0xB] << 0x18));
              v172[3] = HIBYTE(v251);
              *v172 = (4 * (v169 & 0x3F)) | 2;
              v172[1] = 2 * (v255 & 0x7F);
              v172[2] = v251;
              v170[4] = 4;
              v170[7] = 0;
              v170[5] = 0;
              v170[6] = 0;
              if ( some_check_or_CRC(v170) )
                lost_sub_can_edian(v171);
            }
          }
          v0[0x1124] = (Elf32_Dyn *)1;
        }
        else
        {
          v86 = *v16 >> 2;
          v87 = *((_BYTE *)v0 + v22 - v248 + 0x4494);
          v88 = sub_116D70(v86);
          v89 = sub_110C70(v86, 4);
          v90 = v89;
          if ( v89 )
          {
            v91 = v89[8] | (v89[9] << 8) | (v89[0xA] << 0x10) | (v89[0xB] << 0x18);
            v92 = *(_BYTE *)v91 & 0xFC | 2;
            v93 = *(_BYTE *)(v91 + 1) & 0xFE;
            *(_WORD *)(v91 + 2) = v88;
            *(_BYTE *)v91 = v92 & 3 | (4 * (v86 & 0x3F));
            *(_BYTE *)(v91 + 1) = v93 & 1 | (2 * (v87 & 0x7F));
            v89[7] = 0;
            v89[4] = 4;
            v89[5] = 0;
            v89[6] = 0;
            if ( some_check_or_CRC(v89) )
              lost_sub_can_edian(v90);
          }
        }
      }
    }
LABEL_47:
    lost_sub_can_edian(ii);
  }
  v24 = 0;
  v25 = v0 + 0x1145;
  v0[0x1149] = (Elf32_Dyn *)0xFFFFFFFF;
  v0[0x1145] = 0;
  v0[0x114A] = (Elf32_Dyn *)0xFFFFFFFF;
  v25[1] = 0;
  *((_BYTE *)v0 + 0x452C) = 0xFF;
  *((_BYTE *)v25 + 8) = 0;
  if ( !*((_BYTE *)v0 + 0x3898) )
    goto LABEL_70;
  v26 = v0;
  v262 = (char *)v0 + 0xFFFFD5B0;
  v27 = v0 + 0xE27;
  v28 = (char *)v0 + 0xFFFFD5F4;
  v263 = (char *)v0 + 0xFFFFD6F0;
  do
  {
    while ( 1 )
    {
      v29 = &v27[3 * v24];
      v30 = (unsigned int *)v29[2];
      v31 = (unsigned int *)(v30[8] | (v30[9] << 8) | (v30[0xA] << 0x10) | (v30[0xB] << 0x18));
      v32 = *v31;
      v33 = (unsigned int)v28[v32 >> 2];
      if ( v33 == 9 )
        goto LABEL_54;
      if ( !v27[3 * v24] || v27[3 * v24] == (Elf32_Dyn *)1 )
        break;
      if ( v27[3 * v24] != (Elf32_Dyn *)4 )
      {
        if ( v27[3 * v24] == (Elf32_Dyn *)6 )
        {
          if ( *((unsigned int *)v29 + 2) > 1u )
            *((_WORD *)v29 + 2) -= 2;
          else
            *((_WORD *)v29 + 2) = 0;
          if ( !LOWORD(v27[3 * v24 + 1]) )
          {
            if ( (int)v26[0x62][0x5E2].d_un.d_val < 0 )
              NsLog(0x5E8, 0x1F, v262, v263);
            sub_110BE0(1, 2);
            if ( !__pthread_mutex_lock((pthread_mutex_t *)v26[0x7C]->d_tag) )
            {
              for ( jj = (unsigned int)(v24 + 1); jj < *((unsigned int *)v26 + 0x3898); v84[2] = v82[2] )
              {
                v80 = jj - 1;
                v81 = v27[3 * jj];
                v82 = &v27[3 * jj];
                jj = (unsigned int)(jj + 1);
                v83 = 3 * v80;
                v27[v83] = v81;
                v84 = &v27[v83];
                *((_WORD *)v84 + 2) = *((_WORD *)v82 + 2);
                *((_WORD *)v84 + 3) = *((_WORD *)v82 + 3);
              }
              d_tag = (pthread_mutex_t *)v26[0x7C]->d_tag;
              --*((_BYTE *)v26 + 0x3898);
              _pthread_mutex_unlock(d_tag);
            }
            LOBYTE(v24) = v24 - 1;
            sub_111164(v33, v30, 1);
          }
        }
        goto LABEL_54;
      }
      v77 = 3 * v24;
      if ( *((unsigned int *)v29 + 2) > 1u )
        *((_WORD *)v29 + 2) -= 2;
      else
        *((_WORD *)v29 + 2) = 0;
      v78 = &v27[v77];
      if ( !LOWORD(v27[v77 + 1]) )
      {
        if ( !*((_WORD *)v78 + 3) )
        {
          v27[3 * v24] = (Elf32_Dyn *)6;
          *((_WORD *)v78 + 2) = 0x7D0;
          goto LABEL_54;
        }
        --*((_WORD *)v78 + 3);
        v113 = *((unsigned int *)v26 + v33 + 0x4524);
        v27[3 * v24] = (Elf32_Dyn *)1;
        if ( v113 == 0xFF )
          goto LABEL_212;
        v114 = 3 * v113;
        v115 = (unsigned int *)v27[v114 + 2];
        v116 = (_BYTE *)(v115[8] | (v115[9] << 8) | (v115[0xA] << 0x10) | (v115[0xB] << 0x18));
        if ( (*v116 & 3) != 2 )
        {
          if ( v27[v114] != (Elf32_Dyn *)1 )
          {
LABEL_212:
            *((_BYTE *)v26 + v33 + 0x4524) = v24;
            goto LABEL_54;
          }
          v239 = v31[1] >> 1;
          v240 = *((unsigned int *)v26 + 0xE * v33 + 0x4495);
          if ( v239 >= v240 )
          {
            v241 = (unsigned int)v116[1] >> 1;
            goto LABEL_475;
          }
          v241 = (unsigned int)v116[1] >> 1;
          if ( v240 >= v241 )
          {
LABEL_475:
            if ( v239 <= v240 || v241 >= v240 )
            {
              if ( v241 <= v239 )
                goto LABEL_54;
LABEL_376:
              *((_BYTE *)v26 + v33 + 0x4524) = v24;
              goto LABEL_54;
            }
          }
          if ( v241 < v239 )
LABEL_441:
            *((_BYTE *)v26 + v33 + 0x4524) = v24;
        }
      }
LABEL_54:
      v24 = (unsigned int)(v24 + 1);
      if ( v24 >= *((unsigned int *)v26 + 0x3898) )
        goto LABEL_69;
    }
    if ( *((unsigned int *)v26 + 7 * v33 + 0x224F) + (v30[4] | (v30[5] << 8) | (v30[6] << 0x10) | (v30[7] << 0x18)) > (unsigned int)*((unsigned int *)v26 + 7 * v33 + 0x224E) )
    {
      v34 = v32 & 3;
      v35 = v33 == 0;
      if ( v33 )
        v35 = v34 == 2;
      if ( !v35 )
      {
        v36 = v27[3 * v24];
        v37 = &v27[3 * v24];
        *((_BYTE *)v26 + v33 + 0x4514) = 1;
        if ( !v36 )
        {
          if ( *((_WORD *)v37 + 2) )
          {
            if ( *((unsigned int *)v37 + 2) > 1u )
              *((_WORD *)v37 + 2) -= 2;
            else
              *((_WORD *)v37 + 2) = 0;
            goto LABEL_54;
          }
        }
      }
    }
    v38 = *((unsigned int *)v26 + v33 + 0x4524);
    if ( v38 != 0xFF )
    {
      v39 = 3 * v38;
      v40 = (unsigned int *)v27[v39 + 2];
      if ( (*(_BYTE *)(v40[8] | (v40[9] << 8) | (v40[0xA] << 0x10) | (v40[0xB] << 0x18)) & 3) == 2 )
        goto LABEL_54;
      if ( (*v31 & 3) != 2 )
      {
        if ( v27[v39] == (Elf32_Dyn *)1 )
        {
          if ( v27[3 * v24] != (Elf32_Dyn *)1 )
            goto LABEL_54;
          v163 = v31[1] >> 1;
          v164 = *((unsigned int *)v26 + 0xE * v33 + 0x4495);
          if ( v163 < v164 )
          {
            v165 = *(unsigned int *)((v40[8] | (v40[9] << 8) | (v40[0xA] << 0x10) | (v40[0xB] << 0x18)) + 1) >> 1;
            if ( v164 < v165 )
              goto LABEL_283;
          }
          else
          {
            v165 = *(unsigned int *)((v40[8] | (v40[9] << 8) | (v40[0xA] << 0x10) | (v40[0xB] << 0x18)) + 1) >> 1;
          }
          if ( v163 > v164 && v164 > v165 )
          {
LABEL_283:
            if ( v163 > v165 )
              goto LABEL_441;
            goto LABEL_54;
          }
          if ( v163 < v165 )
            goto LABEL_376;
          goto LABEL_54;
        }
        if ( v27[3 * v24] != (Elf32_Dyn *)1
          && (*v30 | (v30[1] << 8) | (v30[2] << 0x10) | (v30[3] << 0x18)) >= (unsigned int)(*v40 | (v40[1] << 8) | (v40[2] << 0x10) | (v40[3] << 0x18)) )
        {
          goto LABEL_54;
        }
      }
    }
    *((_BYTE *)v26 + v33 + 0x4524) = v24;
    v24 = (unsigned int)(v24 + 1);
  }
  while ( v24 < *((unsigned int *)v26 + 0x3898) );
LABEL_69:
  v0 = v26;
LABEL_70:
  v41 = 0;
  v42 = 0;
  v264 = (char *)v0 + 0xFFFFD634;
  v43 = (unsigned int *)(v0 + 0x1127);
  v44 = v0 + 0xE27;
  v259 = 0;
  v261 = (char *)v0 + 0xFFFFD5D0;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !*((_BYTE *)v0 + v41 + 0x4514) )
      {
        v43[0xFFFFFFFF] = *((unsigned int *)v0 + v41 + 0x4514);
        goto LABEL_84;
      }
      v45 = v43[0xFFFFFFFF];
      if ( v43[0xFFFFFFFF] )
        goto LABEL_81;
      v46 = sub_106EB0(*(_DWORD *)&v261[4 * (unsigned int)v41]);
      if ( v46 )
        v45 = *(unsigned int *)(v46 + 0xE);
      else
        v45 = v43[0xFFFFFFFF];
      if ( v46 )
      {
        v45 = (unsigned int)(v45 + 2);
        v43[0xFFFFFFFF] = v45;
      }
      if ( v45 )
      {
LABEL_81:
        if ( v45 <= 1 )
        {
          v43[0xFFFFFFFF] = 0;
          goto LABEL_163;
        }
        v47 = (unsigned int)(v45 - 2);
        v43[0xFFFFFFFF] = v47;
        if ( !v47 )
        {
LABEL_163:
          if ( (int)v0[0x62][0x5E2].d_un.d_val < 0 )
            NsLog(0x8CE, 0x1F, v264, (const char *)v0 + 0xFFFFD704);
          sub_110BE0(1, 2);
        }
      }
LABEL_84:
      if ( !sub_10CE30() )
      {
        ++v41;
        v43 += 7;
        if ( v41 == 9 )
          goto LABEL_117;
        continue;
      }
      break;
    }
    v48 = sub_10C920((unsigned int)v261[4 * (unsigned int)v41]);
    v257 = v48;
    if ( v48 != 0xFF )
    {
      v49 = (unsigned int *)sub_10CA04(v48);
      v42 = v49;
      if ( v49 )
        v259 = (_BYTE *)(v49[8] | (v49[9] << 8) | (v49[0xA] << 0x10) | (v49[0xB] << 0x18));
    }
    v50 = *((unsigned int *)v0 + v41 + 0x4524);
    if ( v50 == 0xFF || (v51 = (unsigned int *)v44[3 * v50 + 2]) == 0 )
    {
LABEL_168:
      if ( v257 == 0xFF )
        goto LABEL_115;
      goto LABEL_102;
    }
    v52 = (_BYTE *)(v51[8] | (v51[9] << 8) | (v51[0xA] << 0x10) | (v51[0xB] << 0x18));
    if ( v43[1] + (v51[4] | (v51[5] << 8) | (v51[6] << 0x10) | (v51[7] << 0x18)) > (unsigned int)*v43 )
    {
      v53 = *v52 & 3;
      v54 = v53 == 2;
      if ( v53 != 2 )
        v54 = (unsigned int)v41 == 0;
      if ( !v54 )
      {
        if ( (int)v0[0x62][0x5E2].d_un.d_val < 0 )
          NsLog(0x97C, 0x1F, v264, (const char *)v0 + 0xFFFFD71C, *v43, *v52 & 3, v41);
        goto LABEL_168;
      }
    }
    if ( v44[3 * v50] )
    {
LABEL_99:
      if ( v257 == 0xFF )
        goto LABEL_202;
LABEL_100:
      if ( ((*v52 & 3) == 2 || (*v52 & 0xFC) == 0x10) && (*v259 & 3) != 2 && (*v259 & 0xFC) != 0x10 )
      {
        if ( !*((_BYTE *)v0 + 0x3898) || v42 == (unsigned int *)v44[2] )
        {
          v153 = 0;
        }
        else
        {
          LOBYTE(v153) = 0;
          do
            v153 = (unsigned int)(v153 + 1);
          while ( *((unsigned int *)v0 + 0x3898) > v153 && v42 != (unsigned int *)v44[3 * v153 + 2] );
        }
        if ( v153 != *((unsigned int *)v0 + 0x3898) && sub_10CAFC(v257, v51) == 1 )
        {
          v44[3 * *((unsigned int *)v0 + v41 + 0x4524)] = (Elf32_Dyn *)2;
          if ( v44[3 * v153] == (Elf32_Dyn *)5 )
          {
            sub_111164((unsigned int)v41, (unsigned int *)v44[3 * v153 + 2], 0);
            sub_110F2C(v153);
          }
          else
          {
            v154 = v44[3 * v153];
            if ( v154 == (Elf32_Dyn *)2 )
            {
              v44[3 * v153] = 0;
              LOWORD(v154) = (_WORD)v259;
              if ( (*v259 & 3) == 0 )
                *((_BYTE *)v43 + 0xFFFFFFF9) = v259[1] >> 1;
            }
            else
            {
              v44[3 * v153] = (Elf32_Dyn *)1;
            }
          }
          v155 = v43[1];
          if ( v42 )
            LOWORD(v154) = v42[4] | (v42[5] << 8);
          if ( v42 )
          {
            v155 -= (unsigned int)v154;
            v43[1] = v155;
          }
          v43[1] = (v51[4] | (v51[5] << 8)) + v155;
          sub_10CE10();
          goto LABEL_116;
        }
      }
LABEL_102:
      if ( v42 && (v42[4] | (v42[5] << 8) | (v42[6] << 0x10) | (v42[7] << 0x18)) > (unsigned int)*v43 )
      {
        v55 = (unsigned int)v41 == 0;
        if ( (_BYTE)v41 )
          v55 = (*v259 & 3) == 2;
        if ( !v55 )
        {
          if ( !*((_BYTE *)v0 + 0x3898) || v42 == (unsigned int *)v44[2] )
          {
            v56 = 0;
          }
          else
          {
            LOBYTE(v56) = 0;
            do
              v56 = (unsigned int)(v56 + 1);
            while ( *((unsigned int *)v0 + 0x3898) > v56 && v42 != (unsigned int *)v44[3 * v56 + 2] );
          }
          if ( v56 != *((unsigned int *)v0 + 0x3898) && sub_10CA3C(v257) == 1 )
          {
            if ( v44[3 * v56] == (Elf32_Dyn *)5 )
            {
              sub_111164((unsigned int)v41, (unsigned int *)v44[3 * v56 + 2], 0);
              sub_110F2C(v56);
              sub_10CE10();
              goto LABEL_116;
            }
            if ( v44[3 * v56] == (Elf32_Dyn *)2 )
            {
              v44[3 * v56] = 0;
              if ( (*v259 & 3) == 0 )
                *((_BYTE *)v43 + 0xFFFFFFF9) = v259[1] >> 1;
            }
            else
            {
              v44[3 * v56] = (Elf32_Dyn *)1;
            }
          }
        }
      }
LABEL_115:
      sub_10CE10();
      goto LABEL_116;
    }
    if ( (*v52 & 3) != 0 )
    {
      if ( (*v52 & 3) == 1 )
        v52[1] &= 1u;
      goto LABEL_99;
    }
    v52[1] = v52[1] & 1 | (2 * (*((_BYTE *)v43 + 0xFFFFFFF9) & 0x7F));
    if ( v257 != 0xFF )
      goto LABEL_100;
LABEL_202:
    if ( sub_10CD20(v51) != 1 )
      goto LABEL_115;
    v112 = *((unsigned int *)v0 + v41 + 0x4524);
    if ( v44[3 * v112] )
    {
      v44[3 * v112] = (Elf32_Dyn *)3;
    }
    else
    {
      if ( (*v52 & 3) == 0 )
        *((_BYTE *)v43 + 0xFFFFFFF9) = (*((_BYTE *)v43 + 0xFFFFFFF9) + 1) & 0x7F;
      v44[3 * v112] = (Elf32_Dyn *)2;
    }
    v43[1] += v51[4] | (v51[5] << 8);
    sub_10CE10();
LABEL_116:
    ++v41;
    v43 += 7;
    if ( v41 != 9 )
      continue;
    break;
  }
LABEL_117:
  if ( sub_109690() != 1 )
  {
    if ( sub_114778() == 1 )
      v0[0xE24] = (Elf32_Dyn *)2;
    else
      v0[0xE24] = (Elf32_Dyn *)1;
    return 0;
  }
  if ( (*(unsigned int *)((char *)v0 + 0xFFFFD740 + 4) & (unsigned int)v0[0xE24]) != 0 )
  {
    v117 = *((unsigned int *)v0 + 0xFFFFD740);
    v118 = (int)v0 + 0xE * v117 + 0x4494;
    v119 = *(unsigned int *)(v118 + 4);
    if ( *(_WORD *)(v118 + 4) )
    {
      if ( v119 <= 1 )
      {
        *(_WORD *)(v118 + 4) = 0;
      }
      else
      {
        v120 = (unsigned int)(v119 - 2);
        *(_WORD *)(v118 + 4) = v120;
        if ( v120 )
          goto LABEL_217;
      }
      if ( v117 <= 8 )
        v197 = *((unsigned int *)&v0[0xFFFFF574] + 4 * v117);
      else
        v197 = 0x40;
      v198 = sub_116D70(v197);
      v199 = sub_110C70(v197, 4);
      v200 = v199;
      if ( v199 )
      {
        v201 = v199[8] | (v199[9] << 8) | (v199[0xA] << 0x10) | (v199[0xB] << 0x18);
        v202 = *(_BYTE *)v201 & 0xFC | 2;
        *(_WORD *)(v201 + 2) = v198;
        *(_BYTE *)v201 = v202 & 3 | (4 * (v197 & 0x3F));
        *(_BYTE *)(v201 + 1) = 1;
        v199[4] = 4;
        v199[7] = 0;
        v199[5] = 0;
        v199[6] = 0;
        if ( some_check_or_CRC(v199) )
          lost_sub_can_edian(v200);
      }
      if ( v117 <= 8 )
        v203 = (int)*(&v0[0xFFFFF574] + v117);
      else
        LOWORD(v203) = 0x40;
      v204 = sub_106EB0(v203);
      if ( v204 )
        *((_WORD *)v0 + 7 * v117 + 0x224C) = *(_WORD *)(v204 + 0xC);
    }
  }
LABEL_217:
  if ( ((unsigned int)v0[0xE24] & *(unsigned int *)((char *)v0 + 0xFFFFD740 + 0xC)) != 0 )
  {
    v121 = *((unsigned int *)v0 + 0xFFFFD740 + 8);
    v122 = (int)v0 + 0xE * v121 + 0x4494;
    v123 = *(unsigned int *)(v122 + 4);
    if ( *(_WORD *)(v122 + 4) )
    {
      if ( v123 <= 1 )
      {
        *(_WORD *)(v122 + 4) = 0;
      }
      else
      {
        v124 = (unsigned int)(v123 - 2);
        *(_WORD *)(v122 + 4) = v124;
        if ( v124 )
          goto LABEL_221;
      }
      if ( v121 <= 8 )
        v205 = *((unsigned int *)&v0[0xFFFFF574] + 4 * v121);
      else
        v205 = 0x40;
      v206 = sub_116D70(v205);
      v207 = sub_110C70(v205, 4);
      v208 = v207;
      if ( v207 )
      {
        v209 = v207[8] | (v207[9] << 8) | (v207[0xA] << 0x10) | (v207[0xB] << 0x18);
        v210 = *(_BYTE *)v209 & 0xFC | 2;
        *(_WORD *)(v209 + 2) = v206;
        *(_BYTE *)v209 = v210 & 3 | (4 * (v205 & 0x3F));
        *(_BYTE *)(v209 + 1) = 1;
        v207[4] = 4;
        v207[7] = 0;
        v207[5] = 0;
        v207[6] = 0;
        if ( some_check_or_CRC(v207) )
          lost_sub_can_edian(v208);
      }
      if ( v121 <= 8 )
        v211 = (int)*(&v0[0xFFFFF574] + v121);
      else
        LOWORD(v211) = 0x40;
      v212 = sub_106EB0(v211);
      if ( v212 )
        *((_WORD *)v0 + 7 * v121 + 0x224C) = *(_WORD *)(v212 + 0xC);
    }
  }
LABEL_221:
  if ( ((unsigned int)v0[0xE24] & *(unsigned int *)((char *)v0 + 0xFFFFD740 + 0x14)) != 0 )
  {
    v125 = *((unsigned int *)v0 + 0xFFFFD740 + 0x10);
    v126 = (int)v0 + 0xE * v125 + 0x4494;
    v127 = *(unsigned int *)(v126 + 4);
    if ( *(_WORD *)(v126 + 4) )
    {
      if ( v127 <= 1 )
      {
        *(_WORD *)(v126 + 4) = 0;
      }
      else
      {
        v128 = (unsigned int)(v127 - 2);
        *(_WORD *)(v126 + 4) = v128;
        if ( v128 )
          goto LABEL_225;
      }
      if ( v125 <= 8 )
        v189 = *((unsigned int *)&v0[0xFFFFF574] + 4 * v125);
      else
        v189 = 0x40;
      v190 = sub_116D70(v189);
      v191 = sub_110C70(v189, 4);
      v192 = v191;
      if ( v191 )
      {
        v193 = v191[8] | (v191[9] << 8) | (v191[0xA] << 0x10) | (v191[0xB] << 0x18);
        v194 = *(_BYTE *)v193 & 0xFC | 2;
        *(_WORD *)(v193 + 2) = v190;
        *(_BYTE *)v193 = v194 & 3 | (4 * (v189 & 0x3F));
        *(_BYTE *)(v193 + 1) = 1;
        v191[4] = 4;
        v191[7] = 0;
        v191[5] = 0;
        v191[6] = 0;
        if ( some_check_or_CRC(v191) )
          lost_sub_can_edian(v192);
      }
      if ( v125 <= 8 )
        v195 = (int)*(&v0[0xFFFFF574] + v125);
      else
        LOWORD(v195) = 0x40;
      v196 = sub_106EB0(v195);
      if ( v196 )
        *((_WORD *)v0 + 7 * v125 + 0x224C) = *(_WORD *)(v196 + 0xC);
    }
  }
LABEL_225:
  if ( ((unsigned int)v0[0xE24] & *(unsigned int *)((char *)v0 + 0xFFFFD740 + 0x1C)) != 0 )
  {
    v129 = *((unsigned int *)v0 + 0xFFFFD740 + 0x18);
    v130 = (int)v0 + 0xE * v129 + 0x4494;
    v131 = *(unsigned int *)(v130 + 4);
    if ( *(_WORD *)(v130 + 4) )
    {
      if ( v131 <= 1 )
      {
        *(_WORD *)(v130 + 4) = 0;
      }
      else
      {
        v132 = (unsigned int)(v131 - 2);
        *(_WORD *)(v130 + 4) = v132;
        if ( v132 )
          goto LABEL_229;
      }
      if ( v129 > 8 )
        v181 = 0x40;
      else
        v181 = *((unsigned int *)&v0[v129] + 0xFFFFD5D0);
      v182 = sub_116D70(v181);
      v183 = sub_110C70(v181, 4);
      v184 = v183;
      if ( v183 )
      {
        v185 = v183[8] | (v183[9] << 8) | (v183[0xA] << 0x10) | (v183[0xB] << 0x18);
        v186 = *(_BYTE *)v185 & 0xFC | 2;
        *(_WORD *)(v185 + 2) = v182;
        *(_BYTE *)v185 = v186 & 3 | (4 * (v181 & 0x3F));
        *(_BYTE *)(v185 + 1) = 1;
        v183[4] = 4;
        v183[7] = 0;
        v183[5] = 0;
        v183[6] = 0;
        if ( some_check_or_CRC(v183) )
          lost_sub_can_edian(v184);
      }
      if ( v129 <= 8 )
        v187 = (int)*(&v0[0xFFFFF574] + v129);
      else
        LOWORD(v187) = 0x40;
      v188 = sub_106EB0(v187);
      if ( v188 )
        *((_WORD *)v0 + 7 * v129 + 0x224C) = *(_WORD *)(v188 + 0xC);
    }
  }
LABEL_229:
  if ( ((unsigned int)v0[0xE24] & *(unsigned int *)((char *)v0 + 0xFFFFD740 + 0x24)) != 0 )
  {
    v133 = *((unsigned int *)v0 + 0xFFFFD740 + 0x20);
    v134 = (int)v0 + 0xE * v133 + 0x4494;
    v135 = *(unsigned int *)(v134 + 4);
    if ( *(_WORD *)(v134 + 4) )
    {
      if ( v135 <= 1 )
      {
        *(_WORD *)(v134 + 4) = 0;
      }
      else
      {
        v136 = (unsigned int)(v135 - 2);
        *(_WORD *)(v134 + 4) = v136;
        if ( v136 )
          goto LABEL_233;
      }
      if ( v133 > 8 )
        v213 = 0x40;
      else
        v213 = *((unsigned int *)&v0[v133] + 0xFFFFD5D0);
      v214 = sub_116D70(v213);
      v215 = sub_110C70(v213, 4);
      v216 = v215;
      if ( v215 )
      {
        v217 = v215[8] | (v215[9] << 8) | (v215[0xA] << 0x10) | (v215[0xB] << 0x18);
        v218 = *(_BYTE *)v217 & 0xFC | 2;
        *(_WORD *)(v217 + 2) = v214;
        *(_BYTE *)v217 = v218 & 3 | (4 * (v213 & 0x3F));
        *(_BYTE *)(v217 + 1) = 1;
        v215[4] = 4;
        v215[7] = 0;
        v215[5] = 0;
        v215[6] = 0;
        if ( some_check_or_CRC(v215) )
          lost_sub_can_edian(v216);
      }
      if ( v133 <= 8 )
        v219 = (int)*(&v0[0xFFFFF574] + v133);
      else
        LOWORD(v219) = 0x40;
      v220 = sub_106EB0(v219);
      if ( v220 )
        *((_WORD *)v0 + 7 * v133 + 0x224C) = *(_WORD *)(v220 + 0xC);
    }
  }
LABEL_233:
  if ( ((unsigned int)v0[0xE24] & *(unsigned int *)((char *)v0 + 0xFFFFD740 + 0x2C)) != 0 )
  {
    v137 = *((unsigned int *)v0 + 0xFFFFD740 + 0x28);
    v138 = (int)v0 + 0xE * v137 + 0x4494;
    v139 = *(unsigned int *)(v138 + 4);
    if ( *(_WORD *)(v138 + 4) )
    {
      if ( v139 <= 1 )
      {
        *(_WORD *)(v138 + 4) = 0;
      }
      else
      {
        v140 = (unsigned int)(v139 - 2);
        *(_WORD *)(v138 + 4) = v140;
        if ( v140 )
          goto LABEL_237;
      }
      if ( v137 <= 8 )
        v173 = *((unsigned int *)&v0[0xFFFFF574] + 4 * v137);
      else
        v173 = 0x40;
      v174 = sub_116D70(v173);
      v175 = sub_110C70(v173, 4);
      v176 = v175;
      if ( v175 )
      {
        v177 = v175[8] | (v175[9] << 8) | (v175[0xA] << 0x10) | (v175[0xB] << 0x18);
        v178 = *(_BYTE *)v177 & 0xFC | 2;
        *(_WORD *)(v177 + 2) = v174;
        *(_BYTE *)v177 = v178 & 3 | (4 * (v173 & 0x3F));
        *(_BYTE *)(v177 + 1) = 1;
        v175[4] = 4;
        v175[7] = 0;
        v175[5] = 0;
        v175[6] = 0;
        if ( some_check_or_CRC(v175) )
          lost_sub_can_edian(v176);
      }
      if ( v137 <= 8 )
        v179 = (int)*(&v0[0xFFFFF574] + v137);
      else
        LOWORD(v179) = 0x40;
      v180 = sub_106EB0(v179);
      if ( v180 )
        *((_WORD *)v0 + 7 * v137 + 0x224C) = *(_WORD *)(v180 + 0xC);
    }
  }
LABEL_237:
  if ( ((unsigned int)v0[0xE24] & *(unsigned int *)((char *)v0 + 0xFFFFD740 + 0x34)) != 0 )
  {
    v141 = *((unsigned int *)v0 + 0xFFFFD740 + 0x30);
    v142 = (int)v0 + 0xE * v141 + 0x4494;
    v143 = *(unsigned int *)(v142 + 4);
    if ( *(_WORD *)(v142 + 4) )
    {
      if ( v143 > 1 )
      {
        v144 = (unsigned int)(v143 - 2);
        *(_WORD *)(v142 + 4) = v144;
        if ( v144 )
          return 0;
      }
      else
      {
        *(_WORD *)(v142 + 4) = 0;
      }
      if ( v141 <= 8 )
        v145 = *((unsigned int *)&v0[0xFFFFF574] + 4 * v141);
      else
        v145 = 0x40;
      v146 = sub_116D70(v145);
      v147 = sub_110C70(v145, 4);
      v148 = v147;
      if ( v147 )
      {
        v149 = v147[8] | (v147[9] << 8) | (v147[0xA] << 0x10) | (v147[0xB] << 0x18);
        v150 = *(_BYTE *)v149 & 0xFC | 2;
        *(_WORD *)(v149 + 2) = v146;
        *(_BYTE *)v149 = v150 & 3 | (4 * (v145 & 0x3F));
        *(_BYTE *)(v149 + 1) = 1;
        v147[7] = 0;
        v147[4] = 4;
        v147[5] = 0;
        v147[6] = 0;
        if ( some_check_or_CRC(v147) )
          lost_sub_can_edian(v148);
      }
      if ( v141 <= 8 )
        v151 = (int)*(&v0[0xFFFFF574] + v141);
      else
        LOWORD(v151) = 0x40;
      v152 = sub_106EB0(v151);
      if ( v152 )
        *((_WORD *)v0 + 7 * v141 + 0x224C) = *(_WORD *)(v152 + 0xC);
    }
  }
  return 0;
}


//----- (00113F7C) --------------------------------------------------------
void sub_113F7C()
{
  _DWORD *v0; // r6
  int v1; // r3
  struct tm s[2]; // [sp+8h] [bp-68h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0xAF, 0xB, "WDMonitorTimeout", "+");
  if ( (unsigned int)dword_123294 <= 4 )
  {
    ++dword_123294;
    goto LABEL_6;
  }
  memset(s, 0, 0x50u);
  if ( sub_114778() )
  {
LABEL_6:
    v0 = _PasLogParams;
    v1 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v1 >= 0 )
      goto LABEL_7;
    goto LABEL_14;
  }
  if ( *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0xBB, 0x1F, "WDMonitorTimeout", "Error: Last WD message from IPc->VMCU %s", byte_123258);
  sub_116E70((int)"IPC_MID", "Error: Last WD message from IPc->VMCU %s", byte_123258);
  sub_114A0C(s, 0x50);
  printf("%s:%s:Error: Last WD message from IPc->VMCU %s\n", (const char *)s, "IPC_MID", byte_123258);
  v0 = _PasLogParams;
  v1 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( v1 < 0 )
  {
LABEL_14:
    NsLog(0xC5, 0x1F, "WDMonitorTimeout", "total byte: %u", *iUartReceiveByte);
    v1 = v0[0xBC5];
  }
LABEL_7:
  if ( (v1 & 0x800) != 0 )
    NsLog(0xC7, 0xB, "WDMonitorTimeout", "-");
}


//----- (0011413C) --------------------------------------------------------
struct tm *sub_11413C()
{
  struct tm *result; // r0
  struct timeb timebuf; // [sp+1Ch] [bp-1Ch] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x8B, 0xB, "SaveWDMonitorInfo", "+");
  dword_123294 = 0;
  ftime(&timebuf);
  result = gmtime(&timebuf.time);
  if ( result )
    result = (struct tm *)snprintf(
                            byte_123258,
                            0x3Bu,
                            "%02d/%02d/%02d %02d:%02d:%02d.%hu",
                            result->tm_mon + 1,
                            result->tm_mday,
                            result->tm_year + 0x76C,
                            result->tm_hour,
                            result->tm_min,
                            result->tm_sec,
                            timebuf.millitm);
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return (struct tm *)NsLog(0x9F, 0xB, "SaveWDMonitorInfo", "-");
  return result;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 123294: using guessed type int dword_123294;

//----- (0011425C) --------------------------------------------------------
struct tm *sub_11425C()
{
  struct tm *result; // r0
  int v1; // r3
  int v2; // r0
  _DWORD *v3; // r6
  _DWORD *v4; // r6

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x6D, 0xB, "UpdateWDMonitorSentInfo", "+");
  result = sub_11413C();
  if ( dword_123254 )
  {
    v1 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  else
  {
    v2 = McOpenSender("IPC_MID");
    result = (struct tm *)NS_TimerCreate(5, 0, 0, 0, 0x2430, 5, 0, 0, 0, v2, 5, 0, 0, 0, 0x2430, 5, 0, 0);
    dword_123254 = (int)result;
    if ( result )
    {
      v3 = _PasLogParams;
      v1 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( (v1 & 0x800000) != 0 )
      {
        result = (struct tm *)NsLog(0x7E, 0x17, "UpdateWDMonitorSentInfo", "WDMonitor timer started");
        v1 = v3[0xBC5];
      }
    }
    else
    {
      v4 = _PasLogParams;
      v1 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v1 < 0 )
      {
        result = (struct tm *)NsLog(0x82, 0x1F, "UpdateWDMonitorSentInfo", "Error while starting WDMonitor timer");
        v1 = v4[0xBC5];
      }
    }
  }
  if ( (v1 & 0x800) != 0 )
    return (struct tm *)NsLog(0x86, 0xB, "UpdateWDMonitorSentInfo", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101F6C: using guessed type int __fastcall NS_TimerCreate(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 123254: using guessed type int dword_123254;

//----- (00114400) --------------------------------------------------------
unsigned int *sub_114400()
{
  unsigned int *result; // r0
  unsigned int *v1; // r8
  _BYTE *v2; // r3
  int v3; // r6
  int v4; // r3
  _DWORD *v5; // r6
  struct tm s[2]; // [sp+8h] [bp-68h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x41, 0xB, "sendIPCWdMessageToVMCU", "-");
  result = sub_110C70(4, 4);
  v1 = result;
  if ( result )
  {
    v2 = (_BYTE *)(result[8] | (result[9] << 8) | (result[0xA] << 0x10) | (result[0xB] << 0x18));
    v2[2] = 1;
    *v2 = 0x11;
    v2[1] = 0;
    v2[3] = byte_123250;
    v3 = some_check_or_CRC(result);
    if ( v3 )
    {
      memset(s, 0, 0x50u);
      lost_sub_can_edian(v1);
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(0x58, 0x1F, "sendIPCWdMessageToVMCU", " Failed to send watch dog message to VMCU.Error Code : %d ", v3);
      sub_116E70((int)"IPC_MID", " Failed to send watch dog message to VMCU.Error Code : %d ", v3);
      sub_114A0C(s, 0x50);
      result = (unsigned int *)printf(
                                    "%s:%s:Failed to send watch dog message to VMCU.Error Code : %d\n",
                                    (const char *)s,
                                    "IPC_MID",
                                    v3);
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
    else
    {
      ++byte_123250;
      result = (unsigned int *)sub_11425C();
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    }
  }
  else
  {
    v5 = _PasLogParams;
    v4 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v4 < 0 )
    {
      result = (unsigned int *)NsLog(
                                    0x65,
                                    0x1F,
                                    "sendIPCWdMessageToVMCU",
                                    "Can't send WD message to VMCU. msgHandle is NULL");
      v4 = v5[0xBC5];
    }
  }
  if ( (v4 & 0x800) != 0 )
    return (unsigned int *)NsLog(0x68, 0xB, "sendIPCWdMessageToVMCU", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 123250: using guessed type char byte_123250;

//----- (00114604) --------------------------------------------------------
int __fastcall PasOnInitialization(void *a1)
{
  return 0;
}

//----- (0011460C) --------------------------------------------------------
int __fastcall PasOnDebugDump(void *a1)
{
  return 0;
}

//----- (00114614) --------------------------------------------------------
int __fastcall PasCreateStateMachine(void *a1)
{
  return 0;
}

//----- (0011461C) --------------------------------------------------------
int __fastcall PasSSFrameworkInterface(void *a1)
{
  return 0;
}

//----- (00114624) --------------------------------------------------------
int __fastcall PasOnStart(void *a1)
{
  return 0;
}

//----- (0011462C) --------------------------------------------------------
int __fastcall PasOnStop(void *a1)
{
  return 0;
}

//----- (00114634) --------------------------------------------------------
int sub_114634()
{
  void *v0; // r5

  v0 = _PasVersion;
  CPasVersion::CPasVersion((CPasVersion *)_PasVersion, 1u, 0, 1u);
  return _aeabi_atexit(v0, cPasVersion, _dataStart);
}


//----- (00114688) --------------------------------------------------------
int __fastcall PasOnDestroy(void *a1)
{
  _DWORD *v1; // r6

  v1 = _PasLogParams;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) == 0 )
    return 0xD;
  NsLog(0x4B0, 0xB, "+", "EPasStatus PasOnDestroy(void*)");
  if ( (v1[0xBC5] & 0x800) == 0 )
    return 0xD;
  NsLog(0x4B2, 0xB, "-", "EPasStatus PasOnDestroy(void*)");
  return 0xD;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00114714) --------------------------------------------------------
int getBoardType()
{
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x327, 0xB, "getBoardType", "+");
  return (unsigned int)*_boardXGateData[0];
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEEC: using guessed type char *_boardXGateData[4];

//----- (00114778) --------------------------------------------------------
int sub_114778()
{
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x2E5, 0xB, "getEndOfLineStatus", "+");
  return (unsigned int)*_ipcEndOfLineMode;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EE90: using guessed type char *_ipcEndOfLineMode;
// 11EEA8: using guessed type void *_PasLogParams;

//----- (001147DC) --------------------------------------------------------
int __fastcall sub_1147DC(int result)
{
  char v1; // r7
  _DWORD *v2; // r6
  int v3; // r2

  v1 = result;
  v2 = _PasLogParams;
  if ( *((int *)_PasLogParams + 0xBC5) < 0 )
  {
    result = NsLog(0x2D1, 0x1F, "setEndOfLineStatus", "+");
    v3 = v2[0xBC5];
    *_ipcEndOfLineMode = v1;
    if ( v3 < 0 )
      return NsLog(0x2D3, 0x1F, "setEndOfLineStatus", "-");
  }
  else
  {
    *_ipcEndOfLineMode = result;
  }
  return result;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EE90: using guessed type char *_ipcEndOfLineMode;
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00114880) --------------------------------------------------------
int sub_114880()
{
  _DWORD *v0; // r6
  int v1; // r3
  int result; // r0

  v0 = _PasLogParams;
  v1 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( (v1 & 0x800) != 0 )
  {
    result = NsLog(0x2A7, 0xB, "stopSendingWatchDogMessageToVMCU", "+");
    v1 = v0[0xBC5];
    byte_1232F9 = 0;
    if ( v1 >= 0 )
    {
LABEL_3:
      if ( (v1 & 0x800) == 0 )
        return result;
      return NsLog(0x2AC, 0xB, "stopSendingWatchDogMessageToVMCU", "-");
    }
  }
  else
  {
    byte_1232F9 = 0;
    if ( v1 >= 0 )
      goto LABEL_3;
  }
  result = NsLog(0x2AA, 0x1F, "stopSendingWatchDogMessageToVMCU", " Stopped sending watch dog messages from CCPU");
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return NsLog(0x2AC, 0xB, "stopSendingWatchDogMessageToVMCU", "-");
  return result;
}
// 101F48: using guessed type int __fastcall NsLog(_DWORD, _DWORD, _DWORD, _DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 1232F9: using guessed type char byte_1232F9;

//----- (00114964) --------------------------------------------------------
struct tm *sub_114964()
{
  struct tm *result; // r0
  struct timeb timebuf; // [sp+1Ch] [bp-1Ch] BYREF

  dword_1232D0 = 0;
  ftime(&timebuf);
  result = gmtime(&timebuf.time);
  if ( result )
    return (struct tm *)snprintf(
                          byte_123308,
                          0x3Bu,
                          "%02d/%02d/%02d %02d:%02d:%02d.%hu",
                          result->tm_mon + 1,
                          result->tm_mday,
                          result->tm_year + 0x76C,
                          result->tm_hour,
                          result->tm_min,
                          result->tm_sec,
                          timebuf.millitm);
  return result;
}
// 1232D0: using guessed type int dword_1232D0;

//----- (00114A0C) --------------------------------------------------------
struct tm *__fastcall sub_114A0C(struct tm *result, int a2)
{
  bool v2; // zf
  char *v3; // r5
  size_t v4; // r7
  int v5; // r5
  char *v6; // r0
  struct timeb v7; // [sp+1Ch] [bp-24h] BYREF

  v2 = a2 == 0;
  if ( a2 )
    v2 = result == 0;
  v3 = (char *)result;
  if ( v2 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return (struct tm *)NsLog(0x49C, 0x1F, "GetCurrTime", "invalid params, f_cTime:%p, f_iBuffLen:%d", result, a2);
  }
  else
  {
    v4 = a2 - 1;
    snprintf((char *)result, a2 - 1, "%s", "<00/00/00 00:00:00.000>/");
    result = (struct tm *)ftime(&v7);
    if ( result )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      {
        v5 = *(_DWORD *)_get_errno_ptr();
        v6 = strerror(v5);
        return (struct tm *)NsLog(0x497, 0x1F, "GetCurrTime", "ftime(...) Failed errno: %d - err:%s", v5, v6);
      }
    }
    else
    {
      result = gmtime(&v7.time);
      if ( result )
      {
        return (struct tm *)snprintf(
                              v3,
                              v4,
                              "<%02d/%02d/%02d %02d:%02d:%02d.%hu>/",
                              result->tm_mon + 1,
                              result->tm_mday,
                              result->tm_year + 0x76C,
                              result->tm_hour,
                              result->tm_min,
                              result->tm_sec,
                              v7.millitm);
      }
      else if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      {
        return (struct tm *)NsLog(0x492, 0x1F, "GetCurrTime", "gmtime(...) Failed");
      }
    }
  }
  return result;
}
// 101CC0: using guessed type int _get_errno_ptr(void);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;

//----- (00114BBC) --------------------------------------------------------
int __fastcall Process_Log_Que_Message(int result, int a2)
{
  int v2; // r6
  int v4; // r3
  _DWORD *v5; // r6
  _DWORD *v6; // r6
  _DWORD *v7; // r6
  _DWORD *v8; // r6
  _DWORD *v9; // r6
  char s[96]; // [sp+8h] [bp-60h] BYREF

  v2 = result;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    result = NsLog(0x43C, 0xB, "Process_Log_Que_Message", "+");
  switch ( v2 )
  {
    case 0xAEA:
      memset(s, 0, 0x45u);
      result = McGetData(a2, s);
      if ( result )
      {
        v5 = _PasLogParams;
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v4 < 0 )
        {
          result = NsLog(0x446, 0x1F, "Process_Log_Que_Message", "Error Retrieving change log mask params %d", result);
          v4 = v5[0xBC5];
        }
      }
      else
      {
        result = NsLogSetControlMask(s);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      }
      break;
    case 0xAEC:
      memset(s, 0, 0x45u);
      result = McGetData(a2, s);
      if ( result )
      {
        v6 = _PasLogParams;
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v4 < 0 )
        {
          result = NsLog(0x454, 0x1F, "Process_Log_Que_Message", "Error Retrieving change log opt params %d", result);
          v4 = v6[0xBC5];
        }
      }
      else
      {
        result = NsLogSetLogMethod((unsigned int)s[0x40]);
        v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      }
      break;
    case 0xAF0:
      result = McEnableTransmissionLogger(0, 1);
      if ( result )
        goto LABEL_5;
      v7 = _PasLogParams;
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v4 < 0 )
      {
        result = NsLog(
                   0x461,
                   0x1F,
                   "Process_Log_Que_Message",
                   "Error enabling Transmission logger for RX_ON_AND_TX_OFF %d",
                   0);
        v4 = v7[0xBC5];
      }
      break;
    case 0xAF1:
      result = McEnableTransmissionLogger(1, 0);
      if ( result )
        goto LABEL_5;
      v8 = _PasLogParams;
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v4 < 0 )
      {
        result = NsLog(
                   0x468,
                   0x1F,
                   "Process_Log_Que_Message",
                   "Error enabling Transmission logger for RX_OFF_AND_TX_ON %d",
                   0);
        v4 = v8[0xBC5];
      }
      break;
    case 0xAF2:
      result = McEnableTransmissionLogger(1, 1);
      if ( result )
        goto LABEL_5;
      v9 = _PasLogParams;
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      if ( v4 < 0 )
      {
        result = NsLog(
                   0x46F,
                   0x1F,
                   "Process_Log_Que_Message",
                   "Error enabling Transmission logger for RX_AND_TX_ON %d",
                   0);
        v4 = v9[0xBC5];
      }
      break;
    case 0xAF3:
      result = McDisableTransmissionLogger();
      goto LABEL_5;
    default:
LABEL_5:
      v4 = *((_DWORD *)_PasLogParams + 0xBC5);
      break;
  }
  if ( (v4 & 0x800) != 0 )
    return NsLog(0x47B, 0xB, "Process_Log_Que_Message", "-");
  return result;
}


//----- (00114E94) --------------------------------------------------------
void __fastcall __noreturn IpcTpTaskLoop(void *a1)
{
  int v1; // r4
  int v2; // r9
  int *errno_ptr; // r0
  char *v4; // r0
  char s[56]; // [sp+8h] [bp-38h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x3EB, 0xB, "IpcTpTaskLoop", "+");
  memset(s, 0, 0x10u);
  v1 = ChannelCreate();
  v2 = ConnectAttach(0, 0, v1, 0x40000000, 0);
  if ( setprio(0, 0x3C) == 0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
  {
    errno_ptr = (int *)_get_errno_ptr();
    v4 = strerror(*errno_ptr);
    NsLog(0x3F3, 0x1F, "IpcTpTaskLoop", "Could not set the priority for Tp Task Thread = %s", v4);
  }
  if ( sub_106B28(v2, 2u, 0x65) == (timer_t)0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x3F9, 0x1F, "IpcTpTaskLoop", "Could not create timer for IPC TP Task...");
  while ( 1 )
  {
    while ( MsgReceive(v1, s, 0x10, 0) )
      ;
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x2000) != 0 )
      NsLog(0x414, 0xD, "IpcTpTaskLoop", "Received the Tp msg pulse with code : %d ", s[4]);
    if ( s[4] == 0x65 && (unsigned int)(*(_DWORD *)_wakeUpState - 2) <= 2 )
      sub_1117FC();
  }
}

//----- (00115070) --------------------------------------------------------
void __fastcall __noreturn IpcLcTaskLoop(void *a1)
{
  int v1; // r4
  int v2; // r9
  int *errno_ptr; // r0
  char *v4; // r0
  char s[56]; // [sp+8h] [bp-38h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x39F, 0xB, "IpcLcTaskLoop", "+");
  memset(s, 0, 0x10u);
  v1 = ChannelCreate();
  v2 = ConnectAttach(0, 0, v1, 0x40000000, 0);
  if ( setprio(0, 0x3C) == 0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
  {
    errno_ptr = (int *)_get_errno_ptr();
    v4 = strerror(*errno_ptr);
    NsLog(0x3A6, 0x1F, "IpcLcTaskLoop", "Could not set the priority for Lc Task Thread = %s", v4);
  }
  if ( sub_106B28(v2, 3u, 0x64) == (timer_t)0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x3AC, 0x1F, "IpcLcTaskLoop", "Could not create timer for IPC Lc Task...");
  while ( 1 )
  {
    while ( MsgReceive(v1, s, 0x10, 0) )
      ;
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x2000) != 0 )
      NsLog(0x3B3, 0xD, "IpcLcTaskLoop", "Received the Lc msg pulse with code : %d ", s[4]);
    if ( s[4] == 0x64 && (unsigned int)(*(_DWORD *)_wakeUpState - 2) <= 2 )
      sub_10A18C();
  }
}


//----- (0011524C) --------------------------------------------------------
void __fastcall __noreturn IpcWdTaskLoop(void *a1)
{
  int v1; // r4
  int v2; // r10
  int *errno_ptr; // r0
  char *v4; // r0
  char s[56]; // [sp+8h] [bp-38h] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x33C, 0xB, "IpcWdTaskLoop", "+");
  memset(s, 0, 0x10u);
  v1 = ChannelCreate();
  v2 = ConnectAttach(0, 0, v1, 0x40000000, 0);
  if ( setprio(0, 0x3C) == 0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
  {
    errno_ptr = (int *)_get_errno_ptr();
    v4 = strerror(*errno_ptr);
    NsLog(0x343, 0x1F, "IpcWdTaskLoop", "Could not set the priority for Watch dog Task Thread = %s", v4);
  }
  if ( sub_106B28(v2, 0x2710u, 0x66) == (timer_t)0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x349, 0x1F, "IpcWdTaskLoop", "Could not create timer for IPC WD Task...");
  while ( 1 )
  {
    while ( MsgReceive(v1, s, 0x10, 0) )
      ;
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      NsLog(0x350, 0x1D, "IpcWdTaskLoop", "Received the Watchdog msg pulse with code : %d ", s[4]);
    if ( byte_1232F9 == 1 )
      sub_114400();
  }
}
// 101CC0: using guessed type int _get_errno_ptr(void);
// 101D5C: using guessed type int __fastcall MsgReceive(_DWORD, _DWORD, _DWORD, _DWORD);
// 101DE0: using guessed type int __fastcall setprio(_DWORD, _DWORD);
// 101E04: using guessed type int __fastcall ConnectAttach(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101E70: using guessed type int ChannelCreate(void);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 1232F9: using guessed type char byte_1232F9;

//----- (0011540C) --------------------------------------------------------
unsigned int *sub_11540C()
{
  unsigned int *result; // r0
  _DWORD *v1; // r5
  int v2; // r3
  _DWORD *v3; // r6

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x282, 0xB, "startSendingWatchDogMessageToVMCU", "-");
  result = (unsigned int *)sub_114778();
  if ( result == (unsigned int *)1 )
  {
    v3 = _PasLogParams;
    v2 = *((_DWORD *)_PasLogParams + 0xBC5);
    byte_1232F9 = 0;
    if ( v2 < 0 )
    {
      result = (unsigned int *)NsLog(
                                    0x287,
                                    0x1F,
                                    "startSendingWatchDogMessageToVMCU",
                                    " CCPU is in EOL mode , cannot start sending watchdog messages....");
      v2 = v3[0xBC5];
    }
LABEL_5:
    if ( (v2 & 0x800) == 0 )
      return result;
    return (unsigned int *)NsLog(0x294, 0xB, "startSendingWatchDogMessageToVMCU", "-");
  }
  byte_1232F9 = 1;
  result = sub_114400();
  v1 = _PasLogParams;
  v2 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( (v2 & 0x400) == 0 )
    goto LABEL_5;
  result = (unsigned int *)NsLog(
                                0x290,
                                0xA,
                                "startSendingWatchDogMessageToVMCU",
                                " Sent a watch dog message and starting a timer to send it periodically to VMCU");
  if ( (v1[0xBC5] & 0x800) != 0 )
    return (unsigned int *)NsLog(0x294, 0xB, "startSendingWatchDogMessageToVMCU", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 1232F9: using guessed type char byte_1232F9;

//----- (00115534) --------------------------------------------------------
const char *setBoardType()
{
  const char *result; // r0
  const char *v1; // r6
  int v2; // r3
  _DWORD *v3; // r6
  _DWORD *v4; // r6
  int v5; // r0
  _DWORD *v6; // r6
  int v7; // r0

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x2F9, 0xB, "setBoardType", "+");
  result = getenv("BOARD");
  v1 = result;
  if ( result )
  {
    result = (const char *)strcmp(result, "PANDA");
    if ( result )
    {
      result = (const char *)strcmp(v1, "PRODUCTION");
      if ( result )
      {
        v6 = _PasLogParams;
        v2 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( v2 < 0 )
        {
          v7 = getBoardType();
          result = (const char *)NsLog(
                                   0x30A,
                                   0x1F,
                                   "setBoardType",
                                   " Board Type ENV exists :baordType is %d but doesn't match PANDA or PRODUCTION , set to PRODUCTION",
                                   v7);
          v2 = v6[0xBC5];
        }
      }
      else
      {
        v3 = _PasLogParams;
        v2 = *((_DWORD *)_PasLogParams + 0xBC5);
        if ( (v2 & 0x800000) != 0 )
        {
          result = (const char *)NsLog(0x306, 0x17, "setBoardType", " Board Type Set to PRODUCTION");
          v2 = v3[0xBC5];
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
        result = (const char *)NsLog(0x301, 0x17, "setBoardType", " Board Type Set to PANDA");
      v2 = *((_DWORD *)_PasLogParams + 0xBC5);
      *_boardXGateData[0] = 0;
    }
  }
  else
  {
    v4 = _PasLogParams;
    v2 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( (v2 & 0x800000) != 0 )
    {
      v5 = getBoardType();
      result = (const char *)NsLog(
                               0x30F,
                               0x17,
                               "setBoardType",
                               " Board Type ENV does not exist , set to PRODUCTION %d",
                               v5);
      v2 = v4[0xBC5];
    }
  }
  if ( (v2 & 0x800) != 0 )
    return (const char *)NsLog(0x314, 0xB, "setBoardType", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEEC: using guessed type char *_boardXGateData[4];

//----- (0011572C) --------------------------------------------------------
int __fastcall sub_11572C(int a1)
{
  int result; // r0
  int v2; // [sp+Ch] [bp-Ch] BYREF

  v2 = a1;
  result = NPPublishNotification(*_hNPService, "IPC_MID", "IPC/LinkState", &v2, 4);
  if ( result )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      return NsLog(
               0x2BF,
               0x1F,
               "notifyLinkStatusToSubscribers",
               "***********Error while publishing link status notification from IPC***********");
  }
  return result;
}
// 101DB0: using guessed type int __fastcall NPPublishNotification(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EF04: using guessed type int *_hNPService;

//----- (001157D0) --------------------------------------------------------
int sub_1157D0()
{
  int result; // r0
  int v1; // r0
  _DWORD *v2; // r7
  int v3; // r3
  int v4; // r10

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x17F, 0xB, "IpcLinkMonitorTimerStart", "+");
  result = dword_1232F0;
  if ( !dword_1232F0 )
  {
    v1 = McOpenSender("IPC_MID");
    v2 = _PasLogParams;
    v3 = *((_DWORD *)_PasLogParams + 0xBC5);
    v4 = v1;
    if ( (v3 & 0x20000000) != 0 )
    {
      NsLog(0x18A, 0x1D, "IpcLinkMonitorTimerStart", "-");
      v3 = v2[0xBC5];
    }
    if ( (v3 & 0x800000) != 0 )
      NsLog(0x18B, 0x17, "IpcLinkMonitorTimerStart", "IPC Link monitor timer started");
    result = NS_TimerCreate(5, 0, 0, 0, 0x2429, 5, 0, 0, 0, v4, 5, 0, 0, 0, 0x2429, 5, 0, 0);
    dword_1232F0 = result;
  }
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
  {
    NsLog(0x18F, 0xB, "IpcLinkMonitorTimerStart", "-");
    return dword_1232F0;
  }
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101F6C: using guessed type int __fastcall NS_TimerCreate(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 1232F0: using guessed type int dword_1232F0;

//----- (00115958) --------------------------------------------------------
int sub_115958()
{
  _DWORD *v0; // r7
  int v1; // r8
  int result; // r0
  struct tm s[2]; // [sp+8h] [bp-68h] BYREF

  v0 = _PasLogParams;
  v1 = *((_DWORD *)_PasLogParams + 0xBC5);
  if ( (v1 & 0x800) != 0 )
  {
    result = NsLog(0x168, 0xB, "TimerCounterForVMCU", "+");
    v1 = v0[0xBC5];
  }
  if ( (unsigned int)dword_1232D0 > 4 )
  {
    memset(s, 0, 0x50u);
    if ( v1 < 0 )
      NsLog(0x172, 0x1F, "TimerCounterForVMCU", "Error: Last message received from IPC at %s", byte_123308);
    sub_116E70((int)"IPC_MID", "Error: Last message received from IPC at %s", byte_123308);
    sub_114A0C(s, 0x50);
    result = printf("%s:%s:Error: Last message received from IPC at %s\n", (const char *)s, "IPC_MID", byte_123308);
    v1 = *((_DWORD *)_PasLogParams + 0xBC5);
  }
  else
  {
    ++dword_1232D0;
  }
  if ( (v1 & 0x800) != 0 )
    return NsLog(0x178, 0xB, "TimerCounterForVMCU", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EEA8: using guessed type void *_PasLogParams;
// 1232D0: using guessed type int dword_1232D0;

//----- (00115AAC) --------------------------------------------------------
void __noreturn sub_115AAC()
{
  int v0; // r7
  int v1; // r11
  _DWORD *v2; // r0
  unsigned int Length; // r11
  int Data; // r12
  int v5; // r3
  int v6; // r0
  int v7; // r11
  int v8; // r0
  int v9; // r11
  int *errno_ptr; // r0
  char *v11; // r0
  int v12; // [sp+40h] [bp-20A0h]
  int v13; // [sp+44h] [bp-209Ch]
  unsigned int v14[4108]; // [sp+68h] [bp-2078h] BYREF
  _BYTE v15[3980]; // [sp+1074h] [bp-106Ch] BYREF
  char v16[64]; // [sp+2074h] [bp-6Ch] BYREF
  int v17[11]; // [sp+20B4h] [bp-2Ch] BYREF

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x1B9, 0xB, "IpcThreadMain", "+");
  v17[0] = 0;
  memset(v16, 0, sizeof(v16));
  if ( setprio(0, 0x3C) == 0xFFFFFFFF && *((int *)_PasLogParams + 0xBC5) < 0 )
  {
    errno_ptr = (int *)_get_errno_ptr();
    v11 = strerror(*errno_ptr);
    NsLog(0x1C6, 0x1F, "IpcThreadMain", "Could not set the priority for Main Thread = %s", v11);
  }
  v0 = McOpenReceiver("IPC_MID");
  v13 = 0;
  v12 = McOpenSender("HeartBeat");
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v1 = McReceive(v0, v16, v17, 0xFFF, v15);
          if ( !v1 )
            break;
          while ( *((int *)_PasLogParams + 0xBC5) < 0 )
          {
            v2 = (_DWORD *)_get_errno_ptr();
            NsLog(0x266, 0x1F, "IpcThreadMain", (const char *)&dword_11D028[1], v1, *v2);
            v1 = McReceive(v0, v16, v17, 0xFFF, v15);
            if ( !v1 )
              goto LABEL_8;
          }
        }
LABEL_8:
        Length = McGetLength(v15);
        Data = McGetData(v15, v14);
        if ( !Data )
          break;
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(0x1D7, 0x1F, "IpcThreadMain", "Error Retrieving databuffer status:%d", Data);
      }
      v5 = v17[0];
      if ( v17[0] == 0xF300 )
        break;
LABEL_12:
      if ( v5 != 0xF302 )
        goto LABEL_13;
LABEL_27:
      if ( strcmp(v16, "PowerManager") || *(_DWORD *)_wakeUpState == 3 || *(_DWORD *)_wakeUpState == 4 )
        goto LABEL_13;
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x400) != 0 )
        NsLog(0x1F9, 0xA, "IpcThreadMain", (const char *)dword_11CEE4);
      *(_DWORD *)_wakeUpState = 3;
      v8 = McOpenSender("PowerManager");
      v9 = v8;
      if ( v8 )
      {
        if ( !McSend(v8, "IPC_MID", 0xF303, 0, 0) )
        {
          if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x400) != 0 )
            NsLog(0x205, 0xA, "IpcThreadMain", "Successfully sent the shutdown complete to Power Manager ");
          *(_DWORD *)_wakeUpState = 4;
        }
        McClose(v9);
      }
LABEL_38:
      sub_114880();
    }
    if ( strcmp(v16, "PowerManager") )
      goto LABEL_26;
    if ( *(_DWORD *)_wakeUpState == 1 )
    {
      v5 = v17[0];
      goto LABEL_12;
    }
    if ( *(_DWORD *)_wakeUpState == 2 )
    {
LABEL_26:
      if ( v17[0] == 0xF302 )
        goto LABEL_27;
LABEL_13:
      if ( !strcmp(v16, "nslogutil") || !strcmp(v16, "pasdebug") )
      {
          Process_Log_Que_Message(v17[0], (int)v14);
      }
      else
      {
        switch ( v17[0] )
        {
          case 0x2425:
            sub_11540C();
            break;
          case 0x2424:
            goto LABEL_38;
          case 0x2423:
            sendIPCMessageToVMCU(v14, Length);
            memset(v14, 0, sizeof(v14));
            break;
          case 0x2426:
            if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
              NsLog(0x229, 0x17, "IpcThreadMain", "Received Tear Down from Diag");
            sub_1096AC(2);
            if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
              NsLog(0x22B, 0x1D, "IpcThreadMain", "Successfully Tear Down ");
            break;
          case 0x2427:
            if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
              NsLog(0x231, 0x17, "IpcThreadMain", "Received Link up from Diag");
            sub_10A08C();
            if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
              NsLog(0x233, 0x17, "IpcThreadMain", "Sent Link up to Diag");
            break;
          default:
            if ( !strcmp(v16, "HeartBeat") && v17[0] == 0xE1 )
            {
              if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
                NsLog(0x238, 0x1D, "IpcThreadMain", (const char *)&dword_11CFCC);
              if ( v12 || (v12 = McOpenSender("HeartBeat")) != 0 )
              {
                if ( McSend(v12, "IPC_MID", 0xE0, 0, 0) && *((int *)_PasLogParams + 0xBC5) < 0 )
                  NsLog(0x241, 0x1F, "IpcThreadMain", "Unable to send heart beat response");
              }
              else if ( *((int *)_PasLogParams + 0xBC5) < 0 )
              {
                NsLog(0x246, 0x1F, "IpcThreadMain", "Unable to open queue HeartBeat");
              }
            }
            else if ( !strcmp(v16, "IPC_MID") )
            {
              if ( v17[0] == 0x2428 )
              {
                sub_114964();
                if ( !v13 )
                  v13 = sub_1157D0();
              }
            }
            else if ( !strcmp(v16, (const char *)&dword_11D024) )
            {
              if ( v17[0] == 0x2429 )
              {
                sub_115958();
              }
              else if ( v17[0] == 0x2430 )
              {
                sub_113F7C();
              }
            }
            break;
        }
      }
    }
    else
    {
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x400) != 0 )
        NsLog(0x1DF, 0xA, "IpcThreadMain", "Wake up notification received from Power Manager");
      *(_DWORD *)_wakeUpState = 1;
      v6 = McOpenSender("PowerManager");
      v7 = v6;
      if ( v6 )
      {
        if ( !McSend(v6, "IPC_MID", 0xF301, 0, 0) && (*((_DWORD *)_PasLogParams + 0xBC5) & 0x400) != 0 )
          NsLog(0x1EC, 0xA, "IpcThreadMain", "Successfully sent the wake-up complete from IPC Module to Power Manager ");
        McClose(v7);
      }
      *(_DWORD *)_wakeUpState = 2;
    }
  }
}


//----- (001162D8) --------------------------------------------------------
int sub_1162D8()
{
  int result; // r0

  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x149, 0xB, "deInitIPCEssentials", "+");
  __sem_destroy(*(sem_t **)_RXSemaphoreChar[0]);
  __sem_destroy((sem_t *)*_XGATE_TXQUEUE_SEMAPHORE);
  __sem_destroy(*(sem_t **)_ipcRxSemaphore[0]);
  __sem_destroy(*(sem_t **)_phySendTriggerBuff[0]);
  __sem_destroy(*(sem_t **)_1Semaphore);
  sub_106E58(*(pthread_mutex_t **)RxResMbuf[0]);
  sub_106E58(*(pthread_mutex_t **)_mutexList[0]);
  sub_106E58((pthread_mutex_t *)*_IpcFifoMutex);
  sub_106E58(*(pthread_mutex_t **)_Res_PhyRecv[0]);
  sub_106E58((pthread_mutex_t *)*_RxTimerMutex);
  result = sub_10D57C();
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    return NsLog(0x157, 0xB, "deInitIPCEssentials", "-");
  return result;
}
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EE78: using guessed type int *_phySendTriggerBuff[3];
// 11EE7C: using guessed type int *RxResMbuf[2];
// 11EE80: using guessed type int *_RxTimerMutex;
// 11EE9C: using guessed type int *_Res_PhyRecv[3];
// 11EEA0: using guessed type int *_RXSemaphoreChar[2];
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEC4: using guessed type int *_IpcFifoMutex;
// 11EEF0: using guessed type int *_ipcRxSemaphore[3];
// 11EF10: using guessed type int _mutexList[2];
// 11EF14: using guessed type int _1Semaphore;
// 11EF20: using guessed type int *_XGATE_TXQUEUE_SEMAPHORE;

//----- (00116430) --------------------------------------------------------
int initIPCEssentials(()
{
  NSLogPrintPerformanceLog(0x111, "initIPCEssentials", "P12: Initialization: Start Marker: SS_SCM_IPC ");
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x112, 0xB, "initIPCEssentials", "+");
  *_RXSemaphoreChar[0] = (int)__sem_init(1u);
  *_XGATE_TXQUEUE_SEMAPHORE = (int)__sem_init(1u);
  *_ipcRxSemaphore[0] = (int)__sem_init(1u);
  *_phySendTriggerBuff[0] = (int)__sem_init(0);
  *(_DWORD *)_1Semaphore = __sem_init(0);
  *RxResMbuf[0] = (int)sub_106E88();
  *(_DWORD *)_mutexList[0] = sub_106E88();
  *_IpcFifoMutex = (int)sub_106E88();
  *_Res_PhyRecv[0] = (int)sub_106E88();
  *_RxTimerMutex = (int)sub_106E88();
  sub_10D634();
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x400) != 0 )
    NsLog(0x126, 0xA, "initIPCEssentials", "Starting to establish the IPC link....");
  sub_109F94();
  sub_11152C();

  // ----------------------------------------------------------------------

  openUART();




  __sem_unlock((*(sem_t **)_1Semaphore);




  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x135, 0xB, "initIPCEssentials", "-");
  return NSLogPrintPerformanceLog(0x136, "initIPCEssentials", "P12: Initialization: End Marker: SS_SCM_IPC  ");
}
// 101C3C: using guessed type int __fastcall NSLogPrintPerformanceLog(_DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 11EE78: using guessed type int *_phySendTriggerBuff[3];
// 11EE7C: using guessed type int *RxResMbuf[2];
// 11EE80: using guessed type int *_RxTimerMutex;
// 11EE9C: using guessed type int *_Res_PhyRecv[3];
// 11EEA0: using guessed type int *_RXSemaphoreChar[2];
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEC4: using guessed type int *_IpcFifoMutex;
// 11EEF0: using guessed type int *_ipcRxSemaphore[3];
// 11EF10: using guessed type int _mutexList[2];
// 11EF14: using guessed type int _1Semaphore;
// 11EF20: using guessed type int *_XGATE_TXQUEUE_SEMAPHORE;

//----- (00116618) --------------------------------------------------------
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int *v9; // r7
  int v10; // r0
  pthread_t v11; // [sp+14h] [bp-2Ch] BYREF
  pthread_t v12; // [sp+18h] [bp-28h] BYREF
  pthread_t v13; // [sp+1Ch] [bp-24h] BYREF
  pthread_t v14; // [sp+20h] [bp-20h] BYREF
  pthread_t newthread; // [sp+24h] [bp-1Ch] BYREF

  NsLogSetZones(6, 0x1F, 0x17, 0x1E, 9, 8, 3);
  NsLogSetProcessName("IPC_MID");
  delay(3);
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800000) != 0 )
    NsLog(0x92, 0x17, "main", " Starting IPC Process !!");
  setBoardType();
  initIPCEssentials(();


  // IpcLlDrvTxInterruptTask
  v3 = pthread_create(&newthread, 0, (void *(*)(void *))_IpcLlDrvTxInterruptTask, 0);
  if ( v3 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0xA6, 0x1F, "main", "Failed to create IPC send thread %d", v3);
    goto LABEL_6;
  }


  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
  {
    NsLog(0xAB, 0x1D, "main", " Created IPC send thread.........with id : %d", newthread);
    v6 = pthread_create(&v14, 0, (void *(*)(void *))_IpcLlDrvReceiveTask, 0); // IpcLlDrvReceiveTask
    if ( v6 )
    {
LABEL_16:
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(0xB1, 0x1F, "main", "Failed to create IPC receive thread %d", v6);
      goto LABEL_6;
    }
  }
  else
  {
    v6 = pthread_create(&v14, 0, (void *(*)(void *))_IpcLlDrvReceiveTask, 0); // IpcLlDrvReceiveTask
    if ( v6 )
      goto LABEL_16;
  }
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
    NsLog(0xB5, 0x1D, "main", " Created IPC receive thread.........with id : %d", v14);
  v7 = pthread_create(&v13, 0, (void *(*)(void *))_IpcLcTaskLoop, 0);   // IpcLcTaskLoop
  if ( v7 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0xBB, 0x1F, "main", "Failed to create  LcTask  thread %d", v7);
  }
  else
  {
    if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      NsLog(0xC0, 0x1D, "main", " Created LcTask Successfully........with id : %d", v13);
    v8 = pthread_create(&v12, 0, (void *(*)(void *))_IpcTpTaskLoop, 0); // TpTask_thread -> IpcTpTaskLoop
    if ( v8 )
    {
      if ( *((int *)_PasLogParams + 0xBC5) < 0 )
        NsLog(0xC6, 0x1F, "main", "Failed to create  TpTask  thread %d", v8);
    }
    else
    {
      if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
        NsLog(0xCA, 0x1D, "main", " Created TpTask successfully........with id : %d", v12);
      v10 = pthread_create(&v11, 0, (void *(*)(void *))_IpcWdTaskLoop, 0); // WdTask_thread -> IpcWdTaskLoop
      if ( v10 )
      {
        if ( *((int *)_PasLogParams + 0xBC5) < 0 )
          NsLog(0xD0, 0x1F, "main", "Failed to create WdTask thread %d", v10);
      }
      else if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x20000000) != 0 )
      {
        NsLog(0xD4, 0x1D, "main", " Created WdTask successfully........with id : %d", v11);
      }
    }
  }
LABEL_6:
  v4 = McOpenSender("NS_NPPService");
  *_hNPService = v4;
  if ( !v4 )
  {
    if ( *((int *)_PasLogParams + 0xBC5) < 0 )
      NsLog(0xDF, 0x1F, "main", "Could not acquire a handle to the NS NPS....will retry....");
    v4 = McOpenSender("NS_NPPService");
    v9 = _hNPService;
    *_hNPService = v4;
    if ( !v4 && *((int *)_PasLogParams + 0xBC5) < 0 )
    {
      NsLog(0xE6, 0x1F, "main", "*** FATAL ERROR *** ,Could not acquire a handle to the NS NPS....");
      v4 = *v9;
    }
  }
  if ( NPRegisterNotification(v4) )
  {
    v5 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v5 >= 0 )
      goto LABEL_9;
    NsLog(0xEF, 0x1F, "main", "***********Error while registering for link status notification from IPC***********");
  }
  v5 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_9:
  if ( (v5 & 0x400) != 0 )
    NsLog(0xF2, 0xA, "main", " Creation of IPC threads and initialization complete....");
  sub_115AAC();
}
// 101CE4: using guessed type int __fastcall delay(_DWORD);
// 101D14: using guessed type int __fastcall NPRegisterNotification(_DWORD);
// 101E7C: using guessed type int __fastcall NsLogSetProcessName(_DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101F84: using guessed type int __fastcall NsLogSetZones(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EE98: using guessed type void (__fastcall __noreturn *_IpcLlDrvReceiveTask)(void *);
// 11EEA8: using guessed type void *_PasLogParams;
// 11EEBC: using guessed type void (__fastcall __noreturn *_IpcLcTaskLoop)(void *);
// 11EF00: using guessed type _DWORD (__fastcall *_IpcLlDrvTxInterruptTask)(void *);
// 11EF04: using guessed type int *_hNPService;
// 11EF0C: using guessed type void (__fastcall __noreturn *_IpcWdTaskLoop)(void *);
// 11EF18: using guessed type void (__fastcall __noreturn *_IpcTpTaskLoop)(void *);

//----- (00116B20) --------------------------------------------------------
void __fastcall __noreturn sub_116B20(void *a1)
{
  int v1; // r4
  int v2; // r5

  _cxa_begin_catch(a1);
  if ( *(int *)(*(_DWORD *)(v1 + v2) + 0x2F14) < 0 )
    NsLog(0xF9, 0x1F, v1 + 0xFFFFD950, (const char *)(v1 - 0x1948));
  _cxa_end_catch();
  JUMPOUT(0x116740);
}
// 116B3C: control flows out of bounds to 116740
// 116B24: variable 'v1' is possibly undefined
// 116B24: variable 'v2' is possibly undefined
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);

//----- (00116B60) --------------------------------------------------------
void __fastcall __noreturn sub_116B60(int a1)
{
  _cxa_end_catch();
  _cxa_end_cleanup(a1);
}
// 101E28: using guessed type void __fastcall __noreturn _cxa_end_cleanup(_DWORD);

//----- (00116BE4) --------------------------------------------------------
unsigned int __fastcall sub_116BE4(unsigned int result)
{
  bool v1; // cc

  v1 = result > 0x3F;
  if ( result > 0x3F )
    result = 9;
  if ( !v1 )
    return dword_11D438[result];
  return result;
}
// 11D438: using guessed type int dword_11D438[64];

//----- (00116C14) --------------------------------------------------------
int __fastcall freeIfS(void *a1)
{
  if ( !a1 )
    return 1;
  free(a1);
  return 0;
}

//----- (00116C30) --------------------------------------------------------
void *__fastcall __malloc(int a1, size_t size)
{
  return malloc(size);
}

//----- (00116C38) --------------------------------------------------------
int __fastcall sub_116C38(unsigned int a1)
{
  int result; // r0

  switch ( sub_116BE4(a1) )
  {
    case 0u:
      result = 0x2000;
      break;
    case 1u:
      result = 0x40;
      break;
    case 2u:
      if ( !sub_106EB0(4u) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(4u) + 0xA);
      break;
    case 3u:
      if ( !sub_106EB0(8u) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(8u) + 0xA);
      break;
    case 4u:
      if ( !sub_106EB0(0x18u) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(0x18u) + 0xA);
      break;
    case 5u:
      if ( !sub_106EB0(0x1Cu) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(0x1Cu) + 0xA);
      break;
    case 6u:
      if ( !sub_106EB0(0x21u) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(0x21u) + 0xA);
      break;
    case 7u:
      if ( !sub_106EB0(0x22u) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(0x22u) + 0xA);
      break;
    case 8u:
      if ( !sub_106EB0(0x26u) )
        goto LABEL_2;
      result = *(unsigned int *)(sub_106EB0(0x26u) + 0xA);
      break;
    default:
LABEL_2:
      result = 0;
      break;
  }
  return result;
}

//----- (00116D78) --------------------------------------------------------
void *__fastcall ___malloc(size_t size)
{
  return __malloc(0, size);
}

//----- (00116D84) --------------------------------------------------------
unsigned int sub_116D84()
{
  int *v0; // r0

  v0 = sub_1070D4();
  return sub_10AEF8(*v0);
}

//----- (00116D98) --------------------------------------------------------
int sub_116D98()
{
  void *v0; // r5
  int result; // r0

  std::ios_base::Init::Init((std::ios_base::Init *)&unk_123354);
  v0 = _dataStart;
  _aeabi_atexit(&unk_123354, off_11EECC, _dataStart);
  std::_Winit::_Winit((std::_Winit *)&unk_123358);
  result = _aeabi_atexit(&unk_123358, off_11EED4, v0);
  if ( (*_char_stream & 1) == 0 )
  {
    *_char_stream = 1;
    *_ostreambuf = 0;
  }
  if ( (*_numChars & 1) == 0 )
  {
    *_numChars = 1;
    *_char = 0;
  }
  return result;
}


//----- (00116E70) --------------------------------------------------------
int sub_116E70(int a1, const char *a2, ...)
{
  int v3; // r8
  size_t v4; // r0
  int v5; // r5
  int v6; // r3
  _DWORD *v8; // r7
  _DWORD *v9; // r7
  char v10[4]; // [sp+Ch] [bp-102Ch] BYREF
  va_list v11; // [sp+100Ch] [bp-2Ch]
  const char *varg_r1; // [sp+102Ch] [bp-Ch]
  va_list varg_r2; // [sp+1030h] [bp-8h] BYREF

  va_start(varg_r2, a2);
  varg_r1 = a2;
  if ( (*((_DWORD *)_PasLogParams + 0xBC5) & 0x800) != 0 )
    NsLog(0x26, 0xB, "SMLogExtError", "+");
  if ( !a1 )
  {
    v8 = _PasLogParams;
    v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v6 < 0 )
    {
      v5 = 0xFFFFFFFE;
      NsLog(0x44, 0x1F, "SMLogExtError", "pRequesterName is NULL");
      v6 = v8[0xBC5];
      goto LABEL_7;
    }
    goto LABEL_13;
  }
  va_copy(v11, varg_r2);
  vsnprintf(v10, 0xFFEu, varg_r1, varg_r2);
  v3 = McOpenSender("SYSMGR_MID");
  if ( !v3 )
  {
    v9 = _PasLogParams;
    v6 = *((_DWORD *)_PasLogParams + 0xBC5);
    if ( v6 < 0 )
    {
      v5 = 0xFFFFFFFE;
      NsLog(0x3F, 0x1F, "SMLogExtError", "McOpenSender failed");
      v6 = v9[0xBC5];
      goto LABEL_7;
    }
LABEL_13:
    v5 = 0xFFFFFFFE;
    goto LABEL_7;
  }
  v4 = strlen(v10);
  v5 = McSend(v3, a1, 0xE8, v4 + 1, v10);
  if ( v5 && *((int *)_PasLogParams + 0xBC5) < 0 )
    NsLog(0x39, 0x1F, "SMLogExtError", "McSend failed");
  McClose(v3);
  v6 = *((_DWORD *)_PasLogParams + 0xBC5);
LABEL_7:
  if ( (v6 & 0x800) != 0 )
    NsLog(0x47, 0xB, "SMLogExtError", "-");
  return v5;
}
// 101C90: using guessed type int __fastcall McClose(_DWORD);
// 101F24: using guessed type int __fastcall McSend(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 101F48: using guessed type int NsLog(_DWORD, _DWORD, _DWORD, const char *, ...);
// 101FB4: using guessed type int __fastcall McOpenSender(_DWORD);
// 11EEA8: using guessed type void *_PasLogParams;
// 116E70: using guessed type char anonymous_0[4];

//----- (00117060) --------------------------------------------------------
void term_proc(void)
{
  ;
}

// nfuncs=375 queued=192 decompiled=192 lumina nreq=0 worse=0 better=0
// ALL OK, 192 function(s) have been successfully decompiled
