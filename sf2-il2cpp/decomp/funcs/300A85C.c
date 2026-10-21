// Nekki.SF2.GUI.Shop.InfoPanelContent$$GOBCLPJNCJP @ RVA 0x300A85C

void Nekki_SF2_GUI_Shop_InfoPanelContent__GOBCLPJNCJP
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar2;
  HOOAAGABMBL_o **ppHVar3;
  
  if ((DAT_04565b63 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b63 = 1;
  }
  ppHVar3 = &(__this->fields).KJBDDCNKNNE;
  *ppHVar3 = (__this->fields).BBODGCMLKFP;
  thunk_FUN_01c20e04(ppHVar3);
  if (*ppHVar3 == (HOOAAGABMBL_o *)0x0) {
    return;
  }
  bVar1 = AMIINPEKKFB__NLJKKOINGGE(*ppHVar3,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 == (ACHLOMELAJE_o *)0x0) ||
       (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 == (GGHCLMEFIGO_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    GGHCLMEFIGO__BOEFGIBCIIL(__this_00,*ppHVar3,true,(MethodInfo *)0x0);
    method_00 = extraout_x1_00;
  }
  Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
  return;
}

