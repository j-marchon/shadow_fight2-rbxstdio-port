// HEFOANCOHDC$$BHHBMJILNLB @ RVA 0x341CF58

void HEFOANCOHDC__BHHBMJILNLB
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
  OLKKAIFGGAK_o *pOVar4;
  GBJGJEGPHKD_o *pGVar5;
  IEFEBEDLHNN_o *pIVar6;
  int32_t ACCIHBHMFPN;
  CNDPAJOLKFN_o *pCVar7;
  float extraout_s0;
  float __this_01;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float local_34;
  
                    /* try { // try from 0351cf78 to 0361cf7f has its CatchHandler @ 0351cfd0 */
  if ((DAT_045680d2 & 1) == 0) {
                    /* try { // try from 0351cf80 to 0361cfc3 has its CatchHandler @ 0351cee4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    FUN_01bab630(&PNGKLCHKPEO_TypeInfo);
    FUN_01bab630(&StringLiteral_1324);
    FUN_01bab630(&StringLiteral_1);
    DAT_045680d2 = 1;
  }
                    /* try { // try from 0351cfc4 to 0361cfc7 has its CatchHandler @ 0351cfcc */
                    /* try { // try from 0351cfc8 to 0361cfe7 has its CatchHandler @ 0351cee4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351cfc4 with catch @ 0351cfcc
                        */
  if ((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
     (pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI,
     pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0))
  goto LAB_0351d1e8;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0351cf78 with catch @ 0351cfd0
                        */
  if ((pSVar1->fields)._size < 2) {
    pSVar3 = StringLiteral_1324;
    if (HPACPFLKHPK == (MMFIDKMDADC_o *)0x0) goto LAB_0351d1e8;
    goto LAB_0351d1c8;
  }
                    /* try { // try from 0351cfe8 to 0361cfeb has its CatchHandler @ 0351d014 */
                    /* try { // try from 0351cfec to 0361d01b has its CatchHandler @ 0351cee4 */
  pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
           System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)pSVar1,0,
                      Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
  if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d1e8;
  pSVar3 = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
  pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
                    /* catch() { ... } // from try @ 0351cfe8 with catch @ 0351d014 */
  if ((pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0) ||
     (pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,1,
                          Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__
                         ), pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0)) goto LAB_0351d1e8;
                    /* try { // try from 0351d01c to 0361d023 has its CatchHandler @ 0351d038 */
  FOBBLEELKOM = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 0351d024 to 0361d02f has its CatchHandler @ 0351cee4 */
  pSVar1 = (ACCIJLGMHOO->fields).EEFPBGNAFFI;
  if (pSVar1 == (System_Collections_Generic_List_NILLKLHKLHG_DIPIFJPCFOE__o *)0x0)
  goto LAB_0351d1e8;
                    /* try { // try from 0351d030 to 0361d037 has its CatchHandler @ 0351d038 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0351d01c with catch @ 0351d038
                       catch(type#2 @ 00000000) { ... } // from try @ 0351d030 with catch @ 0351d038
                        */
  JNBKCMLPDAE = StringLiteral_1;
  if (2 < (pSVar1->fields)._size) {
    pNVar2 = (NILLKLHKLHG_DIPIFJPCFOE_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar1,2,
                        Method_System_Collections_Generic_List<NILLKLHKLHG_DIPIFJPCFOE>_get_Item__);
    if (pNVar2 == (NILLKLHKLHG_DIPIFJPCFOE_o *)0x0) goto LAB_0351d1e8;
    JNBKCMLPDAE = NILLKLHKLHG_DIPIFJPCFOE__FFNGPIFFCLK(pNVar2,(MethodInfo *)0x0);
  }
  __this_00 = (PNGKLCHKPEO_o *)thunk_FUN_01bda818(PNGKLCHKPEO_TypeInfo);
  PNGKLCHKPEO___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (PNGKLCHKPEO_o *)0x0) goto LAB_0351d1e8;
  PNGKLCHKPEO__EOHMFJFFFIN(__this_00,pSVar3,FOBBLEELKOM,JNBKCMLPDAE,(MethodInfo *)0x0);
  local_34 = 0.0;
  if ((__this_00->fields).AKBDFFLEINL != 1) {
    if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351d1e8;
    __this_01 = (float)(*(__this_00->klass->vtable)._8_CJHJMGGINHP.methodPtr)
                                 (__this_00,(BCKBBGCOMJD->fields).FNEAAHOOHAA,
                                  (__this_00->klass->vtable)._8_CJHJMGGINHP.method);
    local_34 = __this_01;
    goto switchD_0351d0ec_caseD_5;
  }
  __this_01 = extraout_s0;
  switch((__this_00->fields).LOAFPIOGJAF) {
  case 1:
    if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351d1e8;
    pGVar5 = (BCKBBGCOMJD->fields).HMIAFJALFCJ;
    break;
  case 2:
    if ((BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) ||
       (pOVar4 = (BCKBBGCOMJD->fields).BPJMMBGIMNC, pOVar4 == (OLKKAIFGGAK_o *)0x0))
    goto LAB_0351d1e8;
    pGVar5 = (pOVar4->fields).HMIAFJALFCJ;
    break;
  case 3:
    if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351d1e8;
    pOVar4 = (BCKBBGCOMJD->fields).NFMBPIPEKGF;
    if (pOVar4 == (OLKKAIFGGAK_o *)0x0) goto switchD_0351d0ec_caseD_5;
    pGVar5 = (pOVar4->fields).HMIAFJALFCJ;
    if (pGVar5 == (GBJGJEGPHKD_o *)0x0) goto LAB_0351d1e8;
    pIVar6 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar5,JNBKCMLPDAE,(MethodInfo *)0x0);
    __this_01 = extraout_s0_00;
    goto joined_r0x0351d1a0;
  case 4:
    if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351d1e8;
    ACCIHBHMFPN = 4;
    goto LAB_0351d180;
  default:
    goto switchD_0351d0ec_caseD_5;
  case 6:
    if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) goto LAB_0351d1e8;
    ACCIHBHMFPN = 6;
