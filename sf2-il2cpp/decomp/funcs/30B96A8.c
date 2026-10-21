// Nekki.SF2.GUI.TextPic$$get_HasGlyphs @ RVA 0x30B96A8

bool Nekki_SF2_GUI_TextPic__get_HasGlyphs(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *pNVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = __this;
  if ((DAT_04566218 & 1) == 0) {
    auVar2 = FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_get_Count__);
    DAT_04566218 = 1;
  }
  pNVar1 = (__this->fields).NMHDAIIIHFP;
  if (pNVar1 != (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *)0x0) {
    return 0 < *(int *)&pNVar1[1].klass;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar2._0_8_,auVar2._8_8_);
}

