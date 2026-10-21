// TypeDefIndex 444
// Namespace: 
// [CompilerGenerated]
// private sealed class BCHFHHHGEIP.MNAFJIAJAGE
// Fields:
//   public string productId; // 0x10

// ===== internal bool ADPGJNFLMOD(FJIFBJMMKHG item)  [RVA 0x3573748]
// BCHFHHHGEIP.MNAFJIAJAGE$$ADPGJNFLMOD @ RVA 0x3573748

bool BCHFHHHGEIP_MNAFJIAJAGE__ADPGJNFLMOD
               (BCHFHHHGEIP_MNAFJIAJAGE_o *__this,FJIFBJMMKHG_o *item,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 03673748 to 0377374b has its CatchHandler @ 0367377c */
  if (item == (FJIFBJMMKHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0366d910 with catch @ 03673798 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03673768 to 0377377b has its CatchHandler @ 0367397c */
  bVar1 = System_String__op_Equality
                    ((item->fields)._CIEBCKIBJHL_k__BackingField,(__this->fields).productId,
                     (MethodInfo *)0x0);
  if (bVar1) {
                    /* catch() { ... } // from try @ 03673748 with catch @ 0367377c
                       try { // try from 0367377c to 0377382f has its CatchHandler @ 0366c1b0 */
    return true;
  }
                    /* catch() { ... } // from try @ 0366d434 with catch @ 03673784 */
                    /* catch() { ... } // from try @ 0366d3f8 with catch @ 03673788 */
                    /* catch() { ... } // from try @ 0366d8fc with catch @ 0367378c */
                    /* catch() { ... } // from try @ 0366d928 with catch @ 03673790 */
                    /* catch() { ... } // from try @ 0366d920 with catch @ 03673794 */
  bVar1 = System_String__op_Equality
                    ((item->fields)._NACCGICEMJN_k__BackingField,(__this->fields).productId,
                     (MethodInfo *)0x0);
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x35735F4]
// BCHFHHHGEIP.MNAFJIAJAGE$$.ctor @ RVA 0x35735F4

void BCHFHHHGEIP_MNAFJIAJAGE___ctor(BCHFHHHGEIP_MNAFJIAJAGE_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0366e0f4 with catch @ 036735f4 */
                    /* catch() { ... } // from try @ 0366e0a4 with catch @ 036735f8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

