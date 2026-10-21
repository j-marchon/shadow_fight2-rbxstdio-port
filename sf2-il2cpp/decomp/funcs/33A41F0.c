// KGFBAIBBNNH$$KKFDNDIPEHH @ RVA 0x33A41F0

System_String_o *
KGFBAIBBNNH__KKFDNDIPEHH(System_String_o *IMMNELPBGIF,bool PFNHAKDMNOF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if ((DAT_04567cd9 & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd9 = 1;
  }
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    if (bVar1) {
      if (IMMNELPBGIF != (System_String_o *)0x0) {
                    /* try { // try from 034a4270 to 035a4273 has its CatchHandler @ 034a4290 */
                    /* try { // try from 034a4274 to 035a427b has its CatchHandler @ 034a4350 */
        method_00 = (MethodInfo *)0x0;
        bVar1 = System_String__Contains(IMMNELPBGIF,0x5e,(MethodInfo *)0x0);
                    /* try { // try from 034a427c to 035a4283 has its CatchHandler @ 034a435c */
                    /* try { // try from 034a4284 to 035a4287 has its CatchHandler @ 034a428c */
                    /* catch() { ... } // from try @ 034a41d0 with catch @ 034a4288
                       try { // try from 034a4288 to 035a42af has its CatchHandler @ 034a3fe4 */
        if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034a4284 with catch @ 034a428c */
                    /* catch() { ... } // from try @ 034a40d0 with catch @ 034a4290
                       catch() { ... } // from try @ 034a4270 with catch @ 034a4290 */
          thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo);
        }
        if (bVar1) {
          pSVar2 = KGFBAIBBNNH__ENBCPBBNFDG(IMMNELPBGIF,PFNHAKDMNOF,method_00);
        }
        else {
          pSVar2 = KGFBAIBBNNH__BIIMJHGLNGO(IMMNELPBGIF,PFNHAKDMNOF,method_00);
        }
        if (pSVar2 != (System_String_o *)0x0) {
          pSVar2 = System_String__TrimStart(pSVar2,0x20,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 034a42b0 to 035a42b3 has its CatchHandler @ 034a4338 */
  return IMMNELPBGIF;
}

