// ALJBCELIEHC$$.ctor @ RVA 0x352A970

void ALJBCELIEHC___ctor(ALJBCELIEHC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_NFEOGKEAFHL__o *pSVar1;
  System_Collections_Generic_List_NFEOGKEAFHL__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568a1f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NFEOGKEAFHL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NFEOGKEAFHL>_TypeInfo);
    DAT_04568a1f = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_NFEOGKEAFHL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NFEOGKEAFHL>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<NFEOGKEAFHL>__ctor__);
  (__this->fields).PBGALMEHDBP = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_NFEOGKEAFHL__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<NFEOGKEAFHL>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<NFEOGKEAFHL>__ctor__);
  ppSVar2 = &(__this->fields).HGIHFEIBHDP;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

