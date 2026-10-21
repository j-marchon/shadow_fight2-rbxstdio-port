// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$FNMNFEGFOEK @ RVA 0x3300A50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__FNMNFEGFOEK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  BKKENCMPLLF_o *__this_00;
  
  __this_00 = (__this->fields).FLLHHEODKPH;
  if ((__this_00 != (BKKENCMPLLF_o *)0x0) &&
     (pSVar1 = BKKENCMPLLF__MJBHKOJAFOH(__this_00,(MethodInfo *)0x0),
     pSVar1 != (System_String_o *)0x0)) {
    pSVar1 = System_String__TrimEnd(pSVar1,(MethodInfo *)0x0);
    BKKENCMPLLF__BOENJKAFOEC(__this_00,pSVar1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

