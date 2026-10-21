// Nekki.SF2.GUI.Common.SceneMenuScroll$$GKHAKLDEIJI @ RVA 0x30BB4FC

void Nekki_SF2_GUI_Common_SceneMenuScroll__GKHAKLDEIJI
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)(uint)OPHMGAKOJLP;
  if (AAJGEHHPMGH == 0x16) {
    bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA(__this,0,method_00);
    if (!bVar1) {
      EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
      JJPNLEPEAFM__AGMHOCPINKD((MethodInfo *)0x0);
      return;
    }
  }
  else if ((AAJGEHHPMGH == 0x17) &&
          (bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA(__this,1,method_00), !bVar1)) {
    EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Common_SceneMenuScroll__Open(__this,0,method_00);
    return;
  }
  return;
}

