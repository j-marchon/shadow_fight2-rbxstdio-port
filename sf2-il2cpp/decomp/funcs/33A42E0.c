// KGFBAIBBNNH$$HLFAHBDLOHL @ RVA 0x33A42E0

bool KGFBAIBBNNH__HLFAHBDLOHL
               (int32_t BMLIMNBPGIJ,TMPro_TMP_FontAsset_o **HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  KGFBAIBBNNH_COLDHKDCOAB_o local_28 [2];
  
                    /* try { // try from 034a4300 to 035a4337 has its CatchHandler @ 034a4494 */
  if ((DAT_04567cda & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cda = 1;
  }
  local_28[0].fields.fontType =
       (KGFBAIBBNNH_COLDHKDCOAB_Fields)(KGFBAIBBNNH_COLDHKDCOAB_Fields)BMLIMNBPGIJ;
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034a42b0 with catch @ 034a4338
                       try { // try from 034a4338 to 035a4377 has its CatchHandler @ 034a3fe4 */
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a40a8 with catch @ 034a4348 */
                    /* catch() { ... } // from try @ 034a4084 with catch @ 034a434c */
                    /* catch() { ... } // from try @ 034a4188 with catch @ 034a4350
                       catch() { ... } // from try @ 034a4274 with catch @ 034a4350 */
  if ((bVar1) ||
     (bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), !bVar1)) {
    *HPACPFLKHPK = (TMPro_TMP_FontAsset_o *)0x0;
    thunk_FUN_01c20e04(HPACPFLKHPK,0);
    bVar1 = false;
  }
  else {
                    /* catch() { ... } // from try @ 034a4118 with catch @ 034a435c
                       catch() { ... } // from try @ 034a427c with catch @ 034a435c */
    method_00 = extraout_x1;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pTVar2 = KGFBAIBBNNH__AKNJNKNGCDI(local_28,method_00);
                    /* try { // try from 034a4378 to 035a437b has its CatchHandler @ 034a4410 */
    *HPACPFLKHPK = pTVar2;
    thunk_FUN_01c20e04(HPACPFLKHPK,pTVar2);
    bVar1 = true;
  }
  return bVar1;
}

