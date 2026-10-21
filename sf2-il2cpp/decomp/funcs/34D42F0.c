// KHDLKDNHNFG$$.ctor @ RVA 0x34D42F0

/* WARNING: Removing unreachable block (ram,0x035d46dc) */

void KHDLKDNHNFG___ctor(KHDLKDNHNFG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  System_Collections_Generic_List_string__o *pSVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *pSVar8;
  System_String_o *item;
  long lVar9;
  System_String_array *pSVar10;
  ulong uVar11;
  int *piVar12;
  System_Collections_Generic_List_string__o **ppSVar13;
  
  if ((DAT_045686ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11425);
    FUN_01bab630(&StringLiteral_9327);
    DAT_045686ca = 1;
  }
  pSVar4 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar4,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar13 = &(__this->fields).BGCEELKLNFP;
  *ppSVar13 = pSVar4;
  thunk_FUN_01c20e04(ppSVar13,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._OLIGHNIEIGK_k__BackingField = AHDGNOJPPIB;
  thunk_FUN_01c20e04(&__this->fields,AHDGNOJPPIB);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar5 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_035d44ac;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_035d44ac:
    uVar11 = (*(code *)*puVar6)(plVar5,puVar6[1]);
    if ((uVar11 & 1) == 0) {
      plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 == 0) goto LAB_035d466c;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    lVar9 = *plVar5;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_035d450c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_035d450c:
    plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar9 = *plVar7;
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if ((*(byte *)(lVar9 + 0x130) < bVar1) ||
       (*(System_Xml_XmlNode_c **)(*(long *)(lVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
        System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (**(code **)(lVar9 + 0x238))(plVar7,*(undefined8 *)(lVar9 + 0x240));
    if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar8 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (__this_00,StringLiteral_9327,(MethodInfo *)0x0);
    if (pSVar8 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar7 = (long *)(*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    item = (System_String_o *)
           (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    if (*ppSVar13 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)*ppSVar13,(Il2CppObject *)item,
                       Method_System_Collections_Generic_List<string>_Contains__);
    if (bVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_11425,(MethodInfo *)0x0);
    }
    lVar9 = Method_System_Collections_Generic_List<string>_Add__;
    pSVar4 = *ppSVar13;
    if (pSVar4 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar10 = (pSVar4->fields)._items;
    (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
    if (pSVar10 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar4->fields)._size;
    if (uVar2 < (uint)pSVar10->max_length) {
      (pSVar4->fields)._size = uVar2 + 1;
      pSVar10->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04(pSVar10->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_035d4688;
    }
  }
LAB_035d466c:
  puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_035d4688:
  (*(code *)*puVar6)(plVar5,puVar6[1]);
  return;
}

