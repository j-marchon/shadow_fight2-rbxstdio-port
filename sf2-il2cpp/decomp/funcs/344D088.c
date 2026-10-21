// Nekki.SF2.GUI.Menu.MenuMoneyPanel$$.ctor @ RVA 0x344D088

void Nekki_SF2_GUI_Menu_MenuMoneyPanel___ctor
               (Nekki_SF2_GUI_Menu_MenuMoneyPanel_o *__this,MethodInfo *method)

{
  CNLBMDGLFCJ_o *__this_00;
  CNLBMDGLFCJ_o **ppCVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456827b & 1) == 0) {
    FUN_01bab630(&CNLBMDGLFCJ_TypeInfo);
    DAT_0456827b = 1;
    method = extraout_x1;
  }
  __this_00 = (CNLBMDGLFCJ_o *)thunk_FUN_01bda818(CNLBMDGLFCJ_TypeInfo,method);
  CNLBMDGLFCJ___ctor(__this_00,0.0,0.0,1.7976931348623157e+308,(MethodInfo *)0x0);
  if (__this_00 != (CNLBMDGLFCJ_o *)0x0) {
    (__this_00->fields).FHAPLEDFDHM = 0.1;
    ppCVar1 = &(__this->fields).FADPBJBOBFA;
    *ppCVar1 = __this_00;
    thunk_FUN_01c20e04(ppCVar1,__this_00);
    (__this->fields).OGOANIHOCBO = -0x8000000000000000;
    (__this->fields).DIIHKNHKKIJ = -0x8000000000000000;
    (__this->fields).BMNPKCFLINB = -1;
    Nekki_SF2_GUI_UIInitializable___ctor
              ((Nekki_SF2_GUI_UIInitializable_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

