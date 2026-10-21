// Nekki.SF2.GUI.BaseScrollContent.SelectItemEvent$$.ctor @ RVA 0x35CE0E4

void Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent___ctor
               (Nekki_SF2_GUI_BaseScrollContent_SelectItemEvent_o *__this,MethodInfo *method)

{
  if ((DAT_04568fbd & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<BaseScrollItem>__ctor__);
    DAT_04568fbd = 1;
  }
  UnityEngine_Events_UnityEvent<object>___ctor
            ((UnityEngine_Events_UnityEvent_T0__o *)__this,
             Method_UnityEngine_Events_UnityEvent<BaseScrollItem>__ctor__);
  return;
}

