// ACHLOMELAJE$$NLBAPLPMDFG @ RVA 0x306758C

/* WARNING: Removing unreachable block (ram,0x03167a90) */

void ACHLOMELAJE__NLBAPLPMDFG(ACHLOMELAJE_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_Xml_XmlNode_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *source;
  System_Func_AJDHCLBLGMI__ObscuredString__o **ppSVar3;
  System_Linq_IOrderedEnumerable_TSource__o *pSVar4;
  VirtualInvokeData *pVVar5;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlElement_o *pSVar8;
  System_String_o *pSVar9;
  System_Linq_IOrderedEnumerable_TSource__c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  System_Func_AJDHCLBLGMI__ObscuredString__o *keySelector;
  System_Enum_o local_78;
  undefined4 local_68;
  
  if ((DAT_04565ef4 & 1) == 0) {
    FUN_01bab630(&DPJEINFKCGA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_get_Values__);
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderBy<AJDHCLBLGMI,_ObscuredString>__);
    FUN_01bab630(&System_Func<AJDHCLBLGMI,_ObscuredString>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<AJDHCLBLGMI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<AJDHCLBLGMI>_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_ACHLOMELAJE_<>c_BPKANJNOIFP__);
    FUN_01bab630(&ACHLOMELAJE_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_10587);
    FUN_01bab630(&StringLiteral_12357);
                    /* try { // try from 03167648 to 032678eb has its CatchHandler @ 03167648
                       catch() { ... } // from try @ 03167648 with catch @ 03167648
                       catch() { ... } // from try @ 03167914 with catch @ 03167648
                       catch() { ... } // from try @ 03167a20 with catch @ 03167648
                       catch() { ... } // from try @ 03167a4c with catch @ 03167648
                       catch() { ... } // from try @ 03167a94 with catch @ 03167648 */
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_2818);
    FUN_01bab630(&StringLiteral_9797);
    FUN_01bab630(&StringLiteral_12392);
    FUN_01bab630(&StringLiteral_1606);
    DAT_04565ef4 = 1;
  }
  pSVar2 = (__this->fields).BEODHLHLHDD;
  if (pSVar2 != (System_Xml_XmlNode_o *)0x0) {
    (*(pSVar2->klass->vtable)._49_RemoveAll.methodPtr)
              (pSVar2,(pSVar2->klass->vtable)._49_RemoveAll.method);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).DINIOGDLEHP;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary<object,_object>__get_Values
                         (__this_00,
                          Method_System_Collections_Generic_Dictionary<string,_AJDHCLBLGMI>_get_Values__
                         );
      if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(ACHLOMELAJE_<>c_TypeInfo);
      }
      keySelector = ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__243_0;
      if (keySelector == (System_Func_AJDHCLBLGMI__ObscuredString__o *)0x0) {
        if ((ACHLOMELAJE_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(ACHLOMELAJE_<>c_TypeInfo);
        }
        keySelector = (System_Func_AJDHCLBLGMI__ObscuredString__o *)
                      thunk_FUN_01bda818(System_Func<AJDHCLBLGMI,_ObscuredString>_TypeInfo);
        System_Func<object,_object>___ctor();
        ppSVar3 = &ACHLOMELAJE_<>c_TypeInfo->static_fields->__9__243_0;
        *ppSVar3 = keySelector;
        thunk_FUN_01c20e04(ppSVar3,keySelector);
      }
      pSVar4 = System_Linq_Enumerable__OrderBy<object,_object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                          (System_Func_TSource__TKey__o *)keySelector,
                          Method_System_Linq_Enumerable_OrderBy<AJDHCLBLGMI,_ObscuredString>__);
      if (pSVar4 != (System_Linq_IOrderedEnumerable_TSource__o *)0x0) {
        pSVar10 = pSVar4->klass;
        uVar1._0_1_ = (pSVar10->_2).rank;
        uVar1._1_1_ = (pSVar10->_2).minimumAlignment;
        uVar12 = (ulong)uVar1;
        if (uVar12 != 0) {
          piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IEnumerable<AJDHCLBLGMI>_TypeInfo) {
              pVVar5 = pSVar10->vtable + *piVar13;
              goto LAB_031677bc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar5 = (VirtualInvokeData *)
                 FUN_01b81914(pSVar4,System_Collections_Generic_IEnumerable<AJDHCLBLGMI>_TypeInfo,0)
        ;
LAB_031677bc:
        plVar6 = (long *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03167a8c to 03267a93 has its CatchHandler @ 03167aa8 */
          FUN_01bab8c8();
        }
        do {
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_IEnumerator_c **)(piVar14 + -2) ==
                  System_Collections_IEnumerator_TypeInfo) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_03167850;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03167850:
          uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if ((uVar12 & 1) == 0) {
            if (plVar6 == (long *)0x0) {
              return;
            }
            lVar11 = *plVar6;
            uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar12 == 0) goto LAB_03167a34;
                    /* try { // try from 03167a18 to 03267a1b has its CatchHandler @ 03167a28 */
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            goto LAB_03167a1c;
          }
          lVar11 = *plVar6;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(System_Collections_Generic_IEnumerator_AJDHCLBLGMI__c **)(piVar14 + -2) ==
                  System_Collections_Generic_IEnumerator<AJDHCLBLGMI>_TypeInfo) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
                goto LAB_031678ac;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar7 = (undefined8 *)
                   FUN_01b81914(plVar6,System_Collections_Generic_IEnumerator<AJDHCLBLGMI>_TypeInfo,
                                0);
