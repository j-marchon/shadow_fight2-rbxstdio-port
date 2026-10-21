// Nekki.SF2.GUI.Scenes.RaidPlayerInfoRoot$$LANNHNJHOLM @ RVA 0x3172A10

void Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot__LANNHNJHOLM
               (Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_o *__this,
               Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  GCIFMNHADDF_o *__this_01;
  System_Action_BaseDialog__o *CJNHFNHJHPE;
  
  if ((DAT_04566932 & 1) == 0) {
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scenes_RaidPlayerInfoRoot_LANNHNJHOLM__);
    DAT_04566932 = 1;
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) {
    Nekki_SF2_GUI_Dialogs_DialogCanvasController__Show(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03272a6c to 03372a73 has its CatchHandler @ 03272ad0 */
    __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03272a80 to 03372a8b has its CatchHandler @ 03272acc */
    CJNHFNHJHPE = (System_Action_BaseDialog__o *)
                  thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
                    /* try { // try from 03272a8c to 03372ae7 has its CatchHandler @ 032729d8 */
    System_Action<object>___ctor();
    if (__this_01 != (GCIFMNHADDF_o *)0x0) {
      GCIFMNHADDF__JNDNMPDMDGB(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

