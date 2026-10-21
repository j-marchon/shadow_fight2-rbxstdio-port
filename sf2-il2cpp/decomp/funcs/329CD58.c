// Nekki.SF2.GUI.Dialogs.Raids.Clans.MainClanDialog$$Init @ RVA 0x329CD58

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_ResolutionButton_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  EEOMEMBBGNA_o *__this_02;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE;
  Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *pNVar2;
  
  if ((DAT_045673a5 & 1) == 0) {
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&BCDCMCKBKEN_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_MainClanDialog_JNCKDHJJBPM__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_8789);
    FUN_01bab630(&StringLiteral_1);
    DAT_045673a5 = 1;
  }
  (__this->fields)._LLDCLDBEMKA_k__BackingField = false;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanBaseDialog_o *)__this,StringLiteral_1,
             StringLiteral_9679,StringLiteral_3640,0,(MethodInfo *)0x0);
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (BCDCMCKBKEN_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)BCDCMCKBKEN_TypeInfo)) {
      (__this->fields).FBILHKCKHEJ = (OJEHKJHEBID_o *)IMMNELPBGIF[1].klass;
      thunk_FUN_01c20e04(&(__this->fields).FBILHKCKHEJ);
      __this_00 = (__this->fields)._clanFindButton;
      (__this->fields)._LLDCLDBEMKA_k__BackingField =
           *(bool_conflict *)((long)&IMMNELPBGIF[1].monitor + 4);
      (__this->fields).CLPMCCMHELK = *(int32_t *)&IMMNELPBGIF[1].monitor;
      if ((__this_00 != (Nekki_SF2_GUI_ResolutionButton_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_02 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
        CJNHFNHJHPE = (System_Action_OJEHKJHEBID__o *)
                      thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 != (EEOMEMBBGNA_o *)0x0) {
          EEOMEMBBGNA__MFDOCMJONOH(__this_02,CJNHFNHJHPE,(MethodInfo *)0x0);
          if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pNVar2 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF__get_Instance((MethodInfo *)0x0);
          if (pNVar2 != (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0339cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar2->klass->vtable)._20_Show.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._20_Show.method);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_8789,(MethodInfo *)0x0);
  return;
}

