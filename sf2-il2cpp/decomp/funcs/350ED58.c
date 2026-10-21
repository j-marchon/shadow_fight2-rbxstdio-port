// AMIINPEKKFB$$BDMBCINIFFB @ RVA 0x350ED58

void AMIINPEKKFB__BDMBCINIFFB
               (HOOAAGABMBL_o *IKKAMAMLIKA,int32_t ACCIHBHMFPN,bool OAKHPMMLFPP,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_58 [4];
  int32_t local_54;
  
  if ((DAT_045688f3 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&NFNBHPOJFNJ_DDPHDDCKAGO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&StringLiteral_18948);
    FUN_01bab630(&StringLiteral_19209);
    FUN_01bab630(&StringLiteral_21625);
    DAT_045688f3 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
  MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this,(MethodInfo *)0x0);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 0360ee08 to 0370ef77 has its CatchHandler @ 0360ee08
                       catch() { ... } // from try @ 0360ee08 with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f1f4 with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f2bc with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f2c4 with catch @ 0360ee08
                       catch() { ... } // from try @ 0360f3ec with catch @ 0360ee08 */
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,StringLiteral_19209,(Il2CppObject *)IKKAMAMLIKA,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    local_54 = ACCIHBHMFPN;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(NFNBHPOJFNJ_DDPHDDCKAGO_TypeInfo,&local_54);
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,StringLiteral_21625,pIVar1,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    local_58[0] = OAKHPMMLFPP;
    pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_58);
    System_Collections_Generic_Dictionary<object,_object>__set_Item
              (__this,StringLiteral_18948,pIVar1,
               Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    NFNBHPOJFNJ__NOJIAJPLOKB(6,(MDNLIFLBFNO_o *)__this,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

