// TypeDefIndex 671
// Namespace: 
// [CompilerGenerated]
// private sealed class RaidDailyTaskCell.AHGJCHALMGM
// Fields:
//   public RaidDailyTaskCell <>4__this; // 0x10
//   public int maxViews; // 0x18
//   public Action <>9__2; // 0x20
//   public Action <>9__3; // 0x28

// ===== internal void ABGFCIMEKCJ()  [RVA 0x30297EC]
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


// ===== internal void EIOLMLOELDL()  [RVA 0x302992C]
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


// ===== internal void IMAJFNDMBDF()  [RVA 0x3029A68]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell.AHGJCHALMGM$$IMAJFNDMBDF @ RVA 0x3029A68

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM__IMAJFNDMBDF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  RaidQuestsManager_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *pNVar1;
  
  if ((DAT_04565caf & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565caf = 1;
  }
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._TaskRefreshADViewsLabel,
      __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_02 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    pNVar1 = (__this->fields).__4__this;
    if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) &&
       (__this_02 != (RaidQuestsManager_o *)0x0)) {
      RaidQuestsManager__NECEOCDKNIJ(__this_02,(pNVar1->fields).NCJONEIOCML,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void BLDOJKNFHPC()  [RVA 0x3029B00]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell.AHGJCHALMGM$$BLDOJKNFHPC @ RVA 0x3029B00

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM__BLDOJKNFHPC
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_o *__this,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *pNVar1;
  
  pNVar1 = (__this->fields).__4__this;
  if (((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *)0x0) &&
      (__this_00 = (pNVar1->fields)._TaskRefreshADViewsLabel,
      __this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3028B4C]
// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell.AHGJCHALMGM$$.ctor @ RVA 0x3028B4C

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

