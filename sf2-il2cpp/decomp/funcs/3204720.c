// NLPJLHOEAOE$$BCIAJLLMKAJ @ RVA 0x3204720

/* WARNING: Removing unreachable block (ram,0x03304a08) */

System_Collections_Generic_List_MEJIKMPNBNL__o *
NLPJLHOEAOE__BCIAJLLMKAJ(NLPJLHOEAOE_o *__this,System_Xml_XmlNode_o *NAAENMGFFOJ,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *AHDGNOJPPIB;
  MEJIKMPNBNL_o *item;
  MethodInfo *in_x3;
  long lVar5;
  MEJIKMPNBNL_array *pMVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04566e11 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MEJIKMPNBNL>_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566e11 = 1;
  }
  __this_00 = (System_Collections_Generic_List_MEJIKMPNBNL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MEJIKMPNBNL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MEJIKMPNBNL>__ctor__);
  if ((NAAENMGFFOJ == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(NAAENMGFFOJ->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (NAAENMGFFOJ,(NAAENMGFFOJ->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_03304854;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03304854:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return __this_00;
      }
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_033049ac;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_033048b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_033048b4:
    AHDGNOJPPIB = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((AHDGNOJPPIB->klass->_2).naturalAligment < bVar1) ||
         ((AHDGNOJPPIB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(AHDGNOJPPIB);
      }
    }
    item = NLPJLHOEAOE__CAAFPEGICAI(__this,AHDGNOJPPIB,false,in_x3);
    lVar5 = Method_System_Collections_Generic_List<MEJIKMPNBNL>_Add__;
    if (__this_00 == (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pMVar6 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pMVar6 == (MEJIKMPNBNL_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (__this_00->fields)._size;
    if (uVar2 < (uint)pMVar6->max_length) {
      (__this_00->fields)._size = uVar2 + 1;
      pMVar6->m_Items[(int)uVar2] = item;
      thunk_FUN_01c20e04();
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_033049c8;
    }
  }
LAB_033049ac:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_033049c8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return __this_00;
}

