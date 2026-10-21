// IDDIABHBDEE$$ILKKHGPMKLB @ RVA 0x33882E0

/* WARNING: Removing unreachable block (ram,0x034887e8) */

System_Xml_XmlNode_o *
IDDIABHBDEE__ILKKHGPMKLB
          (System_Xml_XmlNode_o *OBDMHHJBLKL,bool PHDHEFKOFGH,bool JIIPHDMFIBI,
          System_String_o *KFFLPOJMNBI,MethodInfo *method)

{
  uint32_t uVar1;
  byte bVar2;
  System_Xml_XmlNode_o *pSVar3;
  bool bVar4;
  CFGLKHFFEKA_o *pCVar5;
  CFGLKHFFEKA_o *IHEPHBIPLPM;
  long *plVar6;
  undefined8 *puVar7;
  System_Xml_XmlNode_o *pSVar8;
  System_Xml_XmlAttributeCollection_o *pSVar9;
  System_Byte_array *pSVar10;
  System_Byte_array *pSVar11;
  System_String_o *pSVar12;
  System_Xml_XmlAttribute_o *pSVar13;
  CFGLKHFFEKA_o *__this;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  System_Xml_XmlNode_o *local_80;
  CFGLKHFFEKA_o *local_70;
  
  if ((DAT_04567bb7 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_501);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_502);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_503);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_504);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CFGLKHFFEKA_TypeInfo);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567bb7 = 1;
  }
  pCVar5 = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
  CFGLKHFFEKA___ctor(pCVar5,(MethodInfo *)0x0);
  if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IHEPHBIPLPM = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
  if ((OBDMHHJBLKL == (System_Xml_XmlNode_o *)0x0) ||
     (plVar6 = (long *)(*(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (OBDMHHJBLKL,(OBDMHHJBLKL->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar6 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
  local_80 = (System_Xml_XmlNode_o *)0x0;
  pSVar3 = local_80;
LAB_03488418:
  do {
    local_70 = pCVar5;
    local_80 = pSVar3;
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar14 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03488468;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03488468:
    uVar15 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    pSVar8 = local_80;
    if ((uVar15 & 1) == 0) break;
    lVar14 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar16 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar7 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
          goto LAB_034884c8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_034884c8:
    pSVar8 = (System_Xml_XmlNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
    pSVar3 = local_80;
    pCVar5 = local_70;
    if (pSVar8 == (System_Xml_XmlNode_o *)0x0) {
      if (JIIPHDMFIBI) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
    else {
      bVar2 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((pSVar8->klass->_2).naturalAligment < bVar2) ||
         ((pSVar8->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar8);
      }
      if (JIIPHDMFIBI) {
        pSVar9 = (System_Xml_XmlAttributeCollection_o *)
                 (*(pSVar8->klass->vtable)._16_get_Attributes.methodPtr)
                           (pSVar8,(pSVar8->klass->vtable)._16_get_Attributes.method);
        pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar10,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_501,
                   (MethodInfo *)0x0);
        pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar11,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_502,
                   (MethodInfo *)0x0);
        pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
        if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
        pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar13,(System_String_o *)0x0,(MethodInfo *)0x0);
        bVar4 = EEPIOPGPFLN__NHOOJOIEMIM(pSVar12,(MethodInfo *)0x0);
        if (!bVar4) goto LAB_03488418;
      }
    }
    __this = (CFGLKHFFEKA_o *)thunk_FUN_01bda818(CFGLKHFFEKA_TypeInfo);
    CFGLKHFFEKA___ctor(__this,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(KFFLPOJMNBI,(MethodInfo *)0x0);
    pSVar12 = KFFLPOJMNBI;
    if (bVar4) {
      if (pSVar8 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar9 = (System_Xml_XmlAttributeCollection_o *)
               (*(pSVar8->klass->vtable)._16_get_Attributes.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._16_get_Attributes.method);
      pSVar10 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar10,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_503,(MethodInfo *)0x0
                );
      pSVar11 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar11,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_504,(MethodInfo *)0x0
                );
      pSVar12 = OMHODMCHILE__NPKGDBHJKCK(pSVar10,pSVar11,(MethodInfo *)0x0);
      if (pSVar9 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pSVar13 = System_Xml_XmlAttributeCollection__get_ItemOf(pSVar9,pSVar12,(MethodInfo *)0x0);
      pSVar12 = EIABCPKDEBD__JPKEHIBGOEM(pSVar13,(System_String_o *)0x0,(MethodInfo *)0x0);
    }
    if (__this == (CFGLKHFFEKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    CFGLKHFFEKA__JAGMOPPIMKB(__this,pSVar12,(MethodInfo *)0x0);
    uVar1 = (CFGLKHFFEKA_TypeInfo->_2).cctor_finished;
    if (!PHDHEFKOFGH) {
      if (uVar1 == 0) {
        thunk_FUN_01ba7564();
      }
      bVar4 = CFGLKHFFEKA__ONPEKFBMDKM(__this,local_70,(MethodInfo *)0x0);
      if (bVar4) {
        if ((CFGLKHFFEKA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar4 = CFGLKHFFEKA__IDMIELGIHJC(__this,IHEPHBIPLPM,(MethodInfo *)0x0);
        pSVar3 = pSVar8;
        pCVar5 = __this;
        if (!bVar4) {
          pSVar3 = local_80;
          pCVar5 = local_70;
        }
      }
      goto LAB_03488418;
    }
    if (uVar1 == 0) {
      thunk_FUN_01ba7564();
    }
    bVar4 = CFGLKHFFEKA__LCAEEPKOHMN(IHEPHBIPLPM,__this,(MethodInfo *)0x0);
  } while (!bVar4);
  plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
  if (plVar6 != (long *)0x0) {
    lVar14 = *plVar6;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
          puVar7 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_03488790;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03488790:
    (*(code *)*puVar7)(plVar6,puVar7[1]);
  }
  return pSVar8;
}

