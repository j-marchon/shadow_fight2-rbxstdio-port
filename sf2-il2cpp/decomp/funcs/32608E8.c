// AAPGCAPGBLG$$OBNDAKKCCKB @ RVA 0x32608E8

/* WARNING: Removing unreachable block (ram,0x03360d70) */
/* WARNING: Removing unreachable block (ram,0x03360df0) */
/* WARNING: Removing unreachable block (ram,0x03360e18) */

void AAPGCAPGBLG__OBNDAKKCCKB(AAPGCAPGBLG_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Xml_XmlDocument_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  AAPGCAPGBLG_o *__this_00;
  CCLKPGBIBOP_o *item;
  System_Collections_Generic_List_CCLKPGBIBOP__o *pSVar9;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  long lVar10;
  CCLKPGBIBOP_array *pCVar11;
  ulong uVar12;
  int *piVar13;
  System_Xml_XmlDocument_o **ppSVar14;
  
  if ((DAT_045671aa & 1) == 0) {
    FUN_01bab630(&Method_AAPGCAPGBLG_EEKPOHKAFCO__);
    FUN_01bab630(&System_Action<CCLKPGBIBOP>_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_628);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_629);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_630);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_631);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<CCLKPGBIBOP>_Sort__);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&System_Xml_XmlDocument_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045671aa = 1;
    method = extraout_x1;
  }
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar3 = MGENAMAJALB__GACHMMDHOJE((MethodInfo *)0x0);
  pSVar4 = GIAMPEGMNHE__GMNIIJJFIJK(pSVar3,StringLiteral_1,2,true,(MethodInfo *)0x0);
  ppSVar14 = &(__this->fields).JLBELGKGBBI;
  *ppSVar14 = pSVar4;
  thunk_FUN_01c20e04(ppSVar14,pSVar4);
  pSVar4 = *ppSVar14;
  if (pSVar4 == (System_Xml_XmlDocument_o *)0x0) {
    pSVar4 = (System_Xml_XmlDocument_o *)thunk_FUN_01bda818(System_Xml_XmlDocument_TypeInfo);
    System_Xml_XmlDocument___ctor(pSVar4,(MethodInfo *)0x0);
    *ppSVar14 = pSVar4;
    thunk_FUN_01c20e04(ppSVar14,pSVar4);
    pSVar4 = *ppSVar14;
  }
  pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar5,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_628,(MethodInfo *)0x0);
  pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar6,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_629,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
  if (pSVar4 != (System_Xml_XmlDocument_o *)0x0) {
    method_01 = (pSVar4->klass->vtable)._51_get_Item.method;
    plVar7 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)(pSVar4,pSVar3);
    if (plVar7 == (long *)0x0) {
      pSVar4 = *ppSVar14;
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_630,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 03360d10 to 03460d1b has its CatchHandler @ 033617ec */
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_631,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 03360d2c to 03460d3b has its CatchHandler @ 03361874 */
      EIABCPKDEBD__KPODFFHOHGK(pSVar4,pSVar3,(MethodInfo *)0x0);
      return;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x208))(plVar7,*(undefined8 *)(*plVar7 + 0x210));
    if (plVar7 != (long *)0x0) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_03360b6c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_01 = (MethodInfo *)0x0;
                    /* try { // try from 03360b58 to 03460b7f has its CatchHandler @ 03361900 */
        puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_03360b6c:
        uVar12 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if ((uVar12 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_01bda71c(plVar7,System_IDisposable_TypeInfo);
          if (plVar7 == (long *)0x0) goto LAB_03360d64;
                    /* try { // try from 03360c8c to 03460c97 has its CatchHandler @ 03361884 */
          lVar10 = *plVar7;
          uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar12 == 0) goto LAB_03360cc0;
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          goto LAB_03360ca8;
        }
        lVar10 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar8 = (undefined8 *)(lVar10 + (long)(*piVar13 + 1) * 0x10 + 0x138);
              goto LAB_03360bcc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        method_01 = (MethodInfo *)0x1;
                    /* try { // try from 03360bb4 to 03460bdf has its CatchHandler @ 033618fc */
        puVar8 = (undefined8 *)FUN_01b81914(plVar7);
LAB_03360bcc:
        __this_00 = (AAPGCAPGBLG_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (__this_00 != (AAPGCAPGBLG_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((__this_00->klass->_2).naturalAligment < bVar1) ||
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64();
          }
        }
        item = AAPGCAPGBLG__EKLJCBLAGBO(__this_00,(System_Xml_XmlNode_o *)__this_00,method_01);
        lVar10 = Method_System_Collections_Generic_List<CCLKPGBIBOP>_Add__;
        pSVar9 = (__this->fields).AOCCHDFNLMC;
        if (pSVar9 == (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03360e08 to 03460e13 has its CatchHandler @ 033617e0 */
          FUN_01bab8c8();
        }
                    /* try { // try from 03360c1c to 03460c23 has its CatchHandler @ 033618f0 */
        pCVar11 = (pSVar9->fields)._items;
                    /* try { // try from 03360c28 to 03460c2f has its CatchHandler @ 033618f4 */
        (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
        if (pCVar11 == (CCLKPGBIBOP_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (pSVar9->fields)._size;
        if (uVar2 < (uint)pCVar11->max_length) {
          (pSVar9->fields)._size = uVar2 + 1;
          pCVar11->m_Items[(int)uVar2] = item;
          thunk_FUN_01c20e04(pCVar11->m_Items + (int)uVar2);
        }
        else {
          method_01 = *(MethodInfo **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar9,(Il2CppObject *)item,
                     (MethodInfo_26E4DAC *)method_01);
        }
      } while( true );
    }
  }
  goto LAB_03360e10;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_03360ca8:
                    /* try { // try from 03360ca8 to 03460cb7 has its CatchHandler @ 03361808 */
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03360d58;
    }
  }
LAB_03360cc0:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_03360d58:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_03360d64:
  pSVar9 = (__this->fields).AOCCHDFNLMC;
  if (pSVar9 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)pSVar9,
               Method_System_Collections_Generic_List<CCLKPGBIBOP>_Sort__);
                    /* try { // try from 03360d8c to 03460d97 has its CatchHandler @ 03361858 */
    pSVar9 = (__this->fields).AOCCHDFNLMC;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<CCLKPGBIBOP>_TypeInfo);
                    /* try { // try from 03360da8 to 03460db7 has its CatchHandler @ 033618b0 */
    System_Action<object>___ctor();
    if (pSVar9 != (System_Collections_Generic_List_CCLKPGBIBOP__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar9,action,
                 Method_System_Collections_Generic_List<CCLKPGBIBOP>_ForEach__);
      AAPGCAPGBLG__JPHDMGDNDHH(__this,method_00);
      return;
    }
  }
LAB_03360e10:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

