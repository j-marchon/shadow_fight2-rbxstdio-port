// TypeDefIndex 1693
// Namespace: 
// public class IIHMKHNLJKD
// Fields:
//   private Dictionary<string, IIHMKHNLJKD.MGNPEFBKION> FODILKIIDCE; // 0x10

// ===== public bool LCLIGIJPCOD(string KKJPPDNKGAI)  [RVA 0x31D1340]
// IIHMKHNLJKD$$LCLIGIJPCOD @ RVA 0x31D1340

bool IIHMKHNLJKD__LCLIGIJPCOD(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = IIHMKHNLJKD__OAKGGOAHHAA(__this,KKJPPDNKGAI,method);
  return iVar1 != 0;
}


// ===== private IIHMKHNLJKD.MGNPEFBKION FFKFEHOIJCG(string KKJPPDNKGAI)  [RVA 0x31D137C]
// IIHMKHNLJKD$$FFKFEHOIJCG @ RVA 0x31D137C

IIHMKHNLJKD_MGNPEFBKION_o *
IIHMKHNLJKD__FFKFEHOIJCG(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  IIHMKHNLJKD_MGNPEFBKION_o *__this_00;
  IIHMKHNLJKD_MGNPEFBKION_o *local_28;
  
  if ((DAT_04566cab & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TryGetValue__
                );
    FUN_01bab630(&IIHMKHNLJKD_MGNPEFBKION_TypeInfo);
    DAT_04566cab = 1;
  }
  local_28 = (IIHMKHNLJKD_MGNPEFBKION_o *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FODILKIIDCE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar2,(Il2CppObject *)KKJPPDNKGAI,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TryGetValue__
                      );
    if (!bVar1) {
      __this_00 = (IIHMKHNLJKD_MGNPEFBKION_o *)thunk_FUN_01bda818(IIHMKHNLJKD_MGNPEFBKION_TypeInfo);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).FODILKIIDCE;
      local_28 = __this_00;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_032d1444;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar2,(Il2CppObject *)KKJPPDNKGAI,(Il2CppObject *)__this_00,
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Add__
                );
    }
    return local_28;
  }
LAB_032d1444:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int HLIPFHGLPKN(string KKJPPDNKGAI)  [RVA 0x31D1450]
// IIHMKHNLJKD$$HLIPFHGLPKN @ RVA 0x31D1450

int32_t IIHMKHNLJKD__HLIPFHGLPKN
                  (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  int32_t iVar1;
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar2;
  
  pIVar2 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method);
  if (pIVar2 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pIVar2->fields).MNPHGAIJEGI.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BKCFPHNEONL(XmlNode JHMENEKPIBO)  [RVA 0x31D1474]
// IIHMKHNLJKD$$BKCFPHNEONL @ RVA 0x31D1474

/* WARNING: Removing unreachable block (ram,0x032d1834) */

