// BCGLDKLKKDA$$ECJKKKIHGHI @ RVA 0x3482230

/* WARNING: Removing unreachable block (ram,0x03582804) */

System_Collections_Generic_List_FLCGGKEODNC__o *
BCGLDKLKKDA__ECJKKKIHGHI(System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  int32_t iVar7;
  System_Collections_Generic_List_FLCGGKEODNC__o *__this;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  FLCGGKEODNC_o *__this_00;
  System_Xml_XmlAttributeCollection_o *pSVar11;
  System_Xml_XmlAttribute_o *pSVar12;
  System_String_o *pSVar13;
  System_String_o *GMLKIEHIOIA;
  undefined8 *puVar14;
  System_Collections_IEnumerator_c *pSVar15;
  FLCGGKEODNC_array *pFVar16;
  long lVar17;
  ulong uVar18;
  int32_t *piVar19;
  int *piVar20;
  undefined1 auVar21 [16];
  
  auVar21._8_8_ = method;
  auVar21._0_8_ = JHMENEKPIBO;
                    /* try { // try from 03582238 to 0368223f has its CatchHandler @ 03582b58 */
                    /* try { // try from 03582248 to 0368224f has its CatchHandler @ 03582b00 */
  if ((DAT_0456838a & 1) == 0) {
                    /* try { // try from 03582260 to 03682267 has its CatchHandler @ 03582b28 */
    FUN_01bab630(&Method_EIABCPKDEBD_CKHGJBKDIID<FBBNEILNOKK>__);
                    /* try { // try from 0358226c to 03682273 has its CatchHandler @ 03582afc */
    FUN_01bab630(&FLCGGKEODNC_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 03582284 to 0368228b has its CatchHandler @ 03582b4c */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 0358228c to 0368229f has its CatchHandler @ 03582b44 */
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__);
                    /* try { // try from 035822a4 to 036822af has its CatchHandler @ 03582b1c */
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
                    /* try { // try from 035822b4 to 036822cf has its CatchHandler @ 03582d04 */
    FUN_01bab630(&System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4476);
    FUN_01bab630(&StringLiteral_12880);
                    /* try { // try from 035822dc to 036822e3 has its CatchHandler @ 03582b10 */
    FUN_01bab630(&StringLiteral_14607);
                    /* try { // try from 035822ec to 036822f3 has its CatchHandler @ 03582b24 */
    FUN_01bab630(&StringLiteral_4665);
    FUN_01bab630(&StringLiteral_11123);
                    /* try { // try from 03582304 to 0368230b has its CatchHandler @ 03582ad0 */
    FUN_01bab630(&StringLiteral_11124);
                    /* try { // try from 03582310 to 03682317 has its CatchHandler @ 03582a80 */
    FUN_01bab630(&StringLiteral_1);
    auVar21 = FUN_01bab630(&StringLiteral_3622);
                    /* try { // try from 03582328 to 0368232f has its CatchHandler @ 03582aec */
    DAT_0456838a = 1;
  }
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
                    /* try { // try from 03582330 to 03682343 has its CatchHandler @ 03582a98 */
    auVar21 = (*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                        (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    plVar10 = auVar21._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = auVar21._8_8_;
    auVar21 = auVar5 << 0x40;
    if (plVar10 != (long *)0x0) {
                    /* try { // try from 03582348 to 03682353 has its CatchHandler @ 03582ae8 */
                    /* try { // try from 03582354 to 0368235f has its CatchHandler @ 03582aa8 */
      iVar7 = (**(code **)(*plVar10 + 0x1a8))(plVar10,*(undefined8 *)(*plVar10 + 0x1b0));
                    /* try { // try from 03582370 to 03682377 has its CatchHandler @ 03582ae4 */
      __this = (System_Collections_Generic_List_FLCGGKEODNC__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
                    /* try { // try from 03582380 to 03682387 has its CatchHandler @ 03582aac */
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)__this,iVar7,
                 Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
      pSVar8 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03582800 to 03682803 has its CatchHandler @ 035829f8 */
        FUN_01bab8c8();
      }
      do {
        pSVar15 = pSVar8->klass;
        uVar2._0_1_ = (pSVar15->_2).rank;
        uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar18 = (ulong)uVar2;
        if (uVar18 != 0) {
                    /* try { // try from 035823dc to 036823e7 has its CatchHandler @ 03582acc */
          piVar19 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
              pVVar9 = pSVar15->vtable + *piVar19;
              goto LAB_03582414;
            }
                    /* try { // try from 035823ec to 03682407 has its CatchHandler @ 03582d00 */
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0)
        ;
LAB_03582414:
                    /* try { // try from 03582414 to 0368241b has its CatchHandler @ 03582a7c */
        uVar18 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if ((uVar18 & 1) == 0) {
                    /* try { // try from 03582734 to 0368273b has its CatchHandler @ 035829ec */
          plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
          if (plVar10 == (long *)0x0) {
            return __this;
          }
                    /* try { // try from 03582748 to 03682753 has its CatchHandler @ 03582a1c */
          lVar17 = *plVar10;
          uVar18 = (ulong)*(ushort *)(lVar17 + 0x12e);
          if (uVar18 == 0) goto LAB_0358277c;
                    /* try { // try from 03582760 to 0368277f has its CatchHandler @ 03582a58 */
          piVar20 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
          goto LAB_03582764;
        }
                    /* try { // try from 03582424 to 0368242b has its CatchHandler @ 03582af0 */
        pSVar15 = pSVar8->klass;
        uVar3._0_1_ = (pSVar15->_2).rank;
        uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
        uVar18 = (ulong)uVar3;
        if (uVar18 != 0) {
          piVar19 = &((pSVar15->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 0358243c to 03682443 has its CatchHandler @ 03582a90 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar19 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 03582468 to 0368247b has its CatchHandler @ 03582a94 */
              pVVar9 = pSVar15->vtable + (*piVar19 + 1);
              goto LAB_03582474;
            }
                    /* try { // try from 03582448 to 0368244f has its CatchHandler @ 03582a84 */
            uVar18 = uVar18 - 1;
            piVar19 = piVar19 + 4;
          } while (uVar18 != 0);
        }
        pVVar9 = (VirtualInvokeData *)FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1)
        ;
                    /* try { // try from 03582460 to 03682467 has its CatchHandler @ 03582ad4 */
LAB_03582474:
        plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
                    /* try { // try from 03582480 to 0368248b has its CatchHandler @ 03582aa0 */
        if (plVar10 != (long *)0x0) {
                    /* try { // try from 0358248c to 03682497 has its CatchHandler @ 03582ac0 */
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035824ac to 036824b3 has its CatchHandler @ 03582aa4 */
          if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
             (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
              System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(plVar10);
          }
        }
                    /* try { // try from 035824bc to 036824c3 has its CatchHandler @ 03582ac4 */
        __this_00 = (FLCGGKEODNC_o *)thunk_FUN_01bda818(FLCGGKEODNC_TypeInfo);
                    /* try { // try from 035824d4 to 036824db has its CatchHandler @ 03582ab4 */
        FLCGGKEODNC___ctor(__this_00,(MethodInfo *)0x0);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035824e0 to 036824e7 has its CatchHandler @ 03582adc */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035824f8 to 036824ff has its CatchHandler @ 03582af4 */
                    /* try { // try from 03582500 to 03682513 has its CatchHandler @ 03582a88 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_12880,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 03582518 to 03682523 has its CatchHandler @ 03582a70 */
        if (__this_00 == (FLCGGKEODNC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (__this_00->fields).ABCHAOKFLGL = pSVar13;
        thunk_FUN_01c20e04();
                    /* try { // try from 03582528 to 0368253f has its CatchHandler @ 03582cfc */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035827d4 to 036827db has its CatchHandler @ 035829fc */
          FUN_01bab8c8();
        }
                    /* try { // try from 0358254c to 03682553 has its CatchHandler @ 03582a24 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_4476,(MethodInfo *)0x0);
                    /* try { // try from 0358255c to 03682563 has its CatchHandler @ 03582a28 */
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 03582574 to 0368257b has its CatchHandler @ 03582a50 */
        if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03582580 to 03682587 has its CatchHandler @ 03582a4c */
        iVar7 = LabelButton__GetBtnColor(pSVar13,(MethodInfo *)0x0);
        (__this_00->fields).BANIDGFENDE = iVar7;
                    /* try { // try from 03582598 to 0368259f has its CatchHandler @ 03582a40 */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                    /* try { // try from 035825a0 to 036825b3 has its CatchHandler @ 03582a5c */
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_14607,(MethodInfo *)0x0);
                    /* try { // try from 035825b8 to 036825c3 has its CatchHandler @ 03582a48 */
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 035825c4 to 036825cf has its CatchHandler @ 03582a60 */
        (__this_00->fields).PHONOLEMBHN = pSVar13;
        thunk_FUN_01c20e04();
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
                    /* try { // try from 035825e8 to 036825ef has its CatchHandler @ 03582a54 */
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 035825f8 to 036825ff has its CatchHandler @ 03582a34 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_3622,(MethodInfo *)0x0);
        bVar6 = EIABCPKDEBD__FMBMNDIGLIG(pSVar12,false,(MethodInfo *)0x0);
                    /* try { // try from 03582610 to 03682617 has its CatchHandler @ 03582a2c */
        (__this_00->fields).KMJPPCLIEDG = bVar6;
                    /* try { // try from 0358261c to 03682623 has its CatchHandler @ 03582a64 */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03582634 to 0368263b has its CatchHandler @ 03582a3c */
                    /* try { // try from 0358263c to 0368264f has its CatchHandler @ 03582a68 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_11124,(MethodInfo *)0x0);
        pSVar13 = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03582654 to 0368265f has its CatchHandler @ 03582a74 */
                    /* try { // try from 03582660 to 0368266b has its CatchHandler @ 03582a78 */
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 03582670 to 03682677 has its CatchHandler @ 03582a38 */
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_11123,(MethodInfo *)0x0);
        GMLKIEHIOIA = EIABCPKDEBD__JPKEHIBGOEM(pSVar12,(System_String_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 03582684 to 036826b7 has its CatchHandler @ 03582a20 */
        FLCGGKEODNC__CBAGKAAEOAD(__this_00,pSVar13,GMLKIEHIOIA,(MethodInfo *)0x0);
        pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar11,StringLiteral_4665,(MethodInfo *)0x0);
        iVar7 = EIABCPKDEBD__CKHGJBKDIID<Int32Enum>
                          (pSVar12,-1,Method_EIABCPKDEBD_CKHGJBKDIID<FBBNEILNOKK>__);
        (__this_00->fields).ACNLHENNKAJ = iVar7;
        lVar17 = Method_System_Collections_Generic_List<FLCGGKEODNC>_Add__;
        if (__this == (System_Collections_Generic_List_FLCGGKEODNC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pFVar16 = (__this->fields)._items;
                    /* try { // try from 035826d8 to 036826df has its CatchHandler @ 035829cc */
        (__this->fields)._version = (__this->fields)._version + 1;
        if (pFVar16 == (FLCGGKEODNC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pFVar16->max_length) {
          (__this->fields)._size = uVar4 + 1;
                    /* try { // try from 03582700 to 0368271f has its CatchHandler @ 03582a08 */
          pFVar16->m_Items[(int)uVar4] = __this_00;
          thunk_FUN_01c20e04(pFVar16->m_Items + (int)uVar4,__this_00);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar21._0_8_,auVar21._8_8_);
  while( true ) {
    uVar18 = uVar18 - 1;
    piVar20 = piVar20 + 4;
    if (uVar18 == 0) break;
LAB_03582764:
    if (*(System_IDisposable_c **)(piVar20 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar17 + (long)*piVar20 * 0x10 + 0x138);
      goto LAB_03582798;
    }
  }
LAB_0358277c:
  puVar14 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_03582798:
                    /* try { // try from 03582798 to 0368279b has its CatchHandler @ 03582a04 */
                    /* try { // try from 0358279c to 036827a7 has its CatchHandler @ 03582a44 */
  (*(code *)*puVar14)(plVar10,puVar14[1]);
                    /* try { // try from 035827bc to 036827c3 has its CatchHandler @ 03582a18 */
  return __this;
}

