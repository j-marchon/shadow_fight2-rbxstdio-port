// Nekki.SF2.Core.Fights.Controls.GameController$$Refresh @ RVA 0x33A4538

void Nekki_SF2_Core_Fights_Controls_GameController__Refresh
               (Nekki_SF2_Core_Fights_Controls_GameController_o *__this,bool IEKDLJAOKCB,
               bool PLNACNFOEAI,bool HHFCPLHHPKM,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)PLNACNFOEAI;
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsPunchEnabled(__this,true,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsKickEnabled(__this,true,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsStickEnabled(__this,true,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsMagicEnabled(__this,IEKDLJAOKCB,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsRangedEnabled(__this,PLNACNFOEAI,method_00);
  Nekki_SF2_Core_Fights_Controls_GameController__set_IsRaidChargeEnabled
            (__this,HHFCPLHHPKM,method_00);
  return;
}

