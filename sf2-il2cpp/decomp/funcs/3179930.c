// Nekki.SF2.GUI.Dialogs.StrangerDialog$$.ctor @ RVA 0x3179930

void Nekki_SF2_GUI_Dialogs_StrangerDialog___ctor
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  
  if ((DAT_0456697f & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_0456697f = 1;
  }
  (__this->fields).JKBAACEKGJF = StringLiteral_1;
  thunk_FUN_01c20e04(&(__this->fields).JKBAACEKGJF);
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_00);
  Nekki_SF2_GUI_Dialogs_StoryDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_StoryDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

