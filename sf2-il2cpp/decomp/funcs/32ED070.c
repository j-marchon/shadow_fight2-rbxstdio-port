// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$Refresh @ RVA 0x32ED070

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__Refresh
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MenuMaterialUI__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456764b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_get_Current__);
                    /* try { // try from 033ed0b0 to 034ed0bb has its CatchHandler @ 033ecd40 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuMaterialUI>_GetEnumerator__);
                    /* try { // try from 033ed0bc to 034ed0c3 has its CatchHandler @ 033ed0c4 */
    DAT_0456764b = 1;
    method = extraout_x1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ed048 with catch @ 033ed0c4
                       catch(type#2 @ 00000000) { ... } // from try @ 033ed0bc with catch @ 033ed0c4
                        */
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 033ed0c8 to 034ed1c7 has its CatchHandler @ 033ed0c8
                       catch() { ... } // from try @ 033ed0c8 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed2e0 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed388 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed390 with catch @ 033ed0c8
                       catch() { ... } // from try @ 033ed464 with catch @ 033ed0c8 */
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIOLFPIJMDH;
  if (__this_00 != (System_Collections_Generic_List_MenuMaterialUI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuMaterialUI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<MenuMaterialUI>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)0x0) break;
      Nekki_SF2_GUI_Menu_MenuMaterialUI__Refresh
                ((Nekki_SF2_GUI_Menu_MenuMaterialUI_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

