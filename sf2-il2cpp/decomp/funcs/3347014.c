// Nekki.SF2.GUI.SFScrollRect.ScrollRectEvent$$.ctor @ RVA 0x3347014

void Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent___ctor
               (Nekki_SF2_GUI_SFScrollRect_ScrollRectEvent_o *__this,MethodInfo *method)

{
  if ((DAT_045679c9 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__);
    DAT_045679c9 = 1;
  }
  UnityEngine_Events_UnityEvent<Vector2>___ctor
            ((UnityEngine_Events_UnityEvent_Vector2__o *)__this,
             Method_UnityEngine_Events_UnityEvent<Vector2>__ctor__);
  return;
}

