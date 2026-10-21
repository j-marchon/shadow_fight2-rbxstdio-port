// Nekki.SF2.GUI.Dialogs.LotteryDialog$$LPNCEHPFOAF @ RVA 0x3288DD8

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_LotteryDialog__LPNCEHPFOAF
          (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *__this_00;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o **ppNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672d0 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_TypeInfo);
    DAT_045672d0 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_TypeInfo,method);
  Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_KEFEEBDDFDD_o *)0x0) {
    ppNVar1 = &(__this_00->fields).__4__this;
    *ppNVar1 = __this;
    thunk_FUN_01c20e04(ppNVar1,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

