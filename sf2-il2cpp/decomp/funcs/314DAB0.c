// Nekki.SF2.GUI.ModuleHolder$$BGGBJPGPKPF @ RVA 0x314DAB0

void Nekki_SF2_GUI_ModuleHolder__BGGBJPGPKPF
               (System_Collections_Generic_List_UIModule__o *EDEHNHIHDDH,MethodInfo *method)

{
  System_Comparison_UIModule__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Comparison_UIModule__o *comparison;
  
  if ((DAT_045667e5 & 1) == 0) {
    FUN_01bab630(&System_Comparison<UIModule>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_Sort__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_ModuleHolder_<>c_EKLCINBJPAG__);
    FUN_01bab630(&Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo);
    DAT_045667e5 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  comparison = Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__39_0;
  if (comparison == (System_Comparison_UIModule__o *)0x0) {
    if ((Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo,method);
    }
    comparison = (System_Comparison_UIModule__o *)
                 thunk_FUN_01bda818(System_Comparison<UIModule>_TypeInfo);
    System_Comparison<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_ModuleHolder_<>c_TypeInfo->static_fields->__9__39_0;
    *ppSVar1 = comparison;
    thunk_FUN_01c20e04(ppSVar1,comparison);
  }
  if (EDEHNHIHDDH != (System_Collections_Generic_List_UIModule__o *)0x0) {
    System_Collections_Generic_List<object>__Sort
              ((System_Collections_Generic_List_object__o *)EDEHNHIHDDH,
               (System_Comparison_T__o *)comparison,
               Method_System_Collections_Generic_List<UIModule>_Sort__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

