// BEPJMNAHCAD$$HCKFFOOHHMA @ RVA 0x3189254

void BEPJMNAHCAD__HCKFFOOHHMA(BEPJMNAHCAD_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MNLIBPAOCLG_o *__this_01;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar2;
  Nekki_SF2_Core_Fights_Controls_GameController_o *pNVar3;
  
  if ((DAT_045669fd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045669fd = 1;
  }
  pNVar2 = (__this->fields).FLJPPMKLBLJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).FLJPPMKLBLJ;
    if (pNVar2 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_032893b0;
    Nekki_SF2_GUI_Fight_PreFight__VisibleViewer(pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  if (DAT_04565c84 == '\0') {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
    DAT_04565c84 = '\x01';
  }
  pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565c84 == '\0') {
      FUN_01bab630(&Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo);
      DAT_04565c84 = '\x01';
    }
    pNVar3 = Nekki_SF2_Core_Fights_Controls_GameController_TypeInfo->static_fields->CNMHHKAMGPI;
    if ((pNVar3 == (Nekki_SF2_Core_Fights_Controls_GameController_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_032893b0;
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  if (CJNHFNHJHPE) {
    (__this->fields).FDGNLPLKNGK = true;
    return;
  }
  __this_01 = (__this->fields).LIICCFBEOLC;
  if (__this_01 != (MNLIBPAOCLG_o *)0x0) {
    MNLIBPAOCLG__IIMJPBCGBKN(__this_01,false,(MethodInfo *)0x0);
    return;
  }
LAB_032893b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

