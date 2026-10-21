// IDDIABHBDEE$$JNEDBDPHMOI @ RVA 0x337DD64

/* WARNING: Removing unreachable block (ram,0x0347e0c8) */

System_Xml_XmlNode_o *
IDDIABHBDEE__JNEDBDPHMOI(System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_XmlNode_o *pSVar2;
  bool bVar3;
  CFGLKHFFEKA_o *FMPJLBLNHMC;
  System_Collections_Generic_IEnumerable_XmlNode__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  CFGLKHFFEKA_o *FMPJLBLNHMC_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *pMVar8;
  System_Collections_Generic_IEnumerable_XmlNode__c *pSVar9;
  long lVar10;
  ulong uVar11;
  int32_t *piVar12;
  int *piVar13;
  System_Xml_XmlNode_o *pSVar14;
  CFGLKHFFEKA_o *pCVar15;
  CFGLKHFFEKA_o *IHEPHBIPLPM;
  undefined1 auVar16 [16];
  System_ValueTuple_CFGLKHFFEKA__CFGLKHFFEKA__o SVar17;
  
  if ((DAT_04567ba4 & 1) == 0) {
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    DAT_04567ba4 = 1;
    method = extraout_x1;
  }
  if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
    pSVar14 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo,method);
    }
    FMPJLBLNHMC = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
    pMVar8 = extraout_x1_00;
    if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(CFGLKHFFEKA_TypeInfo);
      pMVar8 = extraout_x1_01;
    }
    pCVar15 = CFGLKHFFEKA_TypeInfo->static_fields->NMPPDPOICBA;
    if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pMVar8 = extraout_x1_02;
    }
    pSVar4 = IDDIABHBDEE__HJNLDOCBHPD(GGDPPDFOEOH,pMVar8);
    if (pSVar4 == (System_Collections_Generic_IEnumerable_XmlNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0347de5c to 0357df27 has its CatchHandler @ 0347de5c
                       catch() { ... } // from try @ 0347de5c with catch @ 0347de5c
                       catch() { ... } // from try @ 0347df74 with catch @ 0347de5c
                       catch() { ... } // from try @ 0347dfbc with catch @ 0347de5c
                       catch() { ... } // from try @ 0347dff0 with catch @ 0347de5c
                       catch() { ... } // from try @ 0347e028 with catch @ 0347de5c */
    pSVar9 = pSVar4->klass;
    uVar1._0_1_ = (pSVar9->_2).rank;
    uVar1._1_1_ = (pSVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar1;
    if (uVar11 != 0) {
      piVar12 = &((pSVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo) {
          pVVar5 = pSVar9->vtable + *piVar12;
          goto LAB_0347debc;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<XmlNode>_TypeInfo,0);
LAB_0347debc:
    plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar2 = (System_Xml_XmlNode_o *)0x0;
LAB_0347dee4:
    IHEPHBIPLPM = pCVar15;
    pSVar14 = pSVar2;
    lVar10 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0347df28 to 0357df2f has its CatchHandler @ 0347dfd4 */
          puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0347df30;
        }
        uVar11 = uVar11 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_0347df30:
    uVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if ((uVar11 & 1) != 0) {
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
                    /* try { // try from 0347df4c to 0357df57 has its CatchHandler @ 0347dfd0 */
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_Collections_Generic_IEnumerator_XmlNode__c **)(piVar13 + -2) ==
              System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0347df8c;
          }
          uVar11 = uVar11 - 1;
                    /* try { // try from 0347df68 to 0357df73 has its CatchHandler @ 0347dfc0 */
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
                    /* try { // try from 0347df74 to 0357dfaf has its CatchHandler @ 0347de5c */
      puVar7 = (undefined8 *)
               FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<XmlNode>_TypeInfo,0);
LAB_0347df8c:
      auVar16 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      pMVar8 = auVar16._8_8_;
      if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pMVar8 = extraout_x1_03;
      }
                    /* try { // try from 0347dfb0 to 0357dfb3 has its CatchHandler @ 0347dfcc */
      SVar17 = IDDIABHBDEE__LIFBLANNHLO(auVar16._0_8_,pMVar8);
      FMPJLBLNHMC_00 = SVar17.fields.Item1;
                    /* try { // try from 0347dfb4 to 0357dfb7 has its CatchHandler @ 0347dfc8 */
                    /* try { // try from 0347dfb8 to 0357dfbb has its CatchHandler @ 0347dfc4 */
                    /* try { // try from 0347dfbc to 0357dfeb has its CatchHandler @ 0347de5c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347df68 with catch @ 0347dfc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347dfb8 with catch @ 0347dfc4
                        */
      if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347dfb4 with catch @ 0347dfc8
                        */
        thunk_FUN_01ba7564();
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347dfb0 with catch @ 0347dfcc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347df4c with catch @ 0347dfd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0347df28 with catch @ 0347dfd4
                        */
      bVar3 = CFGLKHFFEKA__ONPEKFBMDKM(FMPJLBLNHMC_00,IHEPHBIPLPM,(MethodInfo *)0x0);
      pSVar2 = pSVar14;
      pCVar15 = IHEPHBIPLPM;
      if (bVar3) {
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0347dfec to 0357dfef has its CatchHandler @ 0347e018 */
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 0347dff0 to 0357e01f has its CatchHandler @ 0347de5c */
        bVar3 = CFGLKHFFEKA__ONPEKFBMDKM(FMPJLBLNHMC,FMPJLBLNHMC_00,(MethodInfo *)0x0);
        if (bVar3) {
          if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 0347dfec with catch @ 0347e018 */
                    /* try { // try from 0347e020 to 0357e027 has its CatchHandler @ 0347e03c */
          bVar3 = CFGLKHFFEKA__IDMIELGIHJC(FMPJLBLNHMC,SVar17.fields.Item2,(MethodInfo *)0x0);
          pSVar2 = auVar16._0_8_;
          pCVar15 = FMPJLBLNHMC_00;
                    /* try { // try from 0347e028 to 0357e033 has its CatchHandler @ 0347de5c */
          if (!bVar3) {
            pSVar2 = pSVar14;
            pCVar15 = IHEPHBIPLPM;
          }
        }
      }
      goto LAB_0347dee4;
    }
                    /* try { // try from 0347e034 to 0357e03b has its CatchHandler @ 0347e03c */
    if (plVar6 != (long *)0x0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0347e020 with catch @ 0347e03c
                       catch(type#2 @ 00000000) { ... } // from try @ 0347e034 with catch @ 0347e03c
                        */
      lVar10 = *plVar6;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
            puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0347e090;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0347e090:
                    /* try { // try from 0347e098 to 0357e143 has its CatchHandler @ 0347e098
                       catch() { ... } // from try @ 0347e098 with catch @ 0347e098
                       catch() { ... } // from try @ 0347e160 with catch @ 0347e098
                       catch() { ... } // from try @ 0347e1bc with catch @ 0347e098
                       catch() { ... } // from try @ 0347e21c with catch @ 0347e098
                       catch() { ... } // from try @ 0347e258 with catch @ 0347e098
                       catch() { ... } // from try @ 0347e274 with catch @ 0347e098
                       catch() { ... } // from try @ 0347e2a4 with catch @ 0347e098 */
      (*(code *)*puVar7)(plVar6,puVar7[1]);
    }
  }
  return pSVar14;
}

