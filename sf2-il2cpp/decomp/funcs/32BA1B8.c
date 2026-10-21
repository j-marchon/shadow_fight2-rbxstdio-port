// Nekki.SF2.GUI.GeneralMenu.GeneralMenuList$$SelectItemAt @ RVA 0x32BA1B8

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__SelectItemAt
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_o *__this,int32_t GCMHMONNHII,
               bool OFKBEIFPFMN,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  System_Action_MenuItemButton__o **ppSVar3;
  Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *__this_00;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_Hints_HintList_o *__this_01;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_MenuItemButton__o *pSVar5;
  System_Action_MenuItemButton__o *action;
  
                    /* catch() { ... } // from try @ 033ba138 with catch @ 033ba1bc
                       catch() { ... } // from try @ 033ba1b4 with catch @ 033ba1bc */
  if ((DAT_04567480 & 1) == 0) {
    FUN_01bab630(&System_Action<MenuItemButton>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
    FUN_01bab630(&Nekki_SF2_GUI_Common_MenuControls_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_EKCOCBIDDON__);
    FUN_01bab630(&Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo);
    DAT_04567480 = 1;
  }
  if ((__this->fields).IMECMAJEGFB == false) {
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar5 = (__this->fields)._buttons;
      if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action = Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->__9__16_0;
      if (action == (System_Action_MenuItemButton__o *)0x0) {
        if ((Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action = (System_Action_MenuItemButton__o *)
                 thunk_FUN_01bda818(System_Action<MenuItemButton>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &Nekki_SF2_GUI_GeneralMenu_GeneralMenuList_<>c_TypeInfo->static_fields->__9__16_0;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if (pSVar5 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)pSVar5,(System_Action_T__o *)action,
                   Method_System_Collections_Generic_List<MenuItemButton>_ForEach__);
        pSVar5 = (__this->fields)._buttons;
        (__this->fields).selection = GCMHMONNHII;
        if ((pSVar5 != (System_Collections_Generic_List_MenuItemButton__o *)0x0) &&
           (__this_00 = (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar5,GCMHMONNHII,
                                   Method_System_Collections_Generic_List<MenuItemButton>_get_Item__
                                  ), __this_00 != (Nekki_SF2_GUI_GeneralMenu_MenuItemButton_o *)0x0)
           ) {
          Nekki_SF2_GUI_GeneralMenu_MenuItemButton__set_Selection(__this_00,true,(MethodInfo *)0x0);
          if (OFKBEIFPFMN) {
            EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
          }
          lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<GeneralMenuScene>_get_Current__ + 0x20);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_01b81620();
          }
          if ((**(long **)(lVar2 + 0xb8) != 0) &&
             (pSVar5 = (__this->fields)._buttons,
             pSVar5 != (System_Collections_Generic_List_MenuItemButton__o *)0x0)) {
            __this_01 = *(Nekki_SF2_GUI_Common_Hints_HintList_o **)
                         (**(long **)(lVar2 + 0xb8) + 0xf0);
            pIVar4 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar5,
                                (__this->fields).selection,
                                Method_System_Collections_Generic_List<MenuItemButton>_get_Item__);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (__this_01 != (Nekki_SF2_GUI_Common_Hints_HintList_o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              Nekki_SF2_GUI_Common_Hints_HintList__ShowHints
                        (__this_01,pIVar4[4].monitor,(MethodInfo *)0x0);
              if (Nekki_SF2_GUI_Common_MenuControls_TypeInfo->static_fields->LastInputType == 0) {
                return;
              }
              Nekki_SF2_GUI_GeneralMenu_GeneralMenuList__LACIIBLENDJ
                        (__this,(__this->fields).selection,method_00);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

