// Nekki.SF2.GUI.Dialogs.Raids.RaidBaseDialog$$GIENGNEGHPJ @ RVA 0x34C9C54

void Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *__this,System_String_o *PCPECHHMLEC,
               System_String_o *DOEJEADIJEJ,System_String_o *BECCMDCHEOP,int32_t JFLAKNAGBEL,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *__this_00;
  System_Action_o *CJNHFNHJHPE;
  
  if ((DAT_04568656 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_EBOBLCDANEJ__);
    DAT_04568656 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,PCPECHHMLEC,DOEJEADIJEJ,BECCMDCHEOP,
             JFLAKNAGBEL,(MethodInfo *)0x0);
  __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
    KKLJIDJBFEI__HKAALOKPBPG(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

