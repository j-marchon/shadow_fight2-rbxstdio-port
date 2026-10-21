// Nekki.SF2.GUI.Profile.SubItem$$.ctor @ RVA 0x359BC3C

void Nekki_SF2_GUI_Profile_SubItem___ctor
               (Nekki_SF2_GUI_Profile_SubItem_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  undefined8 uVar2;
  
  if ((DAT_04568dcc & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568dcc = 1;
    method = extraout_x1;
  }
  uVar2 = NEON_fmov(0x3f800000,4);
  (__this->fields).FOIKKEEIOBP = true;
  (__this->fields).GJFHNJFGBKE = (float)(int)uVar2;
  (__this->fields).NAPGLBIIEJP = (float)(int)((ulong)uVar2 >> 0x20);
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGENAMAJALB_TypeInfo,method);
  }
  pSVar1 = MGENAMAJALB__CDEFMBKAPPC((MethodInfo *)0x0);
  (__this->fields).CNMMJHJNNAJ = pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).CNMMJHJNNAJ);
  (__this->fields).COCAGDPOPLL = StringLiteral_1;
  thunk_FUN_01c20e04(&(__this->fields).COCAGDPOPLL);
  (__this->fields).BBGEFCIPNAM = 1.0;
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}

