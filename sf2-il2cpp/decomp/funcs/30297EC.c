// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell.AHGJCHALMGM$$ABGFCIMEKCJ @ RVA 0x30297EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM__ABGFCIMEKCJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *pNVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Action_o *pSVar8;
  System_Action_o **ppSVar9;
  
  if ((DAT_04565cad & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_BLDOJKNFHPC__);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565cad = 1;
  }
  pNVar4 = (__this->fields).__4__this;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) {
    if ((pNVar4->fields).NAMPHBKLLDM != false) {
      return;
    }
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar9 = &(__this->fields).__9__3;
    pSVar8 = *ppSVar9;
    if (pSVar8 == (System_Action_o *)0x0) {
      pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      (__this->fields).__9__3 = pSVar8;
      thunk_FUN_01c20e04(ppSVar9,pSVar8);
    }
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar3 = pPVar5->vtable + (*piVar7 + 2);
            goto LAB_03129904;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03129904:
                    /* WARNING: Could not recover jumptable at 0x03129924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(0x3dcccccd,pPVar2,pSVar8,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

