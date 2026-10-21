// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$HAPCHDFFICG @ RVA 0x310160C

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__HAPCHDFFICG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  ulong uVar2;
  NFFDIPBFJHP_o *pNVar3;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *pNVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_045664c7 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045664c7 = 1;
    method = extraout_x1;
  }
  pNVar5 = (__this->fields).LEJCNEENFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
LAB_03201710:
    (__this->fields).LNIAPAKKPHL = 0.0;
    return;
  }
  pNVar5 = (__this->fields).LEJCNEENFCH;
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
    uVar2 = (*(pNVar5->klass->vtable)._9_IsActive.methodPtr)
                      (pNVar5,(pNVar5->klass->vtable)._9_IsActive.method);
    if ((uVar2 & 1) == 0) goto LAB_03201710;
    pNVar4 = (__this->fields)._scroll;
    if (pNVar4 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      fVar6 = 0.0;
      if (*(char *)&(pNVar4->fields).KIANNGNDAFC == '\0') {
        fVar6 = (__this->fields).LNIAPAKKPHL;
        fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar6 = fVar6 + fVar7;
      }
      (__this->fields).LNIAPAKKPHL = fVar6;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pNVar3 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
      if (pNVar3 != (NFFDIPBFJHP_o *)0x0) {
        BFFBKNCLLML = (pNVar3->fields).NEACDFLBNFO;
        if (BFFBKNCLLML == (GLPEFEEGCPM_o *)0x0) {
          return;
        }
        if ((__this->fields).LNIAPAKKPHL <= 5.0) {
          return;
        }
        pNVar5 = (__this->fields).LEJCNEENFCH;
        if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard_o *)0x0) {
          if (BFFBKNCLLML == (pNVar5->fields).DCDPLKDJEIM) {
            return;
          }
          Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesLeaderboard__Refresh
                    (pNVar5,BFFBKNCLLML,(MethodInfo *)0x0);
          goto LAB_03201710;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

