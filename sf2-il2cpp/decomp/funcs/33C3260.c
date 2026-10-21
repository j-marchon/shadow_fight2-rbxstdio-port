// HFLNADKHFLG$$CCFENILEEEF @ RVA 0x33C3260

/* WARNING: Removing unreachable block (ram,0x034c355c) */

void HFLNADKHFLG__CCFENILEEEF
               (System_Xml_XmlNode_o *NMONNKBNOCM,System_Xml_XmlNode_o *AELAFOPLMOP,
               System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Xml_XmlNode_o *pSVar3;
  long *plVar4;
  System_Xml_XmlAttributeCollection_o *__this;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567de0 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_11379);
    DAT_04567de0 = 1;
  }
  if (AELAFOPLMOP == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  pSVar3 = (System_Xml_XmlNode_o *)
           (*(AELAFOPLMOP->klass->vtable)._51_get_Item.methodPtr)
                     (AELAFOPLMOP,KGLJICLJHEL,(AELAFOPLMOP->klass->vtable)._51_get_Item.method);
  if (NMONNKBNOCM != (System_Xml_XmlNode_o *)0x0) {
    plVar4 = (long *)(*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                               (NMONNKBNOCM,KGLJICLJHEL,
                                (NMONNKBNOCM->klass->vtable)._51_get_Item.method);
    if (plVar4 == (long *)0x0) {
      bVar2 = false;
    }
    else {
      __this = (System_Xml_XmlAttributeCollection_o *)
               (**(code **)(*plVar4 + 0x238))(plVar4,*(undefined8 *)(*plVar4 + 0x240));
      if (__this == (System_Xml_XmlAttributeCollection_o *)0x0) goto LAB_034c3554;
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this,StringLiteral_11379,(MethodInfo *)0x0);
      bVar2 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
    }
    if (pSVar3 == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    if (bVar2 != false) {
      return;
    }
    JHMENEKPIBO = (System_Xml_XmlNode_o *)
                  (*(NMONNKBNOCM->klass->vtable)._51_get_Item.methodPtr)
                            (NMONNKBNOCM,KGLJICLJHEL,
                             (NMONNKBNOCM->klass->vtable)._51_get_Item.method);
    if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
      EIABCPKDEBD__DGPOFACHGMP(NMONNKBNOCM,pSVar3,(MethodInfo *)0x0);
      return;
    }
    plVar4 = (long *)(*(pSVar3->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._13_get_ChildNodes.method);
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_034c33f0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034c33f0:
        uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar7 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar6 = *plVar4;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 == 0) goto LAB_034c34f4;
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          goto LAB_034c34dc;
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
              goto LAB_034c3450;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034c3450:
        pSVar3 = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (pSVar3 != (System_Xml_XmlNode_o *)0x0) {
          bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
          if (((pSVar3->klass->_2).naturalAligment < bVar1) ||
             ((pSVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
            FUN_01babc64(pSVar3);
          }
        }
        EIABCPKDEBD__DGPOFACHGMP(JHMENEKPIBO,pSVar3,(MethodInfo *)0x0);
      } while( true );
    }
  }
LAB_034c3554:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_034c34dc:
    if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_034c352c;
    }
  }
LAB_034c34f4:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034c352c:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

