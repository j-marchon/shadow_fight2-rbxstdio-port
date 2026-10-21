// Nekki.SF2.GUI.Shop.ItemsPanel$$set_CurrentItems @ RVA 0x310DBC0

void Nekki_SF2_GUI_Shop_ItemsPanel__set_CurrentItems
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,
               System_Collections_Generic_List_HOOAAGABMBL__o *CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_TableView_o *__this_00;
  System_Collections_Generic_List_HOOAAGABMBL__o **ppSVar1;
  
  if (CJNHFNHJHPE == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    return;
  }
  Nekki_SF2_GUI_Shop_ItemsPanel__NPILGOBEDEI(__this,CJNHFNHJHPE,method);
  ppSVar1 = &(__this->fields).BAADKBDJJPJ;
  *ppSVar1 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppSVar1,CJNHFNHJHPE);
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

