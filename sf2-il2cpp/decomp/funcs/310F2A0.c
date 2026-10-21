// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsFirstCellSelected @ RVA 0x310F2A0

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsFirstCellSelected
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar2;
  
  if ((DAT_0456656e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456656e = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).HCMDPJADLOL;
    if (pNVar2 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pNVar2->fields).super.FIMCNHGPCNA == 0) {
      return true;
    }
  }
  return (__this->fields).AINAHFKFDKG == 0;
}

