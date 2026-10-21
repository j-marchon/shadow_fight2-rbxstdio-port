// GCIFMNHADDF$$EDJNGLJDHFO @ RVA 0x31AB118

void GCIFMNHADDF__EDJNGLJDHFO
               (GCIFMNHADDF_o *__this,bool CJNHFNHJHPE,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Predicate_T__o *match;
  MethodInfo *method_00;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_00;
  
                    /* try { // try from 032ab128 to 033ab12f has its CatchHandler @ 032ab650 */
  if ((DAT_04566b39 & 1) == 0) {
                    /* try { // try from 032ab150 to 033ab157 has its CatchHandler @ 032ab630 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_GCIFMNHADDF_JLFCOKLPCGO_OFADDGOGEEO__);
                    /* try { // try from 032ab164 to 033ab167 has its CatchHandler @ 032ab194 */
    FUN_01bab630(&GCIFMNHADDF_JLFCOKLPCGO_TypeInfo);
                    /* try { // try from 032ab16c to 033ab16f has its CatchHandler @ 032ab190 */
                    /* try { // try from 032ab174 to 033ab17b has its CatchHandler @ 032ab18c */
    FUN_01bab630(&Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_Find__);
                    /* try { // try from 032ab17c to 033ab1b7 has its CatchHandler @ 032aa15c */
                    /* catch() { ... } // from try @ 032ab110 with catch @ 032ab180 */
    FUN_01bab630(&System_Predicate<GCIFMNHADDF_NFAHLBCFIPD>_TypeInfo);
                    /* catch() { ... } // from try @ 032ab174 with catch @ 032ab18c */
    FUN_01bab630(&StringLiteral_5355);
                    /* catch() { ... } // from try @ 032ab16c with catch @ 032ab190 */
                    /* catch() { ... } // from try @ 032ab164 with catch @ 032ab194 */
    DAT_04566b39 = 1;
  }
                    /* catch() { ... } // from try @ 032aac58 with catch @ 032ab198 */
                    /* catch() { ... } // from try @ 032aa4bc with catch @ 032ab19c */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda818(GCIFMNHADDF_JLFCOKLPCGO_TypeInfo);
                    /* catch() { ... } // from try @ 032aa488 with catch @ 032ab1a0 */
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* try { // try from 032ab1b8 to 033ab1bb has its CatchHandler @ 032ab638 */
                    /* try { // try from 032ab1bc to 033ab5e3 has its CatchHandler @ 032aa15c */
    pIVar1[1].klass = (Il2CppClass *)LMEHKLFGEHI;
    thunk_FUN_01c20e04(pIVar1 + 1,LMEHKLFGEHI);
    __this_00 = (__this->fields).EDBKLOENEPB;
    match = (System_Predicate_T__o *)
            thunk_FUN_01bda818(System_Predicate<GCIFMNHADDF_NFAHLBCFIPD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_00 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
      pIVar1 = System_Collections_Generic_List<object>__Find
                         ((System_Collections_Generic_List_object__o *)__this_00,match,
                          Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_Find__);
      if (pIVar1 != (Il2CppObject *)0x0) {
        *(bool *)&pIVar1[1].monitor = CJNHFNHJHPE;
        GCIFMNHADDF__MCKCJDBPAFB(__this,method_00);
        return;
      }
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_5355,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

