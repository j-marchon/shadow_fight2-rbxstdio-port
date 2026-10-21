// Nekki.SF2.GUI.Map.ContentToggle$$OnDestroy @ RVA 0x33B30BC

void Nekki_SF2_GUI_Map_ContentToggle__OnDestroy
               (Nekki_SF2_GUI_Map_ContentToggle_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  undefined8 uVar1;
  UnityEngine_UI_Button_o *pUVar2;
  DG_Tweening_Sequence_o **ppDVar3;
  undefined1 auVar4 [16];
  
  ppDVar3 = &(__this->fields).BPOLHFBDIMK;
  uVar1 = 0;
  if (*ppDVar3 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar3,false,(MethodInfo *)0x0);
    *ppDVar3 = (DG_Tweening_Sequence_o *)0x0;
    auVar4 = thunk_FUN_01c20e04(ppDVar3,0);
    method = auVar4._8_8_;
    uVar1 = auVar4._0_8_;
  }
  pUVar2 = (__this->fields).TogglePanel;
  if ((pUVar2 != (UnityEngine_UI_Button_o *)0x0) &&
     (__this_00 = (pUVar2->fields).m_OnClick, uVar1 = 0,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar1,method);
}

