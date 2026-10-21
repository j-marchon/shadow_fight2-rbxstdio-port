// DBHEKFDNJKG$$GFFMEMGCOAG @ RVA 0x33CBFCC

/* WARNING: Removing unreachable block (ram,0x034cc2bc) */

void DBHEKFDNJKG__GFFMEMGCOAG(System_Xml_XmlDocument_o *LKILNGEECIJ,MethodInfo *method)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  System_Xml_XmlNode_o *JHMENEKPIBO;
  System_String_o *pSVar6;
  System_Xml_XmlAttribute_o *pSVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined1 auVar11 [16];
  int local_44;
  
  auVar11._8_8_ = method;
  auVar11._0_8_ = LKILNGEECIJ;
  if ((DAT_04567e2d & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    FUN_01bab630(&StringLiteral_10239);
    FUN_01bab630(&StringLiteral_10213);
    auVar11 = FUN_01bab630(&StringLiteral_7230);
    DAT_04567e2d = 1;
  }
  if (LKILNGEECIJ != (System_Xml_XmlDocument_o *)0x0) {
    plVar4 = (long *)(*(LKILNGEECIJ->klass->vtable)._51_get_Item.methodPtr)
                               (LKILNGEECIJ,StringLiteral_10239,
                                (LKILNGEECIJ->klass->vtable)._51_get_Item.method);
    local_44 = 0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    auVar11 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
    plVar4 = auVar11._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar11._8_8_;
    auVar11 = auVar2 << 0x40;
    if (plVar4 != (long *)0x0) {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      do {
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_034cc108;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_034cc108:
        uVar9 = (*(code *)*puVar5)(plVar4,puVar5[1]);
        if ((uVar9 & 1) == 0) {
          plVar4 = (long *)thunk_FUN_01bda71c(plVar4,System_IDisposable_TypeInfo);
          if (plVar4 == (long *)0x0) {
            return;
          }
          lVar8 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar9 == 0) goto LAB_034cc25c;
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          goto LAB_034cc244;
        }
        lVar8 = *plVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(System_Collections_IEnumerator_c **)(piVar10 + -2) ==
                System_Collections_IEnumerator_TypeInfo) {
              puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 1) * 0x10 + 0x138);
              goto LAB_034cc168;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_034cc168:
        JHMENEKPIBO = (System_Xml_XmlNode_o *)(*(code *)*puVar5)(plVar4,puVar5[1]);
        if (JHMENEKPIBO == (System_Xml_XmlNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((JHMENEKPIBO->klass->_2).naturalAligment < bVar1) ||
           ((JHMENEKPIBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO);
        }
        pSVar6 = (System_String_o *)
                 (*(JHMENEKPIBO->klass->vtable)._8_unknown.methodPtr)
                           (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._8_unknown.method);
        if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = System_String__Equals(pSVar6,StringLiteral_10213,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar7 = EIABCPKDEBD__CDDKCDCLNOP(JHMENEKPIBO,StringLiteral_7230,(MethodInfo *)0x0);
          pSVar6 = System_Int32__ToString((int32_t)&local_44,(MethodInfo *)0x0);
          if (pSVar7 == (System_Xml_XmlAttribute_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8(pSVar6,pSVar6);
          }
          (*(pSVar7->klass->vtable)._10_set_Value.methodPtr)
                    (pSVar7,pSVar6,(pSVar7->klass->vtable)._10_set_Value.method);
          local_44 = local_44 + 1;
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar11._0_8_,auVar11._8_8_);
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_034cc244:
    if (*(System_IDisposable_c **)(piVar10 + -2) == System_IDisposable_TypeInfo) {
      puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_034cc278;
    }
  }
LAB_034cc25c:
  puVar5 = (undefined8 *)FUN_01b81914(plVar4,System_IDisposable_TypeInfo,0);
LAB_034cc278:
  (*(code *)*puVar5)(plVar4,puVar5[1]);
  return;
}

