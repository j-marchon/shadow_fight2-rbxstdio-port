// NHBBOEHHEKG$$HLAKMKPFDAC @ RVA 0x3056FBC

/* WARNING: Removing unreachable block (ram,0x031576bc) */

void NHBBOEHHEKG__HLAKMKPFDAC(NHBBOEHHEKG_o *__this,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Xml_XmlDocument_o *pSVar5;
  long *plVar6;
  System_Xml_XmlAttributeCollection_o *pSVar7;
  System_Xml_XmlAttribute_o *pSVar8;
  System_Collections_Generic_List_MEHKKHFBNLM__o *__this_00;
  System_Collections_Generic_List_MEHKKHFBNLM__o **ppSVar9;
  undefined8 *puVar10;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_string__o *pSVar11;
  System_String_array *pSVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  NHBBOEHHEKG_Fields *pNVar16;
  int NGPAOPCDOLF;
  System_Collections_Generic_List_string__o **ppSVar17;
  float fVar18;
  UnityEngine_Color_o UVar19;
  System_Nullable_Color__Fields local_58;
  
  if ((DAT_04565e70 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
                    /* try { // try from 03157010 to 0325701f has its CatchHandler @ 03157020 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
                    /* catch() { ... } // from try @ 03156ea8 with catch @ 03157020
                       catch() { ... } // from try @ 03157010 with catch @ 03157020 */
                    /* try { // try from 03157024 to 03257027 has its CatchHandler @ 03157030 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* try { // try from 03157028 to 03257033 has its CatchHandler @ 03156c64 */
                    /* catch() { ... } // from try @ 03157024 with catch @ 03157030 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MEHKKHFBNLM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEHKKHFBNLM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4476);
    FUN_01bab630(&StringLiteral_14851);
    FUN_01bab630(&StringLiteral_6604);
    FUN_01bab630(&StringLiteral_6500);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_9259);
    FUN_01bab630(&StringLiteral_14946);
    FUN_01bab630(&StringLiteral_10367);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_7065);
    DAT_04565e70 = 1;
  }
  pNVar16 = &__this->fields;
  pNVar16->ELNOBGPJBKH = (__this->fields).KGLJICLJHEL;
  thunk_FUN_01c20e04(pNVar16);
  pSVar4 = NHBBOEHHEKG__DELGACJHIMA(pNVar16->ELNOBGPJBKH,method_00);
  method_01 = (MethodInfo *)0x1;
  pSVar5 = GIAMPEGMNHE__IBJOMPOLPCC(pSVar4,StringLiteral_1,1,true,true,false,(MethodInfo *)0x0);
  if (pSVar5 != (System_Xml_XmlDocument_o *)0x0) {
    plVar6 = (long *)(*(pSVar5->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar5,StringLiteral_11416,
                                (pSVar5->klass->vtable)._51_get_Item.method);
    ppSVar17 = &(__this->fields).OECKCNINPHL;
    pSVar11 = *ppSVar17;
    if (pSVar11 != (System_Collections_Generic_List_string__o *)0x0) {
      length = (pSVar11->fields)._size;
      (pSVar11->fields)._size = 0;
      (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
      if (0 < length) {
        method_01 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar11->fields)._items,0,length,(MethodInfo *)0x0);
      }
      bVar3 = System_String__op_Inequality
                        ((__this->fields).FNLFDPAJACB,StringLiteral_1,(MethodInfo *)0x0);
      lVar13 = Method_System_Collections_Generic_List<string>_Add__;
      if (bVar3) {
        pSVar11 = (__this->fields).OECKCNINPHL;
        if (pSVar11 == (System_Collections_Generic_List_string__o *)0x0) goto LAB_031576b4;
        pSVar4 = (__this->fields).FNLFDPAJACB;
        pSVar12 = (pSVar11->fields)._items;
        (pSVar11->fields)._version = (pSVar11->fields)._version + 1;
        if (pSVar12 == (System_String_array *)0x0) goto LAB_031576b4;
        uVar2 = (pSVar11->fields)._size;
        if (uVar2 < (uint)pSVar12->max_length) {
          (pSVar11->fields)._size = uVar2 + 1;
          pSVar12->m_Items[(int)uVar2] = pSVar4;
          thunk_FUN_01c20e04(pSVar12->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar11,(Il2CppObject *)pSVar4,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        if (plVar6 == (long *)0x0) goto LAB_031576b4;
      }
      else {
                    /* try { // try from 031571d0 to 0325731b has its CatchHandler @ 031571d0
                       catch() { ... } // from try @ 031571d0 with catch @ 031571d0
                       catch() { ... } // from try @ 031575d0 with catch @ 031571d0
                       catch() { ... } // from try @ 03157644 with catch @ 031571d0
                       catch() { ... } // from try @ 03157718 with catch @ 031571d0 */
        if ((plVar6 == (long *)0x0) ||
           (pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240)),
           pSVar7 == (System_Xml_XmlAttributeCollection_o *)0x0)) goto LAB_031576b4;
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_9259,(MethodInfo *)0x0);
        pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
        if (pSVar4 == (System_String_o *)0x0) goto LAB_031576b4;
        method_01 = (MethodInfo *)0x0;
        pSVar12 = System_String__Split(pSVar4,0x7c,0,(MethodInfo *)0x0);
        pSVar11 = (System_Collections_Generic_List_string__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar11,
                   (System_Collections_Generic_IEnumerable_T__o *)pSVar12,
                   Method_System_Collections_Generic_List<string>__ctor__);
        *ppSVar17 = pSVar11;
        thunk_FUN_01c20e04(ppSVar17,pSVar11);
      }
      pSVar7 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
        pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar7,StringLiteral_6604,(MethodInfo *)0x0);
        if (DAT_04565f2f == '\0') {
          FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
          DAT_04565f2f = '\x01';
        }
        fVar18 = EIABCPKDEBD__GICIEKCGOHA
                           (pSVar8,EBGMOLCMOHK_TypeInfo->static_fields->OFBMPPNJNDB,
                            (MethodInfo *)0x0);
        if (DAT_04565f30 == '\0') {
          FUN_01bab630(&EBGMOLCMOHK_TypeInfo);
          DAT_04565f30 = '\x01';
        }
        EBGMOLCMOHK_TypeInfo->static_fields->DBIHPEGBLNF = fVar18;
                    /* try { // try from 0315731c to 03257337 has its CatchHandler @ 0315760c */
        pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
          pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                             (pSVar7,StringLiteral_14851,(MethodInfo *)0x0);
                    /* try { // try from 03157344 to 0325734b has its CatchHandler @ 03157600 */
          fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
          (__this->fields).PJKMBLALCBB = fVar18;
                    /* try { // try from 0315735c to 03257363 has its CatchHandler @ 031575fc */
          pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                   (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                    /* try { // try from 03157368 to 0325736f has its CatchHandler @ 031575f8 */
          if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
            pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                               (pSVar7,StringLiteral_6500,(MethodInfo *)0x0);
                    /* try { // try from 03157380 to 03257387 has its CatchHandler @ 031575f4 */
                    /* try { // try from 03157388 to 03257393 has its CatchHandler @ 031575f0 */
            fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
            (__this->fields).IDBMGJFGIJH = fVar18;
            pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                     (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                    /* try { // try from 031573a4 to 032573ab has its CatchHandler @ 031575ec */
            if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
              pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                 (pSVar7,StringLiteral_10367,(MethodInfo *)0x0);
                    /* try { // try from 031573c4 to 032573e7 has its CatchHandler @ 03157614 */
              fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
              (__this->fields).KKHNKBHNHGF = fVar18;
              pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                       (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
              if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* try { // try from 031573f4 to 03257437 has its CatchHandler @ 03157610 */
                pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                   (pSVar7,StringLiteral_4476,(MethodInfo *)0x0);
                pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
                local_58.hasValue = false;
                local_58._1_3_ = 0;
                local_58.value.fields.r = 0.0;
                local_58.value.fields.g = 0.0;
                local_58.value.fields.b = 0.0;
                local_58.value.fields.a = 0.0;
                UVar19 = CFBGPBCDAGA__HPBCENEFAMD
                                   (pSVar4,1.0,(System_Nullable_Color__o *)&local_58,
                                    (MethodInfo *)0x0);
                (__this->fields).GLECOLINCIH.fields.r = UVar19.fields.r;
                (__this->fields).GLECOLINCIH.fields.g = UVar19.fields.g;
                (__this->fields).GLECOLINCIH.fields.b = UVar19.fields.b;
                (__this->fields).GLECOLINCIH.fields.a = UVar19.fields.a;
                pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                         (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                  pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                     (pSVar7,StringLiteral_14946,(MethodInfo *)0x0);
                    /* try { // try from 03157450 to 03257457 has its CatchHandler @ 03157604 */
                  fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
                  (__this->fields).NMFKJBOAOLK = fVar18;
                    /* try { // try from 03157470 to 0325748f has its CatchHandler @ 031575dc */
                  pSVar7 = (System_Xml_XmlAttributeCollection_o *)
                           (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
                  if (pSVar7 != (System_Xml_XmlAttributeCollection_o *)0x0) {
                    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                                       (pSVar7,StringLiteral_7065,(MethodInfo *)0x0);
                    /* try { // try from 0315749c to 032574a3 has its CatchHandler @ 031575d4 */
                    fVar18 = EIABCPKDEBD__GICIEKCGOHA(pSVar8,0.0,(MethodInfo *)0x0);
                    (__this->fields).DAPHCPICAAC = fVar18;
                    /* try { // try from 031574b0 to 032574d7 has its CatchHandler @ 03157604 */
                    __this_00 = (System_Collections_Generic_List_MEHKKHFBNLM__o *)
                                thunk_FUN_01bda818(
                                                  System_Collections_Generic_List<MEHKKHFBNLM>_TypeInfo
                                                  );
                    System_Collections_Generic_List<object>___ctor
                              ((System_Collections_Generic_List_object__o *)__this_00,
                               Method_System_Collections_Generic_List<MEHKKHFBNLM>__ctor__);
                    ppSVar9 = &(__this->fields).JDLKPFCELNF;
                    *ppSVar9 = __this_00;
                    thunk_FUN_01c20e04(ppSVar9,__this_00);
                    plVar6 = (long *)(**(code **)(*plVar6 + 0x208))
                                               (plVar6,*(undefined8 *)(*plVar6 + 0x210));
                    if (plVar6 != (long *)0x0) {
                    /* try { // try from 031574f0 to 0325750f has its CatchHandler @ 031575d8 */
                      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))
                                                 (plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
                      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                      NGPAOPCDOLF = 0;
                      do {
                        lVar13 = *plVar6;
                    /* try { // try from 0315751c to 03257523 has its CatchHandler @ 031575d0 */
                        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                        if (uVar14 != 0) {
                          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                    /* try { // try from 03157538 to 0325753b has its CatchHandler @ 03157604 */
                            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 0315755c to 0325757b has its CatchHandler @ 03157608 */
                              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
                              goto LAB_03157564;
                            }
                    /* try { // try from 0315753c to 0325754b has its CatchHandler @ 031575e8 */
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                        puVar10 = (undefined8 *)
                                  FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03157564:
                        uVar14 = (*(code *)*puVar10)(plVar6,puVar10[1]);
                        if ((uVar14 & 1) == 0) {
                          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
                    /* try { // try from 0315762c to 03257643 has its CatchHandler @ 03157710 */
                          if (plVar6 == (long *)0x0) {
                            return;
                          }
                          lVar13 = *plVar6;
                          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                          if (uVar14 == 0) goto LAB_03157664;
                    /* try { // try from 03157644 to 032576ff has its CatchHandler @ 031571d0 */
                          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          goto LAB_0315764c;
                        }
                        lVar13 = *plVar6;
                        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
                        if (uVar14 != 0) {
                    /* try { // try from 03157588 to 03257593 has its CatchHandler @ 031575e4 */
                          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                          do {
                            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                                System_Collections_IEnumerator_TypeInfo) {
                    /* try { // try from 031575bc to 032575cf has its CatchHandler @ 03157614 */
                              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138)
                              ;
                              goto LAB_031575c4;
                            }
                            uVar14 = uVar14 - 1;
                            piVar15 = piVar15 + 4;
                          } while (uVar14 != 0);
                        }
                    /* try { // try from 031575a4 to 032575a7 has its CatchHandler @ 031575e0 */
                        puVar10 = (undefined8 *)
                                  FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_031575c4:
                        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar10)(plVar6,puVar10[1])
                        ;
                    /* catch() { ... } // from try @ 0315751c with catch @ 031575d0
                       try { // try from 031575d0 to 0325762b has its CatchHandler @ 031571d0 */
                    /* catch() { ... } // from try @ 0315749c with catch @ 031575d4 */
                        if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
                    /* catch() { ... } // from try @ 031574f0 with catch @ 031575d8 */
                    /* catch() { ... } // from try @ 03157470 with catch @ 031575dc */
                    /* catch() { ... } // from try @ 031575a4 with catch @ 031575e0 */
                    /* catch() { ... } // from try @ 03157588 with catch @ 031575e4 */
                          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 0315753c with catch @ 031575e8 */
                    /* catch() { ... } // from try @ 031573a4 with catch @ 031575ec */
                    /* catch() { ... } // from try @ 03157388 with catch @ 031575f0 */
                    /* catch() { ... } // from try @ 03157380 with catch @ 031575f4 */
                    /* catch() { ... } // from try @ 03157368 with catch @ 031575f8 */
                    /* catch() { ... } // from try @ 0315735c with catch @ 031575fc */
                    /* catch() { ... } // from try @ 03157344 with catch @ 03157600 */
                          if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
                             ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                            FUN_01babc64(AHDGNOJPPIB);
                          }
                        }
                    /* catch() { ... } // from try @ 03157450 with catch @ 03157604
                       catch() { ... } // from try @ 031574b0 with catch @ 03157604
                       catch() { ... } // from try @ 03157538 with catch @ 03157604 */
                    /* catch() { ... } // from try @ 0315755c with catch @ 03157608 */
                    /* catch() { ... } // from try @ 0315731c with catch @ 0315760c */
                    /* catch() { ... } // from try @ 031573f4 with catch @ 03157610 */
                        NHBBOEHHEKG__DAHBGDAKELO(__this,AHDGNOJPPIB,NGPAOPCDOLF,method_01);
                    /* catch() { ... } // from try @ 031573c4 with catch @ 03157614
                       catch() { ... } // from try @ 031575bc with catch @ 03157614 */
                        NGPAOPCDOLF = NGPAOPCDOLF + -3;
                      } while( true );
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_031576b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0315764c:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_03157680;
    }
  }
LAB_03157664:
  puVar10 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03157680:
  (*(code *)*puVar10)(plVar6,puVar10[1]);
  return;
}

