// TypeDefIndex 2926
// Namespace: 
// [CompilerGenerated]
// private sealed class CBIDCBEJPON.FINAJBCKNKG
// Fields:
//   public Nullable<TimeSpan> timeout; // 0x10
//   public string resolvedUrl; // 0x20
//   public bool checkCert; // 0x28
//   public CancellationToken cancellationToken; // 0x30

// ===== internal void MBMPFCHBIJF(int attempt, Action<EOGOGKOFPLJ> sucessCallback, Action<EOGOGKOFPLJ> failCallback, Action<EOGOGKOFPLJ> progressChangedCallback)  [RVA 0x3454054]
// CBIDCBEJPON.FINAJBCKNKG$$MBMPFCHBIJF @ RVA 0x3454054

void CBIDCBEJPON_FINAJBCKNKG__MBMPFCHBIJF
               (CBIDCBEJPON_FINAJBCKNKG_o *__this,int32_t attempt,
               System_Action_EOGOGKOFPLJ__o *sucessCallback,
               System_Action_EOGOGKOFPLJ__o *failCallback,
               System_Action_EOGOGKOFPLJ__o *progressChangedCallback,MethodInfo *method)

{
  System_Action_EOGOGKOFPLJ__o *method_00;
  double dVar1;
  System_Nullable_TimeSpan__o __this_00;
  System_TimeSpan_Fields local_48;
  
  method_00 = sucessCallback;
  if ((DAT_045682b8 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<TimeSpan>_get_Value__);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_045682b8 = 1;
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
  LKCDEAGMLCN__AJNEBENFIAJ
            ((__this->fields).resolvedUrl,sucessCallback,failCallback,progressChangedCallback,
             (Il2CppObject *)0x0,(float)dVar1 / (float)(attempt + 1),(__this->fields).checkCert,
             (System_Threading_CancellationToken_o)(__this->fields).cancellationToken.fields._source
             ,(MethodInfo *)0x0);
  return;
}


// ===== public void .ctor()  [RVA 0x3453CC4]
// CBIDCBEJPON.FINAJBCKNKG$$.ctor @ RVA 0x3453CC4

void CBIDCBEJPON_FINAJBCKNKG___ctor(CBIDCBEJPON_FINAJBCKNKG_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal EDLFPEGBIFO BFLFJFCHNDN(EOGOGKOFPLJ webRequest)  [RVA 0x3454134]
// CBIDCBEJPON.FINAJBCKNKG$$BFLFJFCHNDN @ RVA 0x3454134

EDLFPEGBIFO_o *
CBIDCBEJPON_FINAJBCKNKG__BFLFJFCHNDN
          (CBIDCBEJPON_FINAJBCKNKG_o *__this,EOGOGKOFPLJ_o *webRequest,MethodInfo *method)

{
  System_Byte_array *IMMNELPBGIF;
  EDLFPEGBIFO_o *__this_00;
  System_String_o *CJFAPGEEPLM;
  
  if ((DAT_045682b9 & 1) == 0) {
    FUN_01bab630(&EDLFPEGBIFO_TypeInfo);
    DAT_045682b9 = 1;
  }
  if (webRequest != (EOGOGKOFPLJ_o *)0x0) {
    CJFAPGEEPLM = (__this->fields).resolvedUrl;
    IMMNELPBGIF = EOGOGKOFPLJ__NFCEPHFILLC(webRequest,(MethodInfo *)0x0);
    __this_00 = (EDLFPEGBIFO_o *)thunk_FUN_01bda818(EDLFPEGBIFO_TypeInfo);
    EDLFPEGBIFO___ctor(__this_00,CJFAPGEEPLM,IMMNELPBGIF,(System_String_o *)0x0,(MethodInfo *)0x0);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal EDLFPEGBIFO OJNIOBJAMFB(EOGOGKOFPLJ webRequest)  [RVA 0x34541BC]
// CBIDCBEJPON.FINAJBCKNKG$$OJNIOBJAMFB @ RVA 0x34541BC

EDLFPEGBIFO_o *
CBIDCBEJPON_FINAJBCKNKG__OJNIOBJAMFB
          (CBIDCBEJPON_FINAJBCKNKG_o *__this,EOGOGKOFPLJ_o *webRequest,MethodInfo *method)

{
  System_String_o *EHKEOHNBLCK;
  EDLFPEGBIFO_o *__this_00;
  System_String_o *CJFAPGEEPLM;
  
  if ((DAT_045682ba & 1) == 0) {
    FUN_01bab630(&EDLFPEGBIFO_TypeInfo);
    DAT_045682ba = 1;
  }
  if (webRequest != (EOGOGKOFPLJ_o *)0x0) {
    CJFAPGEEPLM = (__this->fields).resolvedUrl;
    EHKEOHNBLCK = EOGOGKOFPLJ__IIBCLDACBAL(webRequest,(MethodInfo *)0x0);
    __this_00 = (EDLFPEGBIFO_o *)thunk_FUN_01bda818(EDLFPEGBIFO_TypeInfo);
    EDLFPEGBIFO___ctor(__this_00,CJFAPGEEPLM,(System_Byte_array *)0x0,EHKEOHNBLCK,(MethodInfo *)0x0)
    ;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

