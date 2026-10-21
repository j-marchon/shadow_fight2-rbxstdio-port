// TypeDefIndex 2146
// Namespace: Nekki.SF2.GUI.Dialogs
// public class LocalDailyTaskCell : MonoBehaviour
// Fields:
//   private ProgressBar _taskProgressBar; // 0x20
//   private LabelAlias _taskTitleLbl; // 0x28
//   private LabelAlias _taskProgressLbl; // 0x30
//   private LabelAlias _taskRewardValueLbl; // 0x38
//   private LabelAlias _taskRemainingTimeLbl; // 0x40
//   private LabelAlias _beforeNextTaskLbl; // 0x48
//   private LabelButton _btnClaim; // 0x50
//   private int NEPGJMMDEKL; // 0x58
//   private LocalDailyQuestInfo PLOJDGGJEKO; // 0x60
//   private OPHDIHJPHDE MPPGJCKPDFD; // 0x68
//   private long GIFMJFJDFFG; // 0x70

// ===== private void KGHBEACKHIB(long ECLENFDGNKL)  [RVA 0x32D4E9C]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$KGHBEACKHIB @ RVA 0x32D4E9C

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KGHBEACKHIB
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,int64_t ECLENFDGNKL,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  
  if ((DAT_0456757c & 1) == 0) {
    FUN_01bab630(&NGFEKJBMGEB_TypeInfo);
    FUN_01bab630(&StringLiteral_2086/*":"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456757c = 1;
  }
  pNVar2 = (__this->fields)._beforeNextTaskLbl;
  if ((NGFEKJBMGEB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = NGFEKJBMGEB__BCGDPKJNJCH
                     (ECLENFDGNKL,true,true,0xe0f < ECLENFDGNKL,0x1517f < ECLENFDGNKL,
                      StringLiteral_2086/*":"*/,true,true,true,true,StringLiteral_1/*""*/,StringLiteral_1/*""*/,
                      StringLiteral_1/*""*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d4f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DPDPADFPOBP()  [RVA 0x32D4F98]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$DPDPADFPOBP @ RVA 0x32D4F98

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__DPDPADFPOBP
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  KEIAEKNFNNA_o *__this_00;
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456757d & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_BHLHBBKAFHH__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456757d = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__JKONMJEBNPH(__this,method);
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    iVar1 = KEIAEKNFNNA__FHMOKDNBLAI(__this_00,(MethodInfo *)0x0);
    (__this->fields).GIFMJFJDFFG = iVar1;
    Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__BHLHBBKAFHH(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void KCDFOPDGIDC()  [RVA 0x32D5254]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$KCDFOPDGIDC @ RVA 0x32D5254

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KCDFOPDGIDC
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  KEIAEKNFNNA_o *pKVar1;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar2;
  System_Func_OPHDIHJPHDE__bool__o **ppSVar3;
  Il2CppObject *pIVar4;
  System_Func_TSource__bool__o *predicate;
  OPHDIHJPHDE_o *pOVar5;
  ProgressBar_o *pPVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OPHDIHJPHDE_o **ppOVar7;
  Core_Configs_Models_LocalDailyQuestInfo_o **ppCVar8;
  System_Func_OPHDIHJPHDE__bool__o *predicate_00;
  
  if ((DAT_0456757e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Last<OPHDIHJPHDE>__);
    FUN_01bab630(&System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_KLDDBBJPOGP__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_GPJEODCMIDB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo);
    DAT_0456757e = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pKVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (pKVar1 != (KEIAEKNFNNA_o *)0x0) {
    pSVar2 = KEIAEKNFNNA__CFGOMKKHOML(pKVar1,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo);
    }
    predicate_00 = Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->static_fields->__9__13_0;
    if (predicate_00 == (System_Func_OPHDIHJPHDE__bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo);
      }
      predicate_00 = (System_Func_OPHDIHJPHDE__bool__o *)
                     thunk_FUN_01bda818(System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->static_fields->__9__13_0;
      *ppSVar3 = predicate_00;
      thunk_FUN_01c20e04(ppSVar3,predicate_00);
    }
    pIVar4 = System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (System_Func_TSource__bool__o *)predicate_00,
                        Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
    if ((pIVar4 != (Il2CppObject *)0x0) ||
       (pIVar4 = System_Linq_Enumerable__Last<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            Method_System_Linq_Enumerable_Last<OPHDIHJPHDE>__),
       pIVar4 != (Il2CppObject *)0x0)) {
      (__this->fields).NEPGJMMDEKL = *(int32_t *)&pIVar4[1].klass;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
                    /* try { // try from 033d5410 to 034d5477 has its CatchHandler @ 033d5410
                       catch() { ... } // from try @ 033d5410 with catch @ 033d5410
                       catch() { ... } // from try @ 033d5614 with catch @ 033d5410
                       catch() { ... } // from try @ 033d5688 with catch @ 033d5410
                       catch() { ... } // from try @ 033d56e4 with catch @ 033d5410 */
      if (DAT_045661dd == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_045661dd = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
      if (pKVar1 != (KEIAEKNFNNA_o *)0x0) {
        pSVar2 = KEIAEKNFNNA__CFGOMKKHOML(pKVar1,(MethodInfo *)0x0);
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
                    /* try { // try from 033d5478 to 034d548b has its CatchHandler @ 033d5658 */
        System_Func<object,_bool>___ctor();
        pOVar5 = (OPHDIHJPHDE_o *)
                 System_Linq_Enumerable__FirstOrDefault<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,predicate,
                            Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
        ppOVar7 = &(__this->fields).MPPGJCKPDFD;
        *ppOVar7 = pOVar5;
        thunk_FUN_01c20e04(ppOVar7,pOVar5);
                    /* try { // try from 033d54a4 to 034d54af has its CatchHandler @ 033d5648 */
        if (*ppOVar7 != (OPHDIHJPHDE_o *)0x0) {
          ppCVar8 = &(__this->fields).PLOJDGGJEKO;
          *ppCVar8 = ((*ppOVar7)->fields)._DMCIAIBPJGN_k__BackingField;
                    /* try { // try from 033d54b4 to 034d54bf has its CatchHandler @ 033d564c */
          thunk_FUN_01c20e04(ppCVar8);
          pPVar6 = (__this->fields)._taskProgressBar;
          if (pPVar6 != (ProgressBar_o *)0x0) {
            (*(pPVar6->klass->vtable)._7_set_Value.methodPtr)
                      (0,pPVar6,(pPVar6->klass->vtable)._7_set_Value.method);
                    /* try { // try from 033d54d8 to 034d54db has its CatchHandler @ 033d5624 */
            Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__AADJLKMEKBF(__this,method_00);
                    /* try { // try from 033d54ec to 034d54f7 has its CatchHandler @ 033d5640 */
            Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__DPDPADFPOBP(__this,method_01);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void UpdateTaskCell()  [RVA 0x32D5870]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$UpdateTaskCell @ RVA 0x32D5870

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__UpdateTaskCell
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  KEIAEKNFNNA_o *pKVar1;
  System_Collections_Generic_IReadOnlyList_OPHDIHJPHDE__o *pSVar2;
  System_Func_OPHDIHJPHDE__bool__o **ppSVar3;
  Il2CppObject *pIVar4;
  System_Func_TSource__bool__o *predicate;
  OPHDIHJPHDE_o *pOVar5;
  ProgressBar_o *pPVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OPHDIHJPHDE_o **ppOVar7;
  Core_Configs_Models_LocalDailyQuestInfo_o **ppCVar8;
  System_Func_OPHDIHJPHDE__bool__o *predicate_00;
  
  if ((DAT_0456757e & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Last<OPHDIHJPHDE>__);
    FUN_01bab630(&System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_KLDDBBJPOGP__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_GPJEODCMIDB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo);
    DAT_0456757e = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pKVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (pKVar1 != (KEIAEKNFNNA_o *)0x0) {
    pSVar2 = KEIAEKNFNNA__CFGOMKKHOML(pKVar1,(MethodInfo *)0x0);
    if ((Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo);
    }
    predicate_00 = Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->static_fields->__9__13_0;
    if (predicate_00 == (System_Func_OPHDIHJPHDE__bool__o *)0x0) {
      if ((Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo);
      }
      predicate_00 = (System_Func_OPHDIHJPHDE__bool__o *)
                     thunk_FUN_01bda818(System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar3 = &Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_<>c_TypeInfo->static_fields->__9__13_0;
      *ppSVar3 = predicate_00;
      thunk_FUN_01c20e04(ppSVar3,predicate_00);
    }
    pIVar4 = System_Linq_Enumerable__FirstOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                        (System_Func_TSource__bool__o *)predicate_00,
                        Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
    if ((pIVar4 != (Il2CppObject *)0x0) ||
       (pIVar4 = System_Linq_Enumerable__Last<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                            Method_System_Linq_Enumerable_Last<OPHDIHJPHDE>__),
       pIVar4 != (Il2CppObject *)0x0)) {
      (__this->fields).NEPGJMMDEKL = *(int32_t *)&pIVar4[1].klass;
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_045661dd == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_045661dd = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
      if (pKVar1 != (KEIAEKNFNNA_o *)0x0) {
        pSVar2 = KEIAEKNFNNA__CFGOMKKHOML(pKVar1,(MethodInfo *)0x0);
        predicate = (System_Func_TSource__bool__o *)
                    thunk_FUN_01bda818(System_Func<OPHDIHJPHDE,_bool>_TypeInfo);
        System_Func<object,_bool>___ctor();
        pOVar5 = (OPHDIHJPHDE_o *)
                 System_Linq_Enumerable__FirstOrDefault<object>
                           ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,predicate,
                            Method_System_Linq_Enumerable_FirstOrDefault<OPHDIHJPHDE>__);
        ppOVar7 = &(__this->fields).MPPGJCKPDFD;
        *ppOVar7 = pOVar5;
        thunk_FUN_01c20e04(ppOVar7,pOVar5);
        if (*ppOVar7 != (OPHDIHJPHDE_o *)0x0) {
          ppCVar8 = &(__this->fields).PLOJDGGJEKO;
          *ppCVar8 = ((*ppOVar7)->fields)._DMCIAIBPJGN_k__BackingField;
          thunk_FUN_01c20e04(ppCVar8);
          pPVar6 = (__this->fields)._taskProgressBar;
          if (pPVar6 != (ProgressBar_o *)0x0) {
            (*(pPVar6->klass->vtable)._7_set_Value.methodPtr)
                      (0,pPVar6,(pPVar6->klass->vtable)._7_set_Value.method);
            Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__AADJLKMEKBF(__this,method_00);
            Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__DPDPADFPOBP(__this,method_01);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private bool KLDDBBJPOGP(OPHDIHJPHDE LFINFBNOLFG)  [RVA 0x32D5874]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$KLDDBBJPOGP @ RVA 0x32D5874

bool Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KLDDBBJPOGP
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,OPHDIHJPHDE_o *LFINFBNOLFG,
               MethodInfo *method)

{
  if (LFINFBNOLFG != (OPHDIHJPHDE_o *)0x0) {
    return (LFINFBNOLFG->fields)._MDAJFAPLLOH_k__BackingField == (__this->fields).NEPGJMMDEKL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ClaimReward()  [RVA 0x32D5898]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$ClaimReward @ RVA 0x32D5898

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__ClaimReward
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  KEIAEKNFNNA_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  
  if ((DAT_0456757f & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456757f = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    KEIAEKNFNNA__ONDFOFCHBKF(__this_00,(__this->fields).MPPGJCKPDFD,(MethodInfo *)0x0);
    Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KCDFOPDGIDC(__this,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32D593C]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$.ctor @ RVA 0x32D593C

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell___ctor
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void AADJLKMEKBF()  [RVA 0x32D54FC]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$AADJLKMEKBF @ RVA 0x32D54FC

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__AADJLKMEKBF
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  bool value;
  Il2CppObject *arg1;
  ProgressBar_o *pPVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *pSVar3;
  KEIAEKNFNNA_o *__this_00;
  int64_t CJNHFNHJHPE;
  LabelButton_o *__this_01;
  Core_Configs_Models_LocalDailyQuestInfo_o *pCVar4;
  OPHDIHJPHDE_o *pOVar5;
  ACHLOMELAJE_o *pAVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  System_String_o *pSVar8;
  int32_t local_3c;
  int local_38;
  int iStack_34;
  
                    /* try { // try from 033d5508 to 034d550b has its CatchHandler @ 033d5618 */
                    /* try { // try from 033d5518 to 034d5523 has its CatchHandler @ 033d5630 */
  if ((DAT_04567580 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
                    /* try { // try from 033d5528 to 034d5533 has its CatchHandler @ 033d5638 */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_474/*" max=120 />"*/);
                    /* try { // try from 033d5550 to 034d555f has its CatchHandler @ 033d561c */
    FUN_01bab630(&StringLiteral_2422/*"<quad name="*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
                    /* try { // try from 033d5564 to 034d556f has its CatchHandler @ 033d5654 */
    FUN_01bab630(&StringLiteral_22458/*"{0}{{{1}}}"*/);
    DAT_04567580 = 1;
  }
  local_38 = 0;
  iStack_34 = 0;
  pCVar4 = (__this->fields).PLOJDGGJEKO;
  if (pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
    pSVar8 = (pCVar4->fields)._Title_k__BackingField;
    local_3c = (pCVar4->fields)._AdsTargetCount_k__BackingField;
                    /* try { // try from 033d5594 to 034d5597 has its CatchHandler @ 033d5620 */
                    /* try { // try from 033d5598 to 034d55a3 has its CatchHandler @ 033d563c */
    pNVar7 = (__this->fields)._taskTitleLbl;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_3c);
                    /* try { // try from 033d55b4 to 034d55b7 has its CatchHandler @ 033d5614 */
                    /* try { // try from 033d55b8 to 034d55c3 has its CatchHandler @ 033d562c */
    pSVar8 = System_String__Format
                       (StringLiteral_22458/*"{0}{{{1}}}"*/,(Il2CppObject *)pSVar8,arg1,(MethodInfo *)0x0);
                    /* try { // try from 033d55c8 to 034d55cf has its CatchHandler @ 033d5628 */
    if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar7,pSVar8,(MethodInfo *)0x0);
      pPVar1 = (__this->fields)._taskProgressBar;
                    /* try { // try from 033d55ec to 034d55ef has its CatchHandler @ 033d5634 */
      if ((pPVar1 != (ProgressBar_o *)0x0) &&
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pPVar1,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 033d55f0 to 034d55fb has its CatchHandler @ 033d5650 */
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        pOVar5 = (__this->fields).MPPGJCKPDFD;
        if ((pOVar5 != (OPHDIHJPHDE_o *)0x0) &&
           (pCVar4 = (__this->fields).PLOJDGGJEKO,
           pCVar4 != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0)) {
          iStack_34 = (pOVar5->fields)._PKGCKALOMOF_k__BackingField;
                    /* try { // try from 033d5610 to 034d5613 has its CatchHandler @ 033d5644 */
          local_38 = (pCVar4->fields)._AdsTargetCount_k__BackingField;
                    /* catch() { ... } // from try @ 033d55b4 with catch @ 033d5614
                       try { // try from 033d5614 to 034d566f has its CatchHandler @ 033d5410 */
                    /* catch() { ... } // from try @ 033d5508 with catch @ 033d5618 */
          if (local_38 <= iStack_34) {
            iStack_34 = local_38;
          }
                    /* catch() { ... } // from try @ 033d5550 with catch @ 033d561c */
                    /* catch() { ... } // from try @ 033d5594 with catch @ 033d5620 */
          pPVar1 = (__this->fields)._taskProgressBar;
                    /* catch() { ... } // from try @ 033d54d8 with catch @ 033d5624 */
          if (pPVar1 != (ProgressBar_o *)0x0) {
                    /* catch() { ... } // from try @ 033d55c8 with catch @ 033d5628 */
                    /* catch() { ... } // from try @ 033d55b8 with catch @ 033d562c */
                    /* catch() { ... } // from try @ 033d5518 with catch @ 033d5630 */
                    /* catch() { ... } // from try @ 033d55ec with catch @ 033d5634 */
                    /* catch() { ... } // from try @ 033d5528 with catch @ 033d5638 */
            (*(pPVar1->klass->vtable)._11_SetValueBorders.methodPtr)
                      (0,(float)local_38,pPVar1,(pPVar1->klass->vtable)._11_SetValueBorders.method);
                    /* catch() { ... } // from try @ 033d5598 with catch @ 033d563c */
            pPVar1 = (__this->fields)._taskProgressBar;
                    /* catch() { ... } // from try @ 033d54ec with catch @ 033d5640 */
            if (pPVar1 != (ProgressBar_o *)0x0) {
                    /* catch() { ... } // from try @ 033d5610 with catch @ 033d5644 */
                    /* catch() { ... } // from try @ 033d54a4 with catch @ 033d5648 */
                    /* catch() { ... } // from try @ 033d54b4 with catch @ 033d564c */
                    /* catch() { ... } // from try @ 033d55f0 with catch @ 033d5650 */
                    /* catch() { ... } // from try @ 033d5564 with catch @ 033d5654 */
                    /* catch() { ... } // from try @ 033d5478 with catch @ 033d5658 */
              (*(pPVar1->klass->vtable)._8_SetValue.methodPtr)
                        ((float)iStack_34,0,pPVar1,0,(pPVar1->klass->vtable)._8_SetValue.method);
              pNVar7 = (__this->fields)._taskProgressLbl;
                    /* try { // try from 033d5670 to 034d5687 has its CatchHandler @ 033d56dc */
              pSVar8 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
              pSVar3 = System_Int32__ToString((int32_t)&local_38,(MethodInfo *)0x0);
                    /* try { // try from 033d5688 to 034d56cb has its CatchHandler @ 033d5410 */
              pSVar8 = System_String__Concat(pSVar8,StringLiteral_1492/*"/"*/,pSVar3,(MethodInfo *)0x0);
              if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                          (pNVar7,pSVar8,(pNVar7->klass->vtable)._75_set_text.method);
                pOVar5 = (__this->fields).MPPGJCKPDFD;
                if (pOVar5 != (OPHDIHJPHDE_o *)0x0) {
                  if ((pOVar5->fields)._DJAIGGFHPMK_k__BackingField == false) {
                    /* try { // try from 033d56cc to 034d56db has its CatchHandler @ 033d56dc */
                    pNVar7 = (__this->fields)._taskRewardValueLbl;
                    /* catch() { ... } // from try @ 033d5670 with catch @ 033d56dc
                       catch() { ... } // from try @ 033d56cc with catch @ 033d56dc */
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 033d56e0 to 034d56e3 has its CatchHandler @ 033d56ec */
                      thunk_FUN_01ba7564();
                    }
                    /* try { // try from 033d56e4 to 034d56ef has its CatchHandler @ 033d5410 */
                    /* catch() { ... } // from try @ 033d56e0 with catch @ 033d56ec */
                    if (DAT_04565b7d == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_04565b7d = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pAVar6 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    if (pAVar6 == (ACHLOMELAJE_o *)0x0) goto LAB_033d586c;
                    pSVar8 = (pAVar6->fields).FAAJGHKHEBI;
                    if (DAT_045661dd == '\0') {
                      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                      DAT_045661dd = '\x01';
                    }
                    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
                    if (__this_00 == (KEIAEKNFNNA_o *)0x0) goto LAB_033d586c;
                    CJNHFNHJHPE = KEIAEKNFNNA__JEAINNIBMLG
                                            (__this_00,(__this->fields).PLOJDGGJEKO,
                                             (MethodInfo *)0x0);
                    if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(BJFCCEEPHOF_TypeInfo);
                    }
                    pSVar3 = BJFCCEEPHOF__POMAAOILGAL(CJNHFNHJHPE,(MethodInfo *)0x0);
                    pSVar8 = System_String__Concat
                                       (StringLiteral_2422/*"<quad name="*/,pSVar8,StringLiteral_474/*" max=120 />"*/,pSVar3,
                                        (MethodInfo *)0x0);
                    if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_033d586c;
                    (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                              (pNVar7,pSVar8,(pNVar7->klass->vtable)._75_set_text.method);
                  }
                  pNVar7 = (__this->fields)._taskRewardValueLbl;
                  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    pUVar2 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0);
                    pOVar5 = (__this->fields).MPPGJCKPDFD;
                    if ((pOVar5 != (OPHDIHJPHDE_o *)0x0) &&
                       (pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
                      UnityEngine_GameObject__SetActive
                                (pUVar2,(pOVar5->fields)._DJAIGGFHPMK_k__BackingField == false,
                                 (MethodInfo *)0x0);
                      __this_01 = (__this->fields)._btnClaim;
                      if (__this_01 != (LabelButton_o *)0x0) {
                        pUVar2 = UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                        if (iStack_34 < local_38) {
                          value = false;
                        }
                        else {
                          pOVar5 = (__this->fields).MPPGJCKPDFD;
                          if (pOVar5 == (OPHDIHJPHDE_o *)0x0) goto LAB_033d586c;
                          value = (pOVar5->fields)._DJAIGGFHPMK_k__BackingField == false;
                        }
                        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__SetActive(pUVar2,value,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_033d586c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void BHLHBBKAFHH()  [RVA 0x32D519C]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$BHLHBBKAFHH @ RVA 0x32D519C

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__BHLHBBKAFHH
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  long ECLENFDGNKL;
  KEIAEKNFNNA_o *__this_00;
  int64_t iVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x2;
  
  if ((DAT_04567581 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567581 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045661dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045661dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_NLHJEJMHNGH_k__BackingField;
  if (__this_00 != (KEIAEKNFNNA_o *)0x0) {
    iVar1 = KEIAEKNFNNA__LPLDEDLPJFA(__this_00,(MethodInfo *)0x0);
    ECLENFDGNKL = (__this->fields).GIFMJFJDFFG - iVar1;
    if (-1 < ECLENFDGNKL) {
      Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__KGHBEACKHIB(__this,ECLENFDGNKL,in_x2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JKONMJEBNPH()  [RVA 0x32D50C0]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$JKONMJEBNPH @ RVA 0x32D50C0

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__JKONMJEBNPH
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567582 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_BHLHBBKAFHH__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567582 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._beforeNextTaskLbl;
  (__this->fields).GIFMJFJDFFG = 0;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d5194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,StringLiteral_1/*""*/,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnDestroy()  [RVA 0x32D5944]
// Nekki.SF2.GUI.Dialogs.LocalDailyTaskCell$$OnDestroy @ RVA 0x32D5944

void Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell__OnDestroy
               (Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_o *__this,MethodInfo *method)

{
  System_Action_o *CJNHFNHJHPE;
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567582 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_LocalDailyTaskCell_BHLHBBKAFHH__);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567582 = 1;
    method = extraout_x1;
  }
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo,method);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__remove_OnTick(CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar1 = (__this->fields)._beforeNextTaskLbl;
  (__this->fields).GIFMJFJDFFG = 0;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033d5194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,StringLiteral_1/*""*/,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

