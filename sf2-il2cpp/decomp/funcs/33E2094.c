// VideoPlayerController$$OIJPFLLDOMM @ RVA 0x33E2094

void VideoPlayerController__OIJPFLLDOMM(VideoPlayerController_o *__this,MethodInfo *method)

{
  int32_t value;
  VideoPlayerController_o *__this_00;
  MethodInfo *in_x2;
  
                    /* try { // try from 034e20a0 to 035e20a7 has its CatchHandler @ 034e2460 */
  __this_00 = __this;
  if ((DAT_04567eaa & 1) == 0) {
                    /* try { // try from 034e20b8 to 035e20bf has its CatchHandler @ 034e2468 */
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    __this_00 = (VideoPlayerController_o *)FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
                    /* try { // try from 034e20d0 to 035e20d7 has its CatchHandler @ 034e246c */
    DAT_04567eaa = 1;
  }
  (__this->fields)._LFALNJINAPO_k__BackingField = false;
  VideoPlayerController__HEABBIMCDBF(__this_00,true,in_x2);
                    /* try { // try from 034e20e8 to 035e20ef has its CatchHandler @ 034e2470 */
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  value = EOAOCPLIKOI__ILLKKNOECDO((MethodInfo *)0x0);
                    /* try { // try from 034e2100 to 035e2107 has its CatchHandler @ 034e245c */
  UnityEngine_Screen__set_sleepTimeout(value,(MethodInfo *)0x0);
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034e2118 to 035e211f has its CatchHandler @ 034e2464 */
  PNLFHHJGDLI__OECHILBBMLF((MethodInfo *)0x0);
  return;
}

