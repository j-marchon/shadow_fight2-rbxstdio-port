// Nekki.SF2.GUI.Dialogs.StoryDialog$$OnDestroy @ RVA 0x32C0510

void Nekki_SF2_GUI_Dialogs_StoryDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_045674c6 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    DAT_045674c6 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  if (__this != (Nekki_SF2_GUI_Dialogs_StoryDialog_o *)0x0) {
    System_Action___ctor();
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

