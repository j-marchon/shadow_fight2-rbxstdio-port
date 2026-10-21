// TypeDefIndex 1433
// Namespace: 
// public class CAJHCLGOFMJ
// Fields:
//   private XmlNode HJKLIDCAEOE; // 0x10
//   private readonly Dictionary<string, int> OCFIONIBFOF; // 0x18

// ===== public void .ctor(XmlNode AHDGNOJPPIB)  [RVA 0x31842C8]
// CAJHCLGOFMJ$$.ctor @ RVA 0x31842C8

/* WARNING: Removing unreachable block (ram,0x032847c4) */
/* WARNING: Removing unreachable block (ram,0x03284888) */

void CAJHCLGOFMJ___ctor(CAJHCLGOFMJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  int32_t iVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  long *plVar7;
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 *puVar8;
  Il2CppObject *item;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Xml_XmlAttribute_o *pSVar10;
  long *plVar11;
  Il2CppObject *key;
  System_String_o *DIHAKADKIKM;
  long lVar12;
  System_Object_array *pSVar13;
  ulong uVar14;
  int *piVar15;
  System_Collections_Generic_Dictionary_string__int__o **ppSVar16;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  
  if ((DAT_045669d1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<XmlNode>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<XmlNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<XmlNode>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14864/*"WatchedCount"*/);
    DAT_045669d1 = 1;
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_int>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_int>___ctor
            (pSVar6,Method_System_Collections_Generic_Dictionary<string,_int>__ctor__);
  ppSVar16 = &(__this->fields).OCFIONIBFOF;
  *ppSVar16 = (System_Collections_Generic_Dictionary_string__int__o *)pSVar6;
  thunk_FUN_01c20e04(ppSVar16,pSVar6);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar7 != (long *)0x0)) {
    iVar4 = (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<XmlNode>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,iVar4,Method_System_Collections_Generic_List<XmlNode>__ctor__);
    plVar7 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0328451c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,0);
LAB_0328451c:
        uVar14 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar14 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_032847b8;
          lVar12 = *plVar7;
          uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
          if (uVar14 == 0) goto LAB_03284790;
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          goto LAB_03284778;
        }
        lVar12 = *plVar7;
        uVar14 = (ulong)*(ushort *)(lVar12 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar12 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0328457c;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_Collections_IEnumerator_TypeInfo,1);
