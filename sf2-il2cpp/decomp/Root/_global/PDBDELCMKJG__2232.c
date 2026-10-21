// TypeDefIndex 2232
// Namespace: 
// public abstract class PDBDELCMKJG
// Fields:
//   public readonly string PHONOLEMBHN; // 0x10
//   public readonly TimeSpan KBFOKFPKAKN; // 0x18
//   public readonly object OGFMJIABHHI; // 0x20
//   public readonly ValueTuple<string, string>[] EBIPCCLLMCP; // 0x28
//   public readonly CancellationToken DKICFPOCAFF; // 0x30

// ===== protected void .ctor(string CJFAPGEEPLM, TimeSpan MINHPKOPAIE, object OKECKCEAHNA, ValueTuple<string, string>[] MFMBALIKMLP, CancellationToken DEMAKGLNJNN)  [RVA 0x32F0C64]
// PDBDELCMKJG$$.ctor @ RVA 0x32F0C64

void PDBDELCMKJG___ctor(PDBDELCMKJG_o *__this,System_String_o *CJFAPGEEPLM,
                       System_TimeSpan_o MINHPKOPAIE,Il2CppObject *OKECKCEAHNA,
                       System_ValueTuple_string__string__array *MFMBALIKMLP,
                       System_Threading_CancellationToken_o DEMAKGLNJNN,MethodInfo *method)

{
  Il2CppObject **ppIVar1;
  long lVar2;
  System_ValueTuple_string__string__array **ppSVar3;
  long lVar4;
  System_Threading_CancellationToken_o *pSVar5;
  
                    /* try { // try from 033f0c78 to 034f0c7f has its CatchHandler @ 033f1ec0 */
                    /* try { // try from 033f0c90 to 034f0c97 has its CatchHandler @ 033f1eac */
  if ((DAT_0456766d & 1) == 0) {
                    /* try { // try from 033f0c9c to 034f0ca7 has its CatchHandler @ 033f1eb4 */
    FUN_01bab630(&Method_System_Array_Empty<ValueTuple<string,_string>>__);
    DAT_0456766d = 1;
  }
                    /* try { // try from 033f0cb0 to 034f0cbb has its CatchHandler @ 033f1eb0 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PHONOLEMBHN = CJFAPGEEPLM;
  thunk_FUN_01c20e04(&__this->fields,CJFAPGEEPLM);
  ppIVar1 = &(__this->fields).OGFMJIABHHI;
  *ppIVar1 = OKECKCEAHNA;
  (__this->fields).KBFOKFPKAKN.fields._ticks = (int64_t)MINHPKOPAIE.fields._ticks;
                    /* try { // try from 033f0cd8 to 034f0cdf has its CatchHandler @ 033f1f14 */
  thunk_FUN_01c20e04(ppIVar1,OKECKCEAHNA);
  lVar2 = Method_System_Array_Empty<ValueTuple<string,_string>>__;
  if (MFMBALIKMLP == (System_ValueTuple_string__string__array *)0x0) {
    lVar4 = *(long *)(Method_System_Array_Empty<ValueTuple<string,_string>>__ + 0x38);
                    /* try { // try from 033f0cf0 to 034f0d43 has its CatchHandler @ 033f1f1c */
    if (lVar4 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<ValueTuple<string,_string>>__);
      lVar4 = *(long *)(lVar2 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_01b81620();
    }
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    MFMBALIKMLP = (System_ValueTuple_string__string__array *)**(undefined8 **)(lVar2 + 0xb8);
  }
  ppSVar3 = &(__this->fields).EBIPCCLLMCP;
  *ppSVar3 = MFMBALIKMLP;
  thunk_FUN_01c20e04(ppSVar3,MFMBALIKMLP);
  pSVar5 = &(__this->fields).DKICFPOCAFF;
  (pSVar5->fields)._source =
       (System_Threading_CancellationTokenSource_o *)DEMAKGLNJNN.fields._source;
                    /* try { // try from 033f0d4c to 034f0d53 has its CatchHandler @ 033f1f00 */
                    /* try { // try from 033f0d64 to 034f0d6b has its CatchHandler @ 033f1ea8 */
  thunk_FUN_01c20e04(pSVar5,0);
  return;
}

