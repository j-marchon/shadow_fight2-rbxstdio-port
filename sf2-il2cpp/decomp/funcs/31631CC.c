// MCEIBCKPIAD$$.ctor @ RVA 0x31631CC

void MCEIBCKPIAD___ctor(MCEIBCKPIAD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KKLFGJCMPDA__o *pSVar1;
  System_Collections_Generic_List_KKLFGJCMPDA__o **ppSVar2;
  System_Action_FAIJGJCCKJC__o **ppSVar3;
  MethodInfo *extraout_x1;
  System_Action_FAIJGJCCKJC__o *pSVar4;
  
  if ((DAT_04566893 & 1) == 0) {
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
    FUN_01bab630(&Method_MCEIBCKPIAD_<>c_CJHLLKHEEHH__);
    FUN_01bab630(&Method_MCEIBCKPIAD_<>c_LCCHBPEFMJN__);
    FUN_01bab630(&MCEIBCKPIAD_<>c_TypeInfo);
    DAT_04566893 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  (__this->fields).BDIHNIGKDLK = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  ppSVar2 = &(__this->fields).FEOGLGJBJDE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  ppSVar2 = &(__this->fields).HOIHAFALJIG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  ppSVar2 = &(__this->fields).MNIGCKKBGOH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_0;
  if (pSVar4 == (System_Action_FAIJGJCCKJC__o *)0x0) {
    if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_FAIJGJCCKJC__o *)thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar3 = &MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar3 = pSVar4;
    thunk_FUN_01c20e04(ppSVar3,pSVar4);
  }
  ppSVar3 = &(__this->fields).BJPKLLHHPAO;
  *ppSVar3 = pSVar4;
  thunk_FUN_01c20e04(ppSVar3,pSVar4);
  if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_1;
  if (pSVar4 == (System_Action_FAIJGJCCKJC__o *)0x0) {
    if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_FAIJGJCCKJC__o *)thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar3 = &MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_1;
    *ppSVar3 = pSVar4;
    thunk_FUN_01c20e04(ppSVar3,pSVar4);
  }
  ppSVar3 = &(__this->fields).BKKILNPNELM;
  *ppSVar3 = pSVar4;
  thunk_FUN_01c20e04(ppSVar3,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

