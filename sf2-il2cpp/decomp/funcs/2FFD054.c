// Nekki.SF2.GUI.Fight.PreFight$$Reset @ RVA 0x2FFD054

/* WARNING: Removing unreachable block (ram,0x030fd378) */
/* WARNING: Removing unreachable block (ram,0x030fd310) */

void Nekki_SF2_GUI_Fight_PreFight__Reset(Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  UnityEngine_Events_UnityAction_T0__o *call;
  UnityEngine_Transform_o *__this_00;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  long *plVar7;
  undefined8 *puVar8;
  Nekki_SF2_GUI_Fight_ViewerFight_o **ppNVar9;
  MethodInfo *extraout_x1;
  System_Collections_IEnumerator_c *pSVar10;
  long lVar11;
  ulong uVar12;
  int32_t *piVar13;
  int *piVar14;
  Nekki_SF2_GUI_Fight_PauseScreen_o **ppNVar15;
  Nekki_SF2_GUI_Fight_ScreenFight_o **ppNVar16;
  Nekki_SF2_GUI_Fight_ScreenFight_o *x;
  Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *__this_02;
  
  if ((DAT_04565af2 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_PreFight_OnScreenStop__);
    FUN_01bab630(&UnityEngine_Transform_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
    DAT_04565af2 = 1;
    method = extraout_x1;
  }
  ppNVar16 = &(__this->fields).LJAILGNLPAB;
  x = *ppNVar16;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (*ppNVar16 == (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0) goto LAB_030fd370;
    __this_02 = ((*ppNVar16)->fields).OnStopScreen;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<JLBCMPFKHEI>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_02 == (Nekki_SF2_GUI_Fight_ScreenFight_NBAJOLBLMOD_o *)0x0) goto LAB_030fd370;
    UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call,
               Method_UnityEngine_Events_UnityEvent<JLBCMPFKHEI>_RemoveListener__);
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    pSVar5 = UnityEngine_Transform__GetEnumerator(__this_00,(MethodInfo *)0x0);
    if (pSVar5 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    do {
      pSVar10 = pSVar5->klass;
      uVar2._0_1_ = (pSVar10->_2).rank;
      uVar2._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar10->vtable + *piVar13;
            goto LAB_030fd1dc;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,0);
LAB_030fd1dc:
      uVar12 = (*pVVar6->methodPtr)(pSVar5,pVVar6->method);
      if ((uVar12 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_01bda71c(pSVar5,System_IDisposable_TypeInfo);
        if (plVar7 == (long *)0x0) goto LAB_030fd304;
        lVar11 = *plVar7;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto LAB_030fd2dc;
        piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto LAB_030fd2c4;
      }
      pSVar10 = pSVar5->klass;
      uVar3._0_1_ = (pSVar10->_2).rank;
      uVar3._1_1_ = (pSVar10->_2).minimumAlignment;
      uVar12 = (ulong)uVar3;
      if (uVar12 != 0) {
        piVar13 = &((pSVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_IEnumerator_TypeInfo) {
            pVVar6 = pSVar10->vtable + (*piVar13 + 1);
            goto LAB_030fd23c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar5,System_Collections_IEnumerator_TypeInfo,1);
LAB_030fd23c:
      __this_01 = (UnityEngine_Component_o *)(*pVVar6->methodPtr)(pSVar5,pVVar6->method);
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
  }
LAB_030fd370:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar14 = piVar14 + 4;
    if (uVar12 == 0) break;
LAB_030fd2c4:
    if (*(System_IDisposable_c **)(piVar14 + -2) == System_IDisposable_TypeInfo) {
      puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_030fd2f8;
    }
  }
LAB_030fd2dc:
  puVar8 = (undefined8 *)FUN_01b81914(plVar7,System_IDisposable_TypeInfo,0);
LAB_030fd2f8:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_030fd304:
  ppNVar9 = &(__this->fields).FLKPJPEAJAJ;
  *ppNVar9 = (Nekki_SF2_GUI_Fight_ViewerFight_o *)0x0;
  thunk_FUN_01c20e04(ppNVar9,0);
  (__this->fields).LJAILGNLPAB = (Nekki_SF2_GUI_Fight_ScreenFight_o *)0x0;
  thunk_FUN_01c20e04(ppNVar16,0);
  ppNVar15 = &(__this->fields).IHNMJKLMFMA;
  *ppNVar15 = (Nekki_SF2_GUI_Fight_PauseScreen_o *)0x0;
  thunk_FUN_01c20e04(ppNVar15,0);
  return;
}

