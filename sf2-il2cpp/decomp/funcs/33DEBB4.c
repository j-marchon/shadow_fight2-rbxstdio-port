// NPLIJHGBGCB$$AAGOIGGOBDB @ RVA 0x33DEBB4

/* WARNING: Removing unreachable block (ram,0x034dee34) */

Nekki_Yaml_Mapping_o *
NPLIJHGBGCB__AAGOIGGOBDB
          (Nekki_Yaml_Mapping_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_Yaml_Node_c *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  Nekki_Yaml_Mapping_o *JHMENEKPIBO_00;
  undefined1 auVar8 [16];
  
  if ((DAT_04567e8b & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Nekki_Yaml_Mapping_TypeInfo);
    FUN_01bab630(&Nekki_Yaml_Node_TypeInfo);
    DAT_04567e8b = 1;
  }
  if (JHMENEKPIBO == (Nekki_Yaml_Mapping_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  plVar3 = (long *)(*(JHMENEKPIBO->klass->vtable)._5_GetEnumerator.methodPtr)
                             (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._5_GetEnumerator.method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    do {
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_034dec90;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034dec90:
      uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      if ((uVar6 & 1) == 0) {
        JHMENEKPIBO_00 = (Nekki_Yaml_Mapping_o *)0x0;
        goto LAB_034ded98;
      }
      lVar5 = *plVar3;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_034decf0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034decf0:
      auVar8 = (*(code *)*puVar4)(plVar3,puVar4[1]);
      JHMENEKPIBO_00 = auVar8._0_8_;
      method_00 = auVar8._8_8_;
      if (JHMENEKPIBO_00 != (Nekki_Yaml_Mapping_o *)0x0) {
        bVar1 = (Nekki_Yaml_Node_TypeInfo->_2).naturalAligment;
        if (((((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).naturalAligment < bVar1) ||
           (method_00 = Nekki_Yaml_Node_TypeInfo,
           (((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
           (Il2CppClass *)Nekki_Yaml_Node_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JHMENEKPIBO_00);
        }
      }
      bVar2 = NPLIJHGBGCB__BIALACBFBPI((Nekki_Yaml_Node_o *)JHMENEKPIBO_00,(MethodInfo *)method_00);
    } while (!bVar2);
    if (JHMENEKPIBO_00 == (Nekki_Yaml_Mapping_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((JHMENEKPIBO_00->fields).super._key_k__BackingField,AFKICLAFDKC,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  bVar1 = (Nekki_Yaml_Mapping_TypeInfo->_2).naturalAligment;
  if (((((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).naturalAligment < bVar1) ||
     ((((Nekki_Yaml_Node_c *)JHMENEKPIBO_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)Nekki_Yaml_Mapping_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(JHMENEKPIBO_00);
  }
LAB_034ded98:
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_034dedf8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034dedf8:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return JHMENEKPIBO_00;
}

