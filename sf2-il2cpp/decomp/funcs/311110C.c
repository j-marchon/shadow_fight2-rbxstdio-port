// Nekki.SF2.GUI.TableViewScroll$$.ctor @ RVA 0x311110C

void Nekki_SF2_GUI_TableViewScroll___ctor
               (Nekki_SF2_GUI_TableViewScroll_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *pUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566582 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Events_UnityEvent_TypeInfo);
    DAT_04566582 = 1;
    method = extraout_x1;
  }
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo,method);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onDragBegin = pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onDragBegin,pUVar1);
  pUVar1 = (UnityEngine_Events_UnityEvent_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityEvent_TypeInfo);
  UnityEngine_Events_UnityEvent___ctor(pUVar1,(MethodInfo *)0x0);
  (__this->fields).onDragEnd = pUVar1;
  thunk_FUN_01c20e04(&(__this->fields).onDragEnd,pUVar1);
  Nekki_SF2_GUI_SFScrollRect___ctor((Nekki_SF2_GUI_SFScrollRect_o *)__this,(MethodInfo *)0x0);
  return;
}

