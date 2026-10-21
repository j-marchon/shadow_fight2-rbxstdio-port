// MGNPHCAAEIO$$DODJBGHCIHD @ RVA 0x33F5C4C

bool MGNPHCAAEIO__DODJBGHCIHD(HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  GGHCLMEFIGO_o *__this;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  Il2CppObject *pIVar3;
  IGFGDDANEPE_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  ACHLOMELAJE_o *pAVar4;
  int iVar5;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  bool bVar6;
  
  if ((DAT_04567fdf & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fdf = 1;
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar4 == (ACHLOMELAJE_o *)0x0) ||
      (__this = (pAVar4->fields).OIDPLCLELEN, __this == (GGHCLMEFIGO_o *)0x0)) ||
     (__this_00 = GGHCLMEFIGO__PDBBGCIHBFL(__this,(MethodInfo *)0x0),
     __this_00 == (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
LAB_034f5dc8:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar5 = (__this_00->fields)._size;
  bVar6 = 0 < iVar5;
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar5,
                          Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034f5dc8;
      IKKAMAMLIKA = pIVar3[1].monitor;
      method_00 = extraout_x1_02;
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
        method_00 = extraout_x1_03;
      }
      bVar2 = MGNPHCAAEIO__GJFJEHANLBD(IKKAMAMLIKA,method_00);
      if (bVar2) {
        __this_01 = (IGFGDDANEPE_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,iVar5,
                               Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Item__);
        if (__this_01 == (IGFGDDANEPE_o *)0x0) goto LAB_034f5dc8;
        bVar2 = IGFGDDANEPE__FGDEJFIKMCP(__this_01,EIKFGOCCOIE,(MethodInfo *)0x0);
        if (!bVar2) break;
      }
      iVar1 = (__this_00->fields)._size;
      iVar5 = iVar5 + 1;
      bVar6 = iVar5 < iVar1;
    } while (iVar5 < iVar1);
  }
  return (bool)(~bVar6 & 1);
}

