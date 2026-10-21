// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanCell$$SetInfo @ RVA 0x306A990

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell__SetInfo
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanCell_o *__this,
               DPDNFOCBGGD_o *DKMMBMBMJBO,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *EBDIHADJDDB,MethodInfo *method)

{
  (__this->fields).NCIMPPPMKCE = EBDIHADJDDB;
  thunk_FUN_01c20e04(&(__this->fields).NCIMPPPMKCE,EBDIHADJDDB);
                    /* WARNING: Could not recover jumptable at 0x0316a9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*__this->klass[1]._1.image)(__this,DKMMBMBMJBO,__this->klass[1]._1.gc_desc);
  return;
}

