// Nekki.SF2.GUI.Shop.ItemsPanel$$NPILGOBEDEI @ RVA 0x310DC10

void Nekki_SF2_GUI_Shop_ItemsPanel__NPILGOBEDEI
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Collections_Generic_List_HOOAAGABMBL__o *BCECKFJCLKB,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *__this_00;
  System_Comparison_T__o *comparison;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04566563 & 1) == 0) {
    FUN_01bab630(&System_Comparison<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Sort__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_PJLHIKOOGNO__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_TypeInfo);
    DAT_04566563 = 1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_TypeInfo);
  Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_PBJGFHOABAC_o *)0x0) {
    (__this_00->fields).p_items = BCECKFJCLKB;
    thunk_FUN_01c20e04(&__this_00->fields,BCECKFJCLKB);
    if ((__this->fields).DisableSorting != false) {
      return;
    }
    __this_01 = (__this_00->fields).p_items;
    comparison = (System_Comparison_T__o *)
                 thunk_FUN_01bda818(System_Comparison<HOOAAGABMBL>_TypeInfo);
    System_Comparison<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      System_Collections_Generic_List<object>__Sort
                ((System_Collections_Generic_List_object__o *)__this_01,comparison,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_Sort__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

