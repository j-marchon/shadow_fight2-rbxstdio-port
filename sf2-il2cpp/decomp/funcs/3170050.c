// RaidInfoPrize.Prize$$GIENGNEGHPJ @ RVA 0x3170050

void RaidInfoPrize_Prize__GIENGNEGHPJ
               (RaidInfoPrize_Prize_o *__this,float IJCKKCPBLGP,float LPJKDDIMOEK,MethodInfo *method
               )

{
  int iVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  MethodInfo *extraout_x1;
  undefined8 *puVar2;
  
  if ((DAT_04566917 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10799);
    FUN_01bab630(&StringLiteral_10798);
    FUN_01bab630(&StringLiteral_10797);
    DAT_04566917 = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).PrizeNumber;
  (__this->fields).BaseRating = IJCKKCPBLGP;
  (__this->fields).PosRating = LPJKDDIMOEK;
  if (iVar1 == 2) {
    __this_00 = (__this->fields).Line;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327011c;
    puVar2 = &StringLiteral_10797;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).Line;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_0327011c;
    puVar2 = &StringLiteral_10799;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    __this_00 = (__this->fields).Line;
    if (__this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
LAB_0327011c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(0,method);
    }
    puVar2 = &StringLiteral_10798;
  }
  Nekki_SF2_GUI_ResolutionImage__set_SpriteName
            (__this_00,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return;
}

