// KGFBAIBBNNH$$EPNEGIJAJHI @ RVA 0x33A3A64

bool KGFBAIBBNNH__EPNEGIJAJHI
               (int32_t BMLIMNBPGIJ,UnityEngine_Font_o **HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Font_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  KGFBAIBBNNH_PMECFLPOKLN_o local_28 [2];
  
                    /* try { // try from 034a3a6c to 035a3a6f has its CatchHandler @ 034a3ae0 */
  if ((DAT_04567cd4 & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd4 = 1;
  }
                    /* try { // try from 034a3aac to 035a3adf has its CatchHandler @ 034a3b90 */
  local_28[0].fields.fontType =
       (KGFBAIBBNNH_PMECFLPOKLN_Fields)(KGFBAIBBNNH_PMECFLPOKLN_Fields)BMLIMNBPGIJ;
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), !bVar1)) {
    *HPACPFLKHPK = (UnityEngine_Font_o *)0x0;
                    /* catch() { ... } // from try @ 034a3b0c with catch @ 034a3b1c */
    thunk_FUN_01c20e04(HPACPFLKHPK,0);
    bVar1 = false;
  }
  else {
                    /* catch() { ... } // from try @ 034a3a6c with catch @ 034a3ae0
                       try { // try from 034a3ae0 to 035a3b0b has its CatchHandler @ 034a3748 */
    method_00 = extraout_x1;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
                    /* catch() { ... } // from try @ 034a38b8 with catch @ 034a3af0
                       catch() { ... } // from try @ 034a396c with catch @ 034a3af0 */
    pUVar2 = KGFBAIBBNNH__NMLDADBENEN(local_28,method_00);
    *HPACPFLKHPK = pUVar2;
    thunk_FUN_01c20e04(HPACPFLKHPK,pUVar2);
    bVar1 = true;
                    /* try { // try from 034a3b0c to 035a3b0f has its CatchHandler @ 034a3b1c */
  }
  return bVar1;
}

