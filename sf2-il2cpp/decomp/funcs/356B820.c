// Nekki.SF2.GUI.Menu.MainMenu$$KGNGNPNKAID @ RVA 0x356B820

void Nekki_SF2_GUI_Menu_MainMenu__KGNGNPNKAID
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,int32_t HJEBKCDDBAB,MethodInfo *method)

{
  BackKeyManager_o *pBVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  method_00 = (MethodInfo *)(ulong)(uint)HJEBKCDDBAB;
  if ((DAT_04568c29 & 1) == 0) {
    FUN_01bab630(&NGKBNOEJLPH_TypeInfo);
    DAT_04568c29 = 1;
    method_00 = extraout_x1;
  }
  if ((__this->fields).MAFKPOLHNNE == (float)HJEBKCDDBAB) {
    return;
  }
  (__this->fields).MAFKPOLHNNE = (float)HJEBKCDDBAB;
  if (HJEBKCDDBAB == 0) {
    Nekki_SF2_GUI_Menu_MainMenu__UpdateScrollMenu(__this,method_00);
    return;
  }
  if (HJEBKCDDBAB == 2) {
    if ((__this->fields).super.field_0x17 != '\0') {
      NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN = true;
    }
    pBVar1 = BackKeyManager__get_Instance((MethodInfo *)0x0);
    if (pBVar1 != (BackKeyManager_o *)0x0) {
      BackKeyManager__RemoveBackKeyController(pBVar1,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (HJEBKCDDBAB != 1) {
      return;
    }
    (__this->fields).super.field_0x17 = 1;
    NGKBNOEJLPH_TypeInfo->static_fields->DBLJKOLFBLN = false;
    pBVar1 = BackKeyManager__get_Instance((MethodInfo *)0x0);
    if (pBVar1 != (BackKeyManager_o *)0x0) {
      BackKeyManager__AddBackKeyController(pBVar1,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

