// EINKKMIHCHI$$.ctor @ RVA 0x34C6FB8

void EINKKMIHCHI___ctor(EINKKMIHCHI_o *__this,GPFMGALHFJK_o *EMIJCAIFDML,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_string__o **ppSVar2;
  GooglePlayGames_PlayGamesPlatform_o *pGVar3;
  GPFMGALHFJK_o **ppGVar4;
  
  if ((DAT_04568642 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<string>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    DAT_04568642 = 1;
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar2 = &(__this->fields).LKNFEOLNJKH;
  *ppSVar2 = (System_Collections_Generic_HashSet_string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_HashSet<string>_TypeInfo);
  System_Collections_Generic_HashSet<object>___ctor
            (pSVar1,Method_System_Collections_Generic_HashSet<string>__ctor__);
  ppSVar2 = &(__this->fields).FEKDPAPKONP;
  *ppSVar2 = (System_Collections_Generic_HashSet_string__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NHJCFGACFDF___ctor((NHJCFGACFDF_o *)__this,(MethodInfo *)0x0);
  pGVar3 = GooglePlayGames_PlayGamesPlatform__get_Instance((MethodInfo *)0x0);
  (__this->fields).GJOCPBIBFCD = pGVar3;
  thunk_FUN_01c20e04();
  ppGVar4 = &(__this->fields).KAKIHIMNDAE;
  *ppGVar4 = EMIJCAIFDML;
  thunk_FUN_01c20e04(ppGVar4,EMIJCAIFDML);
  return;
}

