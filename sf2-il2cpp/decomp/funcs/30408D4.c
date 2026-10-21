// PJKHAJKEHEL$$KNDMLFBMFII @ RVA 0x30408D4

bool PJKHAJKEHEL__KNDMLFBMFII(PJKHAJKEHEL_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *a;
  
                    /* try { // try from 031408e0 to 032408ef has its CatchHandler @ 031409a4 */
  if ((DAT_04565dab & 1) == 0) {
                    /* try { // try from 031408f0 to 03240903 has its CatchHandler @ 031404d4 */
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_11017);
                    /* try { // try from 03140904 to 03240913 has its CatchHandler @ 03140928 */
    DAT_04565dab = 1;
    method = extraout_x1;
  }
  pHVar2 = (__this->fields).NBHGHLIPCAP;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
                    /* catch() { ... } // from try @ 031408b4 with catch @ 03140914 */
                    /* catch() { ... } // from try @ 031408a8 with catch @ 03140918 */
    a = (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
                    /* catch() { ... } // from try @ 031407c0 with catch @ 03140924 */
                    /* catch() { ... } // from try @ 03140888 with catch @ 03140928
                       catch() { ... } // from try @ 03140904 with catch @ 03140928 */
                    /* try { // try from 03140930 to 03240933 has its CatchHandler @ 03140a10 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03140934 to 0324094f has its CatchHandler @ 031404d4 */
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    b = MGNPHCAAEIO__OKOJOGAHMFP(StringLiteral_11017,(MethodInfo *)0x0);
                    /* try { // try from 03140950 to 03240953 has its CatchHandler @ 03140960 */
                    /* try { // try from 03140954 to 0324097f has its CatchHandler @ 031404d4 */
    bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* catch() { ... } // from try @ 03140950 with catch @ 03140960 */
  return false;
}

