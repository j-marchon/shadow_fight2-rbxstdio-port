// HIJLPKACNPD$$.ctor @ RVA 0x35206C8

void HIJLPKACNPD___ctor(HIJLPKACNPD_o *__this,NHJCFGACFDF_o *EMIJCAIFDML,OCHIFKHFMAC_o *EIHGMMBMDDO,
                       MethodInfo *method)

{
  OCHIFKHFMAC_o **ppOVar1;
  EINKKMIHCHI_o *pEVar2;
  
  if ((DAT_045689b6 & 1) == 0) {
    FUN_01bab630(&Method_NHJCFGACFDF_LDLFKOJJGLG<EINKKMIHCHI>__);
    DAT_045689b6 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppOVar1 = &(__this->fields).KJEANMHKEDC;
  *ppOVar1 = EIHGMMBMDDO;
  thunk_FUN_01c20e04(ppOVar1,EIHGMMBMDDO);
  if (EMIJCAIFDML != (NHJCFGACFDF_o *)0x0) {
    pEVar2 = (EINKKMIHCHI_o *)
             NHJCFGACFDF__LDLFKOJJGLG<object>
                       (EMIJCAIFDML,Method_NHJCFGACFDF_LDLFKOJJGLG<EINKKMIHCHI>__);
    (__this->fields).KAKIHIMNDAE = pEVar2;
    thunk_FUN_01c20e04(&__this->fields,pEVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

