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

