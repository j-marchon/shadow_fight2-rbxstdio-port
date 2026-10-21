// Nekki.SF2.GUI.Pvp.PlayersSelectTable$$Clear @ RVA 0x312DA78

/* WARNING: Removing unreachable block (ram,0x0322dc84) */

void Nekki_SF2_GUI_Pvp_PlayersSelectTable__Clear
               (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  long *plVar6;
  undefined8 *puVar7;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  int *piVar12;
  
  if ((DAT_045666a3 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_045666a3 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._cellContainer;
  if (__this_00 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  pSVar4 = UnityEngine_Transform__GetEnumerator(__this_00,(MethodInfo *)0x0);
  if (pSVar4 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    pSVar8 = pSVar4->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar11;
          goto LAB_0322db3c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,0);
LAB_0322db3c:
    uVar10 = (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if ((uVar10 & 1) == 0) {
      plVar6 = (long *)thunk_FUN_01bda71c(pSVar4,System_IDisposable_TypeInfo);
      if (plVar6 == (long *)0x0) {
        return;
      }
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_0322dc38;
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    pSVar8 = pSVar4->klass;
    uVar3._0_1_ = (pSVar8->_2).rank;
    uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar3;
    if (uVar10 != 0) {
      piVar11 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
          pVVar5 = pSVar8->vtable + (*piVar11 + 1);
          goto LAB_0322db9c;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_Collections_IEnumerator_TypeInfo,1);
LAB_0322db9c:
    __this_01 = (UnityEngine_Component_o *)(*pVVar5->methodPtr)(pSVar4,pVVar5->method);
    if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
    if (((__this_01->klass->_2).naturalAligment < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar12 = piVar12 + 4;
    if (uVar10 == 0) break;
    if (*(System_IDisposable_c **)(piVar12 + -2) == System_IDisposable_TypeInfo) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_0322dc54;
    }
  }
LAB_0322dc38:
  puVar7 = (undefined8 *)FUN_01b81914(plVar6,System_IDisposable_TypeInfo,0);
LAB_0322dc54:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return;
}

