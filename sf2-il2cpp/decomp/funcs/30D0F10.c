// Nekki.SF2.GUI.ItemsScroll$$OnEndDrag @ RVA 0x30D0F10

void Nekki_SF2_GUI_ItemsScroll__OnEndDrag
               (Nekki_SF2_GUI_ItemsScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  MethodInfo *method_00;
  Nekki_SF2_GUI_BaseScrollContent_o *pNVar1;
  Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_04566301 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04566301 = 1;
  }
  if ((__this->fields).super.field_0x111 != '\0') {
    Nekki_SF2_GUI_SFScrollRect__OnEndDrag
              ((Nekki_SF2_GUI_SFScrollRect_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
    (__this->fields).CLEJOEBNAHF = false;
    if ((__this->fields).AutoscrollIsOn != false) {
      fVar2 = (__this->fields).super.CDHNBOKGCCN.fields.x;
      fVar3 = (__this->fields).super.CDHNBOKGCCN.fields.y;
      fVar4 = fVar2 * fVar2 + fVar3 * fVar3;
      if (0.001 < fVar4) {
        if ((__this->fields).super.m_Horizontal == false) {
          fVar2 = 0.0;
          if ((__this->fields).super.m_Vertical != false) {
            fVar2 = fVar3 * 0.5;
          }
        }
        else {
          fVar2 = fVar2 * 0.5;
        }
        pNVar1 = (__this->fields).scrollContent;
        if (pNVar1 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
          IKKAMAMLIKA = (pNVar1->fields)._SelectedItem_k__BackingField;
          if (DAT_045602fb == '\0') {
            FUN_01bab630(&System_Math_TypeInfo);
            DAT_045602fb = '\x01';
          }
          if (((System_Math_TypeInfo->_2).cctor_finished == 0) &&
             (thunk_FUN_01ba7564(), (System_Math_TypeInfo->_2).cctor_finished == 0)) {
            thunk_FUN_01ba7564();
          }
          if (ABS((__this->fields)._MinScrollVelocity) < ABS(SQRT(fVar4))) {
            pNVar1 = (__this->fields).scrollContent;
            if (pNVar1 == (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) goto LAB_031d10ec;
            IKKAMAMLIKA = Nekki_SF2_GUI_BaseScrollContent__GetNearestItem
                                    (pNVar1,-fVar2,(MethodInfo *)0x0);
          }
          pNVar1 = (__this->fields).scrollContent;
          if (pNVar1 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            fVar2 = Nekki_SF2_GUI_BaseScrollContent__GetDistanceToCenter
                              (pNVar1,IKKAMAMLIKA,(MethodInfo *)0x0);
            fVar4 = (__this->fields).super.CDHNBOKGCCN.fields.x;
            fVar3 = (__this->fields).super.CDHNBOKGCCN.fields.y;
            if (DAT_045602fb == '\0') {
              FUN_01bab630(&System_Math_TypeInfo);
              DAT_045602fb = '\x01';
            }
            if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            fVar2 = ABS((float)(int)(fVar2 / SQRT(fVar4 * fVar4 + fVar3 * fVar3)));
            if (0.5 < fVar2) {
              fVar2 = 0.5;
            }
            Nekki_SF2_GUI_ItemsScroll__ScrollToItem(__this,IKKAMAMLIKA,fVar2,method_00);
            return;
          }
        }
LAB_031d10ec:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}

