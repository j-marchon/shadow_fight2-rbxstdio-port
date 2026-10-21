// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$CGEIBMDFLEL @ RVA 0x3230FA8

Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *
Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__CGEIBMDFLEL
          (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  CHDGOFBHAFI_o *pCVar3;
  GALHNMPIEHA_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *x;
  Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *pNVar4;
  Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *x_00;
  
  if ((DAT_04566fdf & 1) == 0) {
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidDamageResultContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidQuestsRewardsContent>__
                );
    FUN_01bab630(&
                 Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidWaitResultContent>__
                );
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566fdf = 1;
    method = extraout_x1;
  }
  iVar1 = (__this->fields).ILMKKGNDFLB;
  if (iVar1 == 2) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
    }
    __this_00 = HJPEKDOPBHN__CCIPAEHGPFC((MethodInfo *)0x0);
    if (__this_00 == (GALHNMPIEHA_o *)0x0) {
LAB_033311c4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = GALHNMPIEHA__EHFPAPHPBIP(__this_00,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
    if (bVar2) {
      x_00 = (__this->fields)._RaidQuestsRewardsContentPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
      if (bVar2) {
        pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)
                 Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                           ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                            (Il2CppObject *)(__this->fields)._RaidQuestsRewardsContentPrefab,
                            Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidQuestsRewardsContent>__
                           );
        if (pNVar4 == (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0) goto LAB_033311c4;
        Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent__Init
                  ((Nekki_SF2_GUI_Fight_RaidQuestsRewardsContent_o *)pNVar4,(MethodInfo *)0x0);
      }
    }
  }
  else if (iVar1 == 1) {
    pNVar4 = (__this->fields)._RaidDamageResultContentPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
    if (bVar2) {
                    /* try { // try from 03331174 to 03431447 has its CatchHandler @ 03331174
                       catch() { ... } // from try @ 03331174 with catch @ 03331174
                       catch() { ... } // from try @ 03331530 with catch @ 03331174
                       catch() { ... } // from try @ 03331564 with catch @ 03331174
                       catch() { ... } // from try @ 0333158c with catch @ 03331174
                       catch() { ... } // from try @ 033315cc with catch @ 03331174 */
      pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)
               Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                         ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                          (Il2CppObject *)(__this->fields)._RaidDamageResultContentPrefab,
                          Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidDamageResultContent>__
                         );
      if (pNVar4 == (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0) goto LAB_033311c4;
      Nekki_SF2_GUI_Fight_RaidDamageResultContent__Init
                (pNVar4,(__this->fields).EIHCLDJIKFO,(MethodInfo *)0x0);
    }
  }
  else {
    if (iVar1 != 0) {
      return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)0x0;
    }
    x = (__this->fields)._RaidWaitResultContentPrefab;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0;
    if (bVar2) {
      pNVar4 = (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)
               Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__OHNGNOIEJLH<object>
                         ((Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *)__this,
                          (Il2CppObject *)(__this->fields)._RaidWaitResultContentPrefab,
                          Method_Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_OHNGNOIEJLH<RaidWaitResultContent>__
                         );
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      pCVar3 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
      if ((pCVar3 == (CHDGOFBHAFI_o *)0x0) ||
         (pNVar4 == (Nekki_SF2_GUI_Fight_RaidDamageResultContent_o *)0x0)) goto LAB_033311c4;
      Nekki_SF2_GUI_Fight_RaidWaitResultContent__Init
                ((Nekki_SF2_GUI_Fight_RaidWaitResultContent_o *)pNVar4,(pCVar3->fields).AABMLCNHHPN,
                 (MethodInfo *)0x0);
    }
  }
  (__this->fields).ILMKKGNDFLB = (__this->fields).ILMKKGNDFLB + 1;
  return (Nekki_SF2_GUI_Fight_RaidEndFightBaseContent_o *)pNVar4;
}

