// CFMDGLMCNIL$$.ctor @ RVA 0x30782AC

void CFMDGLMCNIL___ctor(CFMDGLMCNIL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OHPOFOPJIMB__o *pSVar1;
  System_Collections_Generic_List_OHPOFOPJIMB__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565fbd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo);
    DAT_04565fbd = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_OHPOFOPJIMB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
  ppSVar2 = &(__this->fields).HHMMOAAKGCB;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_OHPOFOPJIMB__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<OHPOFOPJIMB>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<OHPOFOPJIMB>__ctor__);
  ppSVar2 = &(__this->fields).MPMNLJJLADE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

