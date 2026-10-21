// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$MCDHOIOBGFP @ RVA 0x33F9A50

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__MCDHOIOBGFP
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               KEFHDOHHHML_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  GCIFMNHADDF_o *__this_00;
  EEOMEMBBGNA_o *pEVar2;
  
  if ((DAT_04567fab & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04567fab = 1;
  }
  bVar1 = UnityEngine_EventSystems_UIBehaviour__IsDestroyed
                    ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  __this_00 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
  if (__this_00 != (GCIFMNHADDF_o *)0x0) {
    GCIFMNHADDF__IDKIMGGFFNH(__this_00,(MethodInfo *)0x0);
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
      EEOMEMBBGNA__FOJEJJGMIGP(pEVar2,0,(MethodInfo *)0x0);
      pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
        EEOMEMBBGNA__HINLKLNCNDB(pEVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

