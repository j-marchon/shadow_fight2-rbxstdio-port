// IFFFKKMMKFO$$.ctor @ RVA 0x31B216C

void IFFFKKMMKFO___ctor(IFFFKKMMKFO_o *__this,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int32_t iVar1;
  GKLPDMLELJF_o **ppGVar2;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar3;
  JKDFEBLBMOF_o **ppJVar4;
  System_DateTime_o SVar5;
  long lVar6;
  
                    /* try { // try from 032b218c to 033b2193 has its CatchHandler @ 032b2378 */
  if ((DAT_04566b86 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566b86 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppGVar2 = &(__this->fields)._IPNPNPOLCFO_k__BackingField;
  *ppGVar2 = HEHMPFLAEGE;
  (__this->fields).ECNFDCBBAEN = 0.0;
  (__this->fields).JOAHABGBLEF = 0.0;
  (__this->fields).KOPODBECOEJ = -1;
  thunk_FUN_01c20e04(ppGVar2,HEHMPFLAEGE);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 032b21ec to 033b2207 has its CatchHandler @ 032b2368 */
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((__this_00 != (EEGDOGKBLNG_o *)0x0) &&
     (iVar3 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0),
     HEHMPFLAEGE != (GKLPDMLELJF_o *)0x0)) {
    lVar6 = (HEHMPFLAEGE->fields).ANAJGHJEEOC;
                    /* try { // try from 032b220c to 033b2213 has its CatchHandler @ 032b236c */
    (__this->fields).FPPPAMFABJP = 1;
    (__this->fields)._FPBBMLACBJE_k__BackingField = iVar3 == lVar6;
    iVar1 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
    ppJVar4 = &(__this->fields).AMAMLPJLCFG;
                    /* try { // try from 032b222c to 033b2233 has its CatchHandler @ 032b2364 */
    *ppJVar4 = (JKDFEBLBMOF_o *)0x0;
    (__this->fields).IEONGHCHNNA = iVar1;
    thunk_FUN_01c20e04(ppJVar4,0);
    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032b2248 to 033b2253 has its CatchHandler @ 032b2360 */
      thunk_FUN_01ba7564();
    }
    SVar5 = System_DateTime__get_Now((MethodInfo *)0x0);
    (__this->fields)._FAIHCFMGFBD_k__BackingField.fields._dateData =
         (uint64_t)SVar5.fields._dateData;
                    /* try { // try from 032b2260 to 033b2267 has its CatchHandler @ 032b235c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

