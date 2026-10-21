// HEFOANCOHDC$$LOLJOGPOOAH @ RVA 0x341A84C

void HEFOANCOHDC__LOLJOGPOOAH
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar4;
  HEFOANCOHDC_o *pHVar5;
  System_String_o *DIHAKADKIKM;
  ACHLOMELAJE_o *__this_00;
  DEKKGJNMFEB_o *__this_01;
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *__this_02;
  int local_24;
  
  if ((DAT_045680c6 & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    __this = (HEFOANCOHDC_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_045680c6 = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (__this = (HEFOANCOHDC_o *)(ACCIJLGMHOO->fields).EEFPBGNAFFI, __this == (HEFOANCOHDC_o *)0x0))
  goto LAB_0351aa68;
  iVar1._0_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValue;
  iVar1._1_1_ = (__this->fields).ICCBEPAFBFI.fields.inited;
  iVar1._2_1_ = (__this->fields).ICCBEPAFBFI.fields.fakeValueActive;
  iVar1._3_1_ = (__this->fields).ICCBEPAFBFI.fields.field_0xb;
  pHVar5 = StringLiteral_1567;
  if (1 < iVar1) {
    pNVar4 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (HEFOANCOHDC_o *)0x0;
    if (pNVar4 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351aa68;
    pHVar5 = (HEFOANCOHDC_o *)NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar4,(MethodInfo *)0x0);
    __this_02 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    __this = pHVar5;
    if (__this_02 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351aa68;
    pNVar4 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_02,1,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    __this = (HEFOANCOHDC_o *)0x0;
    if (pNVar4 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351aa68;
    DIHAKADKIKM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar4,(MethodInfo *)0x0);
    iVar2 = PCOEHCPGBBG__JBGCINPPLAC((System_String_o *)pHVar5,0,(MethodInfo *)0x0);
    iVar3 = PCOEHCPGBBG__JBGCINPPLAC(DIHAKADKIKM,0,(MethodInfo *)0x0);
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(LIIFLGALGNK_TypeInfo);
    }
    LIIFLGALGNK__DHPFKHMDEDG((MethodInfo *)0x0);
    iVar2 = LIIFLGALGNK__HLMBDJOGONJ(iVar2,iVar3 + 1,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (HEFOANCOHDC_o *)0x0;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0351aa68;
    iVar3 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(DEKKGJNMFEB_TypeInfo);
    }
    __this_01 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    __this = (HEFOANCOHDC_o *)0x0;
    if (__this_01 == (DEKKGJNMFEB_o *)0x0) goto LAB_0351aa68;
    iVar3 = DEKKGJNMFEB__HNBCOIJFCCA(__this_01,iVar3,(MethodInfo *)0x0);
    local_24 = iVar3 + iVar2;
    __this = (HEFOANCOHDC_o *)System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    pHVar5 = __this;
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)pHVar5;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351aa68:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

