// Nekki.SF2.GUI.Dialogs.Raids.ScrollDialog$$EDKHOHMHCBD @ RVA 0x3128280

void Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__EDKHOHMHCBD
               (Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_Slider_o *pUVar2;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  bVar1 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__CanEnableScroll
                    (__this,(MethodInfo *)OHNNFPGGEFK);
  if (!bVar1) {
    return;
  }
  if (OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    fVar5 = (OHNNFPGGEFK->fields)._delta_k__BackingField.fields.y;
    if (fVar5 == 0.0) {
      return;
    }
    fVar3 = Nekki_SF2_GUI_Dialogs_Raids_ScrollDialog__HEEKCIGGGFA(__this,method_00);
    pUVar2 = (__this->fields)._slider;
    if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
      fVar4 = UnityEngine_UI_Slider__get_normalizedValue(pUVar2,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._slider;
      if (pUVar2 != (UnityEngine_UI_Slider_o *)0x0) {
        fVar4 = fVar5 / fVar3 + fVar4;
        fVar5 = fVar4;
        if (1.0 < fVar4) {
          fVar5 = 1.0;
        }
        if (fVar4 < 0.0) {
          fVar5 = 0.0;
        }
        UnityEngine_UI_Slider__set_normalizedValue(pUVar2,fVar5,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

