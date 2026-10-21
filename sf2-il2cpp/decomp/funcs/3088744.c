// KPBOJBLLKPJ$$.ctor @ RVA 0x3088744

void KPBOJBLLKPJ___ctor(KPBOJBLLKPJ_o *__this,int32_t KOKFCIFNNCC,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  int key;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o **ppSVar1;
  
  if ((DAT_04566033 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_TypeInfo);
    DAT_04566033 = 1;
  }
  __this_00 = (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__ctor__)
  ;
  (__this->fields).LOBBELCAMJC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>__ctor__);
  ppSVar1 = &(__this->fields).NGKLIODAFAG;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HPMNDFPMJFG = KOKFCIFNNCC;
  key = 1;
  do {
    __this_02 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_02,Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
    if (*ppSVar1 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)*ppSVar1,key,
               (Il2CppObject *)__this_02,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__);
    key = key + 1;
  } while (key != 5);
  return;
}

