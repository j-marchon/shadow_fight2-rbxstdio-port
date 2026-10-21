// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToNextCell @ RVA 0x301D9A4

bool Nekki_SF2_GUI_Profile_ItemsController__ScrollToNextCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  Nekki_SF2_GUI_TableViewCell_o *x;
  
  if ((DAT_04565c23 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c23 = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields)._TableView;
  if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    x = (pNVar4->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
LAB_0311da50:
      return (bool)(~bVar2 & 1);
    }
    pNVar4 = (__this->fields)._TableView;
    if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      iVar1 = (__this->fields).AINAHFKFDKG;
      iVar3 = Nekki_SF2_GUI_TableView__NumberOfRows(pNVar4,(MethodInfo *)0x0);
      pNVar4 = (__this->fields)._TableView;
      if (pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) {
        iVar1 = iVar1 + 1;
        if (iVar3 + -1 <= iVar1) {
          iVar1 = iVar3 + -1;
        }
        Nekki_SF2_GUI_TableView__ScrollToCell(pNVar4,iVar1,GGMALJLKHHB,(MethodInfo *)0x0);
        goto LAB_0311da50;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

