// IHDMJONELHA$$MAHFCKJGBPP @ RVA 0x353EBAC

void IHDMJONELHA__MAHFCKJGBPP(IHDMJONELHA_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_04568ae1 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568ae1 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  KFCFGKEHPNK__LKMPIPHGNKF((__this->fields).FDGJPLBDOIA,(MethodInfo *)0x0);
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0363ec54 to 0373ec7b has its CatchHandler @ 0363f01c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar2 != (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
      Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0363ecb0 to 0373ecdb has its CatchHandler @ 0363f018 */
  return;
}

