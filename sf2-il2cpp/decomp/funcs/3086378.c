// FMOACLJMJKF$$IGKCKMGGGFM @ RVA 0x3086378

/* WARNING: Removing unreachable block (ram,0x031865e0) */

void FMOACLJMJKF__IGKCKMGGGFM
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04566027 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04566027 = 1;
  }
  if ((JGHIJMJNJLE == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.methodPtr)
                                 (JGHIJMJNJLE,(JGHIJMJNJLE->klass->vtable)._13_get_ChildNodes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
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
          goto LAB_0318645c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_0318645c:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_03186588;
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      break;
    }
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_031864bc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_031864bc:
    JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    uVar4 = (*(JOHFLOEABJL->klass->vtable)._8_unknown.methodPtr)
                      (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_unknown.method);
    if (KENFFDHLNDA == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(uVar4,uVar4);
    }
    lVar5 = (*(KENFFDHLNDA->klass->vtable)._51_get_Item.methodPtr)
                      (KENFFDHLNDA,uVar4,(KENFFDHLNDA->klass->vtable)._51_get_Item.method);
    if (lVar5 == 0) {
      EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JOHFLOEABJL,(MethodInfo *)0x0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_031865a4;
    }
  }
LAB_03186588:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_031865a4:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

