// MGICPMNIAMM$$FGBGAKLKONL @ RVA 0x3155DB0

/* WARNING: Removing unreachable block (ram,0x032560d4) */

System_String_o * MGICPMNIAMM__FGBGAKLKONL(MGICPMNIAMM_o *__this,MethodInfo *method)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  System_Text_StringBuilder_o *__this_00;
  System_Collections_Generic_IEnumerable_int__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_IEnumerable_int__c *pSVar9;
  long lVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  undefined1 auVar14 [16];
  
                    /* try { // try from 03255dd0 to 03355dfb has its CatchHandler @ 03256224 */
  if ((DAT_0456683e & 1) == 0) {
    FUN_01bab630(&MGICPMNIAMM_FIAFELGJBBD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<int>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<int>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&StringLiteral_264);
    FUN_01bab630(&StringLiteral_21305);
                    /* try { // try from 03255e3c to 03355e43 has its CatchHandler @ 03256188 */
    FUN_01bab630(&StringLiteral_10242);
                    /* try { // try from 03255e4c to 03355e53 has its CatchHandler @ 03256190 */
    FUN_01bab630(&StringLiteral_10241);
                    /* try { // try from 03255e54 to 03355e5f has its CatchHandler @ 0325618c */
    DAT_0456683e = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03255e70 to 03355e77 has its CatchHandler @ 032561a0 */
  pSVar4 = System_Linq_Enumerable__Range(0,100,(MethodInfo *)0x0);
                    /* try { // try from 03255e80 to 03355e87 has its CatchHandler @ 03256184 */
  if (pSVar4 == (System_Collections_Generic_IEnumerable_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032560cc to 033560cf has its CatchHandler @ 032560e0 */
    FUN_01bab8c8();
  }
                    /* try { // try from 03255e88 to 03355e93 has its CatchHandler @ 03256198 */
  pSVar9 = pSVar4->klass;
  uVar1._0_1_ = (pSVar9->_2).rank;
  uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
  uVar11 = (ulong)uVar1;
  if (uVar11 != 0) {
                    /* try { // try from 03255ea4 to 03355eab has its CatchHandler @ 0325619c */
    piVar12 = &((pSVar9->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<int>_TypeInfo) {
        pVVar5 = pSVar9->vtable + *piVar12;
        goto LAB_03255edc;
      }
                    /* try { // try from 03255eb4 to 03355ebb has its CatchHandler @ 03256194 */
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
                    /* try { // try from 03255ebc to 03355edf has its CatchHandler @ 0325625c */
    } while (uVar11 != 0);
  }
  pVVar5 = (VirtualInvokeData *)
           FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<int>_TypeInfo,0);
LAB_03255edc:
  plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03255f5c;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03255f5c:
    bVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((bVar2 & 1) == 0) break;
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 03255f88 to 03355f8f has its CatchHandler @ 032566c8 */
        if (*(System_Collections_Generic_IEnumerator_int__c **)(piVar13 + -2) ==
            System_Collections_Generic_IEnumerator<int>_TypeInfo) {
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03255fbc;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
                    /* try { // try from 03255fa0 to 03355fa7 has its CatchHandler @ 032566c4 */
                    /* try { // try from 03255fa8 to 03355fb3 has its CatchHandler @ 032566bc */
    puVar7 = (undefined8 *)
             FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<int>_TypeInfo,0);
LAB_03255fbc:
                    /* try { // try from 03255fc4 to 03355fcb has its CatchHandler @ 032566c0 */
    (*(code *)*puVar7)(plVar6,puVar7[1]);
    auVar14 = thunk_FUN_01bda818(MGICPMNIAMM_FIAFELGJBBD_TypeInfo);
    MGICPMNIAMM_FIAFELGJBBD___ctor(auVar14._0_8_,auVar14._8_8_);
                    /* try { // try from 03255fdc to 03355fe3 has its CatchHandler @ 032566d0 */
                    /* try { // try from 03255fe4 to 03356007 has its CatchHandler @ 03256720 */
    bVar3 = MGICPMNIAMM__LKKLOHIKOBE(__this,__this_00,auVar14._0_8_,in_x3);
  } while (bVar3);
  if (plVar6 != (long *)0x0) {
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
                    /* try { // try from 0325600c to 03356013 has its CatchHandler @ 03256260 */
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
                    /* try { // try from 03256018 to 0335601f has its CatchHandler @ 03256230 */
        if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 0325603c to 0335603f has its CatchHandler @ 032561b0 */
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_03256044;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
                    /* try { // try from 03256024 to 0335602b has its CatchHandler @ 032561f4 */
      } while (uVar11 != 0);
    }
                    /* try { // try from 03256030 to 03356037 has its CatchHandler @ 032561b8 */
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03256044:
                    /* try { // try from 03256044 to 03356047 has its CatchHandler @ 032561ac */
                    /* try { // try from 0325604c to 0335604f has its CatchHandler @ 032561a8 */
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
                    /* try { // try from 03256054 to 03356057 has its CatchHandler @ 032561a4 */
                    /* try { // try from 0325605c to 0335605f has its CatchHandler @ 03256180 */
                    /* try { // try from 03256064 to 03356067 has its CatchHandler @ 0325617c */
                    /* try { // try from 0325606c to 0335606f has its CatchHandler @ 03256178 */
                    /* try { // try from 03256074 to 03356077 has its CatchHandler @ 03256174 */
                    /* try { // try from 0325607c to 0335607f has its CatchHandler @ 03256148 */
  GJFEBGNFFBA__FKGKPCDMPCP((GJFEBGNFFBA_o *)__this,__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03256084 to 03356087 has its CatchHandler @ 03256144 */
                    /* try { // try from 0325608c to 0335608f has its CatchHandler @ 03256140 */
                    /* try { // try from 03256094 to 03356097 has its CatchHandler @ 0325613c */
                    /* try { // try from 0325609c to 0335609f has its CatchHandler @ 03256118 */
  GJFEBGNFFBA__ILHNDPBPGAN
            ((GJFEBGNFFBA_o *)__this,(bool)(~(bVar2 ^ 1) & 1),StringLiteral_10241,__this_00,
             (MethodInfo *)0x0);
  puVar7 = &StringLiteral_21305;
                    /* try { // try from 032560a4 to 033560a7 has its CatchHandler @ 03256114 */
  if (((bVar2 ^ 1) & 1) == 0) {
    puVar7 = &StringLiteral_264;
  }
                    /* try { // try from 032560ac to 033560af has its CatchHandler @ 03256110 */
                    /* try { // try from 032560b4 to 033560b7 has its CatchHandler @ 0325610c */
                    /* try { // try from 032560bc to 033560bf has its CatchHandler @ 032560e8 */
                    /* try { // try from 032560c4 to 033560c7 has its CatchHandler @ 032560e4 */
  pSVar8 = System_String__Concat(StringLiteral_10242,(System_String_o *)*puVar7,(MethodInfo *)0x0);
  return pSVar8;
}

