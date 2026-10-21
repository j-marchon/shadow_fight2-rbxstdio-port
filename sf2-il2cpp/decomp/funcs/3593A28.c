// Nekki.SF2.GUI.Map.MapButtonsPanel$$.ctor @ RVA 0x3593A28

void Nekki_SF2_GUI_Map_MapButtonsPanel___ctor
               (Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MapButton__o *__this_00;
  System_Collections_Generic_List_MapButton__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568d8b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MapButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MapButton>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04568d8b = 1;
    method = extraout_x1;
  }
  (__this->fields)._MaxImageSize = 320.0;
  __this_00 = (System_Collections_Generic_List_MapButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MapButton>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MapButton>__ctor__);
  ppSVar1 = &(__this->fields).KMGFNKKPGIH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