LAB_0328457c:
        item = (Il2CppObject *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (item == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((item->klass->_2).naturalAligment < bVar1) ||
           ((item->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(item);
        }
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*item->klass->vtable[0x10].methodPtr)(item,item->klass->vtable[0x10].method);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar10 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        plVar11 = (long *)(*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                                    (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        key = (Il2CppObject *)
              (**(code **)(*plVar11 + 0x168))(plVar11,*(undefined8 *)(*plVar11 + 0x170));
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*item->klass->vtable[0x10].methodPtr)(item,item->klass->vtable[0x10].method);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar10 = System_Xml_XmlAttributeCollection__get_ItemOf
                            (pSVar9,StringLiteral_14864/*"WatchedCount"*/,(MethodInfo *)0x0);
        if (pSVar10 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        DIHAKADKIKM = (System_String_o *)
                      (*(pSVar10->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar10,(pSVar10->klass->vtable)._9_get_Value.method);
        iVar4 = PCOEHCPGBBG__JBGCINPPLAC(DIHAKADKIKM,0,(MethodInfo *)0x0);
        if ((System_Collections_Generic_Dictionary_object__int__o *)*ppSVar16 ==
            (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                          ((System_Collections_Generic_Dictionary_object__int__o *)*ppSVar16,key,
                           Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
        pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)*ppSVar16;
        if (bVar3) {
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          iVar5 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                            (pSVar6,key,
                             Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
          System_Collections_Generic_Dictionary<object,_int>__set_Item
                    (pSVar6,key,iVar5 + iVar4,
                     Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
          lVar12 = Method_System_Collections_Generic_List<XmlNode>_Add__;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar13 = (__this_00->fields)._items;
          (__this_00->fields)._version = (__this_00->fields)._version + 1;
          if (pSVar13 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar13->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar13->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pSVar13->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          if (pSVar6 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          System_Collections_Generic_Dictionary<object,_int>__Add
                    (pSVar6,key,iVar4,
                     Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
        }
      } while( true );
    }
  }
  goto LAB_03284880;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_03284778:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar12 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_032847ac;
    }
  }
LAB_03284790:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_032847ac:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_032847b8:
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,__this_00,Method_System_Collections_Generic_List<XmlNode>_GetEnumerator__);
    while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_78,
                              Method_System_Collections_Generic_List_Enumerator<XmlNode>_MoveNext__)
          , bVar3) {
      (*(AHDGNOJPPIB->klass->vtable)._25_RemoveChild.methodPtr)
                (AHDGNOJPPIB,local_78.fields._current,
                 (AHDGNOJPPIB->klass->vtable)._25_RemoveChild.method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_78,Method_System_Collections_Generic_List_Enumerator<XmlNode>_Dispose__);
    return;
  }
LAB_03284880:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public bool KPAEAHPADBL(string KGLJICLJHEL)  [RVA 0x3184A20]
// CAJHCLGOFMJ$$KPAEAHPADBL @ RVA 0x3184A20

bool CAJHCLGOFMJ__KPAEAHPADBL(CAJHCLGOFMJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  
  if ((DAT_045669d2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    DAT_045669d2 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (!bVar1) {
      return false;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                        (pSVar3,(Il2CppObject *)KGLJICLJHEL,
                         Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
      return 0 < iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void CODMHIEOCJM(string KGLJICLJHEL)  [RVA 0x3184AC8]
// CAJHCLGOFMJ$$CODMHIEOCJM @ RVA 0x3184AC8

/* WARNING: Removing unreachable block (ram,0x03284f08) */

void CAJHCLGOFMJ__CODMHIEOCJM(CAJHCLGOFMJ_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_object__int__o *pSVar6;
  System_Xml_XmlNode_o *pSVar7;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  long *plVar10;
  System_Xml_XmlAttributeCollection_o *pSVar11;
  System_Xml_XmlAttribute_o *pSVar12;
  System_String_o *pSVar13;
  undefined8 *puVar14;
  System_Collections_IEnumerator_c *pSVar15;
  long lVar16;
  ulong uVar17;
  int32_t *piVar18;
  int *piVar19;
  int local_44;
  
  if ((DAT_045669d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14864/*"WatchedCount"*/);
    FUN_01bab630(&StringLiteral_14785/*"Video"*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    DAT_045669d3 = 1;
  }
  local_44 = 0;
  bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(KGLJICLJHEL,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar6,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (bVar4) {
      pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        iVar5 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                          (pSVar6,(Il2CppObject *)KGLJICLJHEL,
                           Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
        local_44 = iVar5 + 1;
        pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)
                 (__this->fields).OCFIONIBFOF;
        if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary<object,_int>__set_Item
                    (pSVar6,(Il2CppObject *)KGLJICLJHEL,local_44,
                     Method_System_Collections_Generic_Dictionary<string,_int>_set_Item__);
          pSVar7 = (__this->fields).HJKLIDCAEOE;
          if (pSVar7 != (System_Xml_XmlNode_o *)0x0) {
            pSVar8 = System_Xml_XmlNode__GetEnumerator(pSVar7,(MethodInfo *)0x0);
            if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            do {
              pSVar15 = pSVar8->klass;
              uVar2._0_1_ = (pSVar15->_2).rank;
              uVar2._1_1_ = (pSVar15->_2).minimumAlignment;
              uVar17 = (ulong)uVar2;
              if (uVar17 != 0) {
                piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    pVVar9 = pSVar15->vtable + *piVar18;
                    goto LAB_03284c74;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              pVVar9 = (VirtualInvokeData *)
                       FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,0);
LAB_03284c74:
              uVar17 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
              if ((uVar17 & 1) == 0) {
                plVar10 = (long *)thunk_FUN_01bda71c(pSVar8,System_IDisposable_TypeInfo);
                if (plVar10 == (long *)0x0) {
                  return;
                }
                lVar16 = *plVar10;
                uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
                if (uVar17 == 0) goto LAB_03284e00;
                piVar19 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
                goto LAB_03284de8;
              }
              pSVar15 = pSVar8->klass;
              uVar3._0_1_ = (pSVar15->_2).rank;
              uVar3._1_1_ = (pSVar15->_2).minimumAlignment;
              uVar17 = (ulong)uVar3;
              if (uVar17 != 0) {
                piVar18 = &((pSVar15->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar18 + -2))->interfaceType ==
                      (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
                    pVVar9 = pSVar15->vtable + (*piVar18 + 1);
                    goto LAB_03284cd4;
                  }
                  uVar17 = uVar17 - 1;
                  piVar18 = piVar18 + 4;
                } while (uVar17 != 0);
              }
              pVVar9 = (VirtualInvokeData *)
                       FUN_01b81914(pSVar8,System_Collections_IEnumerator_TypeInfo,1);
LAB_03284cd4:
              plVar10 = (long *)(*pVVar9->methodPtr)(pSVar8,pVVar9->method);
              if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
              if ((*(byte *)(*plVar10 + 0x130) < bVar1) ||
                 (*(System_Xml_XmlNode_c **)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) !=
                  System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(plVar10);
              }
              pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                        (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
              if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (pSVar11,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
              if (pSVar12 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pSVar13 = (System_String_o *)
                        (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                  (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method);
              if (pSVar13 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              bVar4 = System_String__Equals(pSVar13,KGLJICLJHEL,(MethodInfo *)0x0);
              if (bVar4) {
                pSVar11 = (System_Xml_XmlAttributeCollection_o *)
                          (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240))
                ;
                if (pSVar11 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8();
                }
                pSVar12 = System_Xml_XmlAttributeCollection__get_ItemOf
                                    (pSVar11,StringLiteral_14864/*"WatchedCount"*/,(MethodInfo *)0x0);
                pSVar13 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
                if (pSVar12 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8c8(pSVar13,pSVar13);
                }
                (*(pSVar12->klass->vtable)._10_set_Value.methodPtr)
                          (pSVar12,pSVar13,(pSVar12->klass->vtable)._10_set_Value.method);
              }
            } while( true );
          }
        }
      }
    }
    else {
      pSVar6 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
      if (pSVar6 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_int>__Add
                  (pSVar6,(Il2CppObject *)KGLJICLJHEL,1,
                   Method_System_Collections_Generic_Dictionary<string,_int>_Add__);
        pSVar7 = EIABCPKDEBD__KPODFFHOHGK
                           ((__this->fields).HJKLIDCAEOE,StringLiteral_14785/*"Video"*/,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__HBGAGFJBGKD(pSVar7,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
        if (pSVar12 != (System_Xml_XmlAttribute_o *)0x0) {
          (*(pSVar12->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar12,KGLJICLJHEL,(pSVar12->klass->vtable)._10_set_Value.method);
          pSVar12 = EIABCPKDEBD__HBGAGFJBGKD(pSVar7,StringLiteral_14864/*"WatchedCount"*/,(MethodInfo *)0x0);
          if (pSVar12 != (System_Xml_XmlAttribute_o *)0x0) {
            (*(pSVar12->klass->vtable)._10_set_Value.methodPtr)
                      (pSVar12,StringLiteral_1606/*"1"*/,(pSVar12->klass->vtable)._10_set_Value.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar19 = piVar19 + 4;
    if (uVar17 == 0) break;
LAB_03284de8:
    if (*(System_IDisposable_c **)(piVar19 + -2) == System_IDisposable_TypeInfo) {
      puVar14 = (undefined8 *)(lVar16 + (long)*piVar19 * 0x10 + 0x138);
      goto LAB_03284e1c;
    }
  }
LAB_03284e00:
  puVar14 = (undefined8 *)FUN_01b81914(plVar10,System_IDisposable_TypeInfo,0);
LAB_03284e1c:
  (*(code *)*puVar14)(plVar10,puVar14[1]);
  return;
}


// ===== public void GEEFPKCAMNE()  [RVA 0x318500C]
// CAJHCLGOFMJ$$GEEFPKCAMNE @ RVA 0x318500C

void CAJHCLGOFMJ__GEEFPKCAMNE(CAJHCLGOFMJ_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Xml_XmlNode_o *pSVar1;
  
  if ((DAT_045669d4 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    DAT_045669d4 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_int>_Clear__);
    pSVar1 = (__this->fields).HJKLIDCAEOE;
    if (pSVar1 != (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0328506c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar1->klass->vtable)._49_RemoveAll.methodPtr)
                (pSVar1,(pSVar1->klass->vtable)._49_RemoveAll.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MDGJPBHDFHN(XmlNode AHDGNOJPPIB)  [RVA 0x3185074]
// CAJHCLGOFMJ$$MDGJPBHDFHN @ RVA 0x3185074

void CAJHCLGOFMJ__MDGJPBHDFHN
               (CAJHCLGOFMJ_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  System_Xml_XmlElement_o *JHMENEKPIBO;
  System_Xml_XmlAttribute_o *pSVar4;
  System_String_o *pSVar5;
  CAJHCLGOFMJ_Fields *pCVar6;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b0;
  undefined4 local_84;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_80;
  
  if ((DAT_045669d5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_int>_get_Value__);
    FUN_01bab630(&StringLiteral_9327/*"Name"*/);
    FUN_01bab630(&StringLiteral_14864/*"WatchedCount"*/);
    FUN_01bab630(&StringLiteral_14785/*"Video"*/);
    DAT_045669d5 = 1;
  }
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  local_84 = 0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  pCVar6 = &__this->fields;
  pCVar6->HJKLIDCAEOE = AHDGNOJPPIB;
  thunk_FUN_01c20e04(pCVar6,AHDGNOJPPIB);
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).OCFIONIBFOF;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_int>__GetEnumerator
              (&local_b0,__this_00,
               Method_System_Collections_Generic_Dictionary<string,_int>_GetEnumerator__);
    local_80.fields._version = local_b0.fields._version;
    local_80.fields._index = local_b0.fields._index;
    local_80.fields._dictionary = local_b0.fields._dictionary;
    local_80.fields._current.fields.value = local_b0.fields._current.fields.value;
    local_80.fields._current.fields.key = local_b0.fields._current.fields.key;
    local_80.fields._getEnumeratorRetType = local_b0.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_b0.fields._36_4_;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_int>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_MoveNext__
                        );
      pIVar2 = local_80.fields._current.fields.value;
      pIVar1 = local_80.fields._current.fields.key;
      if (!bVar3) {
        System_Collections_Generic_Dictionary_Enumerator<object,_int>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_Dictionary_Enumerator<string,_int>_Dispose__);
        return;
      }
      JHMENEKPIBO = EIABCPKDEBD__BHPIHHJHELJ
                              (pCVar6->HJKLIDCAEOE,StringLiteral_14785/*"Video"*/,(MethodInfo *)0x0);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_9327/*"Name"*/,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) break;
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pIVar1,(pSVar4->klass->vtable)._10_set_Value.method);
      pSVar4 = EIABCPKDEBD__HBGAGFJBGKD
                         ((System_Xml_XmlNode_o *)JHMENEKPIBO,StringLiteral_14864/*"WatchedCount"*/,(MethodInfo *)0x0)
      ;
      local_84 = SUB84(pIVar2,0);
      pSVar5 = System_Int32__ToString((int32_t)&local_84,(MethodInfo *)0x0);
      if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8(pSVar5,pSVar5);
      }
      (*(pSVar4->klass->vtable)._10_set_Value.methodPtr)
                (pSVar4,pSVar5,(pSVar4->klass->vtable)._10_set_Value.method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

