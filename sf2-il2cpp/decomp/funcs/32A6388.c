// Nekki.SF2.GUI.Pvp.CharacterSelectModule$$FDDCDDKINHH @ RVA 0x32A6388

void Nekki_SF2_GUI_Pvp_CharacterSelectModule__FDDCDDKINHH
               (Nekki_SF2_GUI_Pvp_CharacterSelectModule_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  IFKFDFGNMMN_o *__this_00;
  
  if ((DAT_045673f5 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045673f5 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__FDDCDDKINHH
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar1 != (NLPJLHOEAOE_o *)0x0) &&
     (__this_00 = (pNVar1->fields).OMDCNDHOACL, __this_00 != (IFKFDFGNMMN_o *)0x0)) {
    IFKFDFGNMMN__LKFDFJLMBHN
              (__this_00,&(__this->fields).super.LDJBDDJCPBO,&(__this->fields).super.HKGKJIAPLPO,
               &(__this->fields).super.PCNNFNFPJNH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

