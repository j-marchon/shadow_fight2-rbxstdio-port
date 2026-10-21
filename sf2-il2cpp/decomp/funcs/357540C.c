// Nekki.SF2.GUI.Menu.ProgressBarDojoBattlePass$$OPPAPHIKOLL @ RVA 0x357540C

void Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass__OPPAPHIKOLL
               (Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  EGMONPGHHDP_o *__this_02;
  JMDPBFOCHHP_CKEMIAEPGKD_o *pJVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_03;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_String_o *CJNHFNHJHPE;
  System_Collections_IEnumerator_o **ppSVar12;
  System_Collections_IEnumerator_o *pSVar13;
  float fVar14;
  
  if ((DAT_04568c7e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoBattlePass_PBNBBJPDHGK__);
    FUN_01bab630(&StringLiteral_10514);
    FUN_01bab630(&StringLiteral_10516);
    DAT_04568c7e = 1;
  }
  __this_00 = (__this->fields)._hintContent;
  if ((__this_00 != (UnityEngine_RectTransform_o *)0x0) &&
     (__this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_02 = HJPEKDOPBHN__IAALPCFKGEK((MethodInfo *)0x0);
  if ((__this_02 != (EGMONPGHHDP_o *)0x0) &&
     (pJVar5 = EGMONPGHHDP__OKBKFJKEAAG(__this_02,(MethodInfo *)0x0),
     pJVar5 != (JMDPBFOCHHP_CKEMIAEPGKD_o *)0x0)) {
    CJNHFNHJHPE = (pJVar5->fields).EGMPFEOGKOF;
    bVar4 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar4) {
      puVar1 = &StringLiteral_10514;
      if ((__this->fields).IKLIGGACIMH != false) {
        puVar1 = &StringLiteral_10516;
      }
      CJNHFNHJHPE = (System_String_o *)*puVar1;
    }
    __this_03 = (__this->fields)._hintText;
    if (__this_03 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_03,CJNHFNHJHPE,(MethodInfo *)0x0);
      pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
      ppSVar12 = &(__this->fields).JJNJMJMBOLN;
      pSVar13 = *ppSVar12;
      if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
        pPVar9 = pPVar6->klass;
        uVar2._0_1_ = (pPVar9->_2).rank;
        uVar2._1_1_ = (pPVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar2;
        if (uVar10 != 0) {
          piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar7 = pPVar9->vtable + (*piVar11 + 1);
              goto LAB_036755b0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_036755b0:
        (*pVVar7->methodPtr)(pPVar6,pSVar13,pVVar7->method);
        pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
        uVar8 = thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04566664 == '\0') {
                    /* try { // try from 03675608 to 03775bb7 has its CatchHandler @ 03675608
                       catch() { ... } // from try @ 03675608 with catch @ 03675608
                       catch() { ... } // from try @ 03675d60 with catch @ 03675608
                       catch() { ... } // from try @ 03675e98 with catch @ 03675608
                       catch() { ... } // from try @ 03675f68 with catch @ 03675608 */
          FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
          DAT_04566664 = '\x01';
        }
        if ((DLAFGNMCMFA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
          pPVar9 = pPVar6->klass;
          fVar14 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
          uVar3._0_1_ = (pPVar9->_2).rank;
          uVar3._1_1_ = (pPVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar3;
          if (uVar10 != 0) {
            piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                pVVar7 = pPVar9->vtable + (*piVar11 + 2);
                goto LAB_0367568c;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,2);
LAB_0367568c:
          pSVar13 = (System_Collections_IEnumerator_o *)
                    (*pVVar7->methodPtr)((ulong)(uint)fVar14,pPVar6,uVar8,pVVar7->method);
          *ppSVar12 = pSVar13;
          thunk_FUN_01c20e04(ppSVar12,pSVar13);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

