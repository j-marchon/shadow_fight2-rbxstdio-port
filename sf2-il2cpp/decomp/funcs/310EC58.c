// Nekki.SF2.GUI.Shop.ItemsPanel$$ScrollToLastItemWithoutEnchantments @ RVA 0x310EC58

bool Nekki_SF2_GUI_Shop_ItemsPanel__ScrollToLastItemWithoutEnchantments
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Func_HOOAAGABMBL__bool__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *in_x2;
  System_Func_HOOAAGABMBL__bool__o *DFHDGELMHHG;
  
  if ((DAT_0456656a & 1) == 0) {
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_DKEAODMCHIG__);
    FUN_01bab630(&Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo);
    DAT_0456656a = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  DFHDGELMHHG = Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__73_0;
  if (DFHDGELMHHG == (System_Func_HOOAAGABMBL__bool__o *)0x0) {
    if ((Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo,method);
    }
    DFHDGELMHHG = (System_Func_HOOAAGABMBL__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    in_x2 = Method_Nekki_SF2_GUI_Shop_ItemsPanel_<>c_DKEAODMCHIG__;
    System_Func<object,_bool>___ctor();
    ppSVar2 = &Nekki_SF2_GUI_Shop_ItemsPanel_<>c_TypeInfo->static_fields->__9__73_0;
    *ppSVar2 = DFHDGELMHHG;
    thunk_FUN_01c20e04(ppSVar2,DFHDGELMHHG);
  }
  if (__this != (Nekki_SF2_GUI_Shop_ItemsPanel_o *)0x0) {
    bVar1 = Nekki_SF2_GUI_Shop_ItemsPanel__BDABFHFADAC(__this,DFHDGELMHHG,in_x2);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

