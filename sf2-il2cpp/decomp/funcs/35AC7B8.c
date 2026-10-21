// HKBBPPENHEI$$EABJNHKPJOM @ RVA 0x35AC7B8

void HKBBPPENHEI__EABJNHKPJOM(HKBBPPENHEI_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar2;
  
  if ((DAT_04568e5c & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HKBBPPENHEI_BDKJDKPLOIP__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e5c = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  Nekki_SF2_Core_ApplicationController__remove_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((__this->fields).OPAFMFMILDG != false) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar2 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar2 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar2 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_036ac908;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar2,true,(MethodInfo *)0x0);
    }
    __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
LAB_036ac908:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

