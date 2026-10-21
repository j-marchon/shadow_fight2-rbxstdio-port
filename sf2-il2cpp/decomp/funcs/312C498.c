// ADGIHFGIFHO$$DBLMHBMKCFJ @ RVA 0x312C498

bool ADGIHFGIFHO__DBLMHBMKCFJ(ADGIHFGIFHO_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *b;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *a;
  
                    /* try { // try from 0322c498 to 0332c49b has its CatchHandler @ 0322c4a8 */
                    /* catch() { ... } // from try @ 0322c498 with catch @ 0322c4a8 */
  if ((DAT_0456669d & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_10806);
    DAT_0456669d = 1;
    method = extraout_x1;
  }
  pHVar2 = (__this->fields).GFNKONPLPEB;
  if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 0322c4e0 to 0332c507 has its CatchHandler @ 0322c51c */
    a = (pHVar2->fields)._COIPKAKHDFP_k__BackingField;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
    }
    b = MGNPHCAAEIO__OKOJOGAHMFP(StringLiteral_10806,(MethodInfo *)0x0);
                    /* try { // try from 0322c508 to 0332c513 has its CatchHandler @ 0322c23c */
                    /* try { // try from 0322c514 to 0332c51b has its CatchHandler @ 0322c51c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0322c4e0 with catch @ 0322c51c
                       catch(type#2 @ 00000000) { ... } // from try @ 0322c514 with catch @ 0322c51c
                        */
    bVar1 = System_String__op_Inequality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}

