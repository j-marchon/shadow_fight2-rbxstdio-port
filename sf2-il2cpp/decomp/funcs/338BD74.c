// Nekki.SF2.GUI.Menu.MenuScroll$$OnEndDrag @ RVA 0x338BD74

void Nekki_SF2_GUI_Menu_MenuScroll__OnEndDrag
               (Nekki_SF2_GUI_Menu_MenuScroll_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool_conflict bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  (__this->fields).BDFGFOCANII = false;
  if ((__this->fields).KDBFJLCCJHC == false) {
    fVar6 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,(MethodInfo *)OHNNFPGGEFK);
    method_00 = extraout_x1_00;
  }
  else {
    fVar6 = (__this->fields).FDFCNIMNHFK;
    fVar3 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,(MethodInfo *)OHNNFPGGEFK);
    fVar6 = fVar6 - fVar3;
    method_00 = extraout_x1;
  }
  fVar7 = (__this->fields).FDFCNIMNHFK;
  fVar4 = (__this->fields).JICCBHGBHCI;
  bVar1 = (__this->fields).KDBFJLCCJHC;
  fVar3 = Nekki_SF2_GUI_Menu_MenuScroll__GetCurrentLength(__this,method_00);
  fVar5 = (__this->fields).FDFCNIMNHFK;
  bVar2 = bVar1 != (fVar7 * fVar4) / 100.0 < fVar6;
  if (bVar2) {
    fVar3 = fVar7 - fVar3;
  }
  (__this->fields).KDBFJLCCJHC = bVar2;
  fVar6 = 0.0;
  if (bVar2) {
    fVar6 = fVar5;
  }
  Nekki_SF2_GUI_Menu_MenuScroll__AEEDBFCIFIA(__this,fVar6,(fVar3 / fVar5) * 0.3,method_01);
  return;
}

