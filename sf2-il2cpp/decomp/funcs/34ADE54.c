// KDPDBGNOFEN$$AIJHJNAPOFC @ RVA 0x34ADE54

void KDPDBGNOFEN__AIJHJNAPOFC(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  FKDLCJJOGIP_o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  Sfs2X_SmartFox_o **ppSVar2;
  
  if ((DAT_04568540 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&StringLiteral_16466);
    FUN_01bab630(&StringLiteral_2482);
    DAT_04568540 = 1;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP == (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) goto LAB_035adf7c;
  if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  BBBLOLJAMJP->m_Items[0] = 6;
  Nekki_Utils_DetailedLog__Log(StringLiteral_2482,BBBLOLJAMJP,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).EBJCMEOKKOK;
  if (*ppSVar2 != (Sfs2X_SmartFox_o *)0x0) {
    Sfs2X_SmartFox__RemoveAllEventListeners(*ppSVar2,(MethodInfo *)0x0);
    if (*ppSVar2 == (Sfs2X_SmartFox_o *)0x0) goto LAB_035adf7c;
    bVar1 = Sfs2X_SmartFox__get_IsConnected(*ppSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      if (*ppSVar2 == (Sfs2X_SmartFox_o *)0x0) goto LAB_035adf7c;
      Sfs2X_SmartFox__Disconnect(*ppSVar2,(MethodInfo *)0x0);
      if (*ppSVar2 == (Sfs2X_SmartFox_o *)0x0) goto LAB_035adf7c;
      Sfs2X_SmartFox__HandleClientDisconnection(*ppSVar2,StringLiteral_16466,(MethodInfo *)0x0);
    }
    (__this->fields).EBJCMEOKKOK = (Sfs2X_SmartFox_o *)0x0;
    thunk_FUN_01c20e04(ppSVar2,0);
    (__this->fields)._KKNAFGJEFJG_k__BackingField = false;
  }
  (__this->fields)._MGGBEPKMPCF_k__BackingField = false;
  Nekki_SF2_GUI_Dialogs_Raids_RaidConnectionScreen__Hide((MethodInfo *)0x0);
  __this_00 = FKDLCJJOGIP__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (FKDLCJJOGIP_o *)0x0) {
    FKDLCJJOGIP__LLBIEPFEJPG(__this_00,(MethodInfo *)0x0);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (__this_01 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__HOIIJGMCDEM(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_035adf7c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

