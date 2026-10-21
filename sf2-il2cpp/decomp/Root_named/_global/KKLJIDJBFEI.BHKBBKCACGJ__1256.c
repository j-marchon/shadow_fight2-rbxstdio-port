// TypeDefIndex 1256
// Namespace: 
// [CompilerGenerated]
// private sealed class SFRequestSender.BHKBBKCACGJ
// Fields:
//   public KAMBBJFPLGM player; // 0x10

// ===== internal bool KODDNBBFLPJ(KMAOIKKMFJF x)  [RVA 0x314A240]
// SFRequestSender.BHKBBKCACGJ$$KODDNBBFLPJ @ RVA 0x314A240

bool SFRequestSender_BHKBBKCACGJ__KODDNBBFLPJ
               (SFRequestSender_BHKBBKCACGJ_o *__this,KMAOIKKMFJF_o *x,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  EOLFEKNCPLM_o *pEVar2;
  GKLPDMLELJF_o *pGVar3;
  
                    /* try { // try from 0324a240 to 0334a333 has its CatchHandler @ 0324a240
                       catch() { ... } // from try @ 0324a240 with catch @ 0324a240
                       catch() { ... } // from try @ 0324a3c8 with catch @ 0324a240
                       catch() { ... } // from try @ 0324a428 with catch @ 0324a240
                       catch() { ... } // from try @ 0324a444 with catch @ 0324a240
                       catch() { ... } // from try @ 0324a470 with catch @ 0324a240
                       catch() { ... } // from try @ 0324a4a0 with catch @ 0324a240 */
  if ((((x != (KMAOIKKMFJF_o *)0x0) &&
       (pKVar1 = (__this->fields).player, pKVar1 != (KAMBBJFPLGM_o *)0x0)) &&
      (pEVar2 = (pKVar1->fields).FLAFELDNABC, pEVar2 != (EOLFEKNCPLM_o *)0x0)) &&
     (pGVar3 = (pEVar2->fields).MCOPPCNPAHF, pGVar3 != (GKLPDMLELJF_o *)0x0)) {
    return (x->fields).ANAJGHJEEOC == (pGVar3->fields).ANAJGHJEEOC;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31476C8]
// SFRequestSender.BHKBBKCACGJ$$.ctor @ RVA 0x31476C8

void SFRequestSender_BHKBBKCACGJ___ctor(SFRequestSender_BHKBBKCACGJ_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

