// AHOEIGAOKEL$$.ctor @ RVA 0x30D0778

void AHOEIGAOKEL___ctor(AHOEIGAOKEL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_FLCGGKEODNC__o *__this_00;
  System_Collections_Generic_List_FLCGGKEODNC__o **ppSVar1;
  System_Collections_Generic_List_LabelButton__o *__this_01;
  System_Collections_Generic_List_LabelButton__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045662fc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<LabelButton>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo);
    FUN_01bab630(&Method_OMLLDCIMLBB<object>__ctor__);
    DAT_045662fc = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_FLCGGKEODNC__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FLCGGKEODNC>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<FLCGGKEODNC>__ctor__);
  ppSVar1 = &(__this->fields).PGCBEJGMIMA;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_LabelButton__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LabelButton>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<LabelButton>__ctor__);
  ppSVar2 = &(__this->fields).HANEOGJOELA;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  OMLLDCIMLBB<object>___ctor((OMLLDCIMLBB_object__o *)__this,Method_OMLLDCIMLBB<object>__ctor__);
  return;
}

