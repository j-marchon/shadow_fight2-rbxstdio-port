// TypeDefIndex 2929
// Namespace: 
// [CompilerGenerated]
// private sealed class CBIDCBEJPON.IAENJBADEON
// Fields:
//   public Nullable<TimeSpan> timeout; // 0x10
//   public string resolvedUrl; // 0x20
//   public string path; // 0x28
//   public bool checkCert; // 0x30
//   public CancellationToken cancellationToken; // 0x38

// ===== internal NJIEBADJPEJ JBBHGDLILEA(EOGOGKOFPLJ webRequest)  [RVA 0x3454320]
// CBIDCBEJPON.IAENJBADEON$$JBBHGDLILEA @ RVA 0x3454320

NJIEBADJPEJ_o *
CBIDCBEJPON_IAENJBADEON__JBBHGDLILEA
          (CBIDCBEJPON_IAENJBADEON_o *__this,EOGOGKOFPLJ_o *webRequest,MethodInfo *method)

{
  System_String_o *CJFAPGEEPLM;
  System_String_o *AAIHDEKMIJG;
  System_String_o *EHKEOHNBLCK;
  NJIEBADJPEJ_o *__this_00;
  
  if ((DAT_045682bc & 1) == 0) {
    FUN_01bab630(&NJIEBADJPEJ_TypeInfo);
    DAT_045682bc = 1;
  }
  if (webRequest != (EOGOGKOFPLJ_o *)0x0) {
    CJFAPGEEPLM = (__this->fields).resolvedUrl;
    AAIHDEKMIJG = (__this->fields).path;
    EHKEOHNBLCK = EOGOGKOFPLJ__IIBCLDACBAL(webRequest,(MethodInfo *)0x0);
    __this_00 = (NJIEBADJPEJ_o *)thunk_FUN_01bda818(NJIEBADJPEJ_TypeInfo);
    NJIEBADJPEJ___ctor(__this_00,CJFAPGEEPLM,AAIHDEKMIJG,EHKEOHNBLCK,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal NJIEBADJPEJ ICOOGFEMJHH(EOGOGKOFPLJ webRequest)  [RVA 0x34543B0]
// CBIDCBEJPON.IAENJBADEON$$ICOOGFEMJHH @ RVA 0x34543B0

NJIEBADJPEJ_o *
CBIDCBEJPON_IAENJBADEON__ICOOGFEMJHH
          (CBIDCBEJPON_IAENJBADEON_o *__this,EOGOGKOFPLJ_o *webRequest,MethodInfo *method)

{
  System_String_o *CJFAPGEEPLM;
  System_String_o *AAIHDEKMIJG;
  NJIEBADJPEJ_o *__this_00;
  EOGOGKOFPLJ_o *extraout_x1;
  
  if ((DAT_045682bd & 1) == 0) {
    FUN_01bab630(&NJIEBADJPEJ_TypeInfo);
    DAT_045682bd = 1;
    webRequest = extraout_x1;
  }
  CJFAPGEEPLM = (__this->fields).resolvedUrl;
  AAIHDEKMIJG = (__this->fields).path;
  __this_00 = (NJIEBADJPEJ_o *)thunk_FUN_01bda818(NJIEBADJPEJ_TypeInfo,webRequest);
  NJIEBADJPEJ___ctor(__this_00,CJFAPGEEPLM,AAIHDEKMIJG,(System_String_o *)0x0,(MethodInfo *)0x0);
  return __this_00;
}


// ===== internal void CACMOLMGPEC(int attempt, Action<EOGOGKOFPLJ> sucessCallback, Action<EOGOGKOFPLJ> failCallback, Action<EOGOGKOFPLJ> progressChangedCallback)  [RVA 0x3454418]
// CBIDCBEJPON.IAENJBADEON$$CACMOLMGPEC @ RVA 0x3454418

void CBIDCBEJPON_IAENJBADEON__CACMOLMGPEC
               (CBIDCBEJPON_IAENJBADEON_o *__this,int32_t attempt,
               System_Action_EOGOGKOFPLJ__o *sucessCallback,
               System_Action_EOGOGKOFPLJ__o *failCallback,
               System_Action_EOGOGKOFPLJ__o *progressChangedCallback,MethodInfo *method)

{
  System_Action_EOGOGKOFPLJ__o *method_00;
  double dVar1;
  System_Nullable_TimeSpan__o __this_00;
  System_TimeSpan_Fields local_48;
  
  method_00 = sucessCallback;
  if ((DAT_045682be & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_Value__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_045682be = 1;
  }
  __this_00.fields.value.fields._ticks =
       (System_TimeSpan_Fields)
       (System_TimeSpan_Fields)Method_System_Nullable<TimeSpan>_get_Value__._ticks;
  __this_00.fields._0_8_ = &__this->fields;
  local_48._ticks =
       (int64_t)System_Nullable<TimeSpan>__get_Value(__this_00,(MethodInfo_27FB90C *)method_00);
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
  }
  dVar1 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_48,(MethodInfo *)0x0);
  LKCDEAGMLCN__HIIHLLDDKGB
            ((__this->fields).resolvedUrl,(__this->fields).path,sucessCallback,failCallback,
             progressChangedCallback,(Il2CppObject *)0x0,(float)dVar1 / (float)(attempt + 1),
             (__this->fields).checkCert,
             (System_Threading_CancellationToken_o)(__this->fields).cancellationToken.fields._source
             ,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3453F9C]
// CBIDCBEJPON.IAENJBADEON$$.ctor @ RVA 0x3453F9C

void CBIDCBEJPON_IAENJBADEON___ctor(CBIDCBEJPON_IAENJBADEON_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

