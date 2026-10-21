// HEFOANCOHDC$$BCJJIEDLKKN @ RVA 0x341B6AC

void HEFOANCOHDC__BCJJIEDLKKN
               (HEFOANCOHDC_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,HDBNGIBFEBA_o *LOFMIFGLIKN,
               MMFIDKMDADC_o *HPACPFLKHPK,MethodInfo *method)

{
  System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *pSVar1;
  NILLKLHKLHG_DIPIFJPCFOE_o *pNVar2;
  System_String_o *pSVar3;
  System_String_o *FOBBLEELKOM;
  System_String_o *JNBKCMLPDAE;
  PNGKLCHKPEO_o *__this_00;
  GBJGJEGPHKD_o *pGVar4;
  IEFEBEDLHNN_o *pIVar5;
  int iVar6;
  CNDPAJOLKFN_o *pCVar7;
  OLKKAIFGGAK_o *pOVar8;
  float extraout_s0;
  float __this_01;
  float local_34;
  
  if ((DAT_045680cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&PNGKLCHKPEO_TypeInfo);
    FUN_01bab630(&StringLiteral_1324);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680cd = 1;
  }
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351b8e4;
  pSVar3 = StringLiteral_1324;
  if (1 < (pSVar1->fields)._size) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,0,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351b8e4;
    pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if ((pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
       (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar1,1,
                            Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                           ), pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351b8e4;
    FOBBLEELKOM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
    if (pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
    goto LAB_0351b8e4;
    JNBKCMLPDAE = StringLiteral_1;
    if (2 < (pSVar1->fields)._size) {
      pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,2,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         );
      if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351b8e4;
      JNBKCMLPDAE = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
    }
    __this_00 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
    PNGKLCHKPEO___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (PNGKLCHKPEO_o *)0x0) goto LAB_0351b8e4;
    PNGKLCHKPEO__EOHMFJFFFIN(__this_00,pSVar3,FOBBLEELKOM,JNBKCMLPDAE,(MethodInfo *)0x0);
    local_34 = 0.0;
    if ((__this_00->fields).AKBDFFLEINL == 1) {
      iVar6 = (__this_00->fields).LOAFPIOGJAF;
      __this_01 = extraout_s0;
      if (iVar6 == 1) {
        if ((((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
             (pGVar4 = (BCKBBGCOMJD->fields).HMIAFJALFCJ, pGVar4 == (GBJGJEGPHKD_o *)0x0)) ||
            (pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar4,JNBKCMLPDAE,(MethodInfo *)0x0),
            pIVar5 == (IEFEBEDLHNN_o *)0x0)) ||
           (pCVar7 = (pIVar5->fields).CNMHHKAMGPI, pCVar7 == (CNDPAJOLKFN_o *)0x0))
        goto LAB_0351b8e4;
        __this_01 = (pCVar7->fields).super.JOLEIODMLFL;
        iVar6 = (__this_00->fields).LOAFPIOGJAF;
        local_34 = __this_01;
      }
      if (iVar6 == 2) {
        if (((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
            (pOVar8 = (BCKBBGCOMJD->fields).BPJMMBGIMNC, pOVar8 == (OLKKAIFGGAK_o *)0x0)) ||
           ((pGVar4 = (pOVar8->fields).HMIAFJALFCJ, pGVar4 == (GBJGJEGPHKD_o *)0x0 ||
            ((pIVar5 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar4,JNBKCMLPDAE,(MethodInfo *)0x0),
             pIVar5 == (IEFEBEDLHNN_o *)0x0 ||
             (pCVar7 = (pIVar5->fields).CNMHHKAMGPI, pCVar7 == (CNDPAJOLKFN_o *)0x0))))))
        goto LAB_0351b8e4;
        __this_01 = (pCVar7->fields).super.JOLEIODMLFL;
        local_34 = __this_01;
      }
    }
    else {
      if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351b8e4;
      __this_01 = (float)(*(__this_00->klass->vtable)._6_LHPFGLOFHBL.methodPtr)
                                   (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                    (__this_00->klass->vtable)._6_LHPFGLOFHBL.method);
      local_34 = __this_01;
    }
    pSVar3 = System_Single__ToString(__this_01,(MethodInfo *)&local_34);
  }
  if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
    (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar3;
    thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
    return;
  }
LAB_0351b8e4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

