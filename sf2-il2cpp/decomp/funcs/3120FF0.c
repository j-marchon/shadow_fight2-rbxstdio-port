// Nekki.SF2.GUI.Dialogs.Raids.LeaderboardSeasonViewController$$LHHLFBBBJLD @ RVA 0x3120FF0

void Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__LHHLFBBBJLD
               (Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_o *__this,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  PBAKFOBIHEG_o *pPVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  System_Collections_IEnumerator_o *pSVar7;
  MethodInfo *extraout_x1;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_IEnumerator_o **ppSVar11;
  float fVar12;
  
  if ((DAT_04566625 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController_OOIAOANJOFO__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04566625 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_LeaderboardSeasonViewController__OOIAOANJOFO(__this,method);
  pUVar3 = (__this->fields).OHBLFFNDIDC;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields).OHBLFFNDIDC;
    if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,(bool)(~bVar2 & 1),(MethodInfo *)0x0);
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar5 = thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04566664 == '\0') {
        FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
        DAT_04566664 = '\x01';
      }
      if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
        pPVar8 = pPVar4->klass;
        fVar12 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar1._0_1_ = (pPVar8->_2).rank;
        uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar6 = pPVar8->vtable + (*piVar10 + 2);
              goto LAB_03221184;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03221184:
        pSVar7 = (System_Collections_IEnumerator_o *)
                 (*pVVar6->methodPtr)((ulong)(uint)fVar12,pPVar4,uVar5,pVVar6->method);
        ppSVar11 = &(__this->fields).JJNJMJMBOLN;
        *ppSVar11 = pSVar7;
        thunk_FUN_01c20e04(ppSVar11,pSVar7);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

