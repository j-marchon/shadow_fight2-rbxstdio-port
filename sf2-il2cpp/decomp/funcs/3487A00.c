// Nekki.SF2.Core.Fights.Controls.Switch.BossAbilityHintSwitch$$JCDGMAEDFIF @ RVA 0x3487A00

void Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch__JCDGMAEDFIF
               (Nekki_SF2_Core_Fights_Controls_Switch_BossAbilityHintSwitch_o *__this,
               int32_t BMPJIDHGCBN,System_String_o *LOAHEPDBFAO,int32_t CGLFKKMBHCN,
               MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  
  if ((DAT_045683c0 & 1) == 0) {
    FUN_01bab630(&StringLiteral_12560);
    FUN_01bab630(&StringLiteral_12563);
    DAT_045683c0 = 1;
  }
  if (((CGLFKKMBHCN != 0x67) && (iVar2 = (__this->fields).AFEOEPFDNLI, iVar2 != -1)) &&
     (iVar2 == BMPJIDHGCBN)) {
    __this_00 = (__this->fields)._HintImage;
    bVar3 = IEPJHKEBFEB__MMMKDKHNGLI(CGLFKKMBHCN,(MethodInfo *)0x0);
    if (__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      puVar1 = &StringLiteral_12560;
      if (!bVar3) {
        puVar1 = &StringLiteral_12563;
      }
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(System_String_o *)*puVar1,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

