// BANPLPOPIGI$$NKLNDGMMAAH @ RVA 0x33C9074

void BANPLPOPIGI__NKLNDGMMAAH(BANPLPOPIGI_o *__this,Il2CppObject *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  int32_t DPJIDNBJIBG;
  GCIFMNHADDF_o *pGVar2;
  Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *__this_00;
  UnityEngine_Object_o *x;
  Nekki_SF2_GUI_SimpleScroll_o *__this_01;
  Il2CppObject *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *pMVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar4;
  Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *pNVar5;
  
  if ((DAT_04567e0d & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
    FUN_01bab630(&Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567e0d = 1;
    CJNHFNHJHPE = extraout_x1;
  }
  pNVar5 = (__this->fields).HJLDGHLININ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,CJNHFNHJHPE);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar5 = (__this->fields).HJLDGHLININ;
  if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0) {
    if ((pNVar5->fields)._BOGAKJOFOEK_k__BackingField != false) {
      return;
    }
    pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)
                  GCIFMNHADDF__BFJGHKKGOJC<object>
                            (pGVar2,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidTopHundredDialog>__);
      pGVar2 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pGVar2 != (GCIFMNHADDF_o *)0x0) {
        x = (UnityEngine_Object_o *)
            GCIFMNHADDF__BFJGHKKGOJC<object>
                      (pGVar2,Method_GCIFMNHADDF_BFJGHKKGOJC<RaidSeasonFinishDialog>__);
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
        }
        bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pMVar3 = extraout_x1_00;
        if (bVar1) {
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          pMVar3 = extraout_x1_01;
          if (bVar1) {
LAB_034c9238:
            BANPLPOPIGI__JOIFLMJEEJK(__this,pMVar3);
            return;
          }
          if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog_o *)0x0)
          goto LAB_034c924c;
          bVar1 = Nekki_SF2_GUI_Dialogs_Raids_RaidTopHundredDialog__IsSelected
                            (__this_00,__this,(MethodInfo *)0x0);
          pMVar3 = extraout_x1_02;
          if (!bVar1) goto LAB_034c9238;
        }
        BANPLPOPIGI__CPKDPKBPHIG(__this,pMVar3);
        BANPLPOPIGI__MALAFKIOFFB(__this,method_00);
        BANPLPOPIGI__NCDOMAGEGCF(__this,method_01);
        DPJIDNBJIBG = BANPLPOPIGI__MEFLMPHJJCE(__this,method_02);
        if ((-1 < DPJIDNBJIBG) && ((__this->fields).JGEPPNPPIKG == false)) {
          __this_01 = (__this->fields).PDHMLFAMNCO;
          if (__this_01 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034c924c;
          bVar1 = Nekki_SF2_GUI_SimpleScroll__IsContentBiggerThanView(__this_01,(MethodInfo *)0x0);
          if (bVar1) {
            pNVar5 = (__this->fields).HJLDGHLININ;
            if (pNVar5 == (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView_o *)0x0)
            goto LAB_034c924c;
            Nekki_SF2_GUI_Dialogs_Raids_RaidLeaderboardView__ScrollToIndex
                      (pNVar5,DPJIDNBJIBG,0.0,(MethodInfo *)0x0);
            (__this->fields).JGEPPNPPIKG = true;
          }
        }
        pSVar4 = (__this->fields).NDHBLOHOEFK;
        if (pSVar4 == (System_Action_o *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x034c9234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar4->fields).super.super.invoke_impl)
                  ((pSVar4->fields).super.super.method_code,(pSVar4->fields).super.super.method);
        return;
      }
    }
  }
LAB_034c924c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

