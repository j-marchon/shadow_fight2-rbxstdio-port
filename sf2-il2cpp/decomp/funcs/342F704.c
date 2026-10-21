// GBJGJEGPHKD.NKABOJNJJJC$$.ctor @ RVA 0x342F704

void GBJGJEGPHKD_NKABOJNJJJC___ctor(GBJGJEGPHKD_NKABOJNJJJC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JGHEMMGMLND__o *__this_00;
  System_Collections_Generic_List_BIDBHCDLLHH__o *__this_01;
  System_Collections_Generic_List_BIDBHCDLLHH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456816c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JGHEMMGMLND>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BIDBHCDLLHH>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<JGHEMMGMLND>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<BIDBHCDLLHH>_TypeInfo);
    DAT_0456816c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JGHEMMGMLND__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<JGHEMMGMLND>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JGHEMMGMLND>__ctor__);
  (__this->fields).OFIGHMECPGA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_BIDBHCDLLHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BIDBHCDLLHH>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<BIDBHCDLLHH>__ctor__);
  ppSVar1 = &(__this->fields).KIDEMGIBKHC;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

