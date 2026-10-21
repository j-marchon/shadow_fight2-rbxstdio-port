// NKOIBKNPICN$$.ctor @ RVA 0x34D83C4

void NKOIBKNPICN___ctor(NKOIBKNPICN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_int__o *pSVar1;
  System_Collections_Generic_List_int__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686ed & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    DAT_045686ed = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo,method);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  (__this->fields).OOIGOEAHPMA = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).KJNPENJKBKD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_int__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (pSVar1,Method_System_Collections_Generic_List<int>__ctor__);
  ppSVar2 = &(__this->fields).JCJPICMGIHE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).PBPNNKNICEE = false;
  (__this->fields).BHJAGFIAEAA = 0;
  return;
}

