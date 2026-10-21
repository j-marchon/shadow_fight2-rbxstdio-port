// LLCIFEBJPCL$$NCOODIBHJJN @ RVA 0x33CEE80

System_Collections_Generic_List_int__o *
LLCIFEBJPCL__NCOODIBHJJN(int32_t KEMHFHOJFCB,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if ((DAT_04567e4c & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
                    /* try { // try from 034ceeb4 to 035ceebf has its CatchHandler @ 034cf4e0 */
    FUN_01bab630(&int___TypeInfo);
    DAT_04567e4c = 1;
  }
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           FUN_01bab718(int___TypeInfo,KEMHFHOJFCB * 3);
  if (0 < KEMHFHOJFCB) {
    if (source == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034ceed8 to 035ceedf has its CatchHandler @ 034cf474 */
    uVar1 = *(uint *)&source[1].monitor;
    lVar5 = 0;
    iVar6 = 2;
    do {
      uVar4 = (uint)lVar5;
                    /* try { // try from 034ceef0 to 035ceefb has its CatchHandler @ 034cf470 */
      if (uVar1 <= uVar4) {
LAB_034cef54:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(undefined4 *)((long)&source[2].klass + (long)(int)uVar4 * 4) = 0;
      if (uVar1 <= uVar4 + 1) goto LAB_034cef54;
                    /* try { // try from 034cef14 to 035cef1b has its CatchHandler @ 034cf4e0 */
      *(int *)((long)&source[2].klass + (long)(int)(uVar4 + 1) * 4) = iVar6;
      if (uVar1 <= uVar4 + 2) goto LAB_034cef54;
      lVar5 = lVar5 + 3;
      iVar2 = iVar6 + -1;
                    /* try { // try from 034cef30 to 035cef3b has its CatchHandler @ 034cf4cc */
      iVar6 = iVar6 + 1;
      *(int *)((long)&source[2].klass + (long)(int)(uVar4 + 2) * 4) = iVar2;
    } while ((ulong)(uint)KEMHFHOJFCB * 2 + (ulong)(uint)KEMHFHOJFCB != lVar5);
  }
                    /* try { // try from 034cef4c to 035cef53 has its CatchHandler @ 034cf4c8 */
  pSVar3 = System_Linq_Enumerable__ToList<int>(source,Method_System_Linq_Enumerable_ToList<int>__);
  return (System_Collections_Generic_List_int__o *)pSVar3;
}

