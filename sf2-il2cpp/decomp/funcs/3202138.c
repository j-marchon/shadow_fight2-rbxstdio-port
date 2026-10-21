// NLPJLHOEAOE$$LIAEODAPBCD @ RVA 0x3202138

/* WARNING: Removing unreachable block (ram,0x0330244c) */

FJIFBJMMKHG_o *
NLPJLHOEAOE__LIAEODAPBCD(NLPJLHOEAOE_o *__this,System_String_o *PIGAGEDBOPC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  BCHFHHHGEIP_o *__this_00;
  System_Collections_Generic_IEnumerable_FJIFBJMMKHG__o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  FJIFBJMMKHG_o *pFVar9;
  GCPFDLNAFDF_c *pGVar10;
  System_Collections_Generic_IEnumerable_FJIFBJMMKHG__c *pSVar11;
  long lVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  
                    /* try { // try from 0330213c to 0340213f has its CatchHandler @ 03302634 */
                    /* try { // try from 03302140 to 0340214f has its CatchHandler @ 0330264c */
  if ((DAT_04566e05 & 1) == 0) {
                    /* try { // try from 03302168 to 03402177 has its CatchHandler @ 03302214 */
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03302180 to 0340218b has its CatchHandler @ 03302210 */
    FUN_01bab630(&System_Collections_Generic_IEnumerable<FJIFBJMMKHG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<FJIFBJMMKHG>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 033021a8 to 034021af has its CatchHandler @ 03302638 */
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_04566e05 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
    pGVar10 = pGVar4->klass;
    uVar1._0_1_ = (pGVar10->_2).rank;
    uVar1._1_1_ = (pGVar10->_2).minimumAlignment;
    uVar13 = (ulong)uVar1;
                    /* try { // try from 033021e4 to 03402203 has its CatchHandler @ 0330263c */
    if (uVar13 != 0) {
      piVar14 = &((pGVar10->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar5 = pGVar10->vtable + (*piVar14 + 4);
          goto LAB_0330222c;
        }
        uVar13 = uVar13 - 1;
        piVar14 = piVar14 + 4;
                    /* try { // try from 03302208 to 0340220b has its CatchHandler @ 03302218 */
      } while (uVar13 != 0);
    }
                    /* try { // try from 0330220c to 0340222b has its CatchHandler @ 03301fe8 */
                    /* catch() { ... } // from try @ 03302180 with catch @ 03302210 */
                    /* catch() { ... } // from try @ 03302168 with catch @ 03302214 */
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HFHIKPAKJFG_TypeInfo,4);
                    /* catch() { ... } // from try @ 03302208 with catch @ 03302218 */
LAB_0330222c:
                    /* try { // try from 0330222c to 03402243 has its CatchHandler @ 033025f8 */
    __this_00 = (BCHFHHHGEIP_o *)(*pVVar5->methodPtr)(pGVar4,pVVar5->method);
    if ((__this_00 != (BCHFHHHGEIP_o *)0x0) &&
       (pSVar6 = BCHFHHHGEIP__KKEGCBHMGJI
                           (__this_00,(__this->fields)._PFHJDMOFFOG_k__BackingField,
                            (MethodInfo *)0x0),
       pSVar6 != (System_Collections_Generic_IEnumerable_FJIFBJMMKHG__o *)0x0)) {
      pSVar11 = pSVar6->klass;
      uVar2._0_1_ = (pSVar11->_2).rank;
      uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
                    /* try { // try from 0330225c to 0340225f has its CatchHandler @ 033025bc */
      uVar13 = (ulong)uVar2;
      if (uVar13 != 0) {
                    /* try { // try from 0330226c to 03402287 has its CatchHandler @ 033025a0 */
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IEnumerable<FJIFBJMMKHG>_TypeInfo) {
            pVVar5 = pSVar11->vtable + *piVar14;
            goto LAB_033022a4;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
                    /* try { // try from 03302288 to 0340229f has its CatchHandler @ 03302590 */
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pSVar6,System_Collections_Generic_IEnumerable<FJIFBJMMKHG>_TypeInfo,0);
LAB_033022a4:
                    /* try { // try from 033022a8 to 034022cf has its CatchHandler @ 03302614 */
      plVar7 = (long *)(*pVVar5->methodPtr)(pSVar6,pVVar5->method);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
LAB_033022d0:
      lVar12 = *plVar7;
      uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar13 != 0) {
        piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* try { // try from 033022f0 to 034022f3 has its CatchHandler @ 033025c4 */
          if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0330231c;
          }
                    /* try { // try from 033022f4 to 0340231f has its CatchHandler @ 03302594 */
          uVar13 = uVar13 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar13 != 0);
      }
      puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0330231c:
      uVar13 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar13 & 1) != 0) {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
                    /* try { // try from 0330233c to 0340233f has its CatchHandler @ 033025ec */
                    /* try { // try from 03302340 to 0340236b has its CatchHandler @ 033025a8 */
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_Generic_IEnumerator_FJIFBJMMKHG__c **)(piVar15 + -2) ==
                System_Collections_Generic_IEnumerator<FJIFBJMMKHG>_TypeInfo) {
                    /* try { // try from 03302370 to 0340237b has its CatchHandler @ 03302598 */
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03302378;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
        puVar8 = (undefined8 *)
                 FUN_01b81914(plVar7,System_Collections_Generic_IEnumerator<FJIFBJMMKHG>_TypeInfo,0)
        ;
LAB_03302378:
        pFVar9 = (FJIFBJMMKHG_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
                    /* try { // try from 03302388 to 034023b3 has its CatchHandler @ 033025f0 */
        if (pFVar9 == (FJIFBJMMKHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__op_Equality
                          ((pFVar9->fields)._CIEBCKIBJHL_k__BackingField,PIGAGEDBOPC,
                           (MethodInfo *)0x0);
        if ((bVar3) ||
           (bVar3 = System_String__op_Equality
                              ((pFVar9->fields)._NACCGICEMJN_k__BackingField,PIGAGEDBOPC,
                               (MethodInfo *)0x0), bVar3)) goto joined_r0x033023c8;
        goto LAB_033022d0;
      }
                    /* try { // try from 033023c4 to 034023cf has its CatchHandler @ 033025ac */
      pFVar9 = (FJIFBJMMKHG_o *)0x0;
joined_r0x033023c8:
      if (plVar7 != (long *)0x0) {
        lVar12 = *plVar7;
        uVar13 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar13 != 0) {
                    /* try { // try from 033023dc to 034023fb has its CatchHandler @ 0330259c */
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_03302418;
            }
            uVar13 = uVar13 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar13 != 0);
        }
                    /* try { // try from 03302400 to 0340240b has its CatchHandler @ 03302620 */
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03302418:
                    /* try { // try from 0330241c to 0340241f has its CatchHandler @ 033025f4 */
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
                    /* try { // try from 03302424 to 03402457 has its CatchHandler @ 033025d8 */
      return pFVar9;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

