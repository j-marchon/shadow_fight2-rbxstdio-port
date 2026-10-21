// VideoPlayerController$$HEABBIMCDBF @ RVA 0x33E19A0

void VideoPlayerController__HEABBIMCDBF
               (VideoPlayerController_o *__this,bool OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this_00;
  Nekki_SF2_GUI_ModuleHolder_o *pNVar2;
  
  if ((DAT_04567ea6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ea6 = 1;
  }
  if (DAT_04567f86 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
    DAT_04567f86 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04567f86 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_TypeInfo);
      DAT_04567f86 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_ModuleHolder_TypeInfo->static_fields->JIDGIFKNLGJ;
    if ((pNVar2 != (Nekki_SF2_GUI_ModuleHolder_o *)0x0) &&
       (__this_00 = Nekki_SF2_GUI_ModuleHolder__get_Canvas(pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Canvas_o *)0x0)) {
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)__this_00,OOGPLJBADCD,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

