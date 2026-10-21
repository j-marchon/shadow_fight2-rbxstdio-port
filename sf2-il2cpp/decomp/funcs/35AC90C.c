// HKBBPPENHEI$$MAHFCKJGBPP @ RVA 0x35AC90C

void HKBBPPENHEI__MAHFCKJGBPP(HKBBPPENHEI_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  System_String_o *OOGPLJBADCD;
  
  if ((DAT_04568e5a & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_HKBBPPENHEI_BDKJDKPLOIP__);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e5a = 1;
  }
  (*(__this->klass->vtable)._4_PKIFMKGDJJN.methodPtr)
            (__this,(__this->klass->vtable)._4_PKIFMKGDJJN.method);
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  OOGPLJBADCD = (__this->fields).EJNOBBDDBDO;
  if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar2 = MFBNFJGBPBB__JBAMHPFEPLG(MNBMHEAHIIA,OOGPLJBADCD,(MethodInfo *)0x0);
  (__this->fields).BDPOJDOAJJF = iVar2;
  bVar1 = MFBNFJGBPBB__EDBBDECOKAF(MNBMHEAHIIA,(__this->fields).GPHBPMLJJPI,(MethodInfo *)0x0);
  (__this->fields).OPAFMFMILDG = bVar1;
  if (bVar1) {
    __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
    if (__this_00 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
LAB_036acac4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,true,(MethodInfo *)0x0);
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      if (DAT_04565c84 == '\0') {
        FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
        DAT_04565c84 = '\x01';
      }
      pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar3 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) goto LAB_036acac4;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar3,false,(MethodInfo *)0x0);
    }
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  Nekki_SF2_Core_ApplicationController__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

