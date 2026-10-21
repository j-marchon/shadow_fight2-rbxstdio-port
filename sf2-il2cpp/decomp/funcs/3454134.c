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

