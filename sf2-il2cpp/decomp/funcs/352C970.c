// Nekki.SF2.GUI.Common.Credits.CreditsScreen$$Awake @ RVA 0x352C970

void Nekki_SF2_GUI_Common_Credits_CreditsScreen__Awake
               (Nekki_SF2_GUI_Common_Credits_CreditsScreen_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  
  Nekki_SF2_GUI_Common_Credits_CreditsScreen__DNDJHELACIG(__this,method);
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__AddBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

