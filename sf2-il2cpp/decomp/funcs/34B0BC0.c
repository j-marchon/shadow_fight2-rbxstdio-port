// KDPDBGNOFEN$$.ctor @ RVA 0x34B0BC0

void KDPDBGNOFEN___ctor(KDPDBGNOFEN_o *__this,MethodInfo *method)

{
  DCHAJIMIFHP_o *__this_00;
  FLBBKMOHIOG_o *__this_01;
  FLBBKMOHIOG_o **ppFVar1;
  ACAEKBNCODE_o *__this_02;
  ACAEKBNCODE_o **ppAVar2;
  MOEEMFAHGPL_PEDENGEGDNI__o *__this_03;
  MOEEMFAHGPL_PEDENGEGDNI__o **ppMVar3;
  MOEEMFAHGPL_string__o *__this_04;
  MOEEMFAHGPL_string__o **ppMVar4;
  System_Action_int__o **ppSVar5;
  System_Action_o *CJNHFNHJHPE;
  System_Func_string__float__o **ppSVar6;
  MethodInfo *extraout_x1;
  System_Action_int__o *pSVar7;
  System_Func_string__float__o *pSVar8;
  
                    /* try { // try from 035b0bc8 to 036b0bd3 has its CatchHandler @ 035b05ec */
                    /* try { // try from 035b0bd4 to 036b0bdb has its CatchHandler @ 035b0bdc */
                    /* catch() { ... } // from try @ 035b0ba0 with catch @ 035b0bdc
                       catch() { ... } // from try @ 035b0bd4 with catch @ 035b0bdc */
  if ((DAT_04568559 & 1) == 0) {
    FUN_01bab630(&ACAEKBNCODE_TypeInfo);
    FUN_01bab630(&System_Action<int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&DCHAJIMIFHP_TypeInfo);
    FUN_01bab630(&FLBBKMOHIOG_TypeInfo);
    FUN_01bab630(&System_Func<string,_float>_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_LLCONNGHGKD__);
    FUN_01bab630(&Method_MOEEMFAHGPL<PEDENGEGDNI>__ctor__);
    FUN_01bab630(&Method_MOEEMFAHGPL<string>__ctor__);
    FUN_01bab630(&MOEEMFAHGPL<string>_TypeInfo);
    FUN_01bab630(&MOEEMFAHGPL<PEDENGEGDNI>_TypeInfo);
    FUN_01bab630(&Method_KDPDBGNOFEN_<>c_CAMMODJJDJE__);
    FUN_01bab630(&Method_KDPDBGNOFEN_<>c_JCJGEMKOHCI__);
    FUN_01bab630(&KDPDBGNOFEN_<>c_TypeInfo);
    FUN_01bab630(&StringLiteral_20956);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568559 = 1;
    method = extraout_x1;
  }
  __this_00 = (DCHAJIMIFHP_o *)thunk_FUN_01bda818(DCHAJIMIFHP_TypeInfo,method);
  DCHAJIMIFHP___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).FNHOHLGNHGN = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (FLBBKMOHIOG_o *)thunk_FUN_01bda818(FLBBKMOHIOG_TypeInfo);
  FLBBKMOHIOG___ctor(__this_01,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields).KPDFPANJBJB;
  *ppFVar1 = __this_01;
  thunk_FUN_01c20e04(ppFVar1,__this_01);
  __this_02 = (ACAEKBNCODE_o *)thunk_FUN_01bda818(ACAEKBNCODE_TypeInfo);
  ACAEKBNCODE___ctor(__this_02,(MethodInfo *)0x0);
  ppAVar2 = &(__this->fields).PGDGCNKLKMN;
  *ppAVar2 = __this_02;
  thunk_FUN_01c20e04(ppAVar2,__this_02);
  __this_03 = (MOEEMFAHGPL_PEDENGEGDNI__o *)thunk_FUN_01bda818(MOEEMFAHGPL<PEDENGEGDNI>_TypeInfo);
  MOEEMFAHGPL<Int32Enum>___ctor
            ((MOEEMFAHGPL_TEventType__o *)__this_03,Method_MOEEMFAHGPL<PEDENGEGDNI>__ctor__);
  ppMVar3 = &(__this->fields).DDBFMMHDCBK;
  *ppMVar3 = __this_03;
  thunk_FUN_01c20e04(ppMVar3,__this_03);
  __this_04 = (MOEEMFAHGPL_string__o *)thunk_FUN_01bda818(MOEEMFAHGPL<string>_TypeInfo);
  MOEEMFAHGPL<object>___ctor
            ((MOEEMFAHGPL_TEventType__o *)__this_04,Method_MOEEMFAHGPL<string>__ctor__);
  ppMVar4 = &(__this->fields).LECCKLBDCEN;
  *ppMVar4 = __this_04;
  thunk_FUN_01c20e04(ppMVar4,__this_04);
  if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar7 = KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_1;
  if (pSVar7 == (System_Action_int__o *)0x0) {
    if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar7 = (System_Action_int__o *)thunk_FUN_01bda818(System_Action<int>_TypeInfo);
    System_Action<int>___ctor();
    ppSVar5 = &KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_1;
    *ppSVar5 = pSVar7;
    thunk_FUN_01c20e04(ppSVar5,pSVar7);
  }
  ppSVar5 = &(__this->fields).NDNBEBJGGPF;
  *ppSVar5 = pSVar7;
  thunk_FUN_01c20e04(ppSVar5,pSVar7);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GNHILLNIKJJ = StringLiteral_1;
  thunk_FUN_01c20e04();
  (__this->fields).CEOPOBGHGPD = 0;
  (__this->fields).PGADIBFBJCJ = 0;
  (__this->fields).LHBDPNOCKHG = StringLiteral_20956;
  thunk_FUN_01c20e04();
  CJNHFNHJHPE = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_Utils_GlobalTimer__add_OnUpdate(CJNHFNHJHPE,(MethodInfo *)0x0);
  if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar8 = KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_0;
  if (pSVar8 == (System_Func_string__float__o *)0x0) {
    if ((KDPDBGNOFEN_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = (System_Func_string__float__o *)thunk_FUN_01bda818(System_Func<string,_float>_TypeInfo)
    ;
    System_Func<object,_float>___ctor();
    ppSVar6 = &KDPDBGNOFEN_<>c_TypeInfo->static_fields->__9__33_0;
    *ppSVar6 = pSVar8;
    thunk_FUN_01c20e04(ppSVar6,pSVar8);
  }
  ppSVar6 = &(__this->fields).MOACHOFFNCO;
  *ppSVar6 = pSVar8;
  thunk_FUN_01c20e04(ppSVar6,pSVar8);
  return;
}

