// AMHFFFODDOC$$.cctor @ RVA 0x343BDC0

void AMHFFFODDOC___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_045681dd & 1) == 0) {
    FUN_01bab630(&AMHFFFODDOC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
    DAT_045681dd = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
  AMHFFFODDOC_TypeInfo->static_fields->IABCHDDPNMF =
       (System_Collections_Generic_Dictionary_string__Sprite____o *)__this;
  thunk_FUN_01c20e04(AMHFFFODDOC_TypeInfo->static_fields,__this);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  AMHFFFODDOC_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}

