// CFMDGLMCNIL$$CEPFMDCMPBP @ RVA 0x3077DD8

void CFMDGLMCNIL__CEPFMDCMPBP(CFMDGLMCNIL_o *__this,OHPOFOPJIMB_o *KCPFFLHCCIN,MethodInfo *method)

{
  System_Action_OHPOFOPJIMB__o *CJNHFNHJHPE;
  System_Collections_Generic_List_OHPOFOPJIMB__o *__this_00;
  MethodInfo *method_00;
  
                    /* try { // try from 03177de0 to 03277e43 has its CatchHandler @ 031771b8 */
  if ((DAT_04565fbb & 1) == 0) {
    FUN_01bab630(&System_Action<OHPOFOPJIMB>_TypeInfo);
    FUN_01bab630(&Method_CFMDGLMCNIL_CEPFMDCMPBP__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>_Remove__);
    DAT_04565fbb = 1;
  }
  CJNHFNHJHPE = (System_Action_OHPOFOPJIMB__o *)
                thunk_FUN_01bda818(System_Action<OHPOFOPJIMB>_TypeInfo);
                    /* try { // try from 03177e44 to 03277e53 has its CatchHandler @ 03178070 */
  System_Action<object>___ctor();
  if (KCPFFLHCCIN != (OHPOFOPJIMB_o *)0x0) {
                    /* try { // try from 03177e54 to 03277e73 has its CatchHandler @ 031771b8 */
                    /* catch() { ... } // from try @ 03177c10 with catch @ 03177e58 */
                    /* catch() { ... } // from try @ 03177c0c with catch @ 03177e5c */
    OHPOFOPJIMB__HAFNHPBMIBI(KCPFFLHCCIN,CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_00 = (__this->fields).MPMNLJJLADE;
    if (__this_00 != (System_Collections_Generic_List_OHPOFOPJIMB__o *)0x0) {
                    /* try { // try from 03177e74 to 03277e8b has its CatchHandler @ 03178164 */
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)KCPFFLHCCIN,
                 Method_System_Collections_Generic_List<OHPOFOPJIMB>_Remove__);
      (__this->fields).KHDFLOOLBIH = false;
                    /* try { // try from 03177e8c to 03277eef has its CatchHandler @ 031771b8 */
      CFMDGLMCNIL__POAHJIJOHKG(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

