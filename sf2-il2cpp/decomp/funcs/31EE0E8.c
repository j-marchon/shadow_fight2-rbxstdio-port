// NLPJLHOEAOE$$PPPIEOEMMKL @ RVA 0x31EE0E8

/* WARNING: Removing unreachable block (ram,0x032ee3e0) */

System_Xml_XmlNode_o *
NLPJLHOEAOE__PPPIEOEMMKL
          (NLPJLHOEAOE_o *__this,int32_t NFIGEAOPJKM,System_String_o *HBDNGIDONHG,MethodInfo *method
          )

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  System_String_o *value;
  MethodInfo *method_00;
  ulong uVar8;
  int *piVar9;
  
  method_00 = (MethodInfo *)HBDNGIDONHG;
  if ((DAT_04566db2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10724);
    FUN_01bab630(&StringLiteral_9327);
    DAT_04566db2 = 1;
  }
  pSVar3 = NLPJLHOEAOE__MBLEGLIMGHP(__this,NFIGEAOPJKM,method_00);
  if ((pSVar3 == (System_Xml_XmlNode_o *)0x0) ||
     (lVar4 = (*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                        (pSVar3,StringLiteral_10724,(pSVar3->klass->vtable)._51_get_Item.method),
     lVar4 == 0)) {
    pSVar3 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    plVar5 = (long *)(*(pSVar3->klass->vtable)._51_get_Item.methodPtr)
                               (pSVar3,StringLiteral_10724,
                                (pSVar3->klass->vtable)._51_get_Item.method);
    if (((plVar5 == (long *)0x0) ||
        (plVar5 = (long *)(**(code **)(*plVar5 + 0x468))
                                    (plVar5,StringLiteral_10724,*(undefined8 *)(*plVar5 + 0x470)),
        plVar5 == (long *)0x0)) ||
       (plVar5 = (long *)(**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210)),
       plVar5 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_032ee248;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_032ee248:
      uVar8 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if ((uVar8 & 1) == 0) {
        pSVar3 = (System_Xml_XmlNode_o *)0x0;
        break;
      }
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar6 = (undefined8 *)(lVar4 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_032ee2a8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_032ee2a8:
      pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
           ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar3);
        }
      }
      pSVar7 = EIABCPKDEBD__NHPDFFAIJMF(pSVar3,StringLiteral_9327,(MethodInfo *)0x0);
      if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      value = (System_String_o *)
              (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                        (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
      if (HBDNGIDONHG == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(HBDNGIDONHG,value,(MethodInfo *)0x0);
    } while (!bVar2);
    plVar5 = (long *)thunk_FUN_01bda71c(plVar5,System_IDisposable_TypeInfo);
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
            puVar6 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_032ee3a0;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_01b81914(plVar5,System_IDisposable_TypeInfo,0);
LAB_032ee3a0:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
    }
  }
  return pSVar3;
}