LAB_031678ac:
          lVar11 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (*(int *)(lVar11 + 0x18) != 0) {
            pSVar8 = EIABCPKDEBD__BHPIHHJHELJ
                               ((__this->fields).BEODHLHLHDD,StringLiteral_9797,(MethodInfo *)0x0);
            pSVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                               (*(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **)
                                 (lVar11 + 0x10),(MethodInfo *)0x0);
            if (pSVar8 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
                    /* try { // try from 031678ec to 032678f3 has its CatchHandler @ 03167a30 */
            (*(pSVar8->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar8,StringLiteral_9327,pSVar9,
                       (pSVar8->klass->vtable)._66_SetAttribute.method);
            local_78.klass = (System_Enum_c *)DPJEINFKCGA_TypeInfo;
                    /* try { // try from 0316790c to 03267913 has its CatchHandler @ 03167a2c */
            local_78.monitor = (void *)0xffffffffffffffff;
            local_68 = *(undefined4 *)(lVar11 + 0x18);
                    /* try { // try from 03167914 to 03267a17 has its CatchHandler @ 03167648 */
            pSVar9 = System_Enum__ToString(&local_78,(MethodInfo *)0x0);
            (*(pSVar8->klass->vtable)._66_SetAttribute.methodPtr)
                      (pSVar8,StringLiteral_12392,pSVar9,
                       (pSVar8->klass->vtable)._66_SetAttribute.method);
            if (0 < *(long *)(lVar11 + 0x20)) {
              pSVar9 = System_Int64__ToString((int64_t)(lVar11 + 0x20),(MethodInfo *)0x0);
              (*(pSVar8->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar8,StringLiteral_10587,pSVar9,
                         (pSVar8->klass->vtable)._66_SetAttribute.method);
            }
            if (*(char *)(lVar11 + 0x28) != '\0') {
              (*(pSVar8->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar8,StringLiteral_2818,StringLiteral_1606,
                         (pSVar8->klass->vtable)._66_SetAttribute.method);
            }
            if (0 < *(int *)(lVar11 + 0x2c)) {
              pSVar9 = System_Int32__ToString((int32_t)(int *)(lVar11 + 0x2c),(MethodInfo *)0x0);
              (*(pSVar8->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar8,StringLiteral_12357,pSVar9,
                         (pSVar8->klass->vtable)._66_SetAttribute.method);
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03167a18 with catch @ 03167a28
                        */
    uVar12 = uVar12 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0316790c with catch @ 03167a2c
                        */
    piVar14 = piVar14 + 4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 031678ec with catch @ 03167a30
                        */
    if (uVar12 == 0) break;
LAB_03167a1c:
                    /* try { // try from 03167a1c to 03267a1f has its CatchHandler @ 03167a24 */
                    /* try { // try from 03167a20 to 03267a47 has its CatchHandler @ 03167648 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03167a1c with catch @ 03167a24
                        */
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
                    /* try { // try from 03167a48 to 03267a4b has its CatchHandler @ 03167a7c */
                    /* try { // try from 03167a4c to 03267a8b has its CatchHandler @ 03167648 */
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_03167a50;
    }
  }
LAB_03167a34:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03167a50:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
                    /* catch() { ... } // from try @ 03167a48 with catch @ 03167a7c */
  return;
}

