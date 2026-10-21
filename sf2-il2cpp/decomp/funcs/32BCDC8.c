// MainMenuRaidRatingPanel$$SetTouchEnabled @ RVA 0x32BCDC8

void MainMenuRaidRatingPanel__SetTouchEnabled
               (MainMenuRaidRatingPanel_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *pNVar2;
  SFButton_o *pSVar3;
  
  if ((DAT_045674a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674a2 = 1;
  }
  pNVar2 = (__this->fields)._btnTop100;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._btnTop100;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bcf10;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._btnDan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._btnDan;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bcf10;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pNVar2 = (__this->fields)._btnLeague;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields)._btnLeague;
    if (pNVar2 == (Nekki_SF2_GUI_ResolutionButton_o *)0x0) goto LAB_033bcf10;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pNVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pSVar3 = (__this->fields)._btnClan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pSVar3 = (__this->fields)._btnClan;
  if (pSVar3 != (SFButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pSVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_033bcf10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

