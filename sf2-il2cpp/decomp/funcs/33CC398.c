// DBHEKFDNJKG$$IGKCKMGGGFM @ RVA 0x33CC398

/* WARNING: Removing unreachable block (ram,0x034cc69c) */

void DBHEKFDNJKG__IGKCKMGGGFM
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  System_Xml_XmlNode_o *JGHIJMJNJLE_00;
  System_String_o *a;
  System_Xml_XmlNode_o *KENFFDHLNDA_00;
  MethodInfo *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567e2b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11876);
    FUN_01bab630(&StringLiteral_13924);
    DAT_04567e2b = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar3 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
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
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034cc4ac;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cc4ac:
    uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar6 & 1) == 0) {
      plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
      if (plVar3 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_034cc63c;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_034cc50c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cc50c:
    JGHIJMJNJLE_00 = (System_Xml_XmlNode_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (JGHIJMJNJLE_00 == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JGHIJMJNJLE_00->klass->_2).naturalAligment < bVar1) ||
       ((JGHIJMJNJLE_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JGHIJMJNJLE_00);
    }
    a = (System_String_o *)
        (*(JGHIJMJNJLE_00->klass->vtable)._8_unknown.methodPtr)
                  (JGHIJMJNJLE_00,(JGHIJMJNJLE_00->klass->vtable)._8_unknown.method);
    if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    KENFFDHLNDA_00 =
         (System_Xml_XmlNode_o *)
         (*(KENFFDHLNDA->klass->vtable)._51_get_Item.methodPtr)
                   (KENFFDHLNDA,StringLiteral_11876,(KENFFDHLNDA->klass->vtable)._51_get_Item.method
                   );
    bVar2 = System_String__op_Equality(a,StringLiteral_13924,(MethodInfo *)0x0);
    if ((bVar2) ||
       (bVar2 = System_String__op_Equality(a,StringLiteral_11876,(MethodInfo *)0x0),
       KENFFDHLNDA_00 == (System_Xml_XmlNode_o *)0x0 && bVar2)) {
      EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JGHIJMJNJLE_00,(MethodInfo *)0x0);
    }
    else {
      method_00 = (MethodInfo *)0x0;
      bVar2 = System_String__op_Equality(a,StringLiteral_11876,(MethodInfo *)0x0);
      if ((KENFFDHLNDA_00 != (System_Xml_XmlNode_o *)0x0) && (bVar2)) {
        DBHEKFDNJKG__INFAEBPFJFC(KENFFDHLNDA_00,JGHIJMJNJLE_00,method_00);
      }
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034cc658;
    }
  }
LAB_034cc63c:
  puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034cc658:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

