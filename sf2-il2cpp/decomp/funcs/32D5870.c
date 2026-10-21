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

