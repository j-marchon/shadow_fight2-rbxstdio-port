// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$OHFPFJBPBAD @ RVA 0x35BB9B0

void Nekki_SF2_GUI_Fight_RaidWaitResultContent__OHFPFJBPBAD
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568eda & 1) == 0) {
    FUN_01bab630(&StringLiteral_14584);
    DAT_04568eda = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).super.NHNIOGOEAJB;
  if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__Invoke(__this_00,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__CancelInvoke
              ((UnityEngine_MonoBehaviour_o *)__this,StringLiteral_14584,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

