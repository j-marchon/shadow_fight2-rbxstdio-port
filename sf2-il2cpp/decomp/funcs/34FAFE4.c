// Nekki.SF2.GUI.Common.Hints.HintGroup$$set_HintScheme @ RVA 0x34FAFE4

void Nekki_SF2_GUI_Common_Hints_HintGroup__set_HintScheme
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  if ((__this->fields).AKOLAICNIJF == CJNHFNHJHPE) {
    return;
  }
  (__this->fields).AKOLAICNIJF = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Hints_HintGroup__RefreshHintIDs
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}

