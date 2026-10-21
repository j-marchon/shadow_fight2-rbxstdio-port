// TypeDefIndex 106
// Namespace: 
// private class MenuControls.ADIEOGDNDIO
// Fields:
//   public FBBNEILNOKK LCDNJBFAOHM; // 0x10
//   public LGMNENGMMOF EDCHCICLDBD; // 0x14

// ===== public bool HBJIAILBIBE(int OPHMGAKOJLP)  [RVA 0x300F2C8]
// Nekki.SF2.GUI.Common.MenuControls.ADIEOGDNDIO$$HBJIAILBIBE @ RVA 0x300F2C8

bool Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
               (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this,int32_t OPHMGAKOJLP,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
    bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetKeyUp
                      (__this_00,OPHMGAKOJLP,(__this->fields).EDCHCICLDBD,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(FBBNEILNOKK AAJGEHHPMGH, LGMNENGMMOF IKKKILCDMMB)  [RVA 0x300ECDC]
// Nekki.SF2.GUI.Common.MenuControls.ADIEOGDNDIO$$.ctor @ RVA 0x300ECDC

void Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO___ctor
               (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this,int32_t AAJGEHHPMGH,
               int32_t IKKKILCDMMB,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).LCDNJBFAOHM = AAJGEHHPMGH;
  (__this->fields).EDCHCICLDBD = IKKKILCDMMB;
  return;
}


// ===== public bool BHHIIBFHBFK(int OPHMGAKOJLP)  [RVA 0x300F034]
// Nekki.SF2.GUI.Common.MenuControls.ADIEOGDNDIO$$BHHIIBFHBFK @ RVA 0x300F034

bool Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__BHHIIBFHBFK
               (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *__this,int32_t OPHMGAKOJLP,
               MethodInfo *method)

{
  int32_t IKKKILCDMMB;
  bool bVar1;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  
  bVar1 = DANCCJHADOA__NBEOBEKPHMN((__this->fields).LCDNJBFAOHM,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  IKKKILCDMMB = (__this->fields).EDCHCICLDBD;
  if (bVar1) {
    bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetKey
                      (__this_00,OPHMGAKOJLP,IKKKILCDMMB,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = Nekki_SF2_Core_InputControllers_GamePadController__GetKeyDown
                    (__this_00,OPHMGAKOJLP,IKKKILCDMMB,(MethodInfo *)0x0);
  return bVar1;
}

