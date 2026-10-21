// Nekki.SF2.GUI.Pvp.LocationSelectModule$$BJBEBBGINAH @ RVA 0x31AC994

void Nekki_SF2_GUI_Pvp_LocationSelectModule__BJBEBBGINAH
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  MethodInfo *extraout_x1;
  IFKFDFGNMMN_o *pIVar2;
  
                    /* try { // try from 032ac9a0 to 033ac9ab has its CatchHandler @ 032acb5c */
  if ((DAT_04566b51 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b51 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032ac9c8 to 033ac9d3 has its CatchHandler @ 032acb60 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 032ac9e8 to 033aca07 has its CatchHandler @ 032acb88 */
  if ((pNVar1 != (NLPJLHOEAOE_o *)0x0) &&
     (pIVar2 = (pNVar1->fields).OMDCNDHOACL, pIVar2 != (IFKFDFGNMMN_o *)0x0)) {
    (__this->fields).DLCCJFCKAJL = (pIVar2->fields).DFIBPGKOKEG;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Pvp_SelectModule__BJBEBBGINAH
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

