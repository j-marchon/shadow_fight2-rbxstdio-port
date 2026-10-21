// JMDPBFOCHHP.NOPCEDPNNKO$$.ctor @ RVA 0x2FFB284

void JMDPBFOCHHP_NOPCEDPNNKO___ctor(JMDPBFOCHHP_NOPCEDPNNKO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *__this_01;
  System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o **ppSVar1;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_02;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo);
    DAT_04565ad2 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>__ctor__);
  (__this->fields).GADHINPJDAF = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_JMDPBFOCHHP_EFAJBOEHPLJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_EFAJBOEHPLJ>__ctor__);
  ppSVar1 = &(__this->fields).LNFJJJOGJKE;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  __this_02 = (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_02,
             Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>__ctor__);
  ppSVar2 = &(__this->fields).NPGALOBDIHL;
  *ppSVar2 = __this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

