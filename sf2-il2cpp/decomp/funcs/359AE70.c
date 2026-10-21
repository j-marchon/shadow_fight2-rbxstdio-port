// Nekki.SF2.GUI.Profile.AchievementCell$$HJKLMBOACHH @ RVA 0x359AE70

void Nekki_SF2_GUI_Profile_AchievementCell__HJKLMBOACHH
               (Nekki_SF2_GUI_Profile_AchievementCell_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_int__o *__this_00;
  
  if ((DAT_04568dc2 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04568dc2 = 1;
  }
  __this_00 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields).super.super.DidSelectEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
    UnityEngine_Events_UnityEvent<int>__Invoke
              (__this_00,(__this->fields).super.super.FIMCNHGPCNA,
               Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    return;
  }
                    /* try { // try from 0369aec8 to 0379b247 has its CatchHandler @ 0369aec8
                       catch() { ... } // from try @ 0369aec8 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b270 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b608 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b630 with catch @ 0369aec8
                       catch() { ... } // from try @ 0369b670 with catch @ 0369aec8 */
  return;
}

