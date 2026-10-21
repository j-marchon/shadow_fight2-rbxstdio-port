// Nekki.SF2.GUI.Dialogs.Raids.RaidBattleChatViewController$$UpdateContent @ RVA 0x3522434

void Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController__UpdateContent
               (Nekki_SF2_GUI_Dialogs_Raids_RaidBattleChatViewController_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  CHDGOFBHAFI_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *x;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_o *MIJCJJCICDA;
  
  if ((DAT_045689d8 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045689d8 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__UpdateContent
            ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,IMMNELPBGIF,
             (MethodInfo *)0x0);
  bVar2 = KFCFGKEHPNK__PIOIEAEGHCP((MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = false;
  }
  else {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
    if (__this_00 == (CHDGOFBHAFI_o *)0x0) goto LAB_036225ec;
    bVar2 = CHDGOFBHAFI__PGFAHOMKNBL(__this_00,(MethodInfo *)0x0);
  }
  bVar3 = KFCFGKEHPNK__OEMIEJCOCDI((MethodInfo *)0x0);
  x = Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__OFBDOPOJDEH
                ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,(MethodInfo *)0x0);
  if (bVar2 == false) {
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__PGEMCFICNLA
              ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,(MethodInfo *)0x0);
    return;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    if (x != (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) goto LAB_0362253c;
LAB_0362255c:
    x = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0;
  }
  else {
    if (x == (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0) goto LAB_0362255c;
LAB_0362253c:
    bVar1 = (Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_TypeInfo->_2).naturalAligment;
    if ((x->klass->_2).naturalAligment < bVar1) goto LAB_0362255c;
    if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Dialogs_Raids_ClanQuickRaidAccessView_TypeInfo) {
      x = (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)0x0;
    }
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3 || !bVar2) {
    return;
  }
                    /* try { // try from 03622590 to 037227d7 has its CatchHandler @ 03622590
                       catch() { ... } // from try @ 03622590 with catch @ 03622590
                       catch() { ... } // from try @ 03622950 with catch @ 03622590
                       catch() { ... } // from try @ 03622b5c with catch @ 03622590
                       catch() { ... } // from try @ 03622b64 with catch @ 03622590
                       catch() { ... } // from try @ 03622c64 with catch @ 03622590 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_01 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
  if (__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
    MIJCJJCICDA = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__CreateClanQuickRaidAccessView
                            (__this_01,__this,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__KOJMOHMGLAI
              ((Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *)__this,
               (Nekki_SF2_GUI_Dialogs_Raids_ChatSFView_o *)MIJCJJCICDA,false,(MethodInfo *)0x0);
    return;
  }
LAB_036225ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

