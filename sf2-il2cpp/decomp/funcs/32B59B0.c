// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$IDFJAAEDKDI @ RVA 0x32B59B0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__IDFJAAEDKDI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  ushort uVar1;
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  UnityEngine_Events_UnityAction_T0__o *call_00;
  PBAKFOBIHEG_o *pPVar3;
  System_Collections_IEnumerator_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  LabelButton_o *pLVar6;
  PBAKFOBIHEG_c *pPVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Collections_IEnumerator_o **ppSVar10;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_01;
  
  if ((DAT_0456744e & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_FHGHCEKLLOK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_MHCAHALNKHG__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    DAT_0456744e = 1;
    method = extraout_x1;
  }
  pLVar6 = (__this->fields)._searchButton;
  if (pLVar6 != (LabelButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pLVar6->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._editBoxForClanName;
      if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
        Nekki_SF2_GUI_Scripts_EditBox__set_BGColor
                  (pNVar2,(UnityEngine_Color_o)(__this->fields).JNJBMAJKGKF.fields,(MethodInfo *)0x0
                  );
        pNVar2 = (__this->fields)._editBoxForClanName;
        if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          __this_01 = (pNVar2->fields).super.m_OnValueChanged;
          call_00 = (UnityEngine_Events_UnityAction_T0__o *)
                    thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
          UnityEngine_Events_UnityAction<object>___ctor();
          if (__this_01 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
            UnityEngine_Events_UnityEvent<object>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call_00,
                       Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
            Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__GDFJKOKNLNO(__this,method_00);
            pPVar3 = CoroutineManager__get_Current((MethodInfo *)0x0);
            pSVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__ALELNBEJFPD(__this,method_01)
            ;
            if (pPVar3 != (PBAKFOBIHEG_o *)0x0) {
              pPVar7 = pPVar3->klass;
              uVar1._0_1_ = (pPVar7->_2).rank;
              uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
              uVar8 = (ulong)uVar1;
              if (uVar8 != 0) {
                piVar9 = &((pPVar7->_1).interfaceOffsets)->offset;
                do {
                    /* try { // try from 033b5b18 to 034b5b3f has its CatchHandler @ 033b5c74 */
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                      (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                    /* try { // try from 033b5b40 to 034b5b4f has its CatchHandler @ 033b5c6c */
                    pVVar5 = pPVar7->vtable + *piVar9;
                    goto LAB_033b5b48;
                  }
                  uVar8 = uVar8 - 1;
                  piVar9 = piVar9 + 4;
                } while (uVar8 != 0);
              }
              pVVar5 = (VirtualInvokeData *)FUN_01b81914(pPVar3,PBAKFOBIHEG_TypeInfo,0);
LAB_033b5b48:
                    /* try { // try from 033b5b50 to 034b5c5f has its CatchHandler @ 033b5998 */
              pSVar4 = (System_Collections_IEnumerator_o *)
                       (*pVVar5->methodPtr)(pPVar3,pSVar4,1,pVVar5->method);
              ppSVar10 = &(__this->fields).DEJIFBFIMNN;
              *ppSVar10 = pSVar4;
              thunk_FUN_01c20e04(ppSVar10,pSVar4);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

