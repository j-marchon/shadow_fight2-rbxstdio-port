// KFGGMKHNCGM$$.ctor @ RVA 0x33E05CC

/* WARNING: Removing unreachable block (ram,0x034e0a3c) */

void KFGGMKHNCGM___ctor(KFGGMKHNCGM_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_KMJDCOABCCG__o *pSVar3;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  KMJDCOABCCG_o *__this_01;
  System_Comparison_KMJDCOABCCG__o **ppSVar7;
  long lVar8;
  KMJDCOABCCG_array *pKVar9;
  ulong uVar10;
  int *piVar11;
  System_Collections_Generic_List_KMJDCOABCCG__o **ppSVar12;
  System_Comparison_KMJDCOABCCG__o *comparison;
  
  if ((DAT_04567e99 & 1) == 0) {
    FUN_01bab630(&System_Comparison<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&KMJDCOABCCG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo);
    FUN_01bab630(&Method_KFGGMKHNCGM_<>c_EOOKNHCKOKI__);
    FUN_01bab630(&KFGGMKHNCGM_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567e99 = 1;
  }
  pSVar3 = (System_Collections_Generic_List_KMJDCOABCCG__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KMJDCOABCCG>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<KMJDCOABCCG>__ctor__);
  ppSVar12 = &(__this->fields).EHGOHNHDKPP;
  *ppSVar12 = pSVar3;
  thunk_FUN_01c20e04(ppSVar12,pSVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (__this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                            (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     __this_00 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                            (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
    pSVar4 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
    (__this->fields).JIJLBFGKNJK = pSVar4;
    thunk_FUN_01c20e04(&__this->fields,pSVar4);
    plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar5 != (long *)0x0) {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_034e07d0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_034e07d0:
        uVar10 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if ((uVar10 & 1) == 0) {
          plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
          if (plVar5 == (long *)0x0) goto LAB_034e0964;
          lVar8 = *plVar5;
          uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar10 == 0) goto LAB_034e093c;
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_034e0924;
        }
        lVar8 = *plVar5;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar11 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar11 + 1) * 0x10 + 0x138);
              goto LAB_034e0830;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_034e0830:
        AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        __this_01 = (KMJDCOABCCG_o *)thunk_FUN_01bda818(KMJDCOABCCG_TypeInfo);
        if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
             ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(AHDGNOJPPIB_00);
          }
        }
        KMJDCOABCCG___ctor(__this_01,AHDGNOJPPIB_00,(MethodInfo *)0x0);
        lVar8 = Method_System_Collections_Generic_List<KMJDCOABCCG>_Add__;
        pSVar3 = *ppSVar12;
        if (pSVar3 == (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pKVar9 = (pSVar3->fields)._items;
        (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
        if (pKVar9 == (KMJDCOABCCG_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pKVar9->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pKVar9->m_Items[(int)uVar2] = __this_01;
          thunk_FUN_01c20e04(pKVar9->m_Items + (int)uVar2,__this_01);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_01,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
  }
  goto LAB_034e0a34;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_034e0924:
    if (*(System_IDisposable_c **)(piVar11 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_034e0958;
    }
  }
LAB_034e093c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_034e0958:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
LAB_034e0964:
  pSVar3 = *ppSVar12;
  if ((KFGGMKHNCGM_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(KFGGMKHNCGM_<>c_TypeInfo);
  }
  comparison = KFGGMKHNCGM_<>c_TypeInfo->static_fields->__9__2_0;
  if (comparison == (System_Comparison_KMJDCOABCCG__o *)0x0) {
    if ((KFGGMKHNCGM_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KFGGMKHNCGM_<>c_TypeInfo);
    }
    comparison = (System_Comparison_KMJDCOABCCG__o *)
                 thunk_FUN_01bda818(System_Comparison<KMJDCOABCCG>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar7 = &KFGGMKHNCGM_<>c_TypeInfo->static_fields->__9__2_0;
    *ppSVar7 = comparison;
    thunk_FUN_01c20e04(ppSVar7,comparison);
  }
  if (pSVar3 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar3,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<KMJDCOABCCG>_Sort__);
    return;
  }
LAB_034e0a34:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

