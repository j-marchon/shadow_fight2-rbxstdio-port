// Nekki.SF2.GUI.Dialogs.Raids.TopMedalsInfoView$$FKNCNBACLKL @ RVA 0x35392F8

System_Collections_Generic_List_KMDOLFBIGNC__o *
Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView__FKNCNBACLKL
          (Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_o *__this,
          System_Collections_Generic_List_KMDOLFBIGNC__o *LBELDDAPIMD,MethodInfo *method)

{
  System_Func_KMDOLFBIGNC__long__o **ppSVar1;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_KMDOLFBIGNC__o *pSVar2;
  System_Func_KMDOLFBIGNC__long__o *keySelector;
  
  if ((DAT_04568ab5 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_OrderByDescending<KMDOLFBIGNC,_long>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToList<KMDOLFBIGNC>__);
    FUN_01bab630(&System_Func<KMDOLFBIGNC,_long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_BFEHMDENABN__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo);
    DAT_04568ab5 = 1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  keySelector = Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->static_fields->__9__13_0
  ;
  if (keySelector == (System_Func_KMDOLFBIGNC__long__o *)0x0) {
    if ((Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    keySelector = (System_Func_KMDOLFBIGNC__long__o *)
                  thunk_FUN_01bda818(System_Func<KMDOLFBIGNC,_long>_TypeInfo);
    System_Func<object,_long>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Dialogs_Raids_TopMedalsInfoView_<>c_TypeInfo->static_fields->__9__13_0;
    *ppSVar1 = keySelector;
    thunk_FUN_01c20e04(ppSVar1,keySelector);
  }
  source = System_Linq_Enumerable__OrderByDescending<object,_long>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)LBELDDAPIMD,
                      (System_Func_TSource__TKey__o *)keySelector,
                      Method_System_Linq_Enumerable_OrderByDescending<KMDOLFBIGNC,_long>__);
  pSVar2 = (System_Collections_Generic_List_KMDOLFBIGNC__o *)
           System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      Method_System_Linq_Enumerable_ToList<KMDOLFBIGNC>__);
  return pSVar2;
}

