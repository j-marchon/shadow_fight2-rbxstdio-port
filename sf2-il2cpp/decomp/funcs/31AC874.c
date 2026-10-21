// Nekki.SF2.GUI.Pvp.LocationSelectModule$$FDDCDDKINHH @ RVA 0x31AC874

void Nekki_SF2_GUI_Pvp_LocationSelectModule__FDDCDDKINHH
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  IFKFDFGNMMN_o *__this_00;
  
  if ((DAT_04566b50 & 1) == 0) {
                    /* try { // try from 032ac89c to 033ac8c3 has its CatchHandler @ 032acb90 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b50 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__FDDCDDKINHH
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar1 != (NLPJLHOEAOE_o *)0x0) &&
     (__this_00 = (pNVar1->fields).OMDCNDHOACL, __this_00 != (IFKFDFGNMMN_o *)0x0)) {
    IFKFDFGNMMN__HIBPHKLFJML
              (__this_00,&(__this->fields).super.LDJBDDJCPBO,&(__this->fields).super.HKGKJIAPLPO,
               &(__this->fields).super.PCNNFNFPJNH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

