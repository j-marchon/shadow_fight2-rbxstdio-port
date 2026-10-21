// EPFMFHDGMCE$$PAIAJOFNHDO @ RVA 0x3536140

/* WARNING: Removing unreachable block (ram,0x036365c8) */

void EPFMFHDGMCE__PAIAJOFNHDO
               (EPFMFHDGMCE_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t GHPHFGBIPCI;
  int32_t iVar3;
  System_Xml_XmlAttributeCollection_o *pSVar4;
  System_Xml_XmlAttribute_o *pSVar5;
  EPFMFHDGMCE_JGKNDMCIPBN_o *__this_00;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  EPFMFHDGMCE_o *__this_01;
  System_String_o *pSVar9;
  EPFMFHDGMCE_HOEHCNPOOFD_o *__this_02;
  System_String_o **ppSVar10;
  System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *__this_03;
  System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *__this_04;
  MethodInfo *method_00;
  long lVar11;
  EPFMFHDGMCE_HOEHCNPOOFD_array *pEVar12;
  EPFMFHDGMCE_JGKNDMCIPBN_array *pEVar13;
  ulong uVar14;
  int *piVar15;
  
  if ((DAT_04568a91 & 1) == 0) {
    FUN_01bab630(&EPFMFHDGMCE_HOEHCNPOOFD_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&EPFMFHDGMCE_JGKNDMCIPBN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_Add__);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_9327);
    FUN_01bab630(&StringLiteral_14694);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568a91 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (pSVar4 = (System_Xml_XmlAttributeCollection_o *)
               (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                         (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method),
     pSVar4 != (System_Xml_XmlAttributeCollection_o *)0x0)) {
    pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                       (pSVar4,StringLiteral_14694,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    GHPHFGBIPCI = EIABCPKDEBD__EHJNCGCICMP(pSVar5,0,(MethodInfo *)0x0);
    __this_00 = (EPFMFHDGMCE_JGKNDMCIPBN_o *)thunk_FUN_01bda818(EPFMFHDGMCE_JGKNDMCIPBN_TypeInfo);
    EPFMFHDGMCE_JGKNDMCIPBN___ctor(__this_00,GHPHFGBIPCI,method_00);
    plVar6 = (long *)(*(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._13_get_ChildNodes.method);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_036362f4;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        method_00 = (MethodInfo *)0x0;
        puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_036362f4:
        uVar14 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if ((uVar14 & 1) == 0) {
          plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
          if (plVar6 == (long *)0x0) goto LAB_03636500;
          lVar11 = *plVar6;
          uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar14 == 0) goto LAB_036364d8;
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_036364c0;
        }
        lVar11 = *plVar6;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar15 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar7 = (undefined8 *)(lVar11 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_03636354;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        method_00 = (MethodInfo *)0x1;
        puVar7 = (undefined8 *)FUN_01b81914(plVar6);
LAB_03636354:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
           (*(System_Xml_XmlNode_c **)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) !=
            System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(plVar8);
        }
        __this_01 = (EPFMFHDGMCE_o *)
                    (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
        iVar3 = EPFMFHDGMCE__JOEBJJLKEOH(__this_01,(System_String_o *)__this_01,method_00);
        pSVar4 = (System_Xml_XmlAttributeCollection_o *)
                 (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
        if (pSVar4 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar5 = System_Xml_XmlAttributeCollection__get_ItemOf
                           (pSVar4,StringLiteral_9327,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)0x0;
        pSVar9 = EIABCPKDEBD__JPKEHIBGOEM(pSVar5,StringLiteral_1,(MethodInfo *)0x0);
        __this_02 = (EPFMFHDGMCE_HOEHCNPOOFD_o *)
                    thunk_FUN_01bda818(EPFMFHDGMCE_HOEHCNPOOFD_TypeInfo);
        System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
        ppSVar10 = &(__this_02->fields).JIJLBFGKNJK;
        *ppSVar10 = pSVar9;
        (__this_02->fields).BGHFADDGPAD = iVar3;
        thunk_FUN_01c20e04(ppSVar10,pSVar9);
        (__this_02->fields).NOPGBJNLFHM = GHPHFGBIPCI;
        lVar11 = Method_System_Collections_Generic_List<EPFMFHDGMCE_HOEHCNPOOFD>_Add__;
        if (__this_00 == (EPFMFHDGMCE_JGKNDMCIPBN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_03 = (__this_00->fields).GFBNJPMOEKD;
        if (__this_03 == (System_Collections_Generic_List_EPFMFHDGMCE_HOEHCNPOOFD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pEVar12 = (__this_03->fields)._items;
        (__this_03->fields)._version = (__this_03->fields)._version + 1;
        if (pEVar12 == (EPFMFHDGMCE_HOEHCNPOOFD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pEVar12->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pEVar12->m_Items[(int)uVar2] = __this_02;
          thunk_FUN_01c20e04(pEVar12->m_Items + (int)uVar2,__this_02);
        }
        else {
          method_00 = *(MethodInfo **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_03,
                     (Il2CppObject *)__this_02,(MethodInfo_26E4DAC *)method_00);
        }
      } while( true );
    }
  }
  goto LAB_036365c0;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_036364c0:
    if (*(System_IDisposable_c **)(piVar15 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_036364f4;
    }
  }
LAB_036364d8:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_036364f4:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_03636500:
  lVar11 = Method_System_Collections_Generic_List<EPFMFHDGMCE_JGKNDMCIPBN>_Add__;
  __this_04 = (__this->fields).IMFGEOBBNNA;
  if (__this_04 != (System_Collections_Generic_List_EPFMFHDGMCE_JGKNDMCIPBN__o *)0x0) {
    pEVar13 = (__this_04->fields)._items;
    (__this_04->fields)._version = (__this_04->fields)._version + 1;
    if (pEVar13 != (EPFMFHDGMCE_JGKNDMCIPBN_array *)0x0) {
      uVar2 = (__this_04->fields)._size;
      if (uVar2 < (uint)pEVar13->max_length) {
        (__this_04->fields)._size = uVar2 + 1;
        pEVar13->m_Items[(int)uVar2] = __this_00;
        thunk_FUN_01c20e04(pEVar13->m_Items + (int)uVar2,__this_00);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_04,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
LAB_036365c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

