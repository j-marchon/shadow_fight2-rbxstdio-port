// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$.ctor @ RVA 0x323590C

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll___ctor
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *__this_00;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o **ppSVar1;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o *__this_01;
  System_Collections_Generic_List_ControlsInfoCategoryContent__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567022 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryContent>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ControlsInfoCategoryContent>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ControlsInfoCategoryTab>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567022 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ControlsInfoCategoryTab>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ControlsInfoCategoryTab>__ctor__);
  ppSVar1 = &(__this->fields).HCJLLBHBLBE;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_ControlsInfoCategoryContent__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<ControlsInfoCategoryContent>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<ControlsInfoCategoryContent>__ctor__);
  ppSVar2 = &(__this->fields).GJACCPEHHFL;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

