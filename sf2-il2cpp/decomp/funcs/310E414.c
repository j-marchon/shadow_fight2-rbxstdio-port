// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsTutorialBlockActive @ RVA 0x310E414

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsTutorialBlockActive
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_TableView_o *__this_00;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  __this_00 = (__this->fields)._TableView;
  if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