LAB_0351d180:
    pOVar4 = OLKKAIFGGAK__GMBBOANEBJJ(BCKBBGCOMJD,ACCIHBHMFPN,(MethodInfo *)0x0);
    __this_01 = extraout_s0_01;
    if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
      pGVar5 = (pOVar4->fields).HMIAFJALFCJ;
      if (pGVar5 == (GBJGJEGPHKD_o *)0x0) goto LAB_0351d1e8;
      pIVar6 = GBJGJEGPHKD__ILECMJOENMK(pGVar5,(MethodInfo *)0x0);
      __this_01 = extraout_s0_02;
joined_r0x0351d1a0:
      if (pIVar6 == (IEFEBEDLHNN_o *)0x0) goto switchD_0351d0ec_caseD_5;
      goto LAB_0351d1a4;
    }
    goto switchD_0351d0ec_caseD_5;
  }
  if ((pGVar5 != (GBJGJEGPHKD_o *)0x0) &&
     (pIVar6 = GBJGJEGPHKD__OCJAHBKIFNO(pGVar5,JNBKCMLPDAE,(MethodInfo *)0x0),
     pIVar6 != (IEFEBEDLHNN_o *)0x0)) {
LAB_0351d1a4:
    pCVar7 = (pIVar6->fields).CNMHHKAMGPI;
    if (pCVar7 != (CNDPAJOLKFN_o *)0x0) {
      __this_01 = (pCVar7->fields).super.OHHDBINAJCB;
      local_34 = __this_01;
switchD_0351d0ec_caseD_5:
      pSVar3 = System_Single__ToString(__this_01,(MethodInfo *)&local_34);
      if (HPACPFLKHPK != (MMFIDKMDADC_o *)0x0) {
LAB_0351d1c8:
        (HPACPFLKHPK->fields).HPACPFLKHPK = pSVar3;
        thunk_FUN_01c20e04(&HPACPFLKHPK->fields);
        return;
      }
    }
  }
LAB_0351d1e8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

