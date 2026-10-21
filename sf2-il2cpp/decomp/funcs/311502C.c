// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$HFOJDCKMPJB @ RVA 0x311502C

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__HFOJDCKMPJB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,
               IDGOGBNEGAM_o *DKMMBMBMJBO,GKLPDMLELJF_o *HEHMPFLAEGE,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
                    /* try { // try from 0321502c to 03315037 has its CatchHandler @ 03214de4 */
  if (HEHMPFLAEGE == (GKLPDMLELJF_o *)0x0) {
LAB_03215058:
    bVar2 = false;
  }
  else {
    if (DKMMBMBMJBO == (IDGOGBNEGAM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03215038 to 0331503f has its CatchHandler @ 03215040 */
    iVar1 = (HEHMPFLAEGE->fields).PEBHLKLGDBM;
                    /* catch() { ... } // from try @ 03214f98 with catch @ 03215040
                       catch() { ... } // from try @ 03215024 with catch @ 03215040
                       catch() { ... } // from try @ 03215038 with catch @ 03215040 */
    if ((DKMMBMBMJBO->fields).NEKMDLBLENC == iVar1) {
      iVar3 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
      if ((DKMMBMBMJBO->fields).HHJIJKJCEOF == iVar3) goto LAB_03215058;
    }
    else {
      iVar3 = (HEHMPFLAEGE->fields).PFJPLCAIGJH;
    }
    bVar2 = true;
    (DKMMBMBMJBO->fields).NEKMDLBLENC = iVar1;
    (DKMMBMBMJBO->fields).HHJIJKJCEOF = iVar3;
  }
  return bVar2;
}

