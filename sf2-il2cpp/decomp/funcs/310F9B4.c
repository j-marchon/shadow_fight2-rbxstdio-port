// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToNewItem @ RVA 0x310F9B4

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToNewItem
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_o *__this_00;
  System_Action_T__o *action;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_Fields *pNVar1;
  HOOAAGABMBL_o *pHVar2;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  
  if ((DAT_04566577 & 1) == 0) {
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_DBIDGAECFFC__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_TypeInfo);
    DAT_04566577 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_TypeInfo,method);
  Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Shop_ItemsPanel_MEFANKPCKKH_o *)0x0) {
    pNVar1 = &__this_00->fields;
    pNVar1->itemToSelect = (HOOAAGABMBL_o *)0x0;
    thunk_FUN_01c20e04(pNVar1,0);
    __this_01 = (__this->fields).BAADKBDJJPJ;
    action = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
      method_00 = Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__;
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_01,action,
                 (MethodInfo_26E57EC *)Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__
                );
      pHVar2 = pNVar1->itemToSelect;
      if (pHVar2 != (HOOAAGABMBL_o *)0x0) {
        Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToItem
                  (__this,(pHVar2->fields)._COIPKAKHDFP_k__BackingField,0.0,method_00);
      }
      return pHVar2 != (HOOAAGABMBL_o *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

