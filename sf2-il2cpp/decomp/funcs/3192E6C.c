// ABNLGBHKOCE.JBMHDDKONHC$$.ctor @ RVA 0x3192E6C

void ABNLGBHKOCE_JBMHDDKONHC___ctor(ABNLGBHKOCE_JBMHDDKONHC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KJFPGDFNFCL__o *__this_00;
  System_Collections_Generic_List_IENLNOEDCFF__o *pSVar1;
  System_Collections_Generic_List_IENLNOEDCFF__o **ppSVar2;
  System_Collections_Generic_List_IIMNGGHGKOD__o *__this_01;
  System_Collections_Generic_List_IIMNGGHGKOD__o **ppSVar3;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a54 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KJFPGDFNFCL>_TypeInfo);
    DAT_04566a54 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_KJFPGDFNFCL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KJFPGDFNFCL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KJFPGDFNFCL>__ctor__);
  (__this->fields).AFFIHBMACFF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  pSVar1 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).KPFGHBEKJIM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_IENLNOEDCFF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<IENLNOEDCFF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<IENLNOEDCFF>__ctor__);
  ppSVar2 = &(__this->fields).KFLHLLDPBIC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_01 = (System_Collections_Generic_List_IIMNGGHGKOD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<IIMNGGHGKOD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<IIMNGGHGKOD>__ctor__);
  ppSVar3 = &(__this->fields).NEIJJHEFLHP;
  *ppSVar3 = __this_01;
  thunk_FUN_01c20e04(ppSVar3,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

