// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainer$$CJPOKGIHNDE @ RVA 0x331096C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer__CJPOKGIHNDE
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainer_o *__this,MethodInfo *method)

{
  ushort uVar1;
  PBAKFOBIHEG_o *pPVar2;
  VirtualInvokeData *pVVar3;
  UnityEngine_GameObject_o *pUVar4;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  System_Collections_IEnumerator_o *pSVar9;
  
  if ((DAT_045677a7 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045677a7 = 1;
  }
  pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
  ppSVar8 = &(__this->fields).BMHCFBAKLEN;
  pSVar9 = *ppSVar8;
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
          pVVar3 = pPVar5->vtable + (*piVar7 + 1);
          goto LAB_03410a0c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,1);
LAB_03410a0c:
    (*pVVar3->methodPtr)(pPVar2,pSVar9,pVVar3->method);
    pUVar4 = (__this->fields)._hintDescriptionRoot;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar4 = UnityEngine_GameObject__get_gameObject(pUVar4,(MethodInfo *)0x0),
       pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
      *ppSVar8 = (System_Collections_IEnumerator_o *)0x0;
      thunk_FUN_01c20e04(ppSVar8,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

