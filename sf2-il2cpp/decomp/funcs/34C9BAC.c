// Nekki.SF2.GUI.Dialogs.Raids.RaidBaseDialog$$OnDestroy @ RVA 0x34C9BAC

void Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *__this,MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568655 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_EBOBLCDANEJ__);
    DAT_04568655 = 1;
  }
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__JGNHEIICALL(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
              ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

