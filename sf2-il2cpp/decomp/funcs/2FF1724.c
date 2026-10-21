// HintButton$$.ctor @ RVA 0x2FF1724

void HintButton___ctor(HintButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_Collections_Generic_List_HintUI__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565a6b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintUI>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HintUI>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04565a6b = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo,method);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  (__this->fields)._DefaultHintIDs = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields)._DefaultHintIDs,pSVar1);
  (__this->fields)._Style = 1;
  (__this->fields)._TrackingDeviceID = -1;
  __this_00 = (System_Collections_Generic_List_HintUI__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HintUI>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<HintUI>__ctor__);
  (__this->fields)._Hints = __this_00;
  thunk_FUN_01c20e04(&(__this->fields)._Hints,__this_00);
  (__this->fields).OHENCPAHBDH = StringLiteral_1;
  thunk_FUN_01c20e04(&(__this->fields).OHENCPAHBDH);
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<FBBNEILNOKK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<FBBNEILNOKK>__ctor__);
  (__this->fields).EKJNLACDGKC = (System_Collections_Generic_List_FBBNEILNOKK__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).EKJNLACDGKC,pSVar1);
  pSVar1 = (System_Collections_Generic_List_T__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MIBHAJBEMIK>_TypeInfo);
  System_Collections_Generic_List<Int32Enum>___ctor
            (pSVar1,Method_System_Collections_Generic_List<MIBHAJBEMIK>__ctor__);
  (__this->fields).KDGCEFEPJHP = (System_Collections_Generic_List_MIBHAJBEMIK__o *)pSVar1;
  thunk_FUN_01c20e04(&(__this->fields).KDGCEFEPJHP,pSVar1);
  SFButton___ctor((SFButton_o *)__this,(MethodInfo *)0x0);
  return;
}

