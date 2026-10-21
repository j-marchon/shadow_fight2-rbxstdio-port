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
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14864);
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
                            (pSVar9,StringLiteral_9327,(MethodInfo *)0x0);
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
                            (pSVar9,StringLiteral_14864,(MethodInfo *)0x0);
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

