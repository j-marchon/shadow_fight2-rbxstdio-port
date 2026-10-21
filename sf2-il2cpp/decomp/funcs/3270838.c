// Nekki.SF2.GUI.Dialogs.Raids.RaidBuyConsumablesDialog$$.ctor @ RVA 0x3270838

void Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBuyConsumablesDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UniRx_CompositeDisposable_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567220 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_BuyConsContainer>_TypeInfo);
    DAT_04567220 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_BuyConsContainer>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_BuyConsContainer>__ctor__);
  (__this->fields).FEBICCAKJMD =
       (System_Collections_Generic_Dictionary_string__BuyConsContainer__o *)__this_00;
  thunk_FUN_01c20e04(&(__this->fields).FEBICCAKJMD,__this_00);
  __this_01 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_01);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

