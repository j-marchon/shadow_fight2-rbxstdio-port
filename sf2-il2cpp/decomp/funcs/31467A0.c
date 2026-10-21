// KKLJIDJBFEI$$AKEKGJAFBOC @ RVA 0x31467A0

void KKLJIDJBFEI__AKEKGJAFBOC
               (KKLJIDJBFEI_o *__this,MDOKGPFICNK_PEDENGEGDNI__o *ICLHKEAILDM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  LHOMEBJDFLD_o *pLVar4;
  CPNHNIKFGFB_o *pCVar5;
  NDPMLPGANCI_o *pNVar6;
  System_Action_object__o *CPECAEHDDDB;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_02;
  System_Action_o *pSVar7;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar8;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *pNVar9;
  
  if ((DAT_0456679a & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_EGMHFFODCKH__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_11531);
    DAT_0456679a = 1;
    ICLHKEAILDM = (MDOKGPFICNK_PEDENGEGDNI__o *)extraout_x1;
  }
  KKLJIDJBFEI__NDBIGCCHMPL(__this,(MethodInfo *)ICLHKEAILDM);
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__Error(StringLiteral_11531,BBBLOLJAMJP,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar2 = MGNPHCAAEIO__PKNDHONBNIF((MethodInfo *)0x0);
    if (bVar2) {
      if ((__this->fields).MLBNMPBAIIB != false) {
        (__this->fields).MLBNMPBAIIB = false;
        KKLJIDJBFEI__GHKJILFKNDN(__this,method_00);
        return;
      }
      pLVar4 = (__this->fields).GBLLKHKEJOA;
      (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
      if (pLVar4 != (LHOMEBJDFLD_o *)0x0) {
        LHOMEBJDFLD__COJANGIEAKE(pLVar4,(MethodInfo *)0x0);
        ppNVar8 = &(__this->fields).KAGJIPIDJCE;
        pNVar9 = *ppNVar8;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar9,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar2) {
          pNVar9 = *ppNVar8;
          if (pNVar9 != (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0) {
            (*(pNVar9->klass->vtable)._20_Close.methodPtr)
                      (pNVar9,(pNVar9->klass->vtable)._20_Close.method);
            *ppNVar8 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
            thunk_FUN_01c20e04(ppNVar8,0);
            pCVar5 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pCVar5 != (CPNHNIKFGFB_o *)0x0) {
              CPNHNIKFGFB__DIGPCFKCCBK(pCVar5,0x29ca,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          if ((__this->fields).EODMKFMHMIK != false) {
            return;
          }
          iVar1 = (__this->fields).DKOIHGOHPFN;
          iVar3 = KKLJIDJBFEI__MPGGPNICIMO((KKLJIDJBFEI_o *)(ulong)bVar2,method_01);
          if (iVar1 < iVar3) {
            bVar2 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0);
            pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
              if (bVar2) {
                NDPMLPGANCI__MBHCCJNGJEK(pNVar6,(MethodInfo *)0x0);
                method_02 = extraout_x1_00;
              }
              else {
                NDPMLPGANCI__MMMJCENBINB(pNVar6,true,(MethodInfo *)0x0);
                method_02 = extraout_x1_01;
              }
              (__this->fields).DKOIHGOHPFN = (__this->fields).DKOIHGOHPFN + 1;
              KKLJIDJBFEI__CDKAPIKLDJI(__this,method_02);
              return;
            }
          }
          else {
            pNVar6 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
            if (pNVar6 != (NDPMLPGANCI_o *)0x0) {
              NDPMLPGANCI__MBHCCJNGJEK(pNVar6,(MethodInfo *)0x0);
              bVar2 = Nekki_SF2_GUI_Fight_FightScene__get_IsRealFightScene((MethodInfo *)0x0);
              if (bVar2) {
                pSVar7 = (__this->fields).PBFGHKBLCKN;
                (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
                if (pSVar7 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032469c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(pSVar7->fields).super.super.invoke_impl)
                            ((pSVar7->fields).super.super.method_code,
                             (pSVar7->fields).super.super.method);
                  return;
                }
              }
              else {
                pCVar5 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
                CPECAEHDDDB = (System_Action_object__o *)
                              thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                System_Action<object>___ctor();
                if (pCVar5 != (CPNHNIKFGFB_o *)0x0) {
                  CPNHNIKFGFB__DIGPCFKCCBK(pCVar5,0x29ca,CPECAEHDDDB,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
    else {
      pLVar4 = (__this->fields).GBLLKHKEJOA;
      (__this->fields)._CPLKKCAJOJJ_k__BackingField = false;
      if (pLVar4 != (LHOMEBJDFLD_o *)0x0) {
        LHOMEBJDFLD__COJANGIEAKE(pLVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

