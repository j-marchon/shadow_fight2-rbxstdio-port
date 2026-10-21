// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanCell$$Init @ RVA 0x32324B8

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *__this,CBPENMDOJDB_o *ADHJMIOENHG,
               bool ECHNGCOEOEB,MethodInfo *method)

{
  CBPENMDOJDB_o **ppCVar1;
  int32_t CJNHFNHJHPE;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  UnityEngine_GameObject_o *__this_00;
  EEGDOGKBLNG_o *__this_01;
  int64_t iVar4;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_02;
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_01;
  CBPENMDOJDB_o *pCVar5;
  SFButton_o *pSVar6;
  UnityEngine_Events_UnityEvent_o *__this_03;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  Nekki_SF2_GUI_LabelAlias_o *pNVar8;
  int32_t local_38;
  uint32_t local_34;
  
  if ((DAT_04566fe6 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_KGNBJLLJHOC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1492);
    DAT_04566fe6 = 1;
  }
  ppCVar1 = &(__this->fields).MFONGMAPLFG;
  local_34 = 0;
  (__this->fields).MFONGMAPLFG = ADHJMIOENHG;
  thunk_FUN_01c20e04(ppCVar1,ADHJMIOENHG);
  (__this->fields).DGNFDMNJKJM = ECHNGCOEOEB;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell__MLIDFAMHJKI(__this,method_00);
  pCVar5 = (__this->fields).MFONGMAPLFG;
  if (pCVar5 != (CBPENMDOJDB_o *)0x0) {
    local_38 = (pCVar5->fields).DIILCCNFMEB;
    pNVar8 = (__this->fields)._levelCount;
    pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
    if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
      pCVar5 = (__this->fields).MFONGMAPLFG;
      if ((pCVar5 != (CBPENMDOJDB_o *)0x0) &&
         (pNVar8 = (__this->fields)._clanNameText, pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
        (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                  (pNVar8,(pCVar5->fields).GJNOEAKNMOG,(pNVar8->klass->vtable)._75_set_text.method);
        if (*ppCVar1 != (CBPENMDOJDB_o *)0x0) {
          local_38 = ((*ppCVar1)->fields).GOBHKPNEJFN;
          pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
          if (*ppCVar1 != (CBPENMDOJDB_o *)0x0) {
            local_34 = KFCFGKEHPNK__FGFOHBLCFKD(((*ppCVar1)->fields).DIILCCNFMEB,(MethodInfo *)0x0);
            str2 = System_UInt32__ToString((uint32_t)&local_34,(MethodInfo *)0x0);
            pNVar8 = (__this->fields)._members;
            pSVar3 = System_String__Concat(pSVar3,StringLiteral_1492,str2,(MethodInfo *)0x0);
            if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                        (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
              pCVar5 = (__this->fields).MFONGMAPLFG;
              if (pCVar5 != (CBPENMDOJDB_o *)0x0) {
                pNVar8 = (__this->fields)._rating;
                CJNHFNHJHPE = (pCVar5->fields).NLLKMEMKBAF;
                method_01 = extraout_x1;
                if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                  method_01 = extraout_x1_00;
                }
                pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,method_01);
                if (pNVar8 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                  (*(pNVar8->klass->vtable)._75_set_text.methodPtr)
                            (pNVar8,pSVar3,(pNVar8->klass->vtable)._75_set_text.method);
                  pNVar7 = (__this->fields)._selectMyClan;
                  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  bVar2 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar2) {
                    pNVar7 = (__this->fields)._selectMyClan;
                    if (pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0333278c;
                    __this_00 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
                    }
                    __this_01 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (((__this_01 == (EEGDOGKBLNG_o *)0x0) ||
                        (iVar4 = EEGDOGKBLNG__PALANAIJAFE(__this_01,(MethodInfo *)0x0),
                        ADHJMIOENHG == (CBPENMDOJDB_o *)0x0)) ||
                       (__this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0333278c;
                    UnityEngine_GameObject__SetActive
                              (__this_00,iVar4 == (ADHJMIOENHG->fields).ADEIKPGDIPM,
                               (MethodInfo *)0x0);
                  }
                  pSVar6 = (__this->fields)._clanNameButton;
                  if ((pSVar6 != (SFButton_o *)0x0) &&
                     (__this_02 = (pSVar6->fields).super.m_OnClick,
                     __this_02 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
                    UnityEngine_Events_UnityEventBase__RemoveAllListeners
                              ((UnityEngine_Events_UnityEventBase_o *)__this_02,(MethodInfo *)0x0);
                    pSVar6 = (__this->fields)._clanNameButton;
                    if (pSVar6 != (SFButton_o *)0x0) {
                      __this_03 = (UnityEngine_Events_UnityEvent_o *)
                                  (pSVar6->fields).super.m_OnClick;
                      call = (UnityEngine_Events_UnityAction_o *)
                             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
                      UnityEngine_Events_UnityAction___ctor();
                      if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0)
                        ;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0333278c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

