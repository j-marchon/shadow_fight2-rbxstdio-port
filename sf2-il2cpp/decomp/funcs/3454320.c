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

