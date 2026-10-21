// Nekki.SF2.GUI.Menu.ProgressBarDojoPanel$$IBMOCCNGEEO @ RVA 0x31B39E4

void Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__IBMOCCNGEEO
               (Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_o *__this,MethodInfo *method)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  PBAKFOBIHEG_o *pPVar6;
  VirtualInvokeData *pVVar7;
  undefined8 uVar8;
  MethodInfo *in_x2;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar9;
  PBAKFOBIHEG_c *pPVar10;
  ulong uVar11;
  int32_t *piVar12;
  System_String_o *CJNHFNHJHPE;
  System_Collections_IEnumerator_o **ppSVar13;
  System_Collections_IEnumerator_o *pSVar14;
  float fVar15;
  
  if ((DAT_04566b96 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DLAFGNMCMFA_TypeInfo);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_ProgressBarDojoPanel_PBNBBJPDHGK__);
    FUN_01bab630(&StringLiteral_10514);
    FUN_01bab630(&StringLiteral_10516);
    DAT_04566b96 = 1;
  }
  Nekki_SF2_GUI_Menu_ProgressBarDojoPanel__HAHOEJMBGIP(__this,true,in_x2);
  pJVar9 = (__this->fields).MHDJAEILAJL;
  if (pJVar9 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    CJNHFNHJHPE = (System_String_o *)0x0;
  }
  else {
    lVar1 = 0x60;
    if ((__this->fields).IKLIGGACIMH != false) {
      lVar1 = 0x68;
    }
    CJNHFNHJHPE = *(System_String_o **)((long)&pJVar9->klass + lVar1);
  }
  bVar5 = PCOEHCPGBBG__BDLEIEHBFAD(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar5) {
    puVar2 = &StringLiteral_10514;
    if ((__this->fields).IKLIGGACIMH != false) {
      puVar2 = &StringLiteral_10516;
    }
    CJNHFNHJHPE = (System_String_o *)*puVar2;
  }
  __this_00 = (__this->fields)._hintText;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,CJNHFNHJHPE,in_x2);
    pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
    ppSVar13 = &(__this->fields).JJNJMJMBOLN;
    pSVar14 = *ppSVar13;
    if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
      pPVar10 = pPVar6->klass;
      uVar3._0_1_ = (pPVar10->_2).rank;
      uVar3._1_1_ = (pPVar10->_2).minimumAlignment;
      uVar11 = (ulong)uVar3;
      if (uVar11 != 0) {
        piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar7 = pPVar10->vtable + (*piVar12 + 1);
            goto LAB_032b3b58;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,1);
LAB_032b3b58:
      (*pVVar7->methodPtr)(pPVar6,pSVar14,pVVar7->method);
      pPVar6 = CoroutineManager__get_Current((MethodInfo *)0x0);
      uVar8 = thunk_FUN_01bda818(System_Action_TypeInfo);
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
      if (pPVar6 != (PBAKFOBIHEG_o *)0x0) {
        pPVar10 = pPVar6->klass;
        fVar15 = DLAFGNMCMFA_TypeInfo->static_fields->KODKKHPADDM;
        uVar4._0_1_ = (pPVar10->_2).rank;
        uVar4._1_1_ = (pPVar10->_2).minimumAlignment;
        uVar11 = (ulong)uVar4;
        if (uVar11 != 0) {
          piVar12 = &((pPVar10->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
              pVVar7 = pPVar10->vtable + (*piVar12 + 2);
              goto LAB_032b3c34;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar6,PBAKFOBIHEG_TypeInfo,2);
LAB_032b3c34:
        pSVar14 = (System_Collections_IEnumerator_o *)
                  (*pVVar7->methodPtr)((ulong)(uint)fVar15,pPVar6,uVar8,pVVar7->method);
        *ppSVar13 = pSVar14;
        thunk_FUN_01c20e04(ppSVar13,pSVar14);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

