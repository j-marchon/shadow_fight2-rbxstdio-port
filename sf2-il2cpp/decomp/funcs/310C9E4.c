// Nekki.SF2.GUI.Profile.TrickCell$$HJKLMBOACHH @ RVA 0x310C9E4

void Nekki_SF2_GUI_Profile_TrickCell__HJKLMBOACHH
               (Nekki_SF2_GUI_Profile_TrickCell_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04566552 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04566552 = 1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).super.super.DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).super.super.FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
  return;
}

