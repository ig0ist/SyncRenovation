<?php

namespace rifs;
class DGBase
{
    private int $countWarnings = 0;
    private bool $isProgressMsg = false;
    public int $verbose = 0;

    public function setVerbose(int $v): void
    {
        if ($v < 1) $v = 0;
        $this->verbose = $v;
    }

    public function msg(string $message, int $style = 0): void
    {
        $high = 'D0F04';
        if (stripos($message, $high) !== false) {
            $message = str_ireplace($high, "\033[91m" . $high . "\033[0m", $message);
        }
        if ($this->isProgressMsg) {
            echo "\r" . str_repeat('       ', 20) . "\r";
            $this->isProgressMsg = false;
        }
        $color = 0;
        switch ($style) {
            case 1: // dark_gray
                $color = 90;
                break; //debug
            case 2:
                $color = 91; //light_red
                break; //warn
            case 3:
                $color = 92; //light_green
                break;
            case 4:
                $color = 96; //light_cyan
                break;
            case 5: // light_yellow
                $color = 93;
            case 6: // light_yellow
                $color = 95;

        }
        if ($color) $message = "\033[" . $color . "m$message\033[0m";
//        echo "\033[90m" . date('H:i:s') . "\033[0m" . "\t" . $message . "\n";
        echo "\033[90m" . "\033[0m" . "\t" . $message . "\n";
    }

    protected function human_filesize($bytes, $dec = 2)
    {
        $size = array('B', 'kB', 'MB', 'GB', 'TB', 'PB', 'EB', 'ZB', 'YB');
        $factor = floor((strlen($bytes) - 1) / 3);

        return sprintf("%.{$dec}f", $bytes / pow(1024, $factor)) . @$size[$factor];
    }

    public function lineMsg(int $color = 1): void
    {
        $this->msg("--------------------------------------------------", $color);
    }

    public function warning(string $message): void
    {
        $this->countWarnings++;
        $this->msg('-!--!--!--!--!--!--!--!--!--!--!-', 2);
        $this->msg($message, 2);
        $this->msg('-!--!--!--!--!--!--!--!--!--!--!-', 2);
    }

    public function dump($data, int $len = 15, string $txt = '', bool $print = true, bool $split = true): string
    {
        $o = '';
        if (strlen($data) < $len) $len = strlen($data);
        for ($f = 0; $f < $len; $f++) $o .= sprintf('%02X', ord($data[$f])) . ($split ? ' ' : "");

        if ($print) $this->msg("\t$txt\t:[Size=" . strlen($data) . "]\t:\t" . $o);
        return $o;
    }

    public function error(string $message): void
    {
        $this->warning($message);
        exit;
    }

    public function verbose2(string $message, $hex = null): void
    {
        if ($this->verbose < 2) return;
        $this->verbose($message, $hex);
    }

    public function verbose(string $message, $hex = null): void
    {
        if ($this->verbose < 1) return;
        if ($hex !== null) {
            $this->hex($hex, $message);
        } else {
            $this->msg($message, 1);
        }
    }

    public function dumpArrayHex($d)
    {
        foreach ($d as $k => $v) {
            if (is_string($v)) {
                echo "\t$k\t\t`" . $v . "`\n";
            } else {
                echo "\t$k\t\t0x" . sprintf('%02X', $v) . "\n";
            }

        }
        echo "\n";
    }

    public function table()
    {
//        printf("[%s]\n",      $s); // standard string output
//        printf("[%10s]\n",    $s); // right-justification with spaces
//        printf("[%-10s]\n",   $s); // left-justification with spaces
//        printf("[%010s]\n",   $s); // zero-padding works on strings too
//        printf("[%'#10s]\n",  $s); // use the custom padding character '#'
//        printf("[%10.10s]\n", $t); // left-justification but with a cutoff of 10 characters
//
//        /*
//        [monkey]
//        [    monkey]
//        [monkey    ]
//        [0000monkey]
//        [####monkey]
//        [many monke]
//        */
    }

    public function hex($value, string $msg = '')
    {
        if (is_array($value)) {
            $this->warning('Can`t show HEX by array');
            return;
        }
        $this->msg($msg . "\t\t" . sprintf('%d , 0x%X', $value, $value));
    }
}