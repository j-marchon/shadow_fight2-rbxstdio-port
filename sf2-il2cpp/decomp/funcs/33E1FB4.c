// VideoPlayerController$$JADIEOCNJBH @ RVA 0x33E1FB4

void VideoPlayerController__JADIEOCNJBH
               (VideoPlayerController_o *__this,System_Action_o *EBIHGBKNHMF,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  System_Action_o **ppSVar2;
  VideoPlayerController_o *__this_00;
  System_Action_o *extraout_x1;
  System_Action_o *method_00;
  UnityEngine_Color_o UVar3;
  
                    /* try { // try from 034e1fc8 to 035e1fd3 has its CatchHandler @ 034e2484 */
  method_00 = EBIHGBKNHMF;
  if ((DAT_04567eae & 1) == 0) {
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_04567eae = 1;
    method_00 = extraout_x1;
  }
  VideoPlayerController__NPDADBCINPL(false,(MethodInfo *)method_00);
  pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    UVar3 = UnityEngine_Camera__get_backgroundColor(pUVar1,(MethodInfo *)0x0);
    (__this->fields).GKFNKJAIJCK.fields.r = UVar3.fields.r;
    (__this->fields).GKFNKJAIJCK.fields.g = UVar3.fields.g;
    (__this->fields).GKFNKJAIJCK.fields.b = UVar3.fields.b;
    (__this->fields).GKFNKJAIJCK.fields.a = UVar3.fields.a;
    pUVar1 = UnityEngine_Camera__get_main((MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
                    /* try { // try from 034e2018 to 035e2023 has its CatchHandler @ 034e2454 */
      UnityEngine_Camera__set_backgroundColor
                (pUVar1,(UnityEngine_Color_o)(ZEXT816(0x3f80000000000000) << 0x40),(MethodInfo *)0x0
                );
      ppSVar2 = &(__this->fields).LJONAJJGJHI;
                    /* try { // try from 034e2034 to 035e203f has its CatchHandler @ 034e247c */
      *ppSVar2 = EBIHGBKNHMF;
      thunk_FUN_01c20e04(ppSVar2,EBIHGBKNHMF);
      UnityEngine_Screen__set_sleepTimeout(-1,(MethodInfo *)0x0);
      VideoPlayerController__HEABBIMCDBF(__this_00,false,method);
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      PNLFHHJGDLI__EAKDFHBCLHC((MethodInfo *)0x0);
      (__this->fields)._LFALNJINAPO_k__BackingField = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034e2084 to 035e208f has its CatchHandler @ 034e2444 */
  FUN_01bab8c8();
}

