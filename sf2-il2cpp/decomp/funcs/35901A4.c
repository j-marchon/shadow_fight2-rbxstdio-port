// Nekki.SF2.GUI.Profile.BattlePassPanel$$.ctor @ RVA 0x35901A4

void Nekki_SF2_GUI_Profile_BattlePassPanel___ctor
               (Nekki_SF2_GUI_Profile_BattlePassPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PIJBHIFGBCK__o *__this_00;
  System_Collections_Generic_List_PIJBHIFGBCK__o **ppSVar1;
  UniRx_CompositeDisposable_o *__this_01;
  UniRx_CompositeDisposable_o **ppUVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d70 & 1) == 0) {
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PIJBHIFGBCK>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PIJBHIFGBCK>_TypeInfo);
    DAT_04568d70 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_PIJBHIFGBCK__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PIJBHIFGBCK>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PIJBHIFGBCK>__ctor__);
  ppSVar1 = &(__this->fields).IBBJADAIGIL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
  UniRx_CompositeDisposable___ctor(__this_01,(MethodInfo *)0x0);
  ppUVar2 = &(__this->fields).BNAIPPCOGPE;
  *ppUVar2 = __this_01;
  thunk_FUN_01c20e04(ppUVar2,__this_01);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

