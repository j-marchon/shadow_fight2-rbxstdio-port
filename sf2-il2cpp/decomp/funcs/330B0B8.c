// Nekki.SF2.GUI.Menu.MenuAdvertisingButton$$OnDestroy @ RVA 0x330B0B8

void Nekki_SF2_GUI_Menu_MenuAdvertisingButton__OnDestroy
               (Nekki_SF2_GUI_Menu_MenuAdvertisingButton_o *__this,MethodInfo *method)

{
  FKDLCJJOGIP_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if ((DAT_0456777e & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Menu_MenuAdvertisingButton_GHDNMPGNLOK__);
    DAT_0456777e = 1;
  }
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__DAGFKDGOBBF(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__CBMLKIFOKJO(__this,method_00);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__ICLJOJFKBMD(__this,method_01);
    Nekki_SF2_GUI_Menu_MenuAdvertisingButton__BNFALOJINFI(__this,method_02);
    (__this->fields)._NNCECFJGBFF_k__BackingField = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

