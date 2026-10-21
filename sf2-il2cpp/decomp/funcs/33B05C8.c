// RaidPlayerEquipmentImage$$OnDisable @ RVA 0x33B05C8

void RaidPlayerEquipmentImage__OnDisable(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  SFButton_o *pSVar1;
  
  pSVar1 = (__this->fields)._button;
  if ((pSVar1 != (SFButton_o *)0x0) &&
     (__this_00 = (pSVar1->fields).super.m_OnClick,
     __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
    UnityEngine_Events_UnityEventBase__RemoveAllListeners
              ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

