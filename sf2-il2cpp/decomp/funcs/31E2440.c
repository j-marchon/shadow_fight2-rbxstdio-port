// GBAAAJLKFDA.NPHBGNFGBKL$$CFKEANHONJK @ RVA 0x31E2440

void GBAAAJLKFDA_NPHBGNFGBKL__CFKEANHONJK
               (GBAAAJLKFDA_NPHBGNFGBKL_o *__this,int32_t attempt,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_List_ValueTuple_int__string___o *pSVar4;
  GBAAAJLKFDA_o *pGVar5;
  System_TimeSpan_o MINHPKOPAIE;
  BKMILGLGFCM_IFBNAEMJLJL_o *pBVar6;
  PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *__this_01;
  System_Action_DMKKAPNMDKJ__o *BLMFLPJJMPF;
  MethodInfo *in_x4;
  BKMILGLGFCM_o *pBVar7;
  EGPGCNBJPEH_o *__this_02;
  Il2CppObject IVar8;
  
  if ((DAT_04566d4c & 1) == 0) {
    FUN_01bab630(&System_Action<DMKKAPNMDKJ>_TypeInfo);
    FUN_01bab630(&Method_GBAAAJLKFDA_BGCAJLLEIPM_BFDHBIJKKHK__);
    FUN_01bab630(&GBAAAJLKFDA_BGCAJLLEIPM_TypeInfo);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__);
    FUN_01bab630(&Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Item__);
    DAT_04566d4c = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(GBAAAJLKFDA_BGCAJLLEIPM_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    thunk_FUN_01c20e04(&__this_00[2].monitor,__this);
    *(int32_t *)((long)&__this_00[2].klass + 4) = attempt;
    pSVar4 = (__this->fields).zones;
    if (pSVar4 != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0) {
      iVar2 = (pSVar4->fields)._size;
      iVar1 = (__this->fields).startIndex + attempt;
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = iVar1 / iVar2;
      }
      IVar8 = (Il2CppObject)
              System_Collections_Generic_List<ValueTuple<int,_object>>__get_Item
                        ((System_Collections_Generic_List_T__o *)pSVar4,iVar1 - iVar3 * iVar2,
                         Method_System_Collections_Generic_List<ValueTuple<int,_string>>_get_Item__)
      ;
      __this_00[1] = IVar8;
      thunk_FUN_01c20e04(&__this_00[1].monitor,0);
      pBVar7 = (__this->fields).parameters;
      if ((pBVar7 != (BKMILGLGFCM_o *)0x0) &&
         (pGVar5 = (__this->fields).__4__this, pGVar5 != (GBAAAJLKFDA_o *)0x0)) {
        MINHPKOPAIE = GBAAAJLKFDA__GFBIJKKKMEI
                                (pGVar5,(System_ValueTuple_int__string__o)
                                        *(System_ValueTuple_int__string__Fields *)(__this_00 + 1),
                                 (System_TimeSpan_o)(pBVar7->fields).super.KBFOKFPKAKN.fields._ticks
                                 ,in_x4);
        pBVar6 = FEOFIFGKEFM__BALPBNPDFNK((__this->fields).parameters,(MethodInfo *)0x0);
        if ((pBVar6 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) &&
           (__this_01 = (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)
                        PDBDELCMKJG_DGCHKODLPJG<object>__BHOHLODBJPE
                                  ((PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)pBVar6,
                                   __this_00[1].monitor,
                                   Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_BHOHLODBJPE__
                                  ), __this_01 != (PDBDELCMKJG_DGCHKODLPJG_TBuilder__o *)0x0)) {
          pBVar6 = (BKMILGLGFCM_IFBNAEMJLJL_o *)
                   PDBDELCMKJG_DGCHKODLPJG<object>__IDIJAFLLLJG
                             (__this_01,MINHPKOPAIE,
                              Method_PDBDELCMKJG_DGCHKODLPJG<BKMILGLGFCM_IFBNAEMJLJL>_IDIJAFLLLJG__)
          ;
          pSVar4 = (__this->fields).zones;
          if (pSVar4 != (System_Collections_Generic_List_ValueTuple_int__string___o *)0x0) {
            *(bool *)&__this_00[2].klass =
                 *(int *)((long)&__this_00[2].klass + 4) == (pSVar4->fields)._size + -1;
            BLMFLPJJMPF = (System_Action_DMKKAPNMDKJ__o *)
                          thunk_FUN_01bda818(System_Action<DMKKAPNMDKJ>_TypeInfo);
            System_Action<object>___ctor();
            if (pBVar6 != (BKMILGLGFCM_IFBNAEMJLJL_o *)0x0) {
              BKMILGLGFCM_IFBNAEMJLJL__JLDAALDPGIE(pBVar6,BLMFLPJJMPF,(MethodInfo *)0x0);
              pGVar5 = (__this->fields).__4__this;
              if (pGVar5 != (GBAAAJLKFDA_o *)0x0) {
                __this_02 = (pGVar5->fields).HMAMEMNGEPE;
                pBVar7 = BKMILGLGFCM_IFBNAEMJLJL__HFMIGKLONNL(pBVar6,(MethodInfo *)0x0);
                if (__this_02 != (EGPGCNBJPEH_o *)0x0) {
                  EGPGCNBJPEH__ILGCEJBAOHG(__this_02,pBVar7,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

