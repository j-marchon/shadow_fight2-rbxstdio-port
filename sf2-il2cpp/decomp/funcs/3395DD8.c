// Nekki.SF2.GUI.Profile.ProfileScene$$ImprovePerk @ RVA 0x3395DD8

bool Nekki_SF2_GUI_Profile_ProfileScene__ImprovePerk
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,JLGNBOILFLN_o *CDEABOAKDEJ,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o **ppSVar1;
  ushort uVar2;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  PBAKFOBIHEG_c *pPVar6;
  ulong uVar7;
  int32_t *piVar8;
  bool bVar9;
  
  if ((DAT_04567c52 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04567c52 = 1;
  }
  if ((CDEABOAKDEJ == (JLGNBOILFLN_o *)0x0) ||
     ((__this->fields).NMKGGFKBHID != (System_Collections_IEnumerator_o *)0x0)) {
    bVar9 = false;
  }
  else {
    pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar4 = Nekki_SF2_GUI_Profile_ProfileScene__LDNIFMLAKHM(__this,CDEABOAKDEJ,method);
    if (pPVar3 == (PBAKFOBIHEG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pPVar6 = pPVar3->klass;
    ppSVar1 = &(__this->fields).NMKGGFKBHID;
    uVar2._0_1_ = (pPVar6->_2).rank;
    uVar2._1_1_ = (pPVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pPVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
          pVVar5 = pPVar6->vtable + *piVar8;
          goto LAB_03495e98;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_03495e98:
    bVar9 = true;
    pSVar4 = (System_Collections_IEnumerator_o *)
             (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
    *ppSVar1 = pSVar4;
    thunk_FUN_01c20e04(ppSVar1,pSVar4);
  }
  return bVar9;
}

