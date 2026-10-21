// IGJEEGBBNFC$$COAKNNMMEJF @ RVA 0x32A255C

void IGJEEGBBNFC__COAKNNMMEJF
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  HJNEOLCKEMD_o *pHVar3;
  NILLKLHKLHG_o *__this_00;
  MMFIDKMDADC_o *__this_01;
  OLKKAIFGGAK_o *pOVar4;
  PHDCILJMEHO_o *pPVar5;
  HEFOANCOHDC_o *pHVar6;
  OLKKAIFGGAK_OGCKCABMHLC_o *pOVar7;
  float fVar8;
  
  if ((DAT_045673cd & 1) == 0) {
    FUN_01bab630(&INFNBCBIGJH_TypeInfo);
    DAT_045673cd = 1;
  }
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar3 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar3 != (HJNEOLCKEMD_o *)0x0)) {
    bVar2 = (INFNBCBIGJH_TypeInfo->_2).naturalAligment;
    if (((pHVar3->klass->_2).naturalAligment < bVar2) ||
       ((pHVar3->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)INFNBCBIGJH_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64();
    }
    pOVar4 = (CPECAEHDDDB->fields).EMCFCMFGPME;
    if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
      pOVar7 = (pOVar4->fields).MMIDFMEOACB;
      if (-1 < *(int *)&pHVar3[1].klass) {
        if (pOVar7 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033a26b0;
        (pOVar7->fields).EPPIJIGMFFJ = 0 < *(int *)&pHVar3[1].klass;
      }
      if (-1 < *(int *)&pHVar3[1].monitor) {
        if (pOVar7 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033a26b0;
        (pOVar7->fields).NLFJFKCJEAC = 0 < *(int *)&pHVar3[1].monitor;
      }
      iVar1 = *(int *)((long)&pHVar3[1].monitor + 4);
      if (-1 < iVar1) {
        if (pOVar7 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033a26b0;
        (pOVar7->fields).FCKDFGMFHHF = 0 < iVar1;
      }
      iVar1 = *(int *)((long)&pHVar3[1].klass + 4);
      if (-1 < iVar1) {
        if (pOVar7 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0) goto LAB_033a26b0;
        (pOVar7->fields).BBFPCBEFOLN = 0 < iVar1;
      }
      __this_00 = *(NILLKLHKLHG_o **)&pHVar3[1].fields.super;
      if (__this_00 != (NILLKLHKLHG_o *)0x0) {
        __this_01 = NILLKLHKLHG__CHKGAHCDFJF(__this_00,false,(MethodInfo *)0x0);
        if ((__this_01 == (MMFIDKMDADC_o *)0x0) ||
           (fVar8 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0),
           pOVar7 == (OLKKAIFGGAK_OGCKCABMHLC_o *)0x0)) goto LAB_033a26b0;
        (pOVar7->fields).MINHMMAFDGF = fVar8;
        fVar8 = MMFIDKMDADC__OFFODGKLGOP(__this_01,(MethodInfo *)0x0);
        (pOVar7->fields).CEMEJDHDPLL = fVar8;
      }
      pPVar5 = (__this->fields).HAHNEPLFLFD;
      if (((pPVar5 != (PHDCILJMEHO_o *)0x0) &&
          (pHVar6 = (pPVar5->fields).MLPFFJNBKBN, pHVar6 != (HEFOANCOHDC_o *)0x0)) &&
         (pOVar4 = (pHVar6->fields)._BGCNGEAHHFN_k__BackingField, pOVar4 != (OLKKAIFGGAK_o *)0x0)) {
        OLKKAIFGGAK__HODPOCMNNIN(pOVar4,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
LAB_033a26b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

