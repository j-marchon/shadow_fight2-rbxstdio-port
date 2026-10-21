// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$GKHAKLDEIJI @ RVA 0x32355F8

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  method_02 = (MethodInfo *)(ulong)(uint)OPHMGAKOJLP;
  if (AAJGEHHPMGH == 1) {
    bVar1 = Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA(__this,500,method_02);
    if (!bVar1) {
      Nekki_SF2_GUI_UIModule__DeActivate((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else if (AAJGEHHPMGH == 0x15) {
    bVar1 = Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA
                      (__this,0x1f9,method_02);
    if (!bVar1) {
      Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__BKPCNIBCIJD(__this,method_01);
      return;
    }
  }
  else if ((AAJGEHHPMGH == 0x13) &&
          (bVar1 = Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__MNKFDLHJPAA
                             (__this,0x1f9,method_02), !bVar1)) {
    Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__EODGBHJEKCE(__this,method_00);
    return;
  }
  return;
}

