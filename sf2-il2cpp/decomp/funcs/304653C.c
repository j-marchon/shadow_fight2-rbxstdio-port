// Nekki.SF2.GUI.GeneralMenu.MenuItemList$$.ctor @ RVA 0x304653C

void Nekki_SF2_GUI_GeneralMenu_MenuItemList___ctor
               (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_string__o **ppSVar1;
  Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent_o *__this_01;
  Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04565dd9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent_TypeInfo);
    DAT_04565dd9 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields)._list;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  auVar3 = thunk_FUN_01bda818(Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent_TypeInfo);
  __this_01 = auVar3._0_8_;
  Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent___ctor(__this_01,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnValueChanged;
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton___ctor
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}

