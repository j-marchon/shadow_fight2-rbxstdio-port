// FOKJBDHLIMG$$PJKJHCHFLHD @ RVA 0x309F4BC

/* WARNING: Removing unreachable block (ram,0x0319f9f4) */
/* WARNING: Removing unreachable block (ram,0x0319f8a4) */
/* WARNING: Removing unreachable block (ram,0x0319f9dc) */

void FOKJBDHLIMG__PJKJHCHFLHD
               (FOKJBDHLIMG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,bool IDLJOELLIMN,
               bool LOICCHNHMIA,MethodInfo *method)

{
  int32_t length;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  MethodInfo *KDMPIDEEPMP;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *KGLJICLJHEL;
  HEFOANCOHDC_o *item;
  MethodInfo *pMVar7;
  System_Collections_Generic_List_HEFOANCOHDC__o *pSVar8;
  long lVar9;
  HEFOANCOHDC_array *pHVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04566133 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_11030);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566133 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  if (IDLJOELLIMN) {
    pSVar8 = (__this->fields).ODLBEHFGJJE;
    if (pSVar8 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) goto LAB_0319f9ec;
    length = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,length,(MethodInfo *)0x0);
    }
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 != (long *)0x0)) {
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_0319f674;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0319f674:
      uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar11 & 1) == 0) {
        plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
        if (plVar4 == (long *)0x0) {
          return;
        }
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 == 0) goto LAB_0319f950;
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0319f938;
      }
      lVar9 = *plVar4;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_0319f6d4;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0319f6d4:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(System_Xml_XmlNode_c **)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(plVar6);
      }
      GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                    (**(code **)(*plVar6 + 0x468))
                              (plVar6,StringLiteral_11876,*(undefined8 *)(*plVar6 + 0x470));
      KDMPIDEEPMP = (MethodInfo *)
                    (**(code **)(*plVar6 + 0x468))
                              (plVar6,StringLiteral_11030,*(undefined8 *)(*plVar6 + 0x470));
      if (GHKNNCLBPEO != (System_Xml_XmlNode_o *)0x0 || KDMPIDEEPMP != (MethodInfo *)0x0) {
        __this_00 = (System_Xml_XmlAttributeCollection_o *)
                    (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
        if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)0x0;
        KGLJICLJHEL = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
        pSVar8 = FOKJBDHLIMG__KFHGLJOAALL(__this,KGLJICLJHEL,pMVar7);
        if (pSVar8 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_98,(System_Collections_Generic_List_object__o *)pSVar8,
                   Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
        local_80.fields._index = local_98.fields._index;
        local_80.fields._version = local_98.fields._version;
        local_80.fields._list = local_98.fields._list;
        local_80.fields._current = local_98.fields._current;
        while (bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_80,
                                  Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                                 ), bVar3) {
          if ((HEFOANCOHDC_o *)local_80.fields._current == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar7 = KDMPIDEEPMP;
          item = HEFOANCOHDC__FAOBHLCDKJI
                           ((HEFOANCOHDC_o *)local_80.fields._current,GHKNNCLBPEO,
                            (System_Xml_XmlNode_o *)KDMPIDEEPMP,(MethodInfo *)0x0);
          if (LOICCHNHMIA) {
            if (item == (HEFOANCOHDC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            FOKJBDHLIMG__NCOOBKBAMCI(__this,(item->fields).JIJLBFGKNJK,pMVar7);
          }
          lVar9 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Add__;
          pSVar8 = (__this->fields).ODLBEHFGJJE;
          if (pSVar8 == (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pHVar10 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pHVar10 == (HEFOANCOHDC_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pHVar10->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pHVar10->m_Items[(int)uVar2] = item;
            thunk_FUN_01c20e04(pHVar10->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)item,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_80,
                   Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
      }
    } while( true );
  }
LAB_0319f9ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_0319f938:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0319f96c;
    }
  }
LAB_0319f950:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_0319f96c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

