// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$RefreshHints @ RVA 0x324EBC8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__RefreshHints
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GeneralMenuList__o *pSVar1;
  Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this_00;
  Il2CppObject *pIVar2;
  
  if ((DAT_04567114 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    DAT_04567114 = 1;
  }
  pSVar1 = (__this->fields).menuList;
  if (pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) {
    __this_00 = (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar1,
                           (__this->fields).AIAODGKGPEI,
                           Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__);
    pSVar1 = (__this->fields).menuList;
    if (((pSVar1 != (System_Collections_Generic_List_GeneralMenuList__o *)0x0) &&
        (pIVar2 = System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar1,
                             (__this->fields).AIAODGKGPEI,
                             Method_System_Collections_Generic_List<GeneralMenuList>_get_Item__),
        pIVar2 != (Il2CppObject *)0x0)) &&
       (__this_00 != (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *)0x0)) {
      Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
                (__this_00,*(int32_t *)&pIVar2[3].klass,true,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

