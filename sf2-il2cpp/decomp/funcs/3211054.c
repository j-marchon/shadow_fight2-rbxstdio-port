// NGCBNMBJMOE$$.cctor @ RVA 0x3211054

void NGCBNMBJMOE___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__Sprite__o **ppSVar3;
  
  if ((DAT_04566e8d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Sprite>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Sprite>_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    DAT_04566e8d = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Sprite[]>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Sprite[]>__ctor__);
  NGCBNMBJMOE_TypeInfo->static_fields->IABCHDDPNMF =
       (System_Collections_Generic_Dictionary_string__Sprite____o *)pSVar2;
  thunk_FUN_01c20e04(NGCBNMBJMOE_TypeInfo->static_fields,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Sprite>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Sprite>__ctor__);
  ppSVar3 = &NGCBNMBJMOE_TypeInfo->static_fields->DKNBHLFHKNH;
  *ppSVar3 = (System_Collections_Generic_Dictionary_string__Sprite__o *)pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  NGCBNMBJMOE_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}

