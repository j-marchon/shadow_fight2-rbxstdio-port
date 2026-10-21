// Nekki.SF2.GUI.Fight.ForgeMaterialsContent.FDLLOOPJIEI$$MoveNext @ RVA 0x332F18C

/* WARNING: Type propagation algorithm not settling */

bool Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI__MoveNext
               (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_FDLLOOPJIEI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_01;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *extraout_x1;
  LabelButton_o *pLVar2;
  Il2CppObject **ppIVar3;
  UnityEngine_Events_UnityEvent_o *__this_03;
  Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *pNVar4;
  float time;
  
  if ((DAT_045678f6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent_Invoke__);
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_045678f6 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar4 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (((pNVar4 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) &&
        (pLVar2 = (pNVar4->fields)._buttonOk, pLVar2 != (LabelButton_o *)0x0)) &&
       (__this_01 = (pLVar2->fields).super.super.super.m_OnClick,
       __this_01 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_01,(MethodInfo *)0x0);
      pLVar2 = (pNVar4->fields)._buttonOk;
      if (pLVar2 != (LabelButton_o *)0x0) {
        __this_03 = (UnityEngine_Events_UnityEvent_o *)(pLVar2->fields).super.super.super.m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_03 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_03,call,(MethodInfo *)0x0);
          pLVar2 = (pNVar4->fields)._buttonOk;
          if ((pLVar2 != (LabelButton_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pLVar2,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
            return false;
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pNVar4 != (Nekki_SF2_GUI_Fight_ForgeMaterialsContent_o *)0x0) {
      time = (pNVar4->fields)._animationTime;
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo,method);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,time,(MethodInfo *)0x0);
      ppIVar3 = &(__this->fields).__2__current;
      *ppIVar3 = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(ppIVar3,__this_00);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

