// Nekki.SF2.GUI.Profile.ItemsController$$ScrollToPrevCell @ RVA 0x301DE44

bool Nekki_SF2_GUI_Profile_ItemsController__ScrollToPrevCell
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,float GGMALJLKHHB,MethodInfo *method
               )

{
  uint uVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  Nekki_SF2_GUI_TableViewCell_o *x;
  
  if ((DAT_04565c2a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c2a = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._TableView;
  if (pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) {
    x = (pNVar3->fields)._LDAHBFIIBJJ_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      pNVar3 = (__this->fields)._TableView;
      if (pNVar3 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_0311deec;
      uVar1 = (__this->fields).AINAHFKFDKG - 1;
      Nekki_SF2_GUI_TableView__ScrollToCell
                (pNVar3,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),GGMALJLKHHB,(MethodInfo *)0x0);
    }
    return (bool)(~bVar2 & 1);
  }
LAB_0311deec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

