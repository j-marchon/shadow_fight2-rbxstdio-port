// Nekki.SF2.GUI.Common.SceneSelector$$OnButtonClick @ RVA 0x33998C0

void Nekki_SF2_GUI_Common_SceneSelector__OnButtonClick
               (Nekki_SF2_GUI_Common_SceneSelector_o *__this,MethodInfo *method)

{
  int iVar1;
  NDPMLPGANCI_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar2;
  
  pNVar2 = (__this->fields).MKAAKGJNBHI;
  if (pNVar2 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
    if ((pNVar2->fields).GLDOIEEOPCB != 0) {
      return;
    }
    iVar1 = (__this->fields)._TargetScene;
    if (DAT_04565e5a == '\0') {
      FUN_01bab630(&KJFLIAMBKEB_TypeInfo);
      DAT_04565e5a = '\x01';
      method = extraout_x1;
    }
    if (iVar1 == KJFLIAMBKEB_TypeInfo->static_fields->DLOIHNBNGDB) {
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo,method);
        DAT_04566913 = '\x01';
      }
      pNVar2 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar2 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Common_SceneMenuScroll__Close(pNVar2,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 != (NDPMLPGANCI_o *)0x0) {
        NDPMLPGANCI__EKPAFDJIAGI
                  (__this_00,(__this->fields)._TargetScene,(Il2CppObject *)0x0,
                   (System_Action_object__o *)0x0,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

