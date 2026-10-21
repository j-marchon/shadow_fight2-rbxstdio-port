// NCNJEIBHGBH$$LFPJPIDMDPF @ RVA 0x32F0EE0

System_Collections_Generic_List_FKNCNNOOOIO__o *
NCNJEIBHGBH__LFPJPIDMDPF(NCNJEIBHGBH_o *__this,MethodInfo *method)

{
  System_Predicate_FKNCNNOOOIO__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_FKNCNNOOOIO__o *pSVar2;
  System_Predicate_FKNCNNOOOIO__o *match;
  
                    /* try { // try from 033f0ee4 to 034f0ef3 has its CatchHandler @ 033f1ed0 */
                    /* try { // try from 033f0f00 to 034f0f0b has its CatchHandler @ 033f1ec8 */
  if ((DAT_0456766e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
                    /* try { // try from 033f0f18 to 034f0f27 has its CatchHandler @ 033f1e74 */
    FUN_01bab630(&System_Predicate<FKNCNNOOOIO>_TypeInfo);
    FUN_01bab630(&Method_NCNJEIBHGBH_<>c_DAMGDLNEEAF__);
    FUN_01bab630(&NCNJEIBHGBH_<>c_TypeInfo);
                    /* try { // try from 033f0f38 to 034f0f3f has its CatchHandler @ 033f1f1c */
    DAT_0456766e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033f0f40 to 034f1737 has its CatchHandler @ 033ef1b0 */
  pSVar2 = (__this->fields).JODEDMLAIEG;
  if ((NCNJEIBHGBH_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NCNJEIBHGBH_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = NCNJEIBHGBH_<>c_TypeInfo->static_fields->__9__26_0;
  if (match == (System_Predicate_FKNCNNOOOIO__o *)0x0) {
    if ((NCNJEIBHGBH_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NCNJEIBHGBH_<>c_TypeInfo,method);
    }
    match = (System_Predicate_FKNCNNOOOIO__o *)
            thunk_FUN_01bda818(System_Predicate<FKNCNNOOOIO>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &NCNJEIBHGBH_<>c_TypeInfo->static_fields->__9__26_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (pSVar2 != (System_Collections_Generic_List_FKNCNNOOOIO__o *)0x0) {
    pSVar2 = (System_Collections_Generic_List_FKNCNNOOOIO__o *)
             System_Collections_Generic_List<object>__FindAll
                       ((System_Collections_Generic_List_object__o *)pSVar2,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<FKNCNNOOOIO>_FindAll__);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

