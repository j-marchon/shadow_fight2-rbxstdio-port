// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$SetButtonsEnabled @ RVA 0x3427D28

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__SetButtonsEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  LabelButton_o *pLVar2;
  ProgressLabelButton_o *pPVar3;
  
  if ((DAT_04568119 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568119 = 1;
  }
  (__this->fields).HOFACOGJODC = CJNHFNHJHPE;
  pLVar2 = (__this->fields)._btnExit;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pLVar2 = (__this->fields)._btnExit;
    if (pLVar2 == (LabelButton_o *)0x0) goto LAB_03527e3c;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pPVar3 = (__this->fields)._btnFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03527dc4 to 03627e67 has its CatchHandler @ 03527dc4
                       catch() { ... } // from try @ 03527dc4 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527ea8 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527ee4 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527f10 with catch @ 03527dc4
                       catch() { ... } // from try @ 03527f50 with catch @ 03527dc4 */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pPVar3 = (__this->fields)._btnFight;
    if (pPVar3 == (ProgressLabelButton_o *)0x0) goto LAB_03527e3c;
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pPVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  pLVar2 = (__this->fields)._btnFinalFight;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pLVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  pLVar2 = (__this->fields)._btnFinalFight;
  if (pLVar2 != (LabelButton_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pLVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
LAB_03527e3c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

