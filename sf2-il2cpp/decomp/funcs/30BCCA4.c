// Nekki.SF2.GUI.Common.SceneMenuScroll$$GDFABJELKAN @ RVA 0x30BCCA4

void Nekki_SF2_GUI_Common_SceneMenuScroll__GDFABJELKAN
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,int32_t NAIJBCMHBFK,
               int32_t OPHMGAKOJLP,int32_t AAJGEHHPMGH,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_SectionButton_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Common_SceneSelector_o *pNVar2;
  
  if (((__this->fields).IAAABJBDEMK == 1) && ((__this->fields).GLDOIEEOPCB == 0)) {
    if ((AAJGEHHPMGH == 0x17) || (AAJGEHHPMGH == 1)) {
      bVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll__MNKFDLHJPAA
                        (__this,1,(MethodInfo *)(ulong)(uint)OPHMGAKOJLP);
      if (!bVar1) {
        EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Common_SceneMenuScroll__Close(__this,method_00);
        return;
      }
    }
    else if (AAJGEHHPMGH == 0) {
      pNVar2 = (__this->fields).NFFFEDGMBIL;
      if (pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
        bVar1 = AKJJAPEHKCG__MNKFDLHJPAA
                          ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._Button,(MethodInfo *)0x0
                          );
        if (bVar1) {
          return;
        }
        EDFDANKEBGF__KHJIBEJGONJ(1.0,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).NFFFEDGMBIL;
        if ((pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) &&
           (__this_00 = (pNVar2->fields)._Button,
           __this_00 != (Nekki_SF2_GUI_Common_SectionButton_o *)0x0)) {
          SFButton__SetStateNormal((SFButton_o *)__this_00,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).NFFFEDGMBIL;
          if (pNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
            LJLLAKHOFFF__AKKDDJDBIBD
                      ((UnityEngine_UI_Selectable_o *)(pNVar2->fields)._Button,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

