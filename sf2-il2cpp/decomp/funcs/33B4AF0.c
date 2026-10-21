// GGHCLMEFIGO$$MJGMEEKMAOE @ RVA 0x33B4AF0

void GGHCLMEFIGO__MJGMEEKMAOE(GGHCLMEFIGO_o *__this,MethodInfo *method)

{
  System_Action_IGFGDDANEPE__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_00;
  System_Action_IGFGDDANEPE__o *action;
  
                    /* try { // try from 034b4af8 to 035b4b73 has its CatchHandler @ 034b4c30 */
  if ((DAT_04567d69 & 1) == 0) {
    FUN_01bab630(&System_Action<IGFGDDANEPE>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    FUN_01bab630(&Method_GGHCLMEFIGO_<>c_CFPKGMFLGAN__);
    FUN_01bab630(&GGHCLMEFIGO_<>c_TypeInfo);
    DAT_04567d69 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DPOPJKJLDEE;
  if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__30_0;
  if (action == (System_Action_IGFGDDANEPE__o *)0x0) {
                    /* catch() { ... } // from try @ 034b2bd8 with catch @ 034b4b74
                       try { // try from 034b4b74 to 035b4b93 has its CatchHandler @ 034b26b0 */
    if ((GGHCLMEFIGO_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034b2b7c with catch @ 034b4b78 */
      thunk_FUN_01ba7564(GGHCLMEFIGO_<>c_TypeInfo,method);
    }
                    /* try { // try from 034b4b94 to 035b4b97 has its CatchHandler @ 034b4ba4 */
    action = (System_Action_IGFGDDANEPE__o *)thunk_FUN_01bda818(System_Action<IGFGDDANEPE>_TypeInfo)
    ;
                    /* catch() { ... } // from try @ 034b4b94 with catch @ 034b4ba4 */
    System_Action<object>___ctor();
                    /* try { // try from 034b4bb4 to 035b4c1b has its CatchHandler @ 034b4c30 */
    ppSVar1 = &GGHCLMEFIGO_<>c_TypeInfo->static_fields->__9__30_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_ForEach__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

