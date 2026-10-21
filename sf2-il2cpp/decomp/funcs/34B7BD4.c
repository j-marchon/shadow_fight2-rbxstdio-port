// KLPJOKOFLJD$$.ctor @ RVA 0x34B7BD4

void KLPJOKOFLJD___ctor(KLPJOKOFLJD_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Security_Cryptography_MD5_o *pSVar1;
  MethodInfo *extraout_x1;
  System_Security_Cryptography_MD5_o **ppSVar2;
  
  if ((DAT_045685a1 & 1) == 0) {
    FUN_01bab630(&KLPJOKOFLJD_EDDJLFOOBCI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<byte[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<byte[]>_TypeInfo);
    DAT_045685a1 = 1;
    method = extraout_x1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KLPJOKOFLJD_EDDJLFOOBCI_TypeInfo,method);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_HashSet_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<byte[]>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (__this_01,(System_Collections_Generic_IEqualityComparer_T__o *)__this_00,
             Method_System_Collections_Generic_HashSet<byte[]>__ctor__);
  (__this->fields).BOFADCNNCPO = (System_Collections_Generic_HashSet_byte____o *)__this_01;
  thunk_FUN_01c20e04(&__this->fields,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = System_Security_Cryptography_MD5__Create((MethodInfo *)0x0);
  ppSVar2 = &(__this->fields).CCHGABMGBIJ;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}

