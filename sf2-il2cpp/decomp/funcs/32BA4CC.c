// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$SelecUpItem @ RVA 0x32BA4CC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelecUpItem
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  System_Collections_Generic_List_MenuItemButton__o *__this_00;
  UnityEngine_Component_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *in_x3;
  int32_t index;
  int iVar5;
  
  if ((DAT_0456747f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    DAT_0456747f = 1;
  }
  __this_00 = (__this->fields)._buttons;
  if (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
    iVar5 = (__this_00->fields)._size;
    if (iVar5 < 1) {
      return;
    }
    index = (__this->fields).selection;
    iVar5 = iVar5 + 1;
    do {
      iVar1 = (__this_00->fields)._size;
      iVar3 = index + iVar1 + -1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar3 / iVar1;
      }
      index = iVar3 - iVar2 * iVar1;
      __this_01 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,index,
                             Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
      if ((__this_01 == (UnityEngine_Component_o *)0x0) ||
         (__this_02 = UnityEngine_Component__get_gameObject(__this_01,(MethodInfo *)0x0),
         __this_02 == (UnityEngine_GameObject_o *)0x0)) break;
      bVar4 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
      if (bVar4) {
        Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt(__this,index,true,in_x3);
        return;
      }
      iVar5 = iVar5 + -1;
      if (iVar5 < 2) {
        return;
      }
      __this_00 = (__this->fields)._buttons;
    } while (__this_00 != (System_Collections_Generic_List_MenuItemButton__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

