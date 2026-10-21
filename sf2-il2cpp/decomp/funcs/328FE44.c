// MCBGINPGJCD$$ODGFCLOEKJD @ RVA 0x328FE44

void MCBGINPGJCD__ODGFCLOEKJD(MCBGINPGJCD_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  System_Predicate_HOOAAGABMBL__o **ppSVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  DOPEEDABNEK_o *pDVar7;
  System_String_array *pSVar8;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Predicate_HOOAAGABMBL__o *match;
  
  if ((DAT_04567312 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_MCBGINPGJCD_<>c_LJBNFGPHFBI__);
    FUN_01bab630(&MCBGINPGJCD_<>c_TypeInfo);
    DAT_04567312 = 1;
    method = extraout_x1;
  }
  pSVar8 = (__this->fields).DCJHEFNELKE;
  iVar1 = (__this->fields).JFNNLEIIIFM + 1;
  (__this->fields).JFNNLEIIIFM = iVar1;
  if (pSVar8 != (System_String_array *)0x0) {
    iVar2 = (int)pSVar8->max_length;
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = iVar1 / iVar2;
    }
    (__this->fields).JFNNLEIIIFM = iVar1 - iVar4 * iVar2;
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
    pDVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
    if (pDVar7 != (DOPEEDABNEK_o *)0x0) {
      __this_00 = (pDVar7->fields).DIGBEFKAPHM;
      if ((MCBGINPGJCD_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MCBGINPGJCD_<>c_TypeInfo,method);
      }
      match = MCBGINPGJCD_<>c_TypeInfo->static_fields->__9__6_0;
      if (match == (System_Predicate_HOOAAGABMBL__o *)0x0) {
        if ((MCBGINPGJCD_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        match = (System_Predicate_HOOAAGABMBL__o *)
                thunk_FUN_01bda818(System_Predicate<HOOAAGABMBL>_TypeInfo);
        System_Predicate<object>___ctor();
        ppSVar5 = &MCBGINPGJCD_<>c_TypeInfo->static_fields->__9__6_0;
        *ppSVar5 = match;
        thunk_FUN_01c20e04(ppSVar5,match);
      }
      if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
        pIVar6 = System_Collections_Generic_List<object>__Find
                           ((System_Collections_Generic_List_object__o *)__this_00,
                            (System_Predicate_T__o *)match,
                            Method_System_Collections_Generic_List<HOOAAGABMBL>_Find__);
        pSVar8 = (__this->fields).DCJHEFNELKE;
        if (pSVar8 != (System_String_array *)0x0) {
          uVar3 = (__this->fields).JFNNLEIIIFM;
          if ((uint)pSVar8->max_length <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar6[8].klass = (Il2CppClass *)pSVar8->m_Items[(int)uVar3];
            thunk_FUN_01c20e04();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

