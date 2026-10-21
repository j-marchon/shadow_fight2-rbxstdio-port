// ABNLGBHKOCE.JBMHDDKONHC$$RandomizeObscuredVars @ RVA 0x3192804

void ABNLGBHKOCE_JBMHDDKONHC__RandomizeObscuredVars
               (ABNLGBHKOCE_JBMHDDKONHC_o *__this,MethodInfo *method)

{
  System_Action_KJFPGDFNFCL__o **ppSVar1;
  System_Action_IENLNOEDCFF__o **ppSVar2;
  System_Action_IIMNGGHGKOD__o **ppSVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_00;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar4;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Action_KJFPGDFNFCL__o *action;
  System_Action_IENLNOEDCFF__o *pSVar5;
  System_Action_IIMNGGHGKOD__o *action_00;
  
  if ((DAT_04566a55 & 1) == 0) {
    FUN_01bab630(&System_Action<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&System_Action<KJFPGDFNFCL>_TypeInfo);
    FUN_01bab630(&System_Action<IIMNGGHGKOD>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_ForEach__);
    FUN_01bab630(&Method_ABNLGBHKOCE_JBMHDDKONHC_<>c_BNHALKLDOIP__);
    FUN_01bab630(&Method_ABNLGBHKOCE_JBMHDDKONHC_<>c_IBEPKOEIAMP__);
    FUN_01bab630(&Method_ABNLGBHKOCE_JBMHDDKONHC_<>c_NICDOCKIHDC__);
    FUN_01bab630(&Method_ABNLGBHKOCE_JBMHDDKONHC_<>c_OCLFJIFMNMO__);
    FUN_01bab630(&ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo);
    DAT_04566a55 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).AFFIHBMACFF;
  if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  action = ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_0;
  if (action == (System_Action_KJFPGDFNFCL__o *)0x0) {
    if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo,method);
    }
    action = (System_Action_KJFPGDFNFCL__o *)thunk_FUN_01bda818(System_Action<KJFPGDFNFCL>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar1 = &ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_0;
    *ppSVar1 = action;
    thunk_FUN_01c20e04(ppSVar1,action);
  }
  if (__this_00 != (System_Collections_Generic_List_KJFPGDFNFCL__o *)0x0) {
                    /* try { // try from 03292944 to 03392a63 has its CatchHandler @ 03292944
                       catch() { ... } // from try @ 03292944 with catch @ 03292944
                       catch() { ... } // from try @ 03292bbc with catch @ 03292944
                       catch() { ... } // from try @ 03292c6c with catch @ 03292944
                       catch() { ... } // from try @ 03292c74 with catch @ 03292944
                       catch() { ... } // from try @ 03292d3c with catch @ 03292944 */
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<KJFPGDFNFCL>_ForEach__);
    pSVar4 = (__this->fields).KPFGHBEKJIM;
    if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar5 = ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_1;
    if (pSVar5 == (System_Action_IENLNOEDCFF__o *)0x0) {
      if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar5 = (System_Action_IENLNOEDCFF__o *)
               thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_1;
      *ppSVar2 = pSVar5;
      thunk_FUN_01c20e04(ppSVar2,pSVar5);
    }
    if (pSVar4 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)pSVar4,(System_Action_T__o *)pSVar5,
                 Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
      __this_01 = (__this->fields).NEIJJHEFLHP;
      if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      action_00 = ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_2;
      if (action_00 == (System_Action_IIMNGGHGKOD__o *)0x0) {
        if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        action_00 = (System_Action_IIMNGGHGKOD__o *)
                    thunk_FUN_01bda818(System_Action<IIMNGGHGKOD>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_2;
        *ppSVar3 = action_00;
        thunk_FUN_01c20e04(ppSVar3,action_00);
      }
                    /* try { // try from 03292a64 to 03392a8b has its CatchHandler @ 03292ca4 */
      if (__this_01 != (System_Collections_Generic_List_IIMNGGHGKOD__o *)0x0) {
        System_Collections_Generic_List<object>__ForEach
                  ((System_Collections_Generic_List_object__o *)__this_01,
                   (System_Action_T__o *)action_00,
                   Method_System_Collections_Generic_List<IIMNGGHGKOD>_ForEach__);
        pSVar4 = (__this->fields).KFLHLLDPBIC;
        if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar5 = ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_3;
        if (pSVar5 == (System_Action_IENLNOEDCFF__o *)0x0) {
          if ((ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03292ac0 to 03392aeb has its CatchHandler @ 03292ca0 */
          pSVar5 = (System_Action_IENLNOEDCFF__o *)
                   thunk_FUN_01bda818(System_Action<IENLNOEDCFF>_TypeInfo);
          System_Action<object>___ctor();
          ppSVar2 = &ABNLGBHKOCE_JBMHDDKONHC_<>c_TypeInfo->static_fields->__9__5_3;
          *ppSVar2 = pSVar5;
          thunk_FUN_01c20e04(ppSVar2,pSVar5);
        }
        if (pSVar4 != (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0) {
          System_Collections_Generic_List<object>__ForEach
                    ((System_Collections_Generic_List_object__o *)pSVar4,
                     (System_Action_T__o *)pSVar5,
                     Method_System_Collections_Generic_List<IENLNOEDCFF>_ForEach__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

