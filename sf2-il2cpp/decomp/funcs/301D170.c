// Nekki.SF2.GUI.Profile.ItemsController$$get_IsTopSubItemSelected @ RVA 0x301D170

bool Nekki_SF2_GUI_Profile_ItemsController__get_IsTopSubItemSelected
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  Nekki_SF2_GUI_TableViewCell_o *pNVar3;
  
  if ((DAT_04565c1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c1f = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields)._TableView;
  if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._TableView;
      if ((pNVar2 == (Nekki_SF2_GUI_TableView_o *)0x0) ||
         (pNVar3 = (pNVar2->fields)._LDAHBFIIBJJ_k__BackingField,
         pNVar3 == (Nekki_SF2_GUI_TableViewCell_o *)0x0)) goto LAB_0311d20c;
      if ((pNVar3->fields).FIMCNHGPCNA == 0) {
        return true;
      }
    }
    return (__this->fields).AINAHFKFDKG == 0;
  }
LAB_0311d20c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

