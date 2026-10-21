// NAEFACJHPAL$$.cctor @ RVA 0x30A6C0C

void NAEFACJHPAL___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__TMP_FontAsset__o **ppSVar3;
  
  if ((DAT_04566174 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Font>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Font>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TypeInfo);
    FUN_01bab630(&NAEFACJHPAL_TypeInfo);
    DAT_04566174 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Font>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Font>__ctor__);
  NAEFACJHPAL_TypeInfo->static_fields->AFFKEJIKNPN =
       (System_Collections_Generic_Dictionary_string__Font__o *)pSVar2;
  thunk_FUN_01c20e04(NAEFACJHPAL_TypeInfo->static_fields,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_TMP_FontAsset>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_TMP_FontAsset>__ctor__);
  ppSVar3 = &NAEFACJHPAL_TypeInfo->static_fields->NAODGIJCPFA;
  *ppSVar3 = (System_Collections_Generic_Dictionary_string__TMP_FontAsset__o *)pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  NAEFACJHPAL_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}

