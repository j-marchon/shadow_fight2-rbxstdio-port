// MGNPHCAAEIO$$GPNEFMMHHNG @ RVA 0x33FF3A8

bool MGNPHCAAEIO__GPNEFMMHHNG(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar4;
  FEPPOONJCGI_o *pFVar5;
  System_Collections_Generic_List_EKGDLIKHEMA__o *__this;
  int iVar6;
  bool bVar7;
  
  if ((DAT_04567fd8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567fd8 = 1;
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
  if (((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
      (pFVar5 = (pAVar4->fields).IMJJJJJMMHL, pFVar5 != (FEPPOONJCGI_o *)0x0)) &&
     (__this = (pFVar5->fields).EBDCADCBPNM,
     __this != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0)) {
    iVar6 = (__this->fields)._size;
    bVar7 = 0 < iVar6;
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        pIVar3 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,iVar6,
                            Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
        if (pIVar3 == (Il2CppObject *)0x0) goto LAB_034ff4c8;
        bVar2 = System_String__op_Equality(pIVar3[1].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
        if (bVar2) {
          return bVar7;
        }
        iVar1 = (__this->fields)._size;
        iVar6 = iVar6 + 1;
        bVar7 = iVar6 < iVar1;
      } while (iVar6 < iVar1);
    }
    return bVar7;
  }
LAB_034ff4c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

