// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityDialog$$.ctor @ RVA 0x33B2260

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityDialog_o *__this,MethodInfo *method)

{
  UniRx_CompositeDisposable_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567d51 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    DAT_04567d51 = 1;
    method = extraout_x1;
  }
  __this_00 = (UniRx_CompositeDisposable_o *)
              thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo,method);
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_00);
  Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

