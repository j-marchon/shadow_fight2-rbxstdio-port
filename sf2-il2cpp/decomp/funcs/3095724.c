// HNBHALLLNAP$$ODGFCLOEKJD @ RVA 0x3095724

void HNBHALLLNAP__ODGFCLOEKJD(HNBHALLLNAP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Char_array *val;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  
  if ((DAT_045660d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Except<char>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<char>__);
    FUN_01bab630(&StringLiteral_339);
    FUN_01bab630(&StringLiteral_1147);
    DAT_045660d3 = 1;
  }
  source = System_Linq_Enumerable__Except<char>
                     (StringLiteral_1147,StringLiteral_339,
                      Method_System_Linq_Enumerable_Except<char>__);
  val = System_Linq_Enumerable__ToArray<char>(source,Method_System_Linq_Enumerable_ToArray<char>__);
  pSVar1 = System_String__CreateString((System_String_o *)0x0,val,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__PFHOGFBJGDE((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar2 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar2,(MethodInfo *)0x0);
  pSVar1 = HPEENDCCJND__ALPMDLFPJEH((HPEENDCCJND_o *)__this,pSVar1,(MethodInfo *)0x0);
  HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  return;
}

