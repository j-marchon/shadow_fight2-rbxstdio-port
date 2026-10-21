// LLCIFEBJPCL$$HPJCLJPIDEO @ RVA 0x33CF088

System_Collections_Generic_List_int__o *
LLCIFEBJPCL__HPJCLJPIDEO(int32_t KEMHFHOJFCB,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *pSVar4;
  int iVar5;
  ulong uVar6;
  
  if ((DAT_04567e4e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<int>__);
                    /* try { // try from 034cf0b4 to 035cf0bf has its CatchHandler @ 034cf44c */
    FUN_01bab630(&int___TypeInfo);
    DAT_04567e4e = 1;
  }
                    /* try { // try from 034cf0cc to 035cf0cf has its CatchHandler @ 034cf444 */
  source = (System_Collections_Generic_IEnumerable_TSource__o *)
           FUN_01bab718(int___TypeInfo,KEMHFHOJFCB * 3);
  if (0 < KEMHFHOJFCB) {
    if (source == (System_Collections_Generic_IEnumerable_TSource__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034cf0e0 to 035cf0ff has its CatchHandler @ 034cf464 */
    uVar2 = *(uint *)&source[1].monitor;
    uVar6 = 0;
    do {
      iVar5 = (int)uVar6;
      uVar3 = iVar5 * 3;
      if (uVar2 <= uVar3) goto LAB_034cf188;
      uVar1 = uVar3 + 1;
      *(int *)((long)&source[2].klass + (long)(int)uVar3 * 4) = iVar5;
      if ((uVar6 & 1) == 0) {
        if (uVar2 <= uVar1) {
LAB_034cf188:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034cf188 to 035cf193 has its CatchHandler @ 034cf420 */
          FUN_01bab8d0();
        }
                    /* try { // try from 034cf114 to 035cf117 has its CatchHandler @ 034cf408 */
                    /* try { // try from 034cf118 to 035cf11f has its CatchHandler @ 034cf440 */
        *(int *)((long)&source[2].klass + (long)(int)uVar1 * 4) = iVar5 + 1;
        if (uVar2 <= uVar3 + 2) goto LAB_034cf188;
                    /* try { // try from 034cf134 to 035cf137 has its CatchHandler @ 034cf43c */
        *(int *)((long)&source[2].klass + (long)(int)(uVar3 + 2) * 4) = iVar5 + 2;
      }
      else {
        if (uVar2 <= uVar1) goto LAB_034cf188;
                    /* try { // try from 034cf144 to 035cf147 has its CatchHandler @ 034cf438 */
        *(int *)((long)&source[2].klass + (long)(int)uVar1 * 4) = iVar5 + 2;
        if (uVar2 <= uVar3 + 2) goto LAB_034cf188;
        *(int *)((long)&source[2].klass + (long)(int)(uVar3 + 2) * 4) = iVar5 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != (uint)KEMHFHOJFCB);
  }
  pSVar4 = System_Linq_Enumerable__ToList<int>(source,Method_System_Linq_Enumerable_ToList<int>__);
  return (System_Collections_Generic_List_int__o *)pSVar4;
}

