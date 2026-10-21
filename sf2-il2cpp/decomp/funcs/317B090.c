// Nekki.SF2.GUI.Dialogs.StrangerDialog$$OnDestroy @ RVA 0x317B090

void Nekki_SF2_GUI_Dialogs_StrangerDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  Nekki_SF2_GUI_Dialogs_StoryDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

