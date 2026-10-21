// Nekki.SF2.GUI.SimpleScroll$$add_OnEndDragging @ RVA 0x302AFC8

void Nekki_SF2_GUI_SimpleScroll__add_OnEndDragging
               (Nekki_SF2_GUI_SimpleScroll_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = CJNHFNHJHPE;
  auVar1._0_8_ = __this;
  if ((DAT_04565cbc & 1) == 0) {
    auVar1 = FUN_01bab630(&System_Action_TypeInfo);
    DAT_04565cbc = 1;
  }
  FUN_03f939c8(auVar1._0_8_,auVar1._8_8_);
  return;
}

