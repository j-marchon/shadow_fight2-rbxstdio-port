// NLPJLHOEAOE$$JHIMPMJKFJP @ RVA 0x3206D98

/* WARNING: Removing unreachable block (ram,0x03307230) */

void NLPJLHOEAOE__JHIMPMJKFJP(NLPJLHOEAOE_o *__this,int32_t NFIGEAOPJKM,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Xml_XmlDocument_o *pSVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  NLPJLHOEAOE_c *pNVar9;
  ACHLOMELAJE_o *__this_01;
  System_String_o *pSVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  int32_t local_54;
  
  local_54 = NFIGEAOPJKM;
  if ((DAT_04566e31 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_15546);
    FUN_01bab630(&StringLiteral_14862);
    FUN_01bab630(&StringLiteral_11416);
    FUN_01bab630(&StringLiteral_11703);
    DAT_04566e31 = 1;
  }
  pSVar4 = (__this->fields).OFIPPHJGMNK;
  if ((((pSVar4 != (System_Xml_XmlDocument_o *)0x0) &&
       (plVar5 = (long *)(*(pSVar4->klass->vtable)._51_get_Item.methodPtr)
                                   (pSVar4,StringLiteral_11416,
                                    (pSVar4->klass->vtable)._51_get_Item.method),
       plVar5 != (long *)0x0)) &&
      (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                  (plVar5,StringLiteral_14862,*(undefined8 *)(*plVar5 + 0x470)),
      plVar5 != (long *)0x0)) &&
     (plVar6 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
     plVar6 != (long *)0x0)) {
    plVar6 = (long *)(**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar8 = (long *)0x0;
    do {
      plVar14 = plVar8;
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_03306f1c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03306f1c:
      uVar12 = (*(code *)*puVar7)(plVar6,puVar7[1]);
      if ((uVar12 & 1) == 0) {
        plVar6 = (long *)thunk_FUN_01bda71c(plVar6,System_IDisposable_TypeInfo);
        if (plVar6 == (long *)0x0) goto LAB_0330706c;
        lVar11 = *plVar6;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_03307044;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_0330702c;
      }
      lVar11 = *plVar6;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar13 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar7 = (undefined8 *)(lVar11 + (long)(*piVar13 + 1) * 0x10 + 0x138);
            goto LAB_03306f7c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_03306f7c:
      plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      iVar2 = local_54;
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
      __this_00 = (System_Xml_XmlAttributeCollection_o *)
                  (**(code **)(*plVar8 + 0x238))(plVar8,*(undefined8 *)(*plVar8 + 0x240));
      if (__this_00 == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_11703,(MethodInfo *)0x0);
      iVar3 = EIABCPKDEBD__EHJNCGCICMP(LBJNDMNEJJB,0,(MethodInfo *)0x0);
      if (iVar2 != iVar3) {
        plVar8 = plVar14;
      }
    } while( true );
  }
  goto LAB_03307228;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0330702c:
    if (*(System_IDisposable_c **)(piVar13 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto LAB_03307060;
    }
  }
LAB_03307044:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_03307060:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0330706c:
  if (plVar14 == (long *)0x0) {
    pSVar10 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
    pSVar10 = System_String__Concat(StringLiteral_15546,pSVar10,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
    return;
  }
  (**(code **)(*plVar5 + 0x2c8))(plVar5,plVar14,*(undefined8 *)(*plVar5 + 0x2d0));
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_0456647b == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456647b = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar9 = NLPJLHOEAOE_TypeInfo;
  if (NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO == local_54) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04566e5b == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04566e5b = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar9 = NLPJLHOEAOE_TypeInfo;
    NLPJLHOEAOE_TypeInfo->static_fields->MNPJJPBJCCO = -1;
  }
  if ((pNVar9->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)__this_01,true,(MethodInfo *)0x0);
    return;
  }
LAB_03307228:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

