// Nekki.SF2.GUI.Fight.ViewerFight$$OnDestroy @ RVA 0x35BF474

void Nekki_SF2_GUI_Fight_ViewerFight__OnDestroy
               (Nekki_SF2_GUI_Fight_ViewerFight_o *__this,MethodInfo *method)

{
  System_Action_bool__o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  DG_Tweening_Sequence_o **ppDVar1;
  
  if ((DAT_04568f09 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Fight_ViewerFight_OMANLLACFOG__);
    DAT_04568f09 = 1;
    method = extraout_x1;
  }
  ppDVar1 = &(__this->fields).MJPPAGLCLJD;
  if (*ppDVar1 != (DG_Tweening_Sequence_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)*ppDVar1,false,(MethodInfo *)0x0);
    *ppDVar1 = (DG_Tweening_Sequence_o *)0x0;
    thunk_FUN_01c20e04(ppDVar1,0);
    method = extraout_x1_00;
  }
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo,method);
  System_Action<bool>___ctor();
  Nekki_SF2_Core_ApplicationController__remove_OnPause(CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