void IIHMKHNLJKD__BKCFPHNEONL
               (IIHMKHNLJKD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  System_String_o *value;
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar11;
  int64_t CJNHFNHJHPE;
  undefined8 *puVar12;
  MethodInfo *method_00;
  System_Collections_IEnumerator_c *pSVar13;
  long lVar14;
  ulong uVar15;
  int32_t *piVar16;
  int *piVar17;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0 [2];
  
  if ((DAT_04566cac & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Clear__
                );
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_4834/*"CounterCurrent"*/);
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
    FUN_01bab630(&StringLiteral_4830/*"Counter"*/);
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_04566cac = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).FODILKIIDCE;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__Clear
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_Clear__);
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar6 = System_Xml_XmlNode__GetEnumerator(JHMENEKPIBO,(MethodInfo *)0x0);
  if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar13 = pSVar6->klass;
    uVar2._0_1_ = (pSVar13->_2).rank;
    uVar2._1_1_ = (pSVar13->_2).minimumAlignment;
    uVar15 = (ulong)uVar2;
    if (uVar15 != 0) {
      piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar13->vtable + *piVar16;
          goto LAB_032d15c0;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_032d15c0:
    uVar15 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if ((uVar15 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
      if (plVar8 == (long *)0x0) {
        return;
      }
      lVar14 = *plVar8;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 == 0) goto LAB_032d17c0;
      piVar17 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      break;
    }
    pSVar13 = pSVar6->klass;
    uVar3._0_1_ = (pSVar13->_2).rank;
    uVar3._1_1_ = (pSVar13->_2).minimumAlignment;
    uVar15 = (ulong)uVar3;
    if (uVar15 != 0) {
      piVar16 = &((pSVar13->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar16 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar7 = pSVar13->vtable + (*piVar16 + 1);
          goto LAB_032d1620;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_032d1620:
    plVar8 = (long *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(plVar8);
    }
    pSVar9 = (System_Xml_XmlAttributeCollection_o *)
             (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
    if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                        (pSVar9,StringLiteral_7230/*"ID"*/,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    value = EIABCPKDEBD__JPKEHIBGOEM(pSVar10,(System_String_o *)0x0,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar4) {
      pIVar11 = IIHMKHNLJKD__FFKFEHOIJCG(__this,value,method_00);
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_4834/*"CounterCurrent"*/,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
      CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      if (pIVar11 == (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (pIVar11->fields).MNPHGAIJEGI.fields = CVar18;
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_4830/*"Counter"*/,(MethodInfo *)0x0);
      iVar5 = EIABCPKDEBD__EHJNCGCICMP(pSVar10,0,(MethodInfo *)0x0);
      CVar18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar5,(MethodInfo *)0x0);
      (pIVar11->fields).ADHFHEJFJPK.fields = CVar18;
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                          (pSVar9,StringLiteral_13814/*"Timer"*/,(MethodInfo *)0x0);
      CJNHFNHJHPE = EIABCPKDEBD__HNIGPBMJJOL(pSVar10,0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                (local_a0,CJNHFNHJHPE,(MethodInfo *)0x0);
      (pIVar11->fields).IGLJEOFJJHE.fields.hiddenValue = local_a0[0].fields.hiddenValue;
      (pIVar11->fields).IGLJEOFJJHE.fields.currentCryptoKey = local_a0[0].fields.currentCryptoKey;
      (pIVar11->fields).IGLJEOFJJHE.fields.fakeValueActive = local_a0[0].fields.fakeValueActive;
      (pIVar11->fields).IGLJEOFJJHE.fields.inited = local_a0[0].fields.inited;
      *(undefined6 *)&(pIVar11->fields).IGLJEOFJJHE.fields.field_0x1a = local_a0[0].fields._26_6_;
      (pIVar11->fields).IGLJEOFJJHE.fields.fakeValue = local_a0[0].fields.fakeValue;
    }
  } while( true );
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar17 = piVar17 + 4;
    if (uVar15 == 0) break;
    if (*(System_IDisposable_c **)(piVar17 + -2) == System_IDisposable_TypeInfo) {
      puVar12 = (undefined8 *)(lVar14 + (long)*piVar17 * 0x10 + 0x138);
      goto LAB_032d17dc;
    }
  }
LAB_032d17c0:
  puVar12 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_032d17dc:
  (*(code *)*puVar12)(plVar8,puVar12[1]);
  return;
}


// ===== public void BHFGGAKKJKP(XmlNode JHMENEKPIBO)  [RVA 0x31D1954]
// IIHMKHNLJKD$$BHFGGAKKJKP @ RVA 0x31D1954

void IIHMKHNLJKD__BHFGGAKKJKP
               (IIHMKHNLJKD_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int64_t iVar4;
  System_Xml_XmlElement_o *pSVar5;
  MethodInfo *pMVar6;
  System_String_o *pSVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *pCVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_02;
  undefined1 local_e0 [40];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04566cad & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_IIHMKHNLJKD_MGNPEFBKION>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_IIHMKHNLJKD_MGNPEFBKION>_get_Value__
                );
    FUN_01bab630(&StringLiteral_4834/*"CounterCurrent"*/);
    FUN_01bab630(&StringLiteral_13814/*"Timer"*/);
    FUN_01bab630(&StringLiteral_4830/*"Counter"*/);
    FUN_01bab630(&StringLiteral_7230/*"ID"*/);
    DAT_04566cad = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    (*(JHMENEKPIBO->klass->vtable)._49_RemoveAll.methodPtr)
              (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._49_RemoveAll.method);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields).FODILKIIDCE;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
                (&local_b8,__this_00,
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_GetEnumerator__
                );
      local_90.fields._version = local_b8.fields._version;
      local_90.fields._index = local_b8.fields._index;
      local_90.fields._dictionary = local_b8.fields._dictionary;
      local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
      local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
      local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
      local_90.fields._36_4_ = local_b8.fields._36_4_;
      while( true ) {
        bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                          (&local_90,
                           Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_MoveNext__
                          );
        pIVar1 = local_90.fields._current.fields.value;
        pMVar6 = (MethodInfo *)local_90.fields._current.fields.key;
        if (!bVar2) {
          System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_IIHMKHNLJKD_MGNPEFBKION>_Dispose__
                    );
          return;
        }
        if (local_90.fields._current.fields.value == (Il2CppObject *)0x0) break;
        pCVar8 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)
                 (local_90.fields._current.fields.value + 2);
        iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)*pCVar8,
                           (MethodInfo *)0x0);
        if (iVar3 != 0) {
          iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                             *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 1),
                             (MethodInfo *)0x0);
          if (iVar3 != 0) {
            local_e0._8_8_ = pIVar1[3].monitor;
            local_e0._0_8_ = pIVar1[3].klass;
            local_e0._24_8_ = pIVar1[4].monitor;
            local_e0._16_8_ = pIVar1[4].klass;
            iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_e0,
                               (MethodInfo *)0x0);
            if (iVar4 != 0) {
              pSVar5 = EIABCPKDEBD__BHPIHHJHELJ(JHMENEKPIBO,StringLiteral_4830/*"Counter"*/,(MethodInfo *)0x0);
              if (pSVar5 == (System_Xml_XmlElement_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_7230/*"ID"*/,pMVar6,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
              __this_01.fields.fakeValue = 0;
              __this_01.fields.fakeValueActive = false;
              __this_01.fields.inited = false;
              __this_01.fields._14_2_ = 0;
              __this_01.fields._0_8_ =
                   (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 1);
              pMVar6 = (MethodInfo *)
                       CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_01,pMVar6);
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_4834/*"CounterCurrent"*/,pMVar6,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
              __this_02.fields.fakeValue = 0;
              __this_02.fields.fakeValueActive = false;
              __this_02.fields.inited = false;
              __this_02.fields._14_2_ = 0;
              __this_02.fields._0_8_ = pCVar8;
              pSVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_02,pMVar6);
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_4830/*"Counter"*/,pSVar7,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
              pSVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                                 ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)(pIVar1 + 3),
                                  (MethodInfo *)0x0);
              (*(pSVar5->klass->vtable)._66_SetAttribute.methodPtr)
                        (pSVar5,StringLiteral_13814/*"Timer"*/,pSVar7,
                         (pSVar5->klass->vtable)._66_SetAttribute.method);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void FOPHMMMLPBN(string KKJPPDNKGAI, int OOGPLJBADCD, bool KLIHNEDCGEP = True)  [RVA 0x31D1C70]
