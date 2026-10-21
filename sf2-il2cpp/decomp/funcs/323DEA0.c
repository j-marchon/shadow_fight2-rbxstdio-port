// Nekki.SF2.GUI.SFScrollRect$$OnEndDrag @ RVA 0x323DEA0

void Nekki_SF2_GUI_SFScrollRect__OnEndDrag
               (Nekki_SF2_GUI_SFScrollRect_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    if ((OHNNFPGGEFK->fields)._button_k__BackingField == 0) {
      (__this->fields).EKGCFOHOBKN = false;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

