// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$FJIFDGEPKBH @ RVA 0x3525F08

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FJIFDGEPKBH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               NLFLMJPNOLF_o *DGCIPGMAHCL,MethodInfo *method)

{
  NLFLMJPNOLF_o **ppNVar1;
  bool bVar2;
  CJFBGEEIPBA_o *__this_00;
  MethodInfo *method_00;
  NLFLMJPNOLF_o *pNVar3;
  
  if ((((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) ||
      (DGCIPGMAHCL == (NLFLMJPNOLF_o *)0x0)) || ((__this->fields).BMFEDOFHEFE != false)) {
    return;
  }
  pNVar3 = (__this->fields).PMHMLJDMHFP;
  if (pNVar3 != (NLFLMJPNOLF_o *)0x0) {
    if ((DGCIPGMAHCL->fields).OHMDCKEDOGH != (pNVar3->fields).OHMDCKEDOGH) {
      return;
    }
    ppNVar1 = &(__this->fields).PMHMLJDMHFP;
    (__this->fields).PMHMLJDMHFP = DGCIPGMAHCL;
    thunk_FUN_01c20e04(ppNVar1,DGCIPGMAHCL);
    __this_00 = (__this->fields).ECLPCNFNJCP;
    if (__this_00 != (CJFBGEEIPBA_o *)0x0) {
      bVar2 = CJFBGEEIPBA__JJCBOPEDCBA(__this_00,DGCIPGMAHCL,(MethodInfo *)0x0);
      if (bVar2) {
        pNVar3 = *ppNVar1;
        if (pNVar3 == (NLFLMJPNOLF_o *)0x0) goto LAB_03625fbc;
        if ((pNVar3->fields).BHAOPCFDKCG == false) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__BEGNFALPJKP(__this,method_00);
          return;
        }
      }
      else {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__FNJKKJGNAFF
                  ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *)(ulong)bVar2,method_00
                  );
      }
                    /* WARNING: Could not recover jumptable at 0x03625fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
  }
LAB_03625fbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

