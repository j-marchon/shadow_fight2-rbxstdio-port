// Nekki.SF2.GUI.Common.PaymentUI$$IHKHIJONLCM @ RVA 0x334BE88

void Nekki_SF2_GUI_Common_PaymentUI__IHKHIJONLCM
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,BKLDKOMCOPN_o *OPAEPDIIOEB,
               MethodInfo *method)

{
  int iVar1;
  Nekki_SF2_GUI_Common_PaymentUI_o *extraout_x0;
  MethodInfo *in_x4;
  undefined8 *puVar2;
  
  if ((DAT_04567a02 & 1) == 0) {
    FUN_01bab630(&StringLiteral_14639);
    __this = (Nekki_SF2_GUI_Common_PaymentUI_o *)FUN_01bab630(&StringLiteral_4592);
    DAT_04567a02 = 1;
  }
  if (OPAEPDIIOEB == (BKLDKOMCOPN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  iVar1 = (OPAEPDIIOEB->fields).MAHOIPBGLJJ;
  if (iVar1 == 4) {
    puVar2 = &StringLiteral_14639;
  }
  else {
    if (iVar1 == 6) goto LAB_0344befc;
    puVar2 = &StringLiteral_4592;
  }
  method = (MethodInfo *)0x0;
  Nekki_SF2_GUI_Common_PaymentUI__CBMPCEPMFHP
            (__this,0x14,(HOOAAGABMBL_o *)0x0,(System_String_o *)*puVar2,in_x4);
  __this = extraout_x0;
LAB_0344befc:
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this,false,method);
  return;
}

