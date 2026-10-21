// HEFOANCOHDC$$GAKBKBOMKHP @ RVA 0x341F1A0

void HEFOANCOHDC__GAKBKBOMKHP
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ACHLOMELAJE_o *__this_00;
  ECENNHNBAME_o *pEVar5;
  System_Text_StringBuilder_o *__this_01;
  GBJGJEGPHKD_o *pGVar6;
  System_String_StaticFields *pSVar7;
  System_Collections_Generic_List_string__o *__this_02;
  System_String_o *pSVar8;
  int index;
  float fVar9;
  int32_t local_54;
  
  if ((DAT_045680d9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_2968);
    FUN_01bab630(&StringLiteral_9292);
    FUN_01bab630(&StringLiteral_22485);
    FUN_01bab630(&StringLiteral_8409);
    FUN_01bab630(&StringLiteral_9291);
    FUN_01bab630(&StringLiteral_7361);
    FUN_01bab630(&StringLiteral_8024);
    FUN_01bab630(&StringLiteral_1606);
    __this = (HEFOANCOHDC_o *)FUN_01bab630(&StringLiteral_1567);
    DAT_045680d9 = 1;
  }
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351f450;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) goto LAB_0351f55c;
  pSVar8 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar4 = System_String__op_Equality(pSVar8,StringLiteral_8409,(MethodInfo *)0x0);
  if (bVar4) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
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
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_0351f55c;
    local_54 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    __this = (HEFOANCOHDC_o *)System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
joined_r0x0351f528:
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) {
LAB_0351f55c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
  }
  else {
    bVar4 = System_String__op_Equality(pSVar8,StringLiteral_2968,(MethodInfo *)0x0);
    if (bVar4) {
      pEVar5 = OLKKAIFGGAK__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
      __this = (HEFOANCOHDC_o *)0x0;
      if (pEVar5 != (ECENNHNBAME_o *)0x0) {
        __this_01 = (System_Text_StringBuilder_o *)
                    thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(__this_01,(MethodInfo *)0x0);
        __this = (HEFOANCOHDC_o *)OLKKAIFGGAK__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
        if (((ECENNHNBAME_o *)__this == (ECENNHNBAME_o *)0x0) ||
           (__this_02 = (((ECENNHNBAME_o *)__this)->fields)._AHFPJJKEANI_k__BackingField,
           __this_02 == (System_Collections_Generic_List_string__o *)0x0)) goto LAB_0351f55c;
        iVar1 = (__this_02->fields)._size;
        if (iVar1 < 1) {
          if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_0351f55c;
        }
        else {
          index = 0;
          do {
            __this = (HEFOANCOHDC_o *)
                     System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_02,index,
                                Method_System_Collections_Generic_List<string>_get_Item__);
            if (__this_01 == (System_Text_StringBuilder_o *)0x0) goto LAB_0351f55c;
            System_Text_StringBuilder__Append(__this_01,(System_String_o *)__this,(MethodInfo *)0x0)
            ;
            if (index < iVar1 + -1) {
              System_Text_StringBuilder__Append(__this_01,StringLiteral_22485,(MethodInfo *)0x0);
            }
            index = index + 1;
          } while (iVar1 != index);
        }
        __this = (HEFOANCOHDC_o *)
                 (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                           (__this_01,(__this_01->klass->vtable)._3_ToString.method);
        goto joined_r0x0351f528;
      }
LAB_0351f450:
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351f55c;
      pSVar7 = string_TypeInfo->static_fields;
    }
    else {
      bVar4 = System_String__op_Equality(pSVar8,StringLiteral_8024,(MethodInfo *)0x0);
      if (bVar4) {
        pEVar5 = OLKKAIFGGAK__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
        __this = (HEFOANCOHDC_o *)0x0;
        if (pEVar5 == (ECENNHNBAME_o *)0x0) goto LAB_0351f450;
        __this = (HEFOANCOHDC_o *)OLKKAIFGGAK__FMEOPPFIHCB(BCKBBGCOMJD,(MethodInfo *)0x0);
        if ((ECENNHNBAME_o *)__this == (ECENNHNBAME_o *)0x0) goto LAB_0351f55c;
        pSVar7 = (System_String_StaticFields *)&StringLiteral_1567;
        if ((((ECENNHNBAME_o *)__this)->fields).BFMPHOCJIHP != false) {
          pSVar7 = (System_String_StaticFields *)&StringLiteral_1606;
        }
      }
      else {
        bVar4 = System_String__op_Equality(pSVar8,StringLiteral_7361,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        pGVar6 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
        __this = (HEFOANCOHDC_o *)0x0;
        if (((pGVar6 == (GBJGJEGPHKD_o *)0x0) ||
            (__this = (HEFOANCOHDC_o *)
                      GBJGJEGPHKD__OCJAHBKIFNO(pGVar6,StringLiteral_9292,(MethodInfo *)0x0),
            (ECENNHNBAME_o *)__this == (ECENNHNBAME_o *)0x0)) ||
           (pSVar8 = *(System_String_o **)
                      &(((ECENNHNBAME_o *)__this)->fields).EAFPDFHFBOM.fields.hiddenValue,
           pSVar8 == (System_String_o *)0x0)) goto LAB_0351f55c;
        pGVar6 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
        __this = (HEFOANCOHDC_o *)0x0;
        if (pGVar6 == (GBJGJEGPHKD_o *)0x0) goto LAB_0351f55c;
        fVar9 = *(float *)&(pSVar8->fields)._firstChar;
        __this = (HEFOANCOHDC_o *)
                 GBJGJEGPHKD__OCJAHBKIFNO(pGVar6,StringLiteral_9291,(MethodInfo *)0x0);
        if (((ECENNHNBAME_o *)__this == (ECENNHNBAME_o *)0x0) ||
           (pSVar8 = *(System_String_o **)
                      &(((ECENNHNBAME_o *)__this)->fields).EAFPDFHFBOM.fields.hiddenValue,
           pSVar8 == (System_String_o *)0x0)) goto LAB_0351f55c;
        fVar9 = 0.0 - fVar9;
        bVar4 = false;
        bVar2 = true;
        bVar3 = false;
        if (30.0 < 0.0 - *(float *)&(pSVar8->fields)._firstChar) {
          bVar4 = false;
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar9)) {
            bVar4 = fVar9 < 30.0;
            bVar2 = fVar9 == 30.0;
            bVar3 = false;
          }
        }
        pSVar7 = (System_String_StaticFields *)&StringLiteral_1567;
        if (!bVar2 && bVar4 == bVar3) {
          pSVar7 = (System_String_StaticFields *)&StringLiteral_1606;
        }
      }
      if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351f55c;
    }
    __this = (HEFOANCOHDC_o *)pSVar7->Empty;
  }
  (HPACPFLKHPK->fields).HPACPFLKHPK = (System_String_o *)__this;
  thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
  return;
}

