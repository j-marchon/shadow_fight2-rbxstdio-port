// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$NLJGGCBOECI @ RVA 0x34266B8

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__NLJGGCBOECI
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *pCVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
                    /* try { // try from 035266b8 to 036266df has its CatchHandler @ 03526540 */
  if ((DAT_04568116 & 1) == 0) {
                    /* catch() { ... } // from try @ 035266b4 with catch @ 035266d8 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 035266e0 to 036266e7 has its CatchHandler @ 035266fc */
                    /* try { // try from 035266e8 to 036266f3 has its CatchHandler @ 03526540 */
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04568116 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035266f4 to 036266fb has its CatchHandler @ 035266fc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035266e0 with catch @ 035266fc
                       catch(type#2 @ 00000000) { ... } // from try @ 035266f4 with catch @ 035266fc
                        */
  if ((0 < (__this->fields).MOFFPNNIMBJ) && (0 < (__this->fields).CMEBGPLHEGM)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar2 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (pCVar2 == (CHDGOFBHAFI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = OOBBAGLCFPF__FLMDOPMDKID((pCVar2->fields).AABMLCNHHPN,(MethodInfo *)0x0);
    method = extraout_x1_00;
    if (!bVar1) {
      iVar5 = (__this->fields).MOFFPNNIMBJ;
      iVar3 = (__this->fields).CMEBGPLHEGM;
      fVar6 = (__this->fields).FNBDHKCAFMJ;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      fVar4 = System_Math__Max(((float)iVar5 / ((float)iVar3 + -1.0)) * -8.0 + 10.0,2.0,
                               (MethodInfo *)0x0);
      fVar4 = System_Math__Min(10.0,fVar4,(MethodInfo *)0x0);
      if (fVar4 <= fVar6) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HMPBGKCCODK(__this,method_00);
        (__this->fields).FNBDHKCAFMJ = 0.0;
      }
      return;
    }
  }
  (__this->fields).FNBDHKCAFMJ = 0.0;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HCCNPDEPLJA(__this,method);
  return;
}

