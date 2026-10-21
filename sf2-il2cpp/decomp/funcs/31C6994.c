// FPLCEOJCPOD$$.ctor @ RVA 0x31C6994

void FPLCEOJCPOD___ctor(FPLCEOJCPOD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__ObscuredInt__o *__this_00;
  
  if ((DAT_04566c36 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo);
    DAT_04566c36 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_string__ObscuredInt__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ObscuredInt>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_ObscuredInt>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredInt>__ctor__);
  (__this->fields).BJJAPALEEBD = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

