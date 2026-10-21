// MDFGJKBMECA.LGNCFOEJBDP$$.ctor @ RVA 0x3368D24

void MDFGJKBMECA_LGNCFOEJBDP___ctor(MDFGJKBMECA_LGNCFOEJBDP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *pSVar1;
  System_Collections_Generic_List_string__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567ae1 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_04567ae1 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).AFFPHLIMPKL = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar2 = &(__this->fields).PHDJNAEEIKK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

