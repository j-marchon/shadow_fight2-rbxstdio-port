// CGALNIOABHK$$BOEHFFCDAJO @ RVA 0x3444358

/* WARNING: Removing unreachable block (ram,0x035445dc) */

void CGALNIOABHK__BOEHFFCDAJO
               (System_Xml_XmlNode_o *JGHPAFEFEFB,System_Xml_XmlNode_o *ABOGEFBHAPG,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlAttribute_o *JOHFLOEABJL;
  System_String_o *name;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *pSVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_0456823b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlAttribute_TypeInfo);
    DAT_0456823b = 1;
  }
  if ((ABOGEFBHAPG == (System_Xml_XmlNode_o *)0x0) ||
     (plVar2 = (long *)(*(ABOGEFBHAPG->klass->vtable)._16_get_Attributes.methodPtr)
                                 (ABOGEFBHAPG,(ABOGEFBHAPG->klass->vtable)._16_get_Attributes.method
                                 ), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
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
          goto LAB_03544440;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_03544440:
    uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 == 0) goto LAB_0354457c;
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
          goto LAB_035444a0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_035444a0:
    JOHFLOEABJL = (System_Xml_XmlAttribute_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    if (JOHFLOEABJL == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (System_Xml_XmlAttribute_TypeInfo->_2).naturalAligment;
    if (((JOHFLOEABJL->klass->_2).naturalAligment < bVar1) ||
       ((JOHFLOEABJL->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)System_Xml_XmlAttribute_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(JOHFLOEABJL);
    }
    name = (System_String_o *)
           (*(JOHFLOEABJL->klass->vtable)._8_get_Name.methodPtr)
                     (JOHFLOEABJL,(JOHFLOEABJL->klass->vtable)._8_get_Name.method);
    if (JGHPAFEFEFB == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this = (System_Xml_XmlAttributeCollection_o *)
             (*(JGHPAFEFEFB->klass->vtable)._16_get_Attributes.methodPtr)
                       (JGHPAFEFEFB,(JGHPAFEFEFB->klass->vtable)._16_get_Attributes.method);
    if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar4 = System_Xml_XmlAttributeCollection__get_ItemOf(__this,name,(MethodInfo *)0x0);
    if (pSVar4 == (System_Xml_XmlAttribute_o *)0x0) {
      EIABCPKDEBD__DGPOFACHGMP(JGHPAFEFEFB,JOHFLOEABJL,(MethodInfo *)0x0);
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_03544598;
    }
  }
LAB_0354457c:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_03544598:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  return;
}

