// EIABCPKDEBD$$MHJPHEMBOLK @ RVA 0x313521C

/* WARNING: Removing unreachable block (ram,0x032354a0) */

System_Xml_XmlNode_o *
EIABCPKDEBD__MHJPHEMBOLK
          (System_Xml_XmlNode_o *JHMENEKPIBO,System_String_o *KGLJICLJHEL,
          System_String_o *BMEDCFOKBDH,System_String_o *MCAGJECFCOH,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JHMENEKPIBO_00;
  System_String_o *__this;
  System_Xml_XmlAttribute_o *pSVar5;
  MethodInfo *method_00;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  method_00 = (MethodInfo *)MCAGJECFCOH;
  if ((DAT_045666f9 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_045666f9 = 1;
  }
  if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
    JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)0x0;
  }
  else {
    plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._13_get_ChildNodes.method);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0323530c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_0323530c:
      uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)0x0;
        break;
      }
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_0323536c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_0323536c:
      JHMENEKPIBO_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      if (JHMENEKPIBO_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JHMENEKPIBO_00->klass->_2).naturalAligment < bVar1) ||
         ((JHMENEKPIBO_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JHMENEKPIBO_00);
      }
      __this = (System_String_o *)
               (*(JHMENEKPIBO_00->klass->vtable)._8_unknown.methodPtr)
                         (JHMENEKPIBO_00,(JHMENEKPIBO_00->klass->vtable)._8_unknown.method);
      if (__this == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = System_String__Equals(__this,KGLJICLJHEL,(MethodInfo *)0x0);
    } while ((!bVar2) ||
            (pSVar5 = EIABCPKDEBD__KBMBOMFNMNH(JHMENEKPIBO_00,BMEDCFOKBDH,MCAGJECFCOH,method_00),
            pSVar5 == (System_Xml_XmlAttribute_o *)0x0));
    plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
    if (plVar3 != (long *)0x0) {
      lVar6 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0323545c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_0323545c:
      (*(code *)*puVar4)(plVar3,puVar4[1]);
    }
  }
  return JHMENEKPIBO_00;
}

