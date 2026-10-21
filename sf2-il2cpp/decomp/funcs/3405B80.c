// MGNPHCAAEIO$$LHBKGHHNCNN @ RVA 0x3405B80

bool MGNPHCAAEIO__LHBKGHHNCNN(NHPEALHAHOA_o *DDNOLOCMDMB,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool bVar3;
  CHDGOFBHAFI_o *pCVar4;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  ACHLOMELAJE_o *pAVar5;
  
  if ((DAT_0456803e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456803e = 1;
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
    method = extraout_x1_02;
  }
  pAVar5 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar5 != (ACHLOMELAJE_o *)0x0) {
    bVar2 = (pAVar5->fields).IOHEOKOOJFA;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    pCVar4 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if ((pCVar4 != (CHDGOFBHAFI_o *)0x0) && (DDNOLOCMDMB != (NHPEALHAHOA_o *)0x0)) {
      iVar1 = (DDNOLOCMDMB->fields).HPIDBKGJCAF;
      bVar3 = iVar1 == 1;
      if (bVar2 != false) {
        bVar3 = iVar1 == 0;
      }
      return (iVar1 != 2 && !bVar3) && (pCVar4->fields).BLELLCNDBHN == false;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

