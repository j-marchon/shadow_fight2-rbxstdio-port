// Nekki.SF2.GUI.Dialogs.WebViewDialog$$OnDestroy @ RVA 0x333C200

void Nekki_SF2_GUI_Dialogs_WebViewDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  GOLIJCLCCBA_o **ppGVar1;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).HBJPBPBIOOB;
  if (__this_00 != (UniRx_CompositeDisposable_o *)0x0) {
    UniRx_CompositeDisposable__Dispose(__this_00,(MethodInfo *)0x0);
    ppGVar1 = &(__this->fields).PAAIEEFEBKK;
    *ppGVar1 = (GOLIJCLCCBA_o *)0x0;
    thunk_FUN_01c20e04(ppGVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

