// IEHDDOIHPNI$$LPAEJFCBMMF @ RVA 0x336D300

void IEHDDOIHPNI__LPAEJFCBMMF(MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this;
  NDPMLPGANCI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar5;
  HOOAAGABMBL_o **ppHVar6;
  IEHDDOIHPNI_c *method_00;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar7;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  char cVar8;
  IEHDDOIHPNI_StaticFields *pIVar9;
  System_Collections_Generic_List_string__o *pSVar10;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar11;
  VideoPlayerController_o *pVVar12;
  char cVar13;
  
  if ((DAT_04567af7 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15463);
    DAT_04567af7 = 1;
  }
  __this = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (__this != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    iVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_ScheduledQuestsCount(__this,(MethodInfo *)0x0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      iVar4 = NDPMLPGANCI__FFIOCEOHPEM(__this_00,(MethodInfo *)0x0);
      if (iVar4 - 3U < 3) {
        if (DAT_04566bb5 == '\0') {
          FUN_01bab630(&VideoPlayerController_TypeInfo);
          DAT_04566bb5 = '\x01';
        }
        pVVar12 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pVVar12,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (DAT_04566bb5 == '\0') {
            FUN_01bab630(&VideoPlayerController_TypeInfo);
            DAT_04566bb5 = '\x01';
          }
          pVVar12 = VideoPlayerController_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField;
          if (pVVar12 == (VideoPlayerController_o *)0x0) goto LAB_0346d624;
          cVar13 = (pVVar12->fields)._LFALNJINAPO_k__BackingField;
        }
        else {
          cVar13 = '\0';
        }
        if ((0 < iVar3) ||
           (bVar2 = Nekki_SF2_GUI_Dialogs_DownloadingScreen__Exists((MethodInfo *)0x0), bVar2)) {
          cVar8 = '\x01';
        }
        else {
          if (DAT_04565b83 == '\0') {
            FUN_01bab630(&Nekki_SF2_Core_ApplicationController_TypeInfo);
            DAT_04565b83 = '\x01';
          }
          cVar8 = Nekki_SF2_Core_ApplicationController_TypeInfo->static_fields->
                  _NHDGMLJJAOA_k__BackingField;
        }
        if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = IEHDDOIHPNI_TypeInfo->static_fields->DDLIGIKDNAA;
        if (cVar8 == '\0' && cVar13 == '\0') {
          if (bVar1 == false) {
            method_00 = IEHDDOIHPNI_TypeInfo;
            if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
              method_00 = (IEHDDOIHPNI_c *)thunk_FUN_01ba7564();
            }
            IKKAMAMLIKA = IEHDDOIHPNI__OCKKDMEHADL((MethodInfo *)method_00);
            if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
              pMVar7 = extraout_x1_03;
              if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
                pMVar7 = extraout_x1_04;
              }
              IEHDDOIHPNI__CFFMMKEJGKP(IKKAMAMLIKA,pMVar7);
              return;
            }
          }
        }
        else if (bVar1 != false) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_15463,(MethodInfo *)0x0);
          if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
          pIVar9->DDLIGIKDNAA = false;
          pNVar11 = pIVar9->KLAFPJHHOHD;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          pMVar7 = extraout_x1;
          if (bVar2) {
            if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pNVar11 = IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
            if (pNVar11 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_0346d624;
            (*(pNVar11->klass->vtable)._20_Close.methodPtr)
                      (pNVar11,(pNVar11->klass->vtable)._20_Close.method);
            ppNVar5 = &IEHDDOIHPNI_TypeInfo->static_fields->KLAFPJHHOHD;
            *ppNVar5 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
            thunk_FUN_01c20e04(ppNVar5,0);
            pMVar7 = extraout_x1_00;
          }
          if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar7 = extraout_x1_01;
          }
          pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
          pSVar10 = pIVar9->ICLDBBGODHJ;
          if (pSVar10 != (System_Collections_Generic_List_string__o *)0x0) {
            iVar3 = (pSVar10->fields)._size;
            (pSVar10->fields)._size = 0;
            (pSVar10->fields)._version = (pSVar10->fields)._version + 1;
            if (0 < iVar3) {
              System_Array__Clear((System_Array_o *)(pSVar10->fields)._items,0,iVar3,
                                  (MethodInfo *)0x0);
              pIVar9 = IEHDDOIHPNI_TypeInfo->static_fields;
              pMVar7 = extraout_x1_02;
            }
            IEHDDOIHPNI__EDNBFMMPAHG(pIVar9->JLLLPGEABHK,pMVar7);
            ppHVar6 = &IEHDDOIHPNI_TypeInfo->static_fields->JLLLPGEABHK;
            *ppHVar6 = (HOOAAGABMBL_o *)0x0;
            thunk_FUN_01c20e04(ppHVar6,0);
            return;
          }
          goto LAB_0346d624;
        }
      }
      return;
    }
  }
LAB_0346d624:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

