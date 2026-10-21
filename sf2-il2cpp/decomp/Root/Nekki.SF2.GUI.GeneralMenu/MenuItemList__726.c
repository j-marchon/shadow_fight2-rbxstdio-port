// TypeDefIndex 726
// Namespace: Nekki.SF2.GUI.GeneralMenu
// public class MenuItemList : MenuItemButton
// Fields:
//   private List<string> _list; // 0x78
//   private LabelAlias listLabel; // 0x80
//   private MenuItemList.ValueChangeEvent _OnValueChanged; // 0x88
//   private int GPMKPCFEOAF; // 0x90

// ===== public List<string> get_List()  [RVA 0x3046444]
// Nekki.SF2.GUI.GeneralMenu.MenuItemList$$get_List @ RVA 0x3046444

System_Collections_Generic_List_string__o *
Nekki_SF2_GUI_GeneralMenu_MenuItemList__get_List
          (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *__this,MethodInfo *method)

{
  return (__this->fields)._list;
}


// ===== public MenuItemList.ValueChangeEvent get_OnValueChanged()  [RVA 0x304644C]
// Nekki.SF2.GUI.GeneralMenu.MenuItemList$$get_OnValueChanged @ RVA 0x304644C

Nekki_SF2_GUI_GeneralMenu_MenuItemList_ValueChangeEvent_o *
Nekki_SF2_GUI_GeneralMenu_MenuItemList__get_OnValueChanged
          (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *__this,MethodInfo *method)

{
  return (__this->fields)._OnValueChanged;
}


// ===== protected override void Awake()  [RVA 0x3046454]
// Nekki.SF2.GUI.GeneralMenu.MenuItemList$$Awake @ RVA 0x3046454

void Nekki_SF2_GUI_GeneralMenu_MenuItemList__Awake
               (Nekki_SF2_GUI_GeneralMenu_MenuItemList_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton__Awake
            ((Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void ChangeListIndex(int LIELFHEKDCG)  [RVA 0x304645C]
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


// ===== public void .ctor()  [RVA 0x304653C]
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

