// Nekki.SF2.GUI.Shop.ShopScene$$UpdateModelIfNeed @ RVA 0x343355C

void Nekki_SF2_GUI_Shop_ShopScene__UpdateModelIfNeed
               (Nekki_SF2_GUI_Shop_ShopScene_o *__this,HOOAAGABMBL_o *CAIFMHMOEEP,MethodInfo *method
               )

{
  bool bVar1;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar2;
  Nekki_SF2_Core_Fights_ModelContainer_o *__this_00;
  
  if ((DAT_0456817c & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456817c = 1;
  }
  __this_00 = (__this->fields)._ModelContainer;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 != (Nekki_SF2_Core_Fights_ModelContainer_o *)0x0)) {
    bVar1 = Nekki_SF2_Core_Fights_ModelContainer__IsItemDiffer
                      (__this_00,(pAVar2->fields).MFLNIMCFPDK,(MethodInfo *)0x0);
    if (bVar1) {
      Nekki_SF2_GUI_Shop_ShopScene__FJHEDBMBEFI(__this,CAIFMHMOEEP,4,in_x3);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

