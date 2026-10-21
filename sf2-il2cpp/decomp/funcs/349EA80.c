// Nekki.SF2.GUI.Map.MapPanel$$SelectBattle @ RVA 0x349EA80

void Nekki_SF2_GUI_Map_MapPanel__SelectBattle
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,float PNEIGGOFIOA,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_ZoneScrollItem__o *__this_01;
  Nekki_SF2_GUI_Map_BattleButton_o *exists;
  OOMHDDBCBJP_o *pOVar2;
  Nekki_SF2_GUI_Shop_Scroll_o *pNVar3;
  Nekki_SF2_GUI_BaseScrollItem_o *x;
  OOMHDDBCBJP_o *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  pOVar2 = BANHBMINMMP;
  if ((DAT_0456847f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456847f = 1;
    pOVar2 = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    __this_01 = Nekki_SF2_GUI_Map_MapPanel__GetZones(__this,(MethodInfo *)pOVar2);
    if (__this_01 == (System_Collections_Generic_List_ZoneScrollItem__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<ZoneScrollItem>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_MoveNext__
                        );
      __this_00 = local_70.fields._current;
      if (!bVar1) goto LAB_0359ec04;
      if ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_70.fields._current ==
          (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      exists = Nekki_SF2_GUI_Map_ZoneScrollItem__GetButtonByBattle
                         ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)local_70.fields._current,BANHBMINMMP
                          ,(MethodInfo *)0x0);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
    } while (!bVar1);
    pOVar2 = Nekki_SF2_GUI_Map_ZoneScrollItem__ChooseClosestBattle
                       ((Nekki_SF2_GUI_Map_ZoneScrollItem_o *)__this_00,BANHBMINMMP,
                        (MethodInfo *)0x0);
    ((Nekki_SF2_GUI_Map_ZoneScrollItem_Fields *)((long)__this_00 + 0x10))->KOGBPIPIKFA = pOVar2;
    thunk_FUN_01c20e04(&((Nekki_SF2_GUI_Map_ZoneScrollItem_Fields *)((long)__this_00 + 0x10))->
                        KOGBPIPIKFA);
    pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
    if (pNVar3 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    x = Nekki_SF2_GUI_Shop_Scroll__GetCurrentItem(pNVar3,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0
                      );
    if (bVar1) {
      pNVar3 = (__this->fields)._IENOFGNDANH_k__BackingField;
      if (pNVar3 == (Nekki_SF2_GUI_Shop_Scroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Shop_Scroll__ScrollToItem
                (pNVar3,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,PNEIGGOFIOA,(MethodInfo *)0x0);
    }
LAB_0359ec04:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<ZoneScrollItem>_Dispose__
              );
  }
  return;
}

