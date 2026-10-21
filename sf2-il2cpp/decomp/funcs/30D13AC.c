// Nekki.SF2.GUI.ItemsScroll$$.ctor @ RVA 0x30D13AC

void Nekki_SF2_GUI_ItemsScroll___ctor(Nekki_SF2_GUI_ItemsScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566304 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_ItemsScroll_ScrollEndEvent_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566304 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(Nekki_SF2_GUI_ItemsScroll_ScrollEndEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onScrollEnd = (Nekki_SF2_GUI_ItemsScroll_ScrollEndEvent_o *)pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onScrollEnd,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onDragBegin = pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onDragBegin,pUVar1);
  (__this->fields)._AutoscrollDuration = 1.0;
  (__this->fields).AutoscrollIsOn = true;
  Nekki_SF2_GUI_SFScrollRect___ctor((Nekki_SF2_GUI_SFScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}

