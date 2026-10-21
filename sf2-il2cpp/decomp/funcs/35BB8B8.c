// Nekki.SF2.GUI.Fight.RaidWaitResultContent$$LJMPGBDJCLM @ RVA 0x35BB8B8

void Nekki_SF2_GUI_Fight_RaidWaitResultContent__LJMPGBDJCLM
               (Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *__this,float PNEIGGOFIOA,
               MethodInfo *method)

{
  System_Collections_IEnumerator_o *routine;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568ed9 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14584);
    DAT_04568ed9 = 1;
    method = extraout_x1;
  }
  routine = Nekki_SF2_GUI_Fight_RaidWaitResultContent__MGCPBOGFNNJ(__this,PNEIGGOFIOA,method);
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  UnityEngine_MonoBehaviour__InvokeRepeating
            ((UnityEngine_MonoBehaviour_o *)__this,StringLiteral_14584,0.0,
             (__this->fields).CFKIJMGDLLK,(MethodInfo *)0x0);
  return;
}

