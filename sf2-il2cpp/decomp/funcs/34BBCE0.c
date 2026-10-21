// SFButton$$OnDestroy @ RVA 0x34BBCE0

void SFButton__OnDestroy(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  
  SFButton__BJEJCCMFMJH(__this,method);
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = (__this->fields).super.m_OnClick;
  if (__this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

