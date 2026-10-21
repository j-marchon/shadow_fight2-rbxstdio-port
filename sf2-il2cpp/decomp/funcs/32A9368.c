// HMFIBKJMFHB$$RandomizeObscuredVars @ RVA 0x32A9368

void HMFIBKJMFHB__RandomizeObscuredVars(HMFIBKJMFHB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Action_NILLKLHKLHG__o **ppSVar1;
  System_Action_NILLKLHKLHG__o *action;
  
  if ((DAT_04567420 & 1) == 0) {
    FUN_01bab630(&System_Action<NILLKLHKLHG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_NILLKLHKLHG>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<NILLKLHKLHG>__);
                    /* try { // try from 033a93a8 to 034a93b3 has its CatchHandler @ 033a8ccc */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG>_ForEach__);
                    /* try { // try from 033a93b4 to 034a93bb has its CatchHandler @ 033a93bc */
                    /* catch() { ... } // from try @ 033a9340 with catch @ 033a93bc
                       catch() { ... } // from try @ 033a93b4 with catch @ 033a93bc */
    FUN_01bab630(&Method_HMFIBKJMFHB_<>c_CNDFGOHLIKK__);
    FUN_01bab630(&HMFIBKJMFHB_<>c_TypeInfo);
    DAT_04567420 = 1;
  }
  HJNEOLCKEMD__RandomizeObscuredVars((HJNEOLCKEMD_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._NKIOJNLMFBA_k__BackingField;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    return;
  }
  source = System_Collections_Generic_Dictionary<object,_object>__get_Values
                     (__this_00,
                      Method_System_Collections_Generic_Dictionary<string,_NILLKLHKLHG>_get_Values__
                     );
  __this_01 = System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         Method_System_Linq_Enumerable_ToList<NILLKLHKLHG>__);
  if ((HMFIBKJMFHB_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HMFIBKJMFHB_<>c_TypeInfo);
  }
  action = HMFIBKJMFHB_<>c_TypeInfo->static_fields->__9__7_0;
  if (action == (System_Action_NILLKLHKLHG__o *)0x0) {
    if ((HMFIBKJMFHB_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HMFIBKJMFHB_<>c_TypeInfo);
    }
    action = (System_Action_NILLKLHKLHG__o *)thunk_FUN_01bda818(System_Action<NILLKLHKLHG>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &HMFIBKJMFHB_<>c_TypeInfo->static_fields->__9__7_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<NILLKLHKLHG>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

