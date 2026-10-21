// Nekki.SF2.GUI.Profile.ItemsController$$get_IsBottomSubItemSelected @ RVA 0x301DEF0

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsBottomSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  Nekki_SF2_GUI_TableViewCell_o *pNVar5;
  
  if ((DAT_04565c2b & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c2b = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    pNVar5 = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pNVar4 = (__this->fields)._TableView;
      if ((pNVar4 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar5 = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar5 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_0311dfb0;
      iVar1 = (pNVar5->fields).FIMCNHGPCNA;
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
  }
LAB_0311dfb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

