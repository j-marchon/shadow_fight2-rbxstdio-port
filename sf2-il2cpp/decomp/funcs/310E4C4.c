// Nekki.SF2.GUI.Shop.ItemsPanel$$get_IsLastCellSelected @ RVA 0x310E4C4

bool Nekki_SF2_GUI_Shop_ItemsPanel__get_IsLastCellSelected
               (Nekki_SF2_GUI_Shop_ItemsPanel_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Shop_ShopTableViewCell_o *pNVar5;
  
  if ((DAT_04566565 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566565 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).HCMDPJADLOL;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pNVar5 = (__this->fields).HCMDPJADLOL;
    if ((pNVar5 == (Nekki_SF2_GUI_Shop_ShopTableViewCell_o *)0x0) ||
       (pNVar4 = (__this->fields)._TableView, pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0))
    goto LAB_0320e57c;
    iVar1 = (pNVar5->fields).super.FIMCNHGPCNA;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    if (iVar1 == iVar3 + -1) {
      return true;
    }
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    iVar1 = (__this->fields).AINAHFKFDKG;
    iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
    return iVar1 == iVar3 + -1;
  }
LAB_0320e57c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

