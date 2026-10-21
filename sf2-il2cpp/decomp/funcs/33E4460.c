// FCJBEKHDLAF$$EMCONMBJABM @ RVA 0x33E4460

void FCJBEKHDLAF__EMCONMBJABM(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  System_Comparison_KMJDCOABCCG__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_KMJDCOABCCG__o *__this_00;
  System_Comparison_KMJDCOABCCG__o *comparison;
  
  if ((DAT_04567ebe & 1) == 0) {
    FUN_01bab630(&System_Comparison<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Sort__);
    FUN_01bab630(&Method_FCJBEKHDLAF_<>c_APOBCBGOKFG__);
    FUN_01bab630(&FCJBEKHDLAF_<>c_TypeInfo);
    DAT_04567ebe = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).KKOLONOKNIO;
  if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(FCJBEKHDLAF_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  comparison = FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__233_0;
  if (comparison == (System_Comparison_KMJDCOABCCG__o *)0x0) {
    if ((FCJBEKHDLAF_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FCJBEKHDLAF_<>c_TypeInfo,method);
    }
    comparison = (System_Comparison_KMJDCOABCCG__o *)
                 thunk_FUN_01bda818(System_Comparison<KMJDCOABCCG>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar1 = &FCJBEKHDLAF_<>c_TypeInfo->static_fields->__9__233_0;
    *ppSVar1 = comparison;
    thunk_FUN_01c20e04(ppSVar1,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<KMJDCOABCCG>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

