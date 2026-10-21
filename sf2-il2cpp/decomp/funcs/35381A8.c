// EPFMFHDGMCE$$HNIHOIAMDPC @ RVA 0x35381A8

/* WARNING: Removing unreachable block (ram,0x036384a8) */

void EPFMFHDGMCE__HNIHOIAMDPC
               (EPFMFHDGMCE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *AHDGNOJPPIB_00;
  System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o **ppSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_00;
  System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o *comparison;
  
  method_00 = (MethodInfo *)AHDGNOJPPIB;
  if ((DAT_04568aa5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Sort__);
    FUN_01bab630(&Method_EPFMFHDGMCE_<>c_CBPJPIPIHDJ__);
    FUN_01bab630(&EPFMFHDGMCE_<>c_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04568aa5 = 1;
    method_00 = extraout_x1;
  }
  EPFMFHDGMCE__NDNPGAKJLHM(__this,method_00);
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (plVar2 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 != (long *)0x0)) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_036382c0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      method = (MethodInfo *)0x0;
      puVar3 = (undefined8 *)FUN_01b81914(plVar2);
LAB_036382c0:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
        if (plVar2 == (long *)0x0) goto LAB_036383e0;
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_036383b8;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_036383a0;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_03638320;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      method = (MethodInfo *)0x1;
      puVar3 = (undefined8 *)FUN_01b81914(plVar2);
LAB_03638320:
      AHDGNOJPPIB_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (AHDGNOJPPIB_00 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((AHDGNOJPPIB_00->klass->_2).naturalAligment < bVar1) ||
           ((AHDGNOJPPIB_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(AHDGNOJPPIB_00);
        }
      }
      EPFMFHDGMCE__PAIAJOFNHDO(__this,AHDGNOJPPIB_00,method);
    } while( true );
  }
  goto LAB_036384a0;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_036383a0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_036383d4;
    }
  }
LAB_036383b8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_036383d4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_036383e0:
  __this_00 = (__this->fields).IMFGEOBBNNA;
  if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(EPFMFHDGMCE_<>c_TypeInfo);
  }
  comparison = EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__13_0;
  if (comparison == (System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    if ((EPFMFHDGMCE_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EPFMFHDGMCE_<>c_TypeInfo);
    }
    comparison = (System_Comparison_EPFMFHDGMCE_JGKNDMCIPBN__o *)
                 thunk_FUN_01bda818(System_Comparison<EPFMFHDGMCE_JGKNDMCIPBN>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar4 = &EPFMFHDGMCE_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar4 = comparison;
    thunk_FUN_01c20e04(ppSVar4,comparison);
  }
  if (__this_00 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Sort__);
    return;
  }
LAB_036384a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

