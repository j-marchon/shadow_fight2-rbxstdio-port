// HEEEDKBOAKM$$KJAJIPLCDDN @ RVA 0x3345EC0

bool HEEEDKBOAKM__KJAJIPLCDDN(HEEEDKBOAKM_o *__this,System_String_o *KKDELPFMDFM,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  HEEEDKBOAKM_HFFHEJLOKMM_o *__this_00;
  System_Predicate_T__o *pSVar3;
  System_Collections_Generic_List_CFEFALDOEMD__o *pSVar4;
  
  if ((DAT_045679b9 & 1) == 0) {
    FUN_01bab630(&Method_HEEEDKBOAKM_HFFHEJLOKMM_MLJAGNPABDL__);
    FUN_01bab630(&Method_HEEEDKBOAKM_HFFHEJLOKMM_PEKHNNMPKHK__);
    FUN_01bab630(&HEEEDKBOAKM_HFFHEJLOKMM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CFEFALDOEMD>_RemoveAll__);
    FUN_01bab630(&System_Predicate<CFEFALDOEMD>_TypeInfo);
    DAT_045679b9 = 1;
  }
  __this_00 = (HEEEDKBOAKM_HFFHEJLOKMM_o *)thunk_FUN_01bda818(HEEEDKBOAKM_HFFHEJLOKMM_TypeInfo);
  HEEEDKBOAKM_HFFHEJLOKMM___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (HEEEDKBOAKM_HFFHEJLOKMM_o *)0x0) {
    (__this_00->fields).p_productId = KKDELPFMDFM;
    thunk_FUN_01c20e04(&__this_00->fields,KKDELPFMDFM);
    pSVar4 = (__this->fields).super.GPEBKHNMFIB;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CFEFALDOEMD>_TypeInfo);
    System_Predicate<object>___ctor();
    if (pSVar4 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
      iVar1 = System_Collections_Generic_List<object>__RemoveAll
                        ((System_Collections_Generic_List_object__o *)pSVar4,pSVar3,
                         Method_System_Collections_Generic_List<CFEFALDOEMD>_RemoveAll__);
      pSVar4 = (__this->fields).super.GMDPKFHCOGL;
      pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<CFEFALDOEMD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (pSVar4 != (System_Collections_Generic_List_CFEFALDOEMD__o *)0x0) {
        iVar2 = System_Collections_Generic_List<object>__RemoveAll
                          ((System_Collections_Generic_List_object__o *)pSVar4,pSVar3,
                           Method_System_Collections_Generic_List<CFEFALDOEMD>_RemoveAll__);
        return 0 < iVar2 + iVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

