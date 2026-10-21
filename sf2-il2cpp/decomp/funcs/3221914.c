// DCAEKAABCEM$$OBMDEPEMOHF @ RVA 0x3221914

void DCAEKAABCEM__OBMDEPEMOHF(DCAEKAABCEM_o *__this,MethodInfo *method)

{
  System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *__this_00;
  System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o *comparison;
  
  if ((DAT_04566f3c & 1) == 0) {
    FUN_01bab630(&System_Comparison<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Sort__);
    FUN_01bab630(&Method_DCAEKAABCEM_<>c_KHOHPHMBKAN__);
    FUN_01bab630(&DCAEKAABCEM_<>c_TypeInfo);
    DAT_04566f3c = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DFKCIDJHEEE;
  if ((DCAEKAABCEM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DCAEKAABCEM_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  comparison = DCAEKAABCEM_<>c_TypeInfo->static_fields->__9__10_0;
  if (comparison == (System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    if ((DCAEKAABCEM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DCAEKAABCEM_<>c_TypeInfo,method);
    }
    comparison = (System_Comparison_DCAEKAABCEM_CMGDCNNPGII__o *)
                 thunk_FUN_01bda818(System_Comparison<DCAEKAABCEM_CMGDCNNPGII>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar1 = &DCAEKAABCEM_<>c_TypeInfo->static_fields->__9__10_0;
    *ppSVar1 = comparison;
    thunk_FUN_01c20e04(ppSVar1,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_DCAEKAABCEM_CMGDCNNPGII__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<DCAEKAABCEM_CMGDCNNPGII>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

