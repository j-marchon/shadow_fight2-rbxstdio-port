// GGHCLMEFIGO$$HNIHOIAMDPC @ RVA 0x33B6D98

/* WARNING: Removing unreachable block (ram,0x034b705c) */

void GGHCLMEFIGO__HNIHOIAMDPC
               (GGHCLMEFIGO_o *__this,System_Xml_XmlNode_o *CJLCPHBNHFK,int32_t EBDDELGICGB,
               MethodInfo *method)

{
  byte bVar1;
  long *plVar2;
  undefined8 *puVar3;
  System_Xml_XmlNode_o *EBLABJMFLJB;
  IGFGDDANEPE_o *__this_00;
  MGNPHCAAEIO_c *pMVar4;
  MethodInfo *method_00;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_04567d78 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&IGFGDDANEPE_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Xml_XmlNode_TypeInfo);
    DAT_04567d78 = 1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = MGNPHCAAEIO_TypeInfo;
  MGNPHCAAEIO_TypeInfo->static_fields->INAJMOOFPLG = true;
  if (CJLCPHBNHFK != (System_Xml_XmlNode_o *)0x0) {
    plVar2 = (long *)(*(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.methodPtr)
                               (CJLCPHBNHFK,(CJLCPHBNHFK->klass->vtable)._13_get_ChildNodes.method);
    if (plVar2 == (long *)0x0) {
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
            goto LAB_034b6ed0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,0);
LAB_034b6ed0:
      uVar6 = (*(code *)*puVar3)(plVar2,puVar3[1]);
      if ((uVar6 & 1) == 0) {
        plVar2 = (long *)thunk_FUN_01bda71c(plVar2,System_IDisposable_TypeInfo);
        pMVar4 = MGNPHCAAEIO_TypeInfo;
        if (plVar2 == (long *)0x0) break;
        lVar5 = *plVar2;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 == 0) goto LAB_034b6fe8;
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_034b6fd0;
      }
      lVar5 = *plVar2;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(System_Collections_IEnumerator_c **)(piVar7 + -2) ==
              System_Collections_IEnumerator_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 1) * 0x10 + 0x138);
            goto LAB_034b6f30;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_Collections_IEnumerator_TypeInfo,1);
LAB_034b6f30:
      EBLABJMFLJB = (System_Xml_XmlNode_o *)(*(code *)*puVar3)(plVar2,puVar3[1]);
      if (EBLABJMFLJB != (System_Xml_XmlNode_o *)0x0) {
        bVar1 = (System_Xml_XmlNode_TypeInfo->_2).naturalAligment;
        if (((EBLABJMFLJB->klass->_2).naturalAligment < bVar1) ||
           ((EBLABJMFLJB->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)System_Xml_XmlNode_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(EBLABJMFLJB);
        }
      }
      __this_00 = (IGFGDDANEPE_o *)thunk_FUN_01bda818(IGFGDDANEPE_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      IGFGDDANEPE___ctor(__this_00,EBLABJMFLJB,EBDDELGICGB,(MethodInfo *)0x0);
      GGHCLMEFIGO__FIFBDNADAAL(__this,__this_00,false,method_00);
    } while( true );
  }
  goto LAB_034b7018;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_034b6fd0:
    if (*(System_IDisposable_c **)(piVar7 + -2) == System_IDisposable_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_034b7004;
    }
  }
LAB_034b6fe8:
  puVar3 = (undefined8 *)FUN_01b81914(plVar2,System_IDisposable_TypeInfo,0);
LAB_034b7004:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
  pMVar4 = MGNPHCAAEIO_TypeInfo;
LAB_034b7018:
  if ((pMVar4->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pMVar4 = MGNPHCAAEIO_TypeInfo;
  }
  pMVar4->static_fields->INAJMOOFPLG = false;
  return;
}

