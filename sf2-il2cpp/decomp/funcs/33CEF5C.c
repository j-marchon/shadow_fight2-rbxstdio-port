// LLCIFEBJPCL$$DFEBFECHCNF @ RVA 0x33CEF5C

System_Collections_Generic_List_int__o *
LLCIFEBJPCL__DFEBFECHCNF(int32_t KEMHFHOJFCB,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar4;
  uint uVar5;
  
                    /* try { // try from 034cef64 to 035cef7f has its CatchHandler @ 034cf4e8 */
  if ((DAT_04567e4d & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
    FUN_01bab630(&int___TypeInfo);
                    /* try { // try from 034cef94 to 035cef9b has its CatchHandler @ 034cf424 */
    DAT_04567e4d = 1;
  }
  iVar3 = KEMHFHOJFCB * 6;
  source = (System_Collections_Generic_IEnumerable_TSource__o *)FUN_01bab718(int___TypeInfo,iVar3);
  if (0 < iVar3) {
    if (source == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = *(uint *)&source[1].monitor;
    uVar5 = 0;
    do {
      if (uVar2 <= uVar5) {
LAB_034cf078:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034cf078 to 035cf0a3 has its CatchHandler @ 034cf490 */
        FUN_01bab8d0();
      }
      uVar1 = uVar5 + 1;
      *(uint *)((long)&source[2].klass + (long)(int)uVar5 * 4) = uVar5;
      if (uVar2 <= uVar1) goto LAB_034cf078;
                    /* try { // try from 034cefec to 035ceff7 has its CatchHandler @ 034cf450 */
      *(uint *)((long)&source[2].klass + (long)(int)uVar1 * 4) = uVar1;
                    /* try { // try from 034cf010 to 035cf027 has its CatchHandler @ 034cf4c0 */
                    /* try { // try from 034cf028 to 035cf033 has its CatchHandler @ 034cf478 */
      if ((((uVar2 <= uVar5 + 2) ||
           (*(uint *)((long)&source[2].klass + (long)(int)(uVar5 + 2) * 4) = uVar5 + 2,
           uVar2 <= uVar5 + 3)) ||
          (*(uint *)((long)&source[2].klass + (long)(int)(uVar5 + 3) * 4) = uVar5 + 2,
          uVar2 <= uVar5 + 4)) ||
         (*(uint *)((long)&source[2].klass + (long)(int)(uVar5 + 4) * 4) = uVar5 + 3,
         uVar2 <= uVar5 + 5)) goto LAB_034cf078;
      uVar1 = uVar5 + 6;
      *(uint *)((long)&source[2].klass + (long)(int)(uVar5 + 5) * 4) = uVar5;
      uVar5 = uVar1;
    } while ((int)uVar1 < iVar3);
  }
  pSVar4 = System_Linq_Enumerable__ToList<int>(source,Method_System_Linq_Enumerable_ToList<int>__);
  return (System_Collections_Generic_List_int__o *)pSVar4;
}

