// Nekki.SF2.GUI.Fight.EndPvpFightContent$$CCNAMPDODEA @ RVA 0x312FCCC

void Nekki_SF2_GUI_Fight_EndPvpFightContent__CCNAMPDODEA
               (Nekki_SF2_GUI_Fight_EndPvpFightContent_o *__this,bool KKIPDEIHMDG,MethodInfo *method
               )

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  __this_00 = (__this->fields).AnimationEndEvent;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Fight_EndPvpFightContent__OAFJJEGHHJK(__this,false,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,KKIPDEIHMDG);
}

