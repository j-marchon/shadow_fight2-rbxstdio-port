// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$ChangeCoins @ RVA 0x344DEF8

void Nekki_SF2_GUI_Menu_MenuMoneyPanel__ChangeCoins
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,int32_t IDPMJOKDHNP,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_04568286 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568286 = 1;
  }
  pNVar3 = (__this->fields)._infoCoins;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pNVar3,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._infoCoins;
    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = BJFCCEEPHOF__POMAAOILGAL(IDPMJOKDHNP,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0354dfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

