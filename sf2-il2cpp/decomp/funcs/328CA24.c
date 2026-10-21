// Nekki.SF2.GUI.Dialogs.LotteryDialog$$.ctor @ RVA 0x328CA24

void Nekki_SF2_GUI_Dialogs_LotteryDialog___ctor
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BECIPDJBAOG__o *__this_00;
  UniRx_CompositeDisposable_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_045672e4 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<BECIPDJBAOG>_TypeInfo);
    DAT_045672e4 = 1;
    method = extraout_x1;
  }
  (__this->fields).BECMMEIMOAL = -1;
  (__this->fields).GLGOLGJBCAK = -1;
  __this_00 = (System_Collections_Generic_List_BECIPDJBAOG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BECIPDJBAOG>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BECIPDJBAOG>__ctor__);
  (__this->fields).FCKCGNHILFE = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).FCKCGNHILFE,__this_00);
  __this_01 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_01,(MethodInfo *)0x0);
  (__this->fields).HBJPBPBIOOB = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).HBJPBPBIOOB,__this_01);
  Nekki_SF2_GUI_Dialogs_BaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}

