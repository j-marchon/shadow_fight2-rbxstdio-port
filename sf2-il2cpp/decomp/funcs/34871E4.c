// Nekki.SF2.GUI.Shop.ParametersPanel$$BMGBHKLPKDE @ RVA 0x34871E4

void Nekki_SF2_GUI_Shop_ParametersPanel__BMGBHKLPKDE
               (Nekki_SF2_GUI_Shop_ParametersPanel_o *__this,
               System_Collections_Generic_List_HEFOANCOHDC__o *BJAHLFLBNDJ,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Comparison_HEFOANCOHDC__o **ppSVar2;
  MethodInfo *method_00;
  System_Comparison_HEFOANCOHDC__o *comparison;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045683b7 & 1) == 0) {
    FUN_01bab630(&System_Comparison<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HEFOANCOHDC>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ParametersPanel_<>c_PLNDGIALHJB__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo);
    DAT_045683b7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((BJAHLFLBNDJ != (System_Collections_Generic_List_HEFOANCOHDC__o *)0x0) &&
     ((BJAHLFLBNDJ->fields)._size != 0)) {
    __this_00 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<HEFOANCOHDC>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)BJAHLFLBNDJ,
               Method_System_Collections_Generic_List<HEFOANCOHDC>__ctor__);
    if ((Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    comparison = Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->static_fields->__9__12_0;
    if (comparison == (System_Comparison_HEFOANCOHDC__o *)0x0) {
      if ((Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      comparison = (System_Comparison_HEFOANCOHDC__o *)
                   thunk_FUN_01bda818(System_Comparison<HEFOANCOHDC>_TypeInfo);
      System_Comparison<object>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_Shop_ParametersPanel_<>c_TypeInfo->static_fields->__9__12_0;
      *ppSVar2 = comparison;
      thunk_FUN_01c20e04(ppSVar2,comparison);
    }
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method_00 = Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__;
    System_Collections_Generic_List<object>__Sort
              (__this_00,(System_Comparison_T__o *)comparison,
               (MethodInfo_26E6870 *)Method_System_Collections_Generic_List<HEFOANCOHDC>_Sort__);
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,__this_00,
               Method_System_Collections_Generic_List<HEFOANCOHDC>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Shop_ParametersPanel__JJPEDCEMMID
                (__this,(HEFOANCOHDC_o *)local_48.fields._current,method_00);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<HEFOANCOHDC>_Dispose__);
  }
  return;
}

