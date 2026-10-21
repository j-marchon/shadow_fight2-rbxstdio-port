// TypeDefIndex 2699
// Namespace: 
// public class LLCIFEBJPCL
// Fields:

// ===== public static List<int> NCOODIBHJJN(int KEMHFHOJFCB)  [RVA 0x33CEE80]
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


// ===== public static List<int> DFEBFECHCNF(int KEMHFHOJFCB)  [RVA 0x33CEF5C]
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


// ===== public void .ctor()  [RVA 0x33CF080]
// LLCIFEBJPCL$$.ctor @ RVA 0x33CF080

void LLCIFEBJPCL___ctor(LLCIFEBJPCL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static List<int> HPJCLJPIDEO(int KEMHFHOJFCB)  [RVA 0x33CF088]
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

