// MGNPHCAAEIO$$PINMGKELLJI @ RVA 0x34013DC

float MGNPHCAAEIO__PINMGKELLJI(AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  PJKHAJKEHEL_o *pPVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  ACHLOMELAJE_o *pAVar2;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar3;
  float fVar4;
  
  if ((DAT_04567ff0 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567ff0 = 1;
    method = extraout_x1;
  }
  if (FBFPLEFCDOK != (AFFHKININGD_o *)0x0) {
    pSVar3 = (FBFPLEFCDOK->fields).MECHOBPGHFJ;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method = extraout_x1_00;
    }
    pSVar3 = MGNPHCAAEIO__EKOMOGPCHCN(pSVar3,method);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
       (pPVar1 = (pAVar2->fields).MFLNIMCFPDK, pPVar1 != (PJKHAJKEHEL_o *)0x0)) {
      pPVar1 = PJKHAJKEHEL__FAOBHLCDKJI(pPVar1,(MethodInfo *)0x0);
      fVar4 = AFFHKININGD__PINMGKELLJI(FBFPLEFCDOK,pPVar1,pSVar3,(MethodInfo *)0x0);
      return fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

