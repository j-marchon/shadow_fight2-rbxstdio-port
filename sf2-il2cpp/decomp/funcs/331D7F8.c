// CMCJGLAABFO$$NDNPGAKJLHM @ RVA 0x331D7F8

void CMCJGLAABFO__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o **ppSVar1;
  System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o **ppSVar2;
  CMCJGLAABFO_StaticFields *pCVar3;
  
  if ((DAT_04567828 & 1) == 0) {
    FUN_01bab630(&CMCJGLAABFO_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Clear__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Clear__
                );
    DAT_04567828 = 1;
  }
  pCVar3 = CMCJGLAABFO_TypeInfo->static_fields;
  if (pCVar3->MNCEELOCEDI !=
      (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar3->MNCEELOCEDI,
               Method_System_Collections_Generic_Dictionary<string,_IENLNOEDCFF_ACAJADECPLB>_Clear__
              );
    pCVar3 = CMCJGLAABFO_TypeInfo->static_fields;
  }
  if (pCVar3->HHGGEFNDOCL != (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar3->HHGGEFNDOCL,
               Method_System_Collections_Generic_Dictionary<string,_DMMJFKCBHEK>_Clear__);
    pCVar3 = CMCJGLAABFO_TypeInfo->static_fields;
  }
  if (pCVar3->LLHKIPGGPKG !=
      (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_Int32Enum>__Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pCVar3->LLHKIPGGPKG,
               Method_System_Collections_Generic_Dictionary<string,_PNGKLCHKPEO_NOLNDEAFBEL>_Clear__
              );
  }
  CMCJGLAABFO_TypeInfo->static_fields->MNCEELOCEDI =
       (System_Collections_Generic_Dictionary_string__IENLNOEDCFF_ACAJADECPLB__o *)0x0;
  thunk_FUN_01c20e04(CMCJGLAABFO_TypeInfo->static_fields,0);
  ppSVar1 = &CMCJGLAABFO_TypeInfo->static_fields->HHGGEFNDOCL;
  *ppSVar1 = (System_Collections_Generic_Dictionary_string__DMMJFKCBHEK__o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  ppSVar2 = &CMCJGLAABFO_TypeInfo->static_fields->LLHKIPGGPKG;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__PNGKLCHKPEO_NOLNDEAFBEL__o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}

