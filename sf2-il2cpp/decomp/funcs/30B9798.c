// Nekki.SF2.GUI.TextPic$$OnDestroy @ RVA 0x30B9798

void Nekki_SF2_GUI_TextPic__OnDestroy(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TextDebugger_o *__this_00;
  MethodInfo *method_00;
  
  UnityEngine_UI_Graphic__OnDestroy((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).IHEKNEDMHDK;
  if (__this_00 != (Nekki_SF2_GUI_TextDebugger_o *)0x0) {
    Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__ILKDIPBPEDL
              ((Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

