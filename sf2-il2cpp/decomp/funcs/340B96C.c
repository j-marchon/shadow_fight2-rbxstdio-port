// MGNPHCAAEIO$$DGFEFLMLKKM @ RVA 0x340B96C

AFFHKININGD_o * MGNPHCAAEIO__DGFEFLMLKKM(AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this;
  OOMHDDBCBJP_o *pOVar2;
  System_Collections_Generic_List_object__o *__this_00;
  AFFHKININGD_o *pAVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04568034 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568034 = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this != (ACHLOMELAJE_o *)0x0) {
    bVar1 = ACHLOMELAJE__KIDFHIOEAAP(__this,(MethodInfo *)0x0);
    if (!bVar1) {
      return FBFPLEFCDOK;
    }
    if ((FBFPLEFCDOK != (AFFHKININGD_o *)0x0) &&
       (pOVar2 = (FBFPLEFCDOK->fields).IFJLLGPGMHM, pOVar2 != (OOMHDDBCBJP_o *)0x0)) {
      __this_00 = (System_Collections_Generic_List_object__o *)
                  (*(pOVar2->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                            (pOVar2,(pOVar2->klass->vtable)._10_DHBIECBOKMB.method);
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        pAVar3 = (AFFHKININGD_o *)
                 System_Collections_Generic_List<object>__get_Item
                           (__this_00,(__this_00->fields)._size + -1,
                            Method_System_Collections_Generic_List<AFFHKININGD>_get_Item__);
        return pAVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

