// NPLIJHGBGCB$$IPDOAJLIGOH @ RVA 0x33DE42C

/* WARNING: Removing unreachable block (ram,0x034de65c) */

Nekki_Yaml_Node_o *
NPLIJHGBGCB__IPDOAJLIGOH
          (Nekki_Yaml_Mapping_o *JHMENEKPIBO,System_String_o *AFKICLAFDKC,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  Nekki_Yaml_Node_o *pNVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_04567e84 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Nekki_Yaml_Node_TypeInfo);
    DAT_04567e84 = 1;
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
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar8 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034de4fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_034de4fc:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      pNVar5 = (Nekki_Yaml_Node_o *)0x0;
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
          goto LAB_034de55c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,1);
LAB_034de55c:
    pNVar5 = (Nekki_Yaml_Node_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (pNVar5 == (Nekki_Yaml_Node_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (Nekki_Yaml_Node_TypeInfo->_2).naturalAligment;
    if (((pNVar5->klass->_2).naturalAligment < bVar1) ||
       ((pNVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_Yaml_Node_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pNVar5);
    }
    bVar2 = System_String__op_Equality
                      ((pNVar5->fields)._key_k__BackingField,AFKICLAFDKC,(MethodInfo *)0x0);
  } while (!bVar2);
  plVar3 = (long *)thunk_FUN_01bda71c(plVar3,System_IDisposable_TypeInfo);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar8 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_034de620;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_034de620:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  return pNVar5;
}

