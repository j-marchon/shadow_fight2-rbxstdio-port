// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$.ctor @ RVA 0x32ECF44

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel___ctor
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MenuMaterialUI__o *__this_00;
  System_Collections_Generic_List_MenuMaterialUI__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033ecf4c to 034ecfeb has its CatchHandler @ 033ecd40 */
  if ((DAT_04567649 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuMaterialUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MenuMaterialUI>_TypeInfo);
    DAT_04567649 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_MenuMaterialUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MenuMaterialUI>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MenuMaterialUI>__ctor__);
  ppSVar1 = &(__this->fields).MIOLFPIJMDH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  Nekki_SF2_GUI_UIInitializable___ctor((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
  return;
}

