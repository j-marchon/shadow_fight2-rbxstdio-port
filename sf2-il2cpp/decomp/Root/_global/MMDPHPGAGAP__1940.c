// TypeDefIndex 1940
// Namespace: 
// public class MMDPHPGAGAP
// Fields:
//   public string IKIINEOIIAK; // 0x10
//   public string BPCADJLKKGA; // 0x18
//   public Vector2 NMFDFHKAIHG; // 0x20
//   public Vector2 BOICIIOEOKN; // 0x28
//   public int BODPNOBPJDK; // 0x30
//   public int KEBFGEPCBMC; // 0x34
//   public TextAnchor CPPABOCOPAD; // 0x38
//   public GameObject LLMLOCGKBHH; // 0x40
//   public bool HDNPGLLCNEF; // 0x48

// ===== public void .ctor()  [RVA 0x326E8C4]
// MMDPHPGAGAP$$.ctor @ RVA 0x326E8C4

void MMDPHPGAGAP___ctor(MMDPHPGAGAP_o *__this,MethodInfo *method)

{
                    /* try { // try from 0336e8d4 to 0346e8db has its CatchHandler @ 0336ecac */
                    /* try { // try from 0336e8e0 to 0346e8e7 has its CatchHandler @ 0336ecb0 */
  if ((DAT_0456720d & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456720d = 1;
  }
                    /* try { // try from 0336e8f8 to 0346e8ff has its CatchHandler @ 0336eca0 */
  (__this->fields).IKIINEOIIAK = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0336e90c to 0346e913 has its CatchHandler @ 0336eca4 */
  (__this->fields).BPCADJLKKGA = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
                    /* try { // try from 0336e918 to 0346e923 has its CatchHandler @ 0336eca8 */
  (__this->fields).CPPABOCOPAD = 4;
  (__this->fields).BODPNOBPJDK = 0x49;
  (__this->fields).KEBFGEPCBMC = 0x3a;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void CJEEDJHKDBE(HEFOANCOHDC CDEABOAKDEJ)  [RVA 0x326E940]
// MMDPHPGAGAP$$CJEEDJHKDBE @ RVA 0x326E940

void MMDPHPGAGAP__CJEEDJHKDBE(MMDPHPGAGAP_o *__this,HEFOANCOHDC_o *CDEABOAKDEJ,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if (CDEABOAKDEJ != (HEFOANCOHDC_o *)0x0) {
                    /* try { // try from 0336e958 to 0346e963 has its CatchHandler @ 0336ec68 */
    (__this->fields).IKIINEOIIAK = (CDEABOAKDEJ->fields).JMGIACHBIKG;
    thunk_FUN_01c20e04();
    pSVar1 = HEFOANCOHDC__EMGLGFMDMKD(CDEABOAKDEJ,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields).BPCADJLKKGA;
    *ppSVar2 = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CJEEDJHKDBE(GGLKHCAIGDI NDLOGJOGFCA, IGFGDDANEPE ANMFBABEMFD)  [RVA 0x326E988]
// MMDPHPGAGAP$$CJEEDJHKDBE @ RVA 0x326E988

void MMDPHPGAGAP__CJEEDJHKDBE
               (MMDPHPGAGAP_o *__this,GGLKHCAIGDI_o *NDLOGJOGFCA,IGFGDDANEPE_o *ANMFBABEMFD,
               MethodInfo *method)

{
  HOOAAGABMBL_o *pHVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
                    /* try { // try from 0336e994 to 0346e99f has its CatchHandler @ 0336ec58 */
  if ((DAT_0456720e & 1) == 0) {
    FUN_01bab630(&StringLiteral_18786/*"hintPossibleEnchantments"*/);
    DAT_0456720e = 1;
  }
                    /* try { // try from 0336e9d0 to 0346e9db has its CatchHandler @ 0336ec90 */
  (__this->fields).IKIINEOIIAK = StringLiteral_18786/*"hintPossibleEnchantments"*/;
  thunk_FUN_01c20e04();
  if (((ANMFBABEMFD != (IGFGDDANEPE_o *)0x0) &&
      (pHVar1 = IGFGDDANEPE__JPNNODJPOCL(ANMFBABEMFD,false,(MethodInfo *)0x0),
      pHVar1 != (HOOAAGABMBL_o *)0x0)) && (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0)) {
                    /* try { // try from 0336ea04 to 0346ea0f has its CatchHandler @ 0336ec84 */
    pSVar2 = GGLKHCAIGDI__OHGBPDNOLNH
                       (NDLOGJOGFCA,ANMFBABEMFD,(pHVar1->fields)._JDEHPJEIOCI_k__BackingField,
                        (MethodInfo *)0x0);
    ppSVar3 = &(__this->fields).BPCADJLKKGA;
    *ppSVar3 = pSVar2;
                    /* try { // try from 0336ea20 to 0346ea27 has its CatchHandler @ 0336ec8c */
    thunk_FUN_01c20e04(ppSVar3,pSVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

