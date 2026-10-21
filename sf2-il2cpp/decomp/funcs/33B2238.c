// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$OnDestroy @ RVA 0x33B2238

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,method);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

