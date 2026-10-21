// Nekki.SF2.GUI.GeneralMenu.MenuItemList$$ChangeListIndex @ RVA 0x304645C

void Nekki_SF2_GUI_GeneralMenu_MenuItemList__ChangeListIndex
               (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *__this,int32_t LIELFHEKDCG,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *CJNHFNHJHPE;
  UnityEngine_Events_UnityEvent_int__o *__this_01;
  Nekki_SF2_GUI_LabelAlias_o *__this_02;
  
  if ((DAT_04565dd8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
    DAT_04565dd8 = 1;
  }
  __this_00 = (__this->fields)._list;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    iVar2 = (__this_00->fields)._size;
    iVar1 = (__this->fields).GPMKPCFEOAF + LIELFHEKDCG + iVar2;
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = iVar1 / iVar2;
    }
    iVar1 = iVar1 - iVar3 * iVar2;
    (__this->fields).GPMKPCFEOAF = iVar1;
    __this_02 = (__this->fields).listLabel;
    CJNHFNHJHPE = (System_String_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar1,
                             Method_System_Collections_Generic_List<string>_get_Item__);
    if (__this_02 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Events_UnityEvent_int__o *)(__this->fields)._OnValueChanged;
      if (__this_01 != (UnityEngine_Events_UnityEvent_int__o *)0x0) {
        UnityEngine_Events_UnityEvent<int>__Invoke
                  (__this_01,(__this->fields).GPMKPCFEOAF,
                   Method_UnityEngine_Events_UnityEvent<int>_Invoke__);
        if (0 < LIELFHEKDCG) {
          Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapRightKunaiAnimation
                    ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
          return;
        }
        Nekki_SF2_GUI_GeneralMenu_MenuItemButton__TapLeftKunaiAnimation
                  ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

