// TypeDefIndex 574
// Namespace: 
// public class OFGMILFFIDI : KPKMEEIPCJA
// Fields:

// ===== public void .ctor()  [RVA 0x35B0460]
// OFGMILFFIDI$$.ctor @ RVA 0x35B0460

void OFGMILFFIDI___ctor(OFGMILFFIDI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void DPICJOGPEDN(PPPLAFICHMF OHPDECELOBI, Action BLMFLPJJMPF)  [RVA 0x35B0468]
// OFGMILFFIDI$$DPICJOGPEDN @ RVA 0x35B0468

void OFGMILFFIDI__DPICJOGPEDN
               (OFGMILFFIDI_o *__this,PPPLAFICHMF_o *OHPDECELOBI,System_Action_o *BLMFLPJJMPF,
               MethodInfo *method)

{
                    /* try { // try from 036b046c to 037b0543 has its CatchHandler @ 036aff80 */
  if ((DAT_04568e95 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11272/*"RequestConsent"*/);
    FUN_01bab630(&StringLiteral_11646/*"SUCCESS!"*/);
    DAT_04568e95 = 1;
  }
  OFGMILFFIDI__JHEIGLGFONB(__this,StringLiteral_11646/*"SUCCESS!"*/,StringLiteral_11272/*"RequestConsent"*/,method);
  if (BLMFLPJJMPF != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036b04e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
  return;
}


// ===== public BCPBDJHCIFM FOCNMCOBBEK()  [RVA 0x35B05C4]
// OFGMILFFIDI$$FOCNMCOBBEK @ RVA 0x35B05C4

int32_t OFGMILFFIDI__FOCNMCOBBEK(OFGMILFFIDI_o *__this,MethodInfo *method)

{
  return 1;
}


// ===== public void FDEJCCJCCNI()  [RVA 0x35B05CC]
// OFGMILFFIDI$$FDEJCCJCCNI @ RVA 0x35B05CC

void OFGMILFFIDI__FDEJCCJCCNI(OFGMILFFIDI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
                    /* catch() { ... } // from try @ 036b05b0 with catch @ 036b05e8
                       try { // try from 036b05e8 to 037b0637 has its CatchHandler @ 036aff80 */
                    /* catch() { ... } // from try @ 036b0580 with catch @ 036b05ec */
                    /* catch() { ... } // from try @ 036b026c with catch @ 036b05f0 */
                    /* catch() { ... } // from try @ 036b028c with catch @ 036b05f4 */
  if ((DAT_04568e96 & 1) == 0) {
                    /* catch() { ... } // from try @ 036b058c with catch @ 036b05f8 */
                    /* catch() { ... } // from try @ 036b0300 with catch @ 036b05fc */
                    /* catch() { ... } // from try @ 036b0550 with catch @ 036b0600 */
    FUN_01bab630(&StringLiteral_13903/*"TraceCmpAppPreferences"*/);
                    /* catch() { ... } // from try @ 036b02a0 with catch @ 036b0604 */
                    /* catch() { ... } // from try @ 036b0274 with catch @ 036b0608 */
                    /* catch() { ... } // from try @ 036b0250 with catch @ 036b060c */
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* catch() { ... } // from try @ 036b02d4 with catch @ 036b0610 */
                    /* catch() { ... } // from try @ 036b02b8 with catch @ 036b0614 */
    DAT_04568e96 = 1;
  }
                    /* catch() { ... } // from try @ 036b045c with catch @ 036b0620 */
  OFGMILFFIDI__JHEIGLGFONB(__this,StringLiteral_1/*""*/,StringLiteral_13903/*"TraceCmpAppPreferences"*/,in_x3);
  return;
}


// ===== private void JHEIGLGFONB(string NONPLOOOOAG = "", string JJBPCFGELPO = "")  [RVA 0x35B04F8]
// OFGMILFFIDI$$JHEIGLGFONB @ RVA 0x35B04F8

void OFGMILFFIDI__JHEIGLGFONB
               (OFGMILFFIDI_o *__this,System_String_o *NONPLOOOOAG,System_String_o *JJBPCFGELPO,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  
  if ((DAT_04568e97 & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2088/*": "*/);
                    /* try { // try from 036b0544 to 037b0547 has its CatchHandler @ 036b075c */
    FUN_01bab630(&StringLiteral_167/*" "*/);
                    /* try { // try from 036b0548 to 037b054b has its CatchHandler @ 036b0758 */
    DAT_04568e97 = 1;
  }
                    /* try { // try from 036b0550 to 037b0573 has its CatchHandler @ 036b0600 */
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(NONPLOOOOAG,(MethodInfo *)0x0);
  pSVar2 = StringLiteral_167/*" "*/;
  if (bVar1) {
    str2 = string_TypeInfo->static_fields->Empty;
  }
  else {
                    /* try { // try from 036b0580 to 037b0587 has its CatchHandler @ 036b05ec */
                    /* try { // try from 036b058c to 037b05ab has its CatchHandler @ 036b05f8 */
    str2 = System_String__Concat(StringLiteral_2088/*": "*/,NONPLOOOOAG,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat(JJBPCFGELPO,pSVar2,str2,(MethodInfo *)0x0);
                    /* try { // try from 036b05b0 to 037b05e7 has its CatchHandler @ 036b05e8 */
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar2,(MethodInfo *)0x0);
  return;
}


// ===== public void EHFDECHCNLO(Action BLMFLPJJMPF)  [RVA 0x35B0634]
// OFGMILFFIDI$$EHFDECHCNLO @ RVA 0x35B0634

void OFGMILFFIDI__EHFDECHCNLO(OFGMILFFIDI_o *__this,System_Action_o *BLMFLPJJMPF,MethodInfo *method)

{
  MethodInfo *in_x3;
  
                    /* try { // try from 036b0638 to 037b064f has its CatchHandler @ 036b06bc */
                    /* try { // try from 036b0658 to 037b065b has its CatchHandler @ 036b06ac */
                    /* try { // try from 036b065c to 037b067f has its CatchHandler @ 036b06b4 */
  if ((DAT_04568e98 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12110/*"ShowPrivacyOptions"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
                    /* try { // try from 036b0680 to 037b0697 has its CatchHandler @ 036aff80 */
    DAT_04568e98 = 1;
  }
  OFGMILFFIDI__JHEIGLGFONB(__this,StringLiteral_1/*""*/,StringLiteral_12110/*"ShowPrivacyOptions"*/,in_x3);
  if (BLMFLPJJMPF != (System_Action_o *)0x0) {
                    /* try { // try from 036b0698 to 037b06a7 has its CatchHandler @ 036b06bc */
                    /* catch() { ... } // from try @ 036b0658 with catch @ 036b06ac */
                    /* WARNING: Could not recover jumptable at 0x036b06b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(BLMFLPJJMPF->fields).super.super.invoke_impl)
              ((BLMFLPJJMPF->fields).super.super.method_code,
               (BLMFLPJJMPF->fields).super.super.method);
    return;
  }
                    /* catch() { ... } // from try @ 036b065c with catch @ 036b06b4 */
                    /* catch() { ... } // from try @ 036b0638 with catch @ 036b06bc
                       catch() { ... } // from try @ 036b0698 with catch @ 036b06bc */
  return;
}


// ===== public void HNPHDCDPHAA()  [RVA 0x35B06C4]
// OFGMILFFIDI$$HNPHDCDPHAA @ RVA 0x35B06C4

void OFGMILFFIDI__HNPHDCDPHAA(OFGMILFFIDI_o *__this,MethodInfo *method)

{
  MethodInfo *in_x3;
  
                    /* try { // try from 036b06c4 to 037b06c7 has its CatchHandler @ 036b08b4 */
                    /* try { // try from 036b06c8 to 037b06e3 has its CatchHandler @ 036aff80 */
                    /* try { // try from 036b06e4 to 037b06e7 has its CatchHandler @ 036b06f4 */
  if ((DAT_04568e99 & 1) == 0) {
                    /* catch() { ... } // from try @ 036b06e4 with catch @ 036b06f4 */
    FUN_01bab630(&StringLiteral_11308/*"ResetConsentState"*/);
                    /* try { // try from 036b0700 to 037b0757 has its CatchHandler @ 036b08b4 */
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568e99 = 1;
  }
  OFGMILFFIDI__JHEIGLGFONB(__this,StringLiteral_1/*""*/,StringLiteral_11308/*"ResetConsentState"*/,in_x3);
  return;
}

