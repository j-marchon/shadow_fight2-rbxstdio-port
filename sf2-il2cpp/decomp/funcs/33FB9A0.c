// MJACKBKADMN$$KFPIKBGFKBC @ RVA 0x33FB9A0

void MJACKBKADMN__KFPIKBGFKBC(MJACKBKADMN_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  IGFGDDANEPE_o *pIVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar3;
  IGFGDDANEPE_o **ppIVar4;
  System_String_o *JGHIJMJNJLE;
  
  if ((DAT_04567fba & 1) == 0) {
    FUN_01bab630(&JCHNBADDBGO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fba = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar3->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) {
    pIVar2 = GGHCLMEFIGO__DOIFEOAFLDI(__this_00,(__this->fields).OAKCHEGKLBP,(MethodInfo *)0x0);
    ppIVar4 = &(__this->fields).super.DPCOEJPACKA;
    *ppIVar4 = pIVar2;
    thunk_FUN_01c20e04(ppIVar4,pIVar2);
    if (((__this->fields).super.HHCHGNIMDJK == false) && (*ppIVar4 != (IGFGDDANEPE_o *)0x0)) {
      JGHIJMJNJLE = ((*ppIVar4)->fields).NPFMOEOIEKM;
      if ((JCHNBADDBGO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                        (JGHIJMJNJLE,
                         (System_Collections_Generic_IEnumerable_string__o *)
                         JCHNBADDBGO_TypeInfo->static_fields->AMAMBMDFBOF,(MethodInfo *)0x0);
      if (bVar1) {
        (__this->fields).super.HHCHGNIMDJK = true;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

