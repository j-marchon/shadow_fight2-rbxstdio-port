// HEFOANCOHDC$$FICAPACFMIA @ RVA 0x341D284

void HEFOANCOHDC__FICAPACFMIA
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t EMFGEOPENPI;
  int32_t iVar3;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar4;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *pSVar8;
  undefined8 *puVar9;
  float CJNHFNHJHPE;
  float local_34;
  
  if ((DAT_045680d4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_get_Item__
                );
    FUN_01bab630(&HEFOANCOHDC_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&StringLiteral_11444);
    FUN_01bab630(&StringLiteral_21606);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680d4 = 1;
  }
  pSVar7 = StringLiteral_21606;
  local_34 = 0.0;
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar4 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar4 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351d5a0;
  iVar1 = (pSVar4->fields)._size;
  if ((iVar1 < 1) || (3 < iVar1)) {
LAB_0351d4c0:
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351d5a0;
                    /* try { // try from 0351d4c4 to 0361d55f has its CatchHandler @ 0351d4c4
                       catch() { ... } // from try @ 0351d4c4 with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d568 with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d5a8 with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d5cc with catch @ 0351d4c4
                       catch() { ... } // from try @ 0351d5fc with catch @ 0351d4c4 */
    puVar9 = &StringLiteral_11444;
LAB_0351d4cc:
    pSVar7 = (System_String_o *)*puVar9;
  }
  else {
    pNVar5 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar4,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar5 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d5a0;
    pSVar6 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar5,(MethodInfo *)0x0);
    CJNHFNHJHPE = PCOEHCPGBBG__OFFODGKLGOP(pSVar6,0.0,(MethodInfo *)0x0);
    pSVar4 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if (pSVar4 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351d5a0;
    if ((pSVar4->fields)._size < 2) {
      EMFGEOPENPI = 0;
    }
    else {
      pNVar5 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,1,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar5 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d5a0;
      pSVar6 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar5,(MethodInfo *)0x0);
      EMFGEOPENPI = PCOEHCPGBBG__JBGCINPPLAC(pSVar6,0,(MethodInfo *)0x0);
      pSVar4 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
      if (pSVar4 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
      goto LAB_0351d5a0;
    }
    if ((pSVar4->fields)._size == 3) {
      pNVar5 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar4,2,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar5 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d5a0;
      pSVar7 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar5,(MethodInfo *)0x0);
    }
    if ((HEFOANCOHDC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = HEFOANCOHDC_TypeInfo->static_fields->MHONJANODKB;
    if (pSVar8 == (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)0x0)
    goto LAB_0351d5a0;
    bVar2 = System_Collections_Generic_Dictionary<object,_Int32Enum>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                       (Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_ContainsKey__
                      );
    if (!bVar2) goto LAB_0351d4c0;
    if ((HEFOANCOHDC_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = HEFOANCOHDC_TypeInfo->static_fields->MHONJANODKB;
    if (pSVar8 == (System_Collections_Generic_Dictionary_string__HEFOANCOHDC_BLLOEEDBDEO__o *)0x0)
    goto LAB_0351d5a0;
    iVar3 = System_Collections_Generic_Dictionary<object,_Int32Enum>__get_Item
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
                       (Il2CppObject *)pSVar7,
                       Method_System_Collections_Generic_Dictionary<string,_HEFOANCOHDC_BLLOEEDBDEO>_get_Item__
                      );
    switch(iVar3) {
    case 0:
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__OCNBCNPMNBC(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    case 1:
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__ADIGKHKAAKN(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    case 2:
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__AONJLBECFNG(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    case 3:
                    /* try { // try from 0351d560 to 0361d567 has its CatchHandler @ 0351d5b0 */
                    /* try { // try from 0351d568 to 0361d5a3 has its CatchHandler @ 0351d4c4 */
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_34 = LIIFLGALGNK__AHKJACGMFMB(CJNHFNHJHPE,EMFGEOPENPI,(MethodInfo *)0x0);
      break;
    default:
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351d5a0;
      puVar9 = &StringLiteral_1;
      goto LAB_0351d4cc;
    }
    pSVar7 = System_Single__ToString(local_34,(MethodInfo *)&local_34);
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
LAB_0351d5a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar7;
  thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
  return;
}

