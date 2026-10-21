// Nekki.SF2.GUI.Shop.InfoPanelContent$$GJGOBMPLAFA @ RVA 0x300A94C

void Nekki_SF2_GUI_Shop_InfoPanelContent__GJGOBMPLAFA
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  HOOAAGABMBL_o *ANMFBABEMFD;
  
  if ((DAT_04565b6a & 1) == 0) {
    FUN_01bab630(&FEPCHKMAIBL_TypeInfo);
    DAT_04565b6a = 1;
    method = extraout_x1;
  }
  ANMFBABEMFD = (__this->fields).KJBDDCNKNNE;
  if (ANMFBABEMFD != (HOOAAGABMBL_o *)0x0) {
    if ((FEPCHKMAIBL_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(FEPCHKMAIBL_TypeInfo,method);
    }
    FEPCHKMAIBL__DDKMAJOBNFM(ANMFBABEMFD,(System_Action_int__int__o *)0x0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Shop_InfoPanelContent__UpdateContent(__this,method_00);
    return;
  }
  return;
}

