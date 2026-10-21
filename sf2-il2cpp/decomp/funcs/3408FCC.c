// MGNPHCAAEIO$$HNCBDGALLKF @ RVA 0x3408FCC

KCLPNDAPADO_o * MGNPHCAAEIO__HNCBDGALLKF(System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  MGNPHCAAEIO_IGNFIMADNNB_o *__this;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  System_Predicate_T__o *match;
  KCLPNDAPADO_o *pKVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
  if ((DAT_0456802c & 1) == 0) {
    FUN_01bab630(&Method_MGNPHCAAEIO_IGNFIMADNNB_LJLJBBHPPMG__);
    FUN_01bab630(&MGNPHCAAEIO_IGNFIMADNNB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_Find__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Predicate<KCLPNDAPADO>_TypeInfo);
    DAT_0456802c = 1;
    method = extraout_x1;
  }
  __this = (MGNPHCAAEIO_IGNFIMADNNB_o *)thunk_FUN_01bda818(MGNPHCAAEIO_IGNFIMADNNB_TypeInfo,method);
  MGNPHCAAEIO_IGNFIMADNNB___ctor(__this,(MethodInfo *)0x0);
  if (__this != (MGNPHCAAEIO_IGNFIMADNNB_o *)0x0) {
    (__this->fields).name = KGLJICLJHEL;
    thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
    method_00 = extraout_x1_00;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_01;
    }
    __this_00 = MGNPHCAAEIO__DCOFAPICGBA(10,method_00);
    match = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<KCLPNDAPADO>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
      pKVar1 = (KCLPNDAPADO_o *)
               System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<KCLPNDAPADO>_Find__);
      return pKVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

