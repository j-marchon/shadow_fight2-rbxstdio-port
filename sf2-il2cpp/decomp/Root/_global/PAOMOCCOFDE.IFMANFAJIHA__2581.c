// TypeDefIndex 2581
// Namespace: 
// [CompilerGenerated]
// private sealed class PAOMOCCOFDE.IFMANFAJIHA : IEnumerator<object>, IEnumerator, IDisposable
// Fields:
//   private int <>1__state; // 0x10
//   private object <>2__current; // 0x18
//   public PAOMOCCOFDE <>4__this; // 0x20

// ===== public void .ctor(int <>1__state)  [RVA 0x33A2CA0]
// PAOMOCCOFDE.IFMANFAJIHA$$.ctor @ RVA 0x33A2CA0

void PAOMOCCOFDE_IFMANFAJIHA___ctor
               (PAOMOCCOFDE_IFMANFAJIHA_o *__this,int32_t __1__state,MethodInfo *method)

{
                    /* try { // try from 034a2cb4 to 035a2cbb has its CatchHandler @ 034a2d48 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ===== private void System.IDisposable.Dispose()  [RVA 0x33A2CC8]
// PAOMOCCOFDE.IFMANFAJIHA$$System.IDisposable.Dispose @ RVA 0x33A2CC8

void PAOMOCCOFDE_IFMANFAJIHA__System_IDisposable_Dispose
               (PAOMOCCOFDE_IFMANFAJIHA_o *__this,MethodInfo *method)

{
  return;
}


// ===== private bool MoveNext()  [RVA 0x33A2CCC]
// PAOMOCCOFDE.IFMANFAJIHA$$MoveNext @ RVA 0x33A2CCC

bool PAOMOCCOFDE_IFMANFAJIHA__MoveNext(PAOMOCCOFDE_IFMANFAJIHA_o *__this,MethodInfo *method)

{
  int iVar1;
  PAOMOCCOFDE_o *__this_00;
  Il2CppObject **ppIVar2;
  
  iVar1 = (__this->fields).__1__state;
                    /* try { // try from 034a2cdc to 035a2ce3 has its CatchHandler @ 034a2d44 */
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (PAOMOCCOFDE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a2d2c to 035a2d5f has its CatchHandler @ 034a2aa8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 034a2d18 to 035a2d1b has its CatchHandler @ 034a2da4 */
                    /* try { // try from 034a2d1c to 035a2d1f has its CatchHandler @ 034a2da0 */
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this_00,(MethodInfo *)0x0);
  }
  else if (iVar1 == 0) {
    ppIVar2 = &(__this->fields).__2__current;
                    /* try { // try from 034a2ce4 to 035a2d17 has its CatchHandler @ 034a2aa8 */
    *ppIVar2 = (Il2CppObject *)0x0;
    (__this->fields).__1__state = -1;
    thunk_FUN_01c20e04(ppIVar2,0);
    (__this->fields).__1__state = 1;
    return true;
  }
                    /* try { // try from 034a2d20 to 035a2d23 has its CatchHandler @ 034a2d40 */
                    /* try { // try from 034a2d24 to 035a2d27 has its CatchHandler @ 034a2d3c */
                    /* try { // try from 034a2d28 to 035a2d2b has its CatchHandler @ 034a2d38 */
  return false;
}


// ===== private object System.Collections.Generic.IEnumerator<System.Object>.get_Current()  [RVA 0x33A2D30]
// PAOMOCCOFDE.IFMANFAJIHA$$System.Collections.Generic.IEnumerator<System.Object>.get_Current @ RVA 0x33A2D30

Il2CppObject *
PAOMOCCOFDE_IFMANFAJIHA__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (PAOMOCCOFDE_IFMANFAJIHA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ===== private void System.Collections.IEnumerator.Reset()  [RVA 0x33A2D38]
// PAOMOCCOFDE.IFMANFAJIHA$$System.Collections.IEnumerator.Reset @ RVA 0x33A2D38

void PAOMOCCOFDE_IFMANFAJIHA__System_Collections_IEnumerator_Reset
               (PAOMOCCOFDE_IFMANFAJIHA_o *__this,MethodInfo *method)

{
  System_NotSupportedException_o *__this_00;
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 034a2d28 with catch @ 034a2d38 */
                    /* catch() { ... } // from try @ 034a2d24 with catch @ 034a2d3c */
                    /* catch() { ... } // from try @ 034a2d20 with catch @ 034a2d40 */
                    /* catch() { ... } // from try @ 034a2cdc with catch @ 034a2d44 */
  thunk_FUN_01bb9178(&System_NotSupportedException_TypeInfo);
                    /* catch() { ... } // from try @ 034a2cb4 with catch @ 034a2d48 */
  __this_00 = (System_NotSupportedException_o *)thunk_FUN_01bda818();
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034a2d60 to 035a2d63 has its CatchHandler @ 034a2d84 */
  uVar1 = thunk_FUN_01bb9178(&Method_PAOMOCCOFDE_IFMANFAJIHA_System_Collections_IEnumerator_Reset__)
  ;
                    /* try { // try from 034a2d64 to 035a2d8b has its CatchHandler @ 034a2aa8 */
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar1);
}


// ===== private object System.Collections.IEnumerator.get_Current()  [RVA 0x33A2D70]
// PAOMOCCOFDE.IFMANFAJIHA$$System.Collections.IEnumerator.get_Current @ RVA 0x33A2D70

Il2CppObject *
PAOMOCCOFDE_IFMANFAJIHA__System_Collections_IEnumerator_get_Current
          (PAOMOCCOFDE_IFMANFAJIHA_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}

