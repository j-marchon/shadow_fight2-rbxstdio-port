// Nekki.SF2.GUI.Fight.RewardPanel$$Clear @ RVA 0x3320854

/* WARNING: Removing unreachable block (ram,0x03420aac) */
/* WARNING: Removing unreachable block (ram,0x03420b34) */

void Nekki_SF2_GUI_Fight_RewardPanel__Clear
               (Nekki_SF2_GUI_Fight_RewardPanel_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  long *plVar8;
  undefined8 *puVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  System_Collections_Generic_List_RewardPanelItem__o *pSVar12;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar13;
  ulong uVar14;
  int32_t *piVar15;
  int *piVar16;
  UnityEngine_RectTransform_o *pUVar17;
  
  if ((DAT_04567847 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<RewardPanelItem>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    DAT_04567847 = 1;
    method = extraout_x1;
  }
  pUVar17 = (__this->fields)._Panel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return;
  }
  pUVar17 = (__this->fields)._Panel;
  if ((pUVar17 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)pUVar17,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pSVar6 = UnityEngine_Transform__GetEnumerator(__this_00,(MethodInfo *)0x0);
    if (pSVar6 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar6->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar14 = (ulong)uVar3;
      if (uVar14 != 0) {
        piVar15 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar10->vtable + *piVar15;
            goto LAB_03420970;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,0);
LAB_03420970:
      uVar14 = (*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if ((uVar14 & 1) == 0) {
        plVar8 = (long *)thunk_FUN_01bda71c(pSVar6,System_IDisposable_TypeInfo);
        if (plVar8 == (long *)0x0) goto LAB_03420aa0;
        lVar11 = *plVar8;
        uVar14 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar14 == 0) goto LAB_03420a78;
        piVar16 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_03420a60;
      }
      pSVar10 = pSVar6->klass;
      uVar4._0_1_ = (pSVar10->_2).rank;
      uVar4._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar14 = (ulong)uVar4;
      if (uVar14 != 0) {
        piVar15 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar15 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar7 = pSVar10->vtable + (*piVar15 + 1);
            goto LAB_034209d0;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar6,System_Collections_IEnumerator_TypeInfo,1);
LAB_034209d0:
      __this_01 = (UnityEngine_Component_o *)(*pVVar7->methodPtr)(pSVar6,pVVar7->method);
      if (__this_01 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = (UnityEngine_Transform_TypeInfo->_2).naturalAligment;
      if (((__this_01->klass->_2).naturalAligment < bVar2) ||
         ((__this_01->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)UnityEngine_Transform_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_03420b2c;
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar16 = piVar16 + 4;
    if (uVar14 == 0) break;
LAB_03420a60:
    if (*(System_IDisposable_c **)(piVar16 + -2) == System_IDisposable_TypeInfo) {
      puVar9 = (undefined8 *)(lVar11 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_03420a94;
    }
  }
LAB_03420a78:
  puVar9 = (undefined8 *)FUN_01b81914(plVar8,System_IDisposable_TypeInfo,0);
LAB_03420a94:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
LAB_03420aa0:
  pSVar12 = (__this->fields).MAHKJDKCNPC;
  if (pSVar12 != (System_Collections_Generic_List_RewardPanelItem__o *)0x0) {
    iVar1 = (pSVar12->fields)._size;
    (pSVar12->fields)._size = 0;
    (pSVar12->fields)._version = (pSVar12->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar12->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar13 = (__this->fields).LHHEINBMMKE;
    if (pSVar13 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
      iVar1 = (pSVar13->fields)._size;
      (pSVar13->fields)._size = 0;
      (pSVar13->fields)._version = (pSVar13->fields)._version + 1;
      if (iVar1 < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar13->fields)._items,0,iVar1,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03420b2c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

