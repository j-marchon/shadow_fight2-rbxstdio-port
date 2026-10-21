// NLPJLHOEAOE$$JPHAKMNFEMI @ RVA 0x3202EBC

System_Collections_Generic_IList_AFFHKININGD__o *
NLPJLHOEAOE__JPHAKMNFEMI(OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  NLPJLHOEAOE_LGDPCMELDNG_o *__this;
  NLPJLHOEAOE_c *pNVar2;
  NLPJLHOEAOE_o *pNVar3;
  System_Predicate_T__o *pSVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_AFFHKININGD__o *pSVar6;
  
  if ((DAT_04566e08 & 1) == 0) {
    FUN_01bab630(&FLLIEEHCFAB<AFFHKININGD>_TypeInfo);
    FUN_01bab630(&Method_NLPJLHOEAOE_LGDPCMELDNG_BHCHDANHPMI__);
    FUN_01bab630(&Method_NLPJLHOEAOE_LGDPCMELDNG_FCBCAHIGFAB__);
    FUN_01bab630(&NLPJLHOEAOE_LGDPCMELDNG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_Exists__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_FindAll__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Predicate<AFFHKININGD>_TypeInfo);
    DAT_04566e08 = 1;
    method = extraout_x1;
  }
  __this = (NLPJLHOEAOE_LGDPCMELDNG_o *)thunk_FUN_01bda818(NLPJLHOEAOE_LGDPCMELDNG_TypeInfo,method);
  NLPJLHOEAOE_LGDPCMELDNG___ctor(__this,(MethodInfo *)0x0);
  if (__this != (NLPJLHOEAOE_LGDPCMELDNG_o *)0x0) {
    (__this->fields).battle = BANHBMINMMP;
    thunk_FUN_01c20e04(&__this->fields,BANHBMINMMP);
    pNVar2 = NLPJLHOEAOE_TypeInfo;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
    }
    pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)pNVar2);
    if (pNVar3 != (NLPJLHOEAOE_o *)0x0) {
      pSVar6 = (pNVar3->fields).HDDNEKLMLMF;
      pSVar4 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<AFFHKININGD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (pSVar6 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
        bVar1 = System_Collections_Generic_List<object>__Exists
                          ((System_Collections_Generic_List_object__o *)pSVar6,pSVar4,
                           Method_System_Collections_Generic_List<AFFHKININGD>_Exists__);
        if (!bVar1) {
          if ((FLLIEEHCFAB<AFFHKININGD>_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          return (System_Collections_Generic_IList_AFFHKININGD__o *)
                 FLLIEEHCFAB<AFFHKININGD>_TypeInfo->static_fields->AOAIEJMANCC;
        }
        pNVar2 = NLPJLHOEAOE_TypeInfo;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          pNVar2 = (NLPJLHOEAOE_c *)thunk_FUN_01ba7564();
        }
        pNVar3 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)pNVar2);
        if (pNVar3 != (NLPJLHOEAOE_o *)0x0) {
          pSVar6 = (pNVar3->fields).HDDNEKLMLMF;
          pSVar4 = (System_Predicate_T__o *)
                   thunk_FUN_01bda818(System_Predicate<AFFHKININGD>_TypeInfo);
          System_Predicate<object>___ctor();
          if (pSVar6 != (System_Collections_Generic_List_AFFHKININGD__o *)0x0) {
            pSVar5 = System_Collections_Generic_List<object>__FindAll
                               ((System_Collections_Generic_List_object__o *)pSVar6,pSVar4,
                                Method_System_Collections_Generic_List<AFFHKININGD>_FindAll__);
            return (System_Collections_Generic_IList_AFFHKININGD__o *)pSVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

