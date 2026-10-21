// Nekki.SF2.GUI.Fight.ComboModel$$Render @ RVA 0x332D07C

void Nekki_SF2_GUI_Fight_ComboModel__Render
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int32_t iVar3;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  
  if ((DAT_045678d5 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045678d5 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Fight_ComboModel__MFPOPOLAEHM(__this,method);
  Nekki_SF2_GUI_Fight_ComboModel__ELOPIECONBH(__this,method_00);
  iVar2 = (__this->fields).ENMLIMOGANA;
  if (0 < iVar2) {
    iVar1 = (__this->fields).BGCKGKMOJJO;
                    /* try { // try from 0342d0cc to 0352d0d3 has its CatchHandler @ 0342d1a0 */
    if (iVar1 < (__this->fields).OJGEPLNIIDP) {
      (__this->fields).BGCKGKMOJJO = iVar1 + 1;
    }
    else {
                    /* try { // try from 0342d0e0 to 0352d0ef has its CatchHandler @ 0342d19c */
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar3 = MGNPHCAAEIO__BHIHCKDOJKB((MethodInfo *)0x0);
      if (iVar3 <= iVar2) {
        Nekki_SF2_GUI_Fight_ComboModel__ELAEKEBBFCI(__this,2,in_x2);
      }
      (__this->fields).BGCKGKMOJJO = 0;
      (__this->fields).ENMLIMOGANA = 0;
    }
  }
  return;
}

