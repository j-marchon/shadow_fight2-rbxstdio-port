// CAAJMGKIPIE$$BEFOEBBDKDJ @ RVA 0x30028DC

/* WARNING: Removing unreachable block (ram,0x03102d44) */

void CAAJMGKIPIE__BEFOEBBDKDJ
               (CAAJMGKIPIE_o *__this,System_Xml_XmlNode_o *ELOCKFLGKNO,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  System_String_o *a;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  Il2CppClass *pIVar6;
  OBOBEOMMECI_o *__this_01;
  MGNDHCBAPEN_string__OBOBEOMMECI__o *__this_02;
  Il2CppObject *pIVar7;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *pSVar8;
  long lVar9;
  MGNDHCBAPEN_string__OBOBEOMMECI__array *pMVar10;
  ulong uVar11;
  int *piVar12;
  int index;
  
  if ((DAT_04565b2f & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Count__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                );
    FUN_01bab630(&Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
    FUN_01bab630(&OBOBEOMMECI_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5975);
    DAT_04565b2f = 1;
  }
  pSVar8 = (__this->fields).EPIHANAMOIN;
  if ((pSVar8 != (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) &&
     (ELOCKFLGKNO != (System_Xml_XmlNode_o *)0x0)) {
    index = (pSVar8->fields)._size;
    plVar4 = (long *)(*(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (ELOCKFLGKNO,(ELOCKFLGKNO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
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
              goto LAB_03102a5c;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_03102a5c:
        uVar11 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar11 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar9 = *plVar4;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 == 0) goto LAB_03102ce4;
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_03102ccc;
        }
        lVar9 = *plVar4;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar12 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_03102abc;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_03102abc:
        AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (AHDGNOJPPIB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB);
        }
        a = (System_String_o *)
            (*(AHDGNOJPPIB->klass->vtable)._8_unknown.methodPtr)
                      (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._8_unknown.method);
        bVar3 = System_String__op_Equality(a,StringLiteral_5975,(MethodInfo *)0x0);
        if (bVar3) {
          __this_00 = (System_Xml_XmlAttributeCollection_o *)
                      (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                                (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method)
          ;
          if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                                  (__this_00,StringLiteral_2968,(MethodInfo *)0x0);
          pIVar6 = (Il2CppClass *)
                   EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_1,(MethodInfo *)0x0);
          pSVar8 = (__this->fields).EPIHANAMOIN;
          __this_01 = (OBOBEOMMECI_o *)thunk_FUN_01bda818(OBOBEOMMECI_TypeInfo);
          OBOBEOMMECI___ctor(__this_01,(MethodInfo *)0x0);
          __this_02 = (MGNDHCBAPEN_string__OBOBEOMMECI__o *)
                      thunk_FUN_01bda818(MGNDHCBAPEN<string,_OBOBEOMMECI>_TypeInfo);
          MGNDHCBAPEN<object,_object>___ctor
                    ((MGNDHCBAPEN_T1__T2__o *)__this_02,(Il2CppObject *)StringLiteral_1,
                     (Il2CppObject *)__this_01,Method_MGNDHCBAPEN<string,_OBOBEOMMECI>__ctor__);
          lVar9 = Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Add__;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pMVar10 = (pSVar8->fields)._items;
          (pSVar8->fields)._version = (pSVar8->fields)._version + 1;
          if (pMVar10 == (MGNDHCBAPEN_string__OBOBEOMMECI__array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar2 = (pSVar8->fields)._size;
          if (uVar2 < (uint)pMVar10->max_length) {
            (pSVar8->fields)._size = uVar2 + 1;
            pMVar10->m_Items[(int)uVar2] = __this_02;
            thunk_FUN_01c20e04(pMVar10->m_Items + (int)uVar2,__this_02);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar8,(Il2CppObject *)__this_02
                       ,*(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          pSVar8 = (__this->fields).EPIHANAMOIN;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar8,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7[1].klass = pIVar6;
          thunk_FUN_01c20e04(pIVar7 + 1,pIVar6);
          pSVar8 = (__this->fields).EPIHANAMOIN;
          if (pSVar8 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0)
          {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pIVar7 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar8,index,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Item__
                             );
          if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if (pIVar7[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          OBOBEOMMECI__HNIHOIAMDPC(pIVar7[1].monitor,AHDGNOJPPIB,(MethodInfo *)0x0);
          index = index + 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar11 = uVar11 - 1;
    piVar12 = piVar12 + 4;
    if (uVar11 == 0) break;
LAB_03102ccc:
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_03102d00;
    }
  }
LAB_03102ce4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_03102d00:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