// IIHMKHNLJKD$$FOPHMMMLPBN @ RVA 0x31D1C70

void IIHMKHNLJKD__FOPHMMMLPBN
               (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,int32_t OOGPLJBADCD,
               bool KLIHNEDCGEP,MethodInfo *method)

{
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar1;
  Roster_o *__this_00;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)OOGPLJBADCD;
  if ((DAT_04566cae & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cae = 1;
  }
  pIVar1 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method_00);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(OOGPLJBADCD,(MethodInfo *)0x0);
  if (pIVar1 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    (pIVar1->fields).ADHFHEJFJPK.fields = CVar2;
    if (!KLIHNEDCGEP) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void NPFGJPGKBOH(string KKJPPDNKGAI)  [RVA 0x31D1D58]
// IIHMKHNLJKD$$NPFGJPGKBOH @ RVA 0x31D1D58

void IIHMKHNLJKD__NPFGJPGKBOH(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  int64_t OOGPLJBADCD;
  Roster_o *__this_00;
  MethodInfo *in_x4;
  
  if ((DAT_04566caf & 1) == 0) {
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566caf = 1;
  }
  IIHMKHNLJKD__MNEHJGPINPN(__this,KKJPPDNKGAI,0,false,in_x4);
  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  OOGPLJBADCD = GameUtils__EAHFGGKENCK((MethodInfo *)0x0);
  IIHMKHNLJKD__DBOONMCPOIF(__this,KKJPPDNKGAI,OOGPLJBADCD,false,in_x4);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (Roster_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JJCEPPADHNK(string KKJPPDNKGAI)  [RVA 0x31D2030]
// IIHMKHNLJKD$$JJCEPPADHNK @ RVA 0x31D2030

void IIHMKHNLJKD__JJCEPPADHNK(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  Nekki_Utils_GlobalTimer_o *pNVar1;
  int64_t iVar2;
  int64_t iVar3;
  
  if ((DAT_04566cb0 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&GameUtils_TypeInfo);
    DAT_04566cb0 = 1;
  }
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_Utils_GlobalTimer_o *)0x0) {
    if ((pNVar1->fields).GAPAJLLHGHO != false) {
      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar2 = GameUtils__EAHFGGKENCK((MethodInfo *)0x0);
      iVar3 = IIHMKHNLJKD__OBKOLJAKHJD(__this,KKJPPDNKGAI,method);
      if ((long)GameUtils_TypeInfo->static_fields->OIAMENKHCNO <= iVar2 - iVar3) {
        IIHMKHNLJKD__NPFGJPGKBOH(__this,KKJPPDNKGAI,method);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool ADDMPKLDGEF(XmlAttribute HIHEKNNCALP, XmlAttribute JEAAOOJOCBD, XmlAttribute HCAKAIDBOHA)  [RVA 0x31D2144]
// IIHMKHNLJKD$$ADDMPKLDGEF @ RVA 0x31D2144

bool IIHMKHNLJKD__ADDMPKLDGEF
               (IIHMKHNLJKD_o *__this,System_Xml_XmlAttribute_o *HIHEKNNCALP,
               System_Xml_XmlAttribute_o *JEAAOOJOCBD,System_Xml_XmlAttribute_o *HCAKAIDBOHA,
               MethodInfo *method)

{
  long *plVar1;
  
  if (HIHEKNNCALP == (System_Xml_XmlAttribute_o *)0x0) {
    if (JEAAOOJOCBD == (System_Xml_XmlAttribute_o *)0x0 &&
        HCAKAIDBOHA == (System_Xml_XmlAttribute_o *)0x0) {
      return false;
    }
  }
  else {
    plVar1 = (long *)(*(HIHEKNNCALP->klass->vtable)._65_get_OwnerElement.methodPtr)
                               (HIHEKNNCALP,(HIHEKNNCALP->klass->vtable)._65_get_OwnerElement.method
                               );
    if (plVar1 == (long *)0x0) goto LAB_032d220c;
    (**(code **)(*plVar1 + 0x588))(plVar1,HIHEKNNCALP,*(undefined8 *)(*plVar1 + 0x590));
  }
  if (JEAAOOJOCBD != (System_Xml_XmlAttribute_o *)0x0) {
    plVar1 = (long *)(*(JEAAOOJOCBD->klass->vtable)._65_get_OwnerElement.methodPtr)
                               (JEAAOOJOCBD,(JEAAOOJOCBD->klass->vtable)._65_get_OwnerElement.method
                               );
    if (plVar1 == (long *)0x0) goto LAB_032d220c;
    (**(code **)(*plVar1 + 0x588))(plVar1,JEAAOOJOCBD,*(undefined8 *)(*plVar1 + 0x590));
  }
  if (HCAKAIDBOHA != (System_Xml_XmlAttribute_o *)0x0) {
    plVar1 = (long *)(*(HCAKAIDBOHA->klass->vtable)._65_get_OwnerElement.methodPtr)
                               (HCAKAIDBOHA,(HCAKAIDBOHA->klass->vtable)._65_get_OwnerElement.method
                               );
    if (plVar1 == (long *)0x0) {
LAB_032d220c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (**(code **)(*plVar1 + 0x588))(plVar1,HCAKAIDBOHA,*(undefined8 *)(*plVar1 + 0x590));
  }
  return true;
}


// ===== public void DBOONMCPOIF(string KKJPPDNKGAI, long OOGPLJBADCD, bool KLIHNEDCGEP = True)  [RVA 0x31D1F3C]
// IIHMKHNLJKD$$DBOONMCPOIF @ RVA 0x31D1F3C

void IIHMKHNLJKD__DBOONMCPOIF
               (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,int64_t OOGPLJBADCD,
               bool KLIHNEDCGEP,MethodInfo *method)

{
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar1;
  Roster_o *__this_00;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  method_00 = (MethodInfo *)OOGPLJBADCD;
  if ((DAT_04566cb1 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cb1 = 1;
  }
  pIVar1 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method_00);
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_70,OOGPLJBADCD,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  if (pIVar1 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    (pIVar1->fields).IGLJEOFJJHE.fields.hiddenValue = local_70.fields.hiddenValue;
    (pIVar1->fields).IGLJEOFJJHE.fields.currentCryptoKey = local_70.fields.currentCryptoKey;
    (pIVar1->fields).IGLJEOFJJHE.fields.fakeValueActive = local_70.fields.fakeValueActive;
    (pIVar1->fields).IGLJEOFJJHE.fields.inited = local_70.fields.inited;
    *(undefined6 *)&(pIVar1->fields).IGLJEOFJJHE.fields.field_0x1a = local_70.fields._26_6_;
    (pIVar1->fields).IGLJEOFJJHE.fields.fakeValue = local_70.fields.fakeValue;
    if (KLIHNEDCGEP) {
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b7d == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b7d = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
      if (__this_00 == (Roster_o *)0x0) goto LAB_032d202c;
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,true,(MethodInfo *)0x0);
    }
    return;
  }
LAB_032d202c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public long OBKOLJAKHJD(string KKJPPDNKGAI)  [RVA 0x31D2110]
// IIHMKHNLJKD$$OBKOLJAKHJD @ RVA 0x31D2110

int64_t IIHMKHNLJKD__OBKOLJAKHJD
                  (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar1;
  int64_t iVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_30;
  
  pIVar1 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method);
  if (pIVar1 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    local_30.fields.hiddenValue = (pIVar1->fields).IGLJEOFJJHE.fields.hiddenValue;
    local_30.fields.currentCryptoKey = (pIVar1->fields).IGLJEOFJJHE.fields.currentCryptoKey;
    local_30.fields.fakeValueActive = (pIVar1->fields).IGLJEOFJJHE.fields.fakeValueActive;
    local_30.fields.inited = (pIVar1->fields).IGLJEOFJJHE.fields.inited;
    local_30.fields._26_6_ = *(undefined6 *)&(pIVar1->fields).IGLJEOFJJHE.fields.field_0x1a;
    local_30.fields.fakeValue = (pIVar1->fields).IGLJEOFJJHE.fields.fakeValue;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_30,(MethodInfo *)0x0)
    ;
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool NKNLFKGBOPK(string KKJPPDNKGAI)  [RVA 0x31D2210]
// IIHMKHNLJKD$$NKNLFKGBOPK @ RVA 0x31D2210

bool IIHMKHNLJKD__NKNLFKGBOPK(IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = IIHMKHNLJKD__OAKGGOAHHAA(__this,KKJPPDNKGAI,method);
  return (bool)((byte)~(byte)((uint)iVar1 >> 0x18) >> 7);
}


// ===== public void MNEHJGPINPN(string KKJPPDNKGAI, int OOGPLJBADCD, bool KLIHNEDCGEP = True)  [RVA 0x31D1E54]
// IIHMKHNLJKD$$MNEHJGPINPN @ RVA 0x31D1E54

void IIHMKHNLJKD__MNEHJGPINPN
               (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,int32_t OOGPLJBADCD,
               bool KLIHNEDCGEP,MethodInfo *method)

{
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar1;
  Roster_o *__this_00;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar2;
  
  method_00 = (MethodInfo *)(ulong)(uint)OOGPLJBADCD;
  if ((DAT_04566cb2 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566cb2 = 1;
  }
  pIVar1 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method_00);
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(OOGPLJBADCD,(MethodInfo *)0x0);
  if (pIVar1 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    (pIVar1->fields).MNPHGAIJEGI.fields = CVar2;
    if (!KLIHNEDCGEP) {
      return;
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this_00 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_00,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31D2228]
// IIHMKHNLJKD$$.ctor @ RVA 0x31D2228

void IIHMKHNLJKD___ctor(IIHMKHNLJKD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566cb3 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TypeInfo);
    DAT_04566cb3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_IIHMKHNLJKD_MGNPEFBKION>__ctor__);
  (__this->fields).FODILKIIDCE =
       (System_Collections_Generic_Dictionary_string__IIHMKHNLJKD_MGNPEFBKION__o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public int OAKGGOAHHAA(string KKJPPDNKGAI)  [RVA 0x31D1358]
// IIHMKHNLJKD$$OAKGGOAHHAA @ RVA 0x31D1358

int32_t IIHMKHNLJKD__OAKGGOAHHAA
                  (IIHMKHNLJKD_o *__this,System_String_o *KKJPPDNKGAI,MethodInfo *method)

{
  int32_t iVar1;
  IIHMKHNLJKD_MGNPEFBKION_o *pIVar2;
  
  pIVar2 = IIHMKHNLJKD__FFKFEHOIJCG(__this,KKJPPDNKGAI,method);
  if (pIVar2 != (IIHMKHNLJKD_MGNPEFBKION_o *)0x0) {
    iVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                       (pIVar2->fields).ADHFHEJFJPK.fields,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

