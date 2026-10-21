// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$AEBCAAABENJ @ RVA 0x3171534

float Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__AEBCAAABENJ
                (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
                float KEFILECBPMF,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = KEFILECBPMF < 0.0;
  if (1.0 < KEFILECBPMF) {
    KEFILECBPMF = 1.0;
  }
  if (bVar1) {
    KEFILECBPMF = 0.0;
  }
  return KEFILECBPMF * KEFILECBPMF * 3.0 - KEFILECBPMF * KEFILECBPMF * (KEFILECBPMF + KEFILECBPMF);
}

