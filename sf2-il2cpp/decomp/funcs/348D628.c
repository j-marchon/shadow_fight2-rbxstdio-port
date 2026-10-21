// KICJDJCJLKJ$$NEDAPEOBMDK @ RVA 0x348D628

void KICJDJCJLKJ__NEDAPEOBMDK(KICJDJCJLKJ_o *__this,undefined8 param_2,MethodInfo *param_3)

{
  ushort uVar1;
  byte bVar2;
  VirtualInvokeData *pVVar3;
  long *plVar4;
  undefined8 *puVar5;
  GCPFDLNAFDF_c *pGVar6;
  long lVar7;
  ulong uVar8;
  int32_t *piVar9;
  int *piVar10;
  GCPFDLNAFDF_o *pGVar11;
  
  if ((DAT_045683f0 & 1) == 0) {
    FUN_01bab630(&EBGDOILAAEJ_TypeInfo);
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    DAT_045683f0 = 1;
  }
  pGVar11 = (__this->fields).BDALHPIDKOK;
  if (pGVar11 != (GCPFDLNAFDF_o *)0x0) {
    pGVar6 = pGVar11->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pGVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar3 = pGVar6->vtable + (*piVar9 + 6);
          goto LAB_0358d324;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    param_3 = (MethodInfo *)0x6;
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar11);
LAB_0358d324:
    plVar4 = (long *)(*pVVar3->methodPtr)(pGVar11,pVVar3->method);
    if (plVar4 != (long *)0x0) {
      lVar7 = *plVar4;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(EBGDOILAAEJ_c **)(piVar10 + -2) == EBGDOILAAEJ_TypeInfo) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0358d38c;
          }
          uVar8 = uVar8 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar8 != 0);
      }
      param_3 = (MethodInfo *)0x0;
      puVar5 = (undefined8 *)FUN_01b81914(plVar4);
LAB_0358d38c:
      bVar2 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      KICJDJCJLKJ__JEGAPBGMFJJ(__this,(bool)(bVar2 & 1),param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

