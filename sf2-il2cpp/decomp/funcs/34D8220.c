// NKOIBKNPICN$$.ctor @ RVA 0x34D8220

void NKOIBKNPICN___ctor(NKOIBKNPICN_o *__this,NKOIBKNPICN_o *JOHFLOEABJL,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  System_Collections_Generic_List_int__o **ppSVar3;
  NKOIBKNPICN_Fields *pNVar4;
  System_Collections_Generic_List_int__o *pSVar5;
  
  if ((DAT_045686ee & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_045686ee = 1;
  }
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  pNVar4 = &__this->fields;
  pNVar4->OOIGOEAHPMA = pSVar1;
  thunk_FUN_01c20e04(pNVar4,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar3 = &(__this->fields).KJNPENJKBKD;
  *ppSVar3 = pSVar1;
  thunk_FUN_01c20e04(ppSVar3,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).JCJPICMGIHE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JOHFLOEABJL != (NKOIBKNPICN_o *)0x0) {
    pSVar5 = (JOHFLOEABJL->fields).OOIGOEAHPMA;
    pSVar1 = (System_Collections_Generic_List_int__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               Method_System_Collections_Generic_List<int>__ctor__);
    (__this->fields).OOIGOEAHPMA = pSVar1;
    thunk_FUN_01c20e04(pNVar4,pSVar1);
    pSVar5 = (JOHFLOEABJL->fields).KJNPENJKBKD;
    pSVar1 = (System_Collections_Generic_List_int__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               Method_System_Collections_Generic_List<int>__ctor__);
    (__this->fields).KJNPENJKBKD = pSVar1;
    thunk_FUN_01c20e04(ppSVar3,pSVar1);
    pSVar5 = (JOHFLOEABJL->fields).JCJPICMGIHE;
    pSVar1 = (System_Collections_Generic_List_int__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
    System_Collections_Generic_List<int>___ctor
              (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,
               Method_System_Collections_Generic_List<int>__ctor__);
    (__this->fields).JCJPICMGIHE = pSVar1;
    thunk_FUN_01c20e04(ppSVar2,pSVar1);
    (__this->fields).BHJAGFIAEAA = (JOHFLOEABJL->fields).BHJAGFIAEAA;
    (__this->fields).PBPNNKNICEE = (JOHFLOEABJL->fields).PBPNNKNICEE;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

