// Nekki.SF2.GUI.Fight.RewardPanelItem.NLOGCLAKJFB$$CNIONHFINIF @ RVA 0x35B229C

void Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB__CNIONHFINIF
               (Nekki_SF2_GUI_Fight_RewardPanelItem_NLOGCLAKJFB_o *__this,float value,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_Fight_RewardPanelItem_o *pNVar2;
  UnityEngine_UI_Text_o *pUVar3;
  int local_14;
  
  pNVar2 = (__this->fields).__4__this;
  if (pNVar2 != (Nekki_SF2_GUI_Fight_RewardPanelItem_o *)0x0) {
    pUVar3 = (pNVar2->fields)._text;
    local_14 = -0x80000000;
    if (value != INFINITY) {
      local_14 = (int)value;
    }
    pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                (pUVar3,pSVar1,(pUVar3->klass->vtable)._75_set_text.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

