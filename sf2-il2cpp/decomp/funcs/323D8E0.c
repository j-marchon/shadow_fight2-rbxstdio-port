// Nekki.SF2.GUI.SFScrollRect$$OnInitializePotentialDrag @ RVA 0x323D8E0

void Nekki_SF2_GUI_SFScrollRect__OnInitializePotentialDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
      }
      (__this->fields).CDHNBOKGCCN.fields =
           (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

