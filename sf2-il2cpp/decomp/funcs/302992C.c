// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell.AHGJCHALMGM$$EIOLMLOELDL @ RVA 0x302992C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM__EIOLMLOELDL
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_o *__this,
               MethodInfo *method)

{
  int32_t JEGMMDPFNIL;
  ushort uVar1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  MethodInfo *in_x3;
  PBAKFOBIHEG_c *pPVar4;
  ulong uVar5;
  int32_t *piVar6;
  System_Action_o *pSVar7;
  System_Action_o **ppSVar8;
  
  if ((DAT_04565cae & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_IMAJFNDMBDF__);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04565cae = 1;
  }
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) {
    (__this_00->fields).NAMPHBKLLDM = true;
    JEGMMDPFNIL = (__this->fields).maxViews;
    Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GLCNPHCKIJP
              (__this_00,JEGMMDPFNIL,JEGMMDPFNIL,in_x3);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar8 = &(__this->fields).__9__2;
    pSVar7 = *ppSVar8;
    if (pSVar7 == (System_Action_o *)0x0) {
      pSVar7 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      (__this->fields).__9__2 = pSVar7;
      thunk_FUN_01c20e04(ppSVar8,pSVar7);
    }
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar4 = pPVar2->klass;
      uVar1._0_1_ = (pPVar4->_2).rank;
      uVar1._1_1_ = (pPVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar1;
      if (uVar5 != 0) {
        piVar6 = &((pPVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar3 = pPVar4->vtable + (*piVar6 + 2);
            goto LAB_03129a40;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,2);
LAB_03129a40:
                    /* WARNING: Could not recover jumptable at 0x03129a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(0x3dcccccd,pPVar2,pSVar7,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

