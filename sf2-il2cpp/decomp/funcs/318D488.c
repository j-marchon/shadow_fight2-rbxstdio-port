// MCCHIAKPFEL$$RandomizeObscuredVars @ RVA 0x318D488

void MCCHIAKPFEL__RandomizeObscuredVars(MCCHIAKPFEL_o *__this,MethodInfo *method)

{
  JHBHHHKEFOO_o *__this_00;
  System_Action_OIBMPFJDKGO__o **ppSVar1;
  System_Collections_Generic_List_OIBMPFJDKGO__o *__this_01;
  System_Action_OIBMPFJDKGO__o *action;
  
  if ((DAT_04566a19 & 1) == 0) {
    FUN_01bab630(&System_Action<OIBMPFJDKGO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIBMPFJDKGO>_ForEach__);
    FUN_01bab630(&Method_MCCHIAKPFEL_<>c_NBNIOBMFCOB__);
    FUN_01bab630(&MCCHIAKPFEL_<>c_TypeInfo);
    DAT_04566a19 = 1;
  }
  __this_00 = (__this->fields).LNONNMPONFN;
  if (__this_00 != (JHBHHHKEFOO_o *)0x0) {
    JHBHHHKEFOO__RandomizeObscuredVars(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).PADLGGFCCMI;
    if ((MCCHIAKPFEL_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    action = MCCHIAKPFEL_<>c_TypeInfo->static_fields->__9__6_0;
    if (action == (System_Action_OIBMPFJDKGO__o *)0x0) {
      if ((MCCHIAKPFEL_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = (System_Action_OIBMPFJDKGO__o *)
               thunk_FUN_01bda818(System_Action<OIBMPFJDKGO>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar1 = &MCCHIAKPFEL_<>c_TypeInfo->static_fields->__9__6_0;
      *ppSVar1 = action;
      thunk_FUN_01c20e04(ppSVar1,action);
    }
    if (__this_01 != (System_Collections_Generic_List_OIBMPFJDKGO__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<OIBMPFJDKGO>_ForEach__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

