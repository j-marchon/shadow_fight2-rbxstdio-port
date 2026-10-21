// CNLGMNIEGFG$$.ctor @ RVA 0x3480988

void CNLGMNIEGFG___ctor(CNLGMNIEGFG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  CNLGMNIEGFG_FKKOIBADKGP_o *__this_01;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
                    /* try { // try from 03580994 to 03680bff has its CatchHandler @ 03580994
                       catch() { ... } // from try @ 03580994 with catch @ 03580994
                       catch() { ... } // from try @ 03581128 with catch @ 03580994
                       catch() { ... } // from try @ 035811e4 with catch @ 03580994
                       catch() { ... } // from try @ 035811ec with catch @ 03580994
                       catch() { ... } // from try @ 035813a8 with catch @ 03580994 */
  if ((DAT_0456837c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_TypeInfo);
    FUN_01bab630(&CNLGMNIEGFG_FKKOIBADKGP_TypeInfo);
    DAT_0456837c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<int,_JKDFEBLBMOF>__ctor__);
  (__this->fields).MOGNLMJONAL =
       (System_Collections_Generic_Dictionary_int__JKDFEBLBMOF__o *)__this_00;
  thunk_FUN_01c20e04(&(__this->fields).MOGNLMJONAL,__this_00);
  AFFHKININGD___ctor((AFFHKININGD_o *)__this,(MethodInfo *)0x0);
  __this_01 = (CNLGMNIEGFG_FKKOIBADKGP_o *)thunk_FUN_01bda818(CNLGMNIEGFG_FKKOIBADKGP_TypeInfo);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CNLGMNIEGFG_FKKOIBADKGP_o *)0x0) {
    (__this_01->fields).LPHHIMJHGEF = false;
    (__this_01->fields).LMBCNLBOPAF = 0.0;
    (__this_01->fields).IJCKKCPBLGP = 0.0;
    (__this_01->fields).LPJKDDIMOEK = 0.0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,-1.0,(MethodInfo *)0x0
              );
    local_50.fakeValueActive = local_68.fakeValueActive;
    local_50.inited = local_68.inited;
    local_50._18_2_ = local_68._18_2_;
    local_50.hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
    local_50.fakeValue = local_68.fakeValue;
    local_50.currentCryptoKey = local_68.currentCryptoKey;
    local_50.hiddenValue = local_68.hiddenValue;
    (__this_01->fields).ILNHMPEGKDD.fields.fakeValueActive = local_68.fakeValueActive;
    (__this_01->fields).ILNHMPEGKDD.fields.inited = local_68.inited;
    *(undefined2 *)&(__this_01->fields).ILNHMPEGKDD.fields.field_0x12 = local_68._18_2_;
    (__this_01->fields).ILNHMPEGKDD.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (__this_01->fields).ILNHMPEGKDD.fields.fakeValue = local_68.fakeValue;
    (__this_01->fields).ILNHMPEGKDD.fields.currentCryptoKey = local_68.currentCryptoKey;
    (__this_01->fields).ILNHMPEGKDD.fields.hiddenValue = local_68.hiddenValue;
    (__this->fields).BOOKHNOMHGM = __this_01;
    thunk_FUN_01c20e04(&(__this->fields).BOOKHNOMHGM,__this_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

