// HFLNADKHFLG$$PPMHALAEKLH @ RVA 0x33C3D84

/* WARNING: Removing unreachable block (ram,0x034c3fb4) */

void HFLNADKHFLG__PPMHALAEKLH
               (System_Xml_XmlNode_o *KENFFDHLNDA,System_Xml_XmlNode_o *JGHIJMJNJLE,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *JOHFLOEABJL;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  
  if ((DAT_04567de1 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567de1 = 1;
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
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_034c3e68;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c3e68:
    uVar5 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar5 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar4 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 == 0) goto LAB_034c3f64;
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      break;
    }
    lVar4 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar6 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 1) * 0x10 + 0x138);
          goto LAB_034c3ec8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3ec8:
    JOHFLOEABJL = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL != (System_Xml_XmlNode_o *)0x0) {
      bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
      if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
         ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(JOHFLOEABJL);
      }
    }
    EIABCPKDEBD__DGPOFACHGMP(KENFFDHLNDA,JOHFLOEABJL,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(System_IDisposable_c **)(piVar6 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_034c3f80;
    }
  }
LAB_034c3f64:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034c3f80:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

