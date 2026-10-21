// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$JNCKDHJJBPM @ RVA 0x329D45C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__JNCKDHJJBPM
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  MethodInfo *method_00;
  OJEHKJHEBID_o *pOVar1;
  
  if ((DAT_045673a9 & 1) == 0) {
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    DAT_045673a9 = 1;
  }
  if (((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField == false) &&
     (IMMNELPBGIF != (Il2CppObject *)0x0)) {
    if (IMMNELPBGIF->klass != (Il2CppClass *)OJEHKJHEBID_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    pOVar1 = (__this->fields).FBILHKCKHEJ;
    if (pOVar1 == (OJEHKJHEBID_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (IMMNELPBGIF[1].monitor == (void *)(pOVar1->fields).ADEIKPGDIPM) {
      (__this->fields).FBILHKCKHEJ = (OJEHKJHEBID_o *)IMMNELPBGIF;
      thunk_FUN_01c20e04(&(__this->fields).FBILHKCKHEJ,IMMNELPBGIF);
      Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__LBDDPJHLKPG(__this,method_00);
      return;
    }
  }
  return;
}

