// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$EAALEBDGAOE @ RVA 0x3312434

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__EAALEBDGAOE
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  UnityEngine_GameObject_o *pUVar3;
  PBAKFOBIHEG_o *pPVar4;
  VirtualInvokeData *pVVar5;
  undefined8 uVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  System_Collections_IEnumerator_o *pSVar11;
  float fVar12;
  
  if ((DAT_045677ba & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_PBNBBJPDHGK__);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677ba = 1;
  }
  pUVar3 = (__this->fields)._hintRoot;
  if ((pUVar3 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_gameObject(pUVar3,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar10 = &(__this->fields).JJNJMJMBOLN;
    pSVar11 = *ppSVar10;
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar4->klass;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar8 = (ulong)uVar1;
      if (uVar8 != 0) {
        piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar5 = pPVar7->vtable + (*piVar9 + 1);
            goto LAB_0341253c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,1);
LAB_0341253c:
      (*pVVar5->methodPtr)(pPVar4,pSVar11,pVVar5->method);
      pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar6 = thunk_FUN_01bda818(System_Action_TypeInfo);
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
        pPVar7 = pPVar4->klass;
        fVar12 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar2._0_1_ = (pPVar7->_2).rank;
        uVar2._1_1_ = (pPVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar2;
        if (uVar8 != 0) {
          piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar5 = pPVar7->vtable + (*piVar9 + 2);
              goto LAB_03412618;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,2);
LAB_03412618:
        pSVar11 = (System_Collections_IEnumerator_o *)
                  (*pVVar5->methodPtr)((ulong)(uint)fVar12,pPVar4,uVar6,pVVar5->method);
        *ppSVar10 = pSVar11;
        thunk_FUN_01c20e04(ppSVar10,pSVar11);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

