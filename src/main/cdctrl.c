#include "main/cdctrl.h"

/* sdata */
extern void *current_intg_adrs;
extern /* static */ int sndFadeTime;

/* bss - static */
extern unsigned char RBuff[4113];
extern CDCTRL_STR cdctrl_str;

/* sbss - static */
extern int cdSampleTmp;

INCLUDE_ASM(const s32, "main/cdctrl", PackIntGetDecodeSize);

INCLUDE_ASM(const s32, "main/cdctrl", PackIntDecode);

INCLUDE_ASM(const s32, "main/cdctrl", PackIntDecodeWait);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlInit);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlQuit);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlMasterVolSet);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlSerch);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391AF0);

INCLUDE_ASM(const s32, "main/cdctrl", cdctrlReadSub);

INCLUDE_ASM(const s32, "main/cdctrl", intReadSub);

INCLUDE_ASM(const s32, "main/cdctrl", cdctrlReadData);

INCLUDE_ASM(const s32, "main/cdctrl", cdctrlReadDataOne);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlRead);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlReadOne);

INCLUDE_ASM(const s32, "main/cdctrl", usrMemcpy);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391B50);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391BE0);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391C00);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391C20);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391C30);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlMemIntgDecode);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlStatus);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlReadWait);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlGetFileSize);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2SetChannel);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2Set);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2SetFileSeek);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2SetFileSeekChan);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2Seek);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2Play);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2PlayEndCheck);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2CheckBuffer);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2SetVolume);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWP2GetVolume);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2Stop);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2FileEnd);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetSample);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetFrame);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlFrame2WP2sample);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetSndTime);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlSndTime2WP2sample);

INCLUDE_RODATA(const s32, "main/cdctrl", D_00391CC0);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetSampleTmpBuf);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetSampleTmp);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetFrameTmp);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2GetSndTimeTmp);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2CdSample2SndTime);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlWp2CdSample2Frame);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlXTRset);

INCLUDE_ASM(const s32, "main/cdctrl", GetIntAdrsCurrent);

INCLUDE_ASM(const s32, "main/cdctrl", GetIntSizeCurrent);

INCLUDE_ASM(const s32, "main/cdctrl", cdctrlSndFadeOut);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlSndFadeOut);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlSndFadeOutCheck);

INCLUDE_ASM(const s32, "main/cdctrl", CdctrlSndFadeOutWait);