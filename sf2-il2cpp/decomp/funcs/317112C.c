// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$set_Progress @ RVA 0x317112C

/* WARNING: Removing unreachable block (ram,0x0327117c) */

void Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__set_Progress
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               float CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_04566922 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04566922 = 1;
    method = extraout_x1;
  }
  if (CJNHFNHJHPE < 0.0) {
    CJNHFNHJHPE = 0.0;
  }
  if (ABS((__this->fields).MOPCMOLEEIN - CJNHFNHJHPE) <=
      UnityEngine_Mathf_TypeInfo->static_fields->Epsilon) {
    return;
  }
  (__this->fields).MOPCMOLEEIN = CJNHFNHJHPE;
  Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__GJGDEBECOEO(__this,method);
  return;
}

