// DOPEEDABNEK$$BPCBMLIGOFF @ RVA 0x32E25B8

void DOPEEDABNEK__BPCBMLIGOFF(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  System_Func_HOOAAGABMBL__bool__o **ppSVar1;
  HOOAAGABMBL_o *pHVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  System_String_o *pSVar3;
  DOPEEDABNEK_o *pDVar4;
  System_Collections_Generic_List_HOOAAGABMBL__o *source;
  HOOAAGABMBL_o **ppHVar5;
  System_Func_HOOAAGABMBL__bool__o *predicate;
  
  if ((DAT_045675f1 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_LastOrDefault<HOOAAGABMBL>__);
    FUN_01bab630(&System_Func<HOOAAGABMBL,_bool>_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_OOMIICNFBKM__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_14581);
    FUN_01bab630(&StringLiteral_802);
    DAT_045675f1 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04563eaa == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_02;
  }
  pDVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
  if (pDVar4 != (DOPEEDABNEK_o *)0x0) {
    source = (pDVar4->fields).FDLFEJAEDGA;
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo,method);
    }
    predicate = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__64_0;
    if (predicate == (System_Func_HOOAAGABMBL__bool__o *)0x0) {
      if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      predicate = (System_Func_HOOAAGABMBL__bool__o *)
                  thunk_FUN_01bda818(System_Func<HOOAAGABMBL,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      ppSVar1 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__64_0;
      *ppSVar1 = predicate;
      thunk_FUN_01c20e04(ppSVar1,predicate);
    }
    pHVar2 = (HOOAAGABMBL_o *)
             System_Linq_Enumerable__LastOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)predicate,
                        Method_System_Linq_Enumerable_LastOrDefault<HOOAAGABMBL>__);
    if (__this != (DOPEEDABNEK_o *)0x0) {
      ppHVar5 = &(__this->fields)._CPLLGJKGGMD_k__BackingField;
      *ppHVar5 = pHVar2;
      thunk_FUN_01c20e04(ppHVar5,pHVar2);
      if ((*ppHVar5 == (HOOAAGABMBL_o *)0x0) ||
         (pSVar3 = ((*ppHVar5)->fields)._COIPKAKHDFP_k__BackingField,
         pSVar3 == (System_String_o *)0x0)) {
        pSVar3 = string_TypeInfo->static_fields->Empty;
      }
      pSVar3 = System_String__Concat(StringLiteral_14581,pSVar3,StringLiteral_802,(MethodInfo *)0x0)
      ;
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

