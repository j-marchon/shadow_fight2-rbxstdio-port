// DOPEEDABNEK$$RandomizeObscuredVars @ RVA 0x32E0D0C

void DOPEEDABNEK__RandomizeObscuredVars(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  System_Action_HOOAAGABMBL__o **ppSVar1;
  System_Action_BPDOKJBGHAG__o **ppSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_BPDOKJBGHAG__o *NMMKGIMBHFF;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_00;
  System_Action_BPDOKJBGHAG__o *CPECAEHDDDB;
  System_Action_HOOAAGABMBL__o *action;
  
  if ((DAT_045675eb & 1) == 0) {
    FUN_01bab630(&System_Action<BPDOKJBGHAG>_TypeInfo);
    FUN_01bab630(&System_Action<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<BPDOKJBGHAG>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_GCDNPHKHGLA__);
    FUN_01bab630(&Method_DOPEEDABNEK_<>c_HAGCHNLKDKK__);
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    DAT_045675eb = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).DIGBEFKAPHM;
  if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__56_0;
  if (action == (System_Action_HOOAAGABMBL__o *)0x0) {
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DOPEEDABNEK_<>c_TypeInfo,method);
    }
    action = (System_Action_HOOAAGABMBL__o *)thunk_FUN_01bda818(System_Action<HOOAAGABMBL>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__56_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_ForEach__);
    NMMKGIMBHFF = (__this->fields).AJDOBNIKJCK;
    if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    CPECAEHDDDB = DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__56_1;
    if (CPECAEHDDDB == (System_Action_BPDOKJBGHAG__o *)0x0) {
      if ((DOPEEDABNEK_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CPECAEHDDDB = (System_Action_BPDOKJBGHAG__o *)
                    thunk_FUN_01bda818(System_Action<BPDOKJBGHAG>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &DOPEEDABNEK_<>c_TypeInfo->static_fields->__9__56_1;
      *ppSVar2 = CPECAEHDDDB;
      thunk_FUN_01c20e04(ppSVar2,CPECAEHDDDB);
    }
    DFPABHGJPJJ__NHDPECDJBGO<object>
              ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,
               (System_Action_T__o *)CPECAEHDDDB,Method_DFPABHGJPJJ_NHDPECDJBGO<BPDOKJBGHAG>__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

