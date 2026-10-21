// Nekki.SF2.Core.Fights.Controls.Switch.ProgressButtonSwitch$$get_IsFull @ RVA 0x31713F8

bool Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch__get_IsFull
               (Nekki_SF2_Core_Fights_Controls_Switch_ProgressButtonSwitch_o *__this,
               MethodInfo *method)

{
  if ((DAT_04566925 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_04566925 = 1;
  }
  return ABS(100.0 - (__this->fields).MOPCMOLEEIN) <
         UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
}

