// Nekki.SF2.GUI.Dialogs.WebViewDialog$$.ctor @ RVA 0x333C194

void Nekki_SF2_GUI_Dialogs_WebViewDialog___ctor
               (Nekki_SF2_GUI_Dialogs_WebViewDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567971 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04567971 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).HBJPBPBIOOB;
  *ppUVar1 = __this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

