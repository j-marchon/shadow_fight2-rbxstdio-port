// Nekki.SF2.GUI.GeneralMenu.MenuItemVideo$$KCAPGAALIDN @ RVA 0x34CACCC

bool Nekki_SF2_GUI_GeneralMenu_MenuItemVideo__KCAPGAALIDN
               (Nekki_SF2_GUI_GeneralMenu_MenuItemVideo_o *__this,System_String_o *MAFHEJCDJLH,
               MethodInfo *method)

{
  bool bVar1;
  FGKGKDEJCOG_o *__this_00;
  
  if ((DAT_04568666 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568666 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565e59 == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565e59 = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->EIHHKABBIMJ;
  if (__this_00 != (FGKGKDEJCOG_o *)0x0) {
    bVar1 = FGKGKDEJCOG__KPAEAHPADBL(__this_00,MAFHEJCDJLH,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

