// BBJEEHDMNGJ$$OANGGKCBAOJ @ RVA 0x31B7864

void BBJEEHDMNGJ__OANGGKCBAOJ(BBJEEHDMNGJ_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *call_00;
  LabelButton_o *pLVar1;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *pNVar2;
  UnityEngine_Events_UnityEvent_o *__this_01;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_02;
  
  if ((DAT_04566bc1 & 1) == 0) {
    FUN_01bab630(&Method_BBJEEHDMNGJ_JCLJEFPCGPK__);
    FUN_01bab630(&Method_BBJEEHDMNGJ_OANGGKCBAOJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_AddListener__);
    DAT_04566bc1 = 1;
  }
  AKJJAPEHKCG__HJDDBKPCAFJ
            ((UnityEngine_UI_Selectable_o *)(__this->fields).MEIDNEHHHKI,(MethodInfo *)0x0);
  pLVar1 = (__this->fields).MEIDNEHHHKI;
  if (pLVar1 != (LabelButton_o *)0x0) {
    __this_01 = (UnityEngine_Events_UnityEvent_o *)(pLVar1->fields).super.super.super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__RemoveListener(__this_01,call,(MethodInfo *)0x0);
      pLVar1 = (__this->fields).MEIDNEHHHKI;
      if (pLVar1 != (LabelButton_o *)0x0) {
        SFButton__set_IsFlashing((SFButton_o *)pLVar1,false,(MethodInfo *)0x0);
        __this_00 = Nekki_SF2_GUI_Tutorial_ArrowCanvas__get_Instance((MethodInfo *)0x0);
        if (__this_00 != (Nekki_SF2_GUI_Tutorial_ArrowCanvas_o *)0x0) {
          Nekki_SF2_GUI_Tutorial_ArrowCanvas__HideArrow(__this_00,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).PMMMEDPGNFO;
          if (pNVar2 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *)0x0) {
            __this_02 = (pNVar2->fields)._OnStateChange;
            call_00 = (UnityEngine_Events_UnityAction_T0__o *)
                      thunk_FUN_01bda818(
                                        UnityEngine_Events_UnityAction<ForgePanel_AHMDMAAJAJN>_TypeInfo
                                        );
            UnityEngine_Events_UnityAction<Int32Enum>___ctor();
            if (__this_02 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
              UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                        ((UnityEngine_Events_UnityEvent_T0__o *)__this_02,call_00,
                         Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_AddListener__)
              ;
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

