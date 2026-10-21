// LIFECPAILNA$$.ctor @ RVA 0x3564A1C

/* WARNING: Removing unreachable block (ram,0x03664d54) */

void LIFECPAILNA___ctor(LIFECPAILNA_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_LIFECPAILNA_BJKDAMLKHMA__o *pSVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  LIFECPAILNA_BJKDAMLKHMA_o *__this_00;
  long lVar6;
  LIFECPAILNA_BJKDAMLKHMA_array *pLVar7;
  ulong uVar8;
  int *piVar9;
  LIFECPAILNA_Fields *pLVar10;
  
  if ((DAT_04568be6 & 1) == 0) {
    FUN_01bab630(&LIFECPAILNA_BJKDAMLKHMA_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568be6 = 1;
  }
  pSVar3 = (System_Collections_Generic_List_LIFECPAILNA_BJKDAMLKHMA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>__ctor__);
  pLVar10 = &__this->fields;
  pLVar10->KLBPMOHPJBD = pSVar3;
  thunk_FUN_01c20e04(pLVar10,pSVar3);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) ||
     (plVar4 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03664b8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x0;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03664b8c:
    uVar8 = (*(code *)*puVar5)(plVar4,puVar5[1]);
    if ((uVar8 & 1) == 0) {
      plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
      if (plVar4 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_03664cf4;
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    lVar6 = *plVar4;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_03664bec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    method = (MethodInfo *)0x1;
    puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_03664bec:
    AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    __this_00 = (LIFECPAILNA_BJKDAMLKHMA_o *)thunk_FUN_01bda818(LIFECPAILNA_BJKDAMLKHMA_TypeInfo);
    if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB_00);
      }
    }
    LIFECPAILNA_BJKDAMLKHMA___ctor(__this_00,AHDGNOJPPIB_00,method);
    lVar6 = Method_System_Collections_Generic_List<LIFECPAILNA_BJKDAMLKHMA>_Add__;
    pSVar3 = pLVar10->KLBPMOHPJBD;
    if (pSVar3 == (System_Collections_Generic_List_LIFECPAILNA_BJKDAMLKHMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pLVar7 = (pSVar3->fields)._items;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (pLVar7 == (LIFECPAILNA_BJKDAMLKHMA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pLVar7->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      pLVar7->m_Items[(int)uVar2] = __this_00;
      thunk_FUN_01c20e04(pLVar7->m_Items + (int)uVar2,__this_00);
    }
    else {
      method = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00,
                 (MethodInfo_26E4DAC *)method);
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_03664d10;
    }
  }
LAB_03664cf4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03664d10:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

