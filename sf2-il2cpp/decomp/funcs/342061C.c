// HEFOANCOHDC$$BJKIFFGGDEE @ RVA 0x342061C

void HEFOANCOHDC__BJKIFFGGDEE
               (HEFOANCOHDC_o *__this,NILLKLHKLHG_AOBOECPEMLA_o *HPACPFLKHPK,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint32_t uVar3;
  int32_t iVar4;
  System_String_o *pSVar5;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  OLKKAIFGGAK_o *BCKBBGCOMJD_00;
  OLKKAIFGGAK_o *BCKBBGCOMJD_01;
  OLKKAIFGGAK_o *BCKBBGCOMJD_02;
  OLKKAIFGGAK_o *BCKBBGCOMJD_03;
  OLKKAIFGGAK_o *BCKBBGCOMJD_04;
  OLKKAIFGGAK_o *BCKBBGCOMJD_05;
  OLKKAIFGGAK_o *BCKBBGCOMJD_06;
  NILLKLHKLHG_GLEGDBCJEOA_o *pNVar6;
  HDBNGIBFEBA_o *in_x3;
  MethodInfo *in_x4;
  MethodInfo *in_x5;
  MethodInfo *in_x6;
  NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO;
  HDBNGIBFEBA_o *LOFMIFGLIKN;
  MMFIDKMDADC_o *HPACPFLKHPK_00;
  OLKKAIFGGAK_o *pOVar7;
  
  if ((DAT_045680e0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NILLKLHKLHG_GLEGDBCJEOA_TypeInfo);
    FUN_01bab630(&HDBNGIBFEBA_TypeInfo);
    FUN_01bab630(&StringLiteral_10322);
    FUN_01bab630(&StringLiteral_11431);
    FUN_01bab630(&StringLiteral_4718);
    FUN_01bab630(&StringLiteral_5759);
    FUN_01bab630(&StringLiteral_9224);
    FUN_01bab630(&StringLiteral_11005);
    FUN_01bab630(&StringLiteral_4717);
    FUN_01bab630(&StringLiteral_4944);
    FUN_01bab630(&StringLiteral_4714);
    FUN_01bab630(&StringLiteral_14404);
    FUN_01bab630(&StringLiteral_7119);
    FUN_01bab630(&StringLiteral_11436);
    FUN_01bab630(&StringLiteral_4716);
    FUN_01bab630(&StringLiteral_14750);
    FUN_01bab630(&StringLiteral_3114);
    FUN_01bab630(&StringLiteral_10311);
    FUN_01bab630(&StringLiteral_10305);
    FUN_01bab630(&StringLiteral_2685);
    FUN_01bab630(&StringLiteral_4531);
    FUN_01bab630(&StringLiteral_12485);
    FUN_01bab630(&StringLiteral_4713);
    FUN_01bab630(&StringLiteral_4715);
    FUN_01bab630(&StringLiteral_10228);
    DAT_045680e0 = 1;
  }
  if (HPACPFLKHPK == (NILLKLHKLHG_AOBOECPEMLA_o *)0x0) goto LAB_03520f44;
  ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)(HPACPFLKHPK->fields).IMMNELPBGIF;
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
LAB_035207ac:
    ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
  }
  else {
    bVar1 = (NILLKLHKLHG_GLEGDBCJEOA_TypeInfo->_2).naturalAligment;
    if ((((Il2CppClass *)ACCIJLGMHOO->klass)->_2).naturalAligment < bVar1) goto LAB_035207ac;
    if ((((Il2CppClass *)ACCIJLGMHOO->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)NILLKLHKLHG_GLEGDBCJEOA_TypeInfo) {
      ACCIJLGMHOO = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
    }
  }
  LOFMIFGLIKN = (HDBNGIBFEBA_o *)(HPACPFLKHPK->fields).ANGBPBINHBL;
  if (LOFMIFGLIKN == (HDBNGIBFEBA_o *)0x0) {
LAB_035207f0:
    LOFMIFGLIKN = (HDBNGIBFEBA_o *)0x0;
  }
  else {
    bVar1 = (HDBNGIBFEBA_TypeInfo->_2).naturalAligment;
    if ((LOFMIFGLIKN->klass->_2).naturalAligment < bVar1) goto LAB_035207f0;
    if ((LOFMIFGLIKN->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)HDBNGIBFEBA_TypeInfo) {
      LOFMIFGLIKN = (HDBNGIBFEBA_o *)0x0;
    }
  }
  if (ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10228,(MethodInfo *)0x0);
    return;
  }
  pOVar7 = (__this->fields)._BGCNGEAHHFN_k__BackingField;
  HPACPFLKHPK_00 = (HPACPFLKHPK->fields).JDGILABGBGH;
  if (pOVar7 != (OLKKAIFGGAK_o *)0x0) {
    if ((HPACPFLKHPK_00 == (MMFIDKMDADC_o *)0x0) ||
       (pSVar5 = (HPACPFLKHPK_00->fields).HPACPFLKHPK, pSVar5 == (System_String_o *)0x0))
    goto LAB_03520f44;
    bVar2 = System_String__Equals(pSVar5,StringLiteral_5759,(MethodInfo *)0x0);
    if (bVar2) {
      pOVar7 = (pOVar7->fields).BPJMMBGIMNC;
    }
  }
  pSVar5 = (ACCIJLGMHOO->fields).IHJHOFMNAOA;
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(pSVar5,(MethodInfo *)0x0);
  if (uVar3 < 0xb159d3d9) {
                    /* try { // try from 03520854 to 03620953 has its CatchHandler @ 03520854
                       catch() { ... } // from try @ 03520854 with catch @ 03520854
                       catch() { ... } // from try @ 03520a20 with catch @ 03520854
                       catch() { ... } // from try @ 03520b2c with catch @ 03520854
                       catch() { ... } // from try @ 03520b34 with catch @ 03520854
                       catch() { ... } // from try @ 03520bec with catch @ 03520854 */
    if (uVar3 < 0x7bf59326) {
      if (uVar3 < 0x1db7e503) {
        if (uVar3 == 0x1c70fc20) {
          bVar2 = System_String__op_Equality(pSVar5,StringLiteral_10305,(MethodInfo *)0x0);
          if (bVar2) {
            HEFOANCOHDC__GAKBKBOMKHP
                      ((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
            return;
          }
        }
        else if ((uVar3 == 0x1db7e502) &&
                (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_11436,(MethodInfo *)0x0),
                bVar2)) {
          HEFOANCOHDC__PBMDELGDHPJ
                    ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else if (uVar3 == 0x29e7ca8e) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4716,(MethodInfo *)0x0);
        if (bVar2) {
          HEFOANCOHDC__PBFLEDOEKPK(__this,pOVar7,ACCIJLGMHOO,HPACPFLKHPK_00,in_x4);
          return;
        }
      }
      else if (uVar3 == 0x655d504a) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_7119,(MethodInfo *)0x0);
        if (bVar2) {
          HEFOANCOHDC__MFMNDEAFPFE
                    ((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else if ((uVar3 == 0x7bf59325) &&
              (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_14750,(MethodInfo *)0x0),
              bVar2)) {
        HEFOANCOHDC__NKAFEPGIFPB((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
    else if (uVar3 < 0x8cd299dc) {
                    /* try { // try from 035209b0 to 036209db has its CatchHandler @ 03520b40 */
      if (uVar3 == 0x8b904a64) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4944,(MethodInfo *)0x0);
        if (bVar2) {
          HEFOANCOHDC__LGNDBPMCEGP
                    ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_03,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else if (uVar3 == 0x8cd299db) {
        pNVar6 = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_2685,(MethodInfo *)0x0);
        if (bVar2) {
          HEFOANCOHDC__FIBHAIBCFLG
                    ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_00,pNVar6,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
    }
    else {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035209b0 with catch @ 03520b40
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520954 with catch @ 03520b44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520a0c with catch @ 03520b48
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520b24 with catch @ 03520b4c
                        */
      if (uVar3 == 0x90ab353b) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4714,(MethodInfo *)0x0);
        if (bVar2) {
          HEFOANCOHDC__EIINLMAFNOL(__this,pOVar7,ACCIJLGMHOO,HPACPFLKHPK_00,in_x4);
          return;
        }
      }
      else {
                    /* try { // try from 03520b5c to 03620b5f has its CatchHandler @ 03520b74 */
        if (uVar3 == 0xac56c8ca) {
                    /* try { // try from 03520e34 to 03620e5b has its CatchHandler @ 03521034 */
          bVar2 = System_String__op_Equality(pSVar5,StringLiteral_11005,(MethodInfo *)0x0);
          if (bVar2) {
            HEFOANCOHDC__LOLJOGPOOAH
                      ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_04,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
            return;
          }
        }
        else if (uVar3 == 0xb159d3d8) {
                    /* catch() { ... } // from try @ 03520b5c with catch @ 03520b74 */
          pNVar6 = (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0;
                    /* try { // try from 03520b84 to 03620beb has its CatchHandler @ 03520c00 */
          bVar2 = System_String__op_Equality(pSVar5,StringLiteral_14404,(MethodInfo *)0x0);
          if (bVar2) {
            HEFOANCOHDC__HJCJPFFHFAD
                      ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_01,pNVar6,in_x3,HPACPFLKHPK_00,in_x5);
            return;
          }
        }
      }
    }
  }
  else if (uVar3 < 0xe7e9033d) {
    if (uVar3 < 0xc97d0d30) {
      if (uVar3 == 0xc1ad8325) {
        bVar2 = System_String__op_Equality(pSVar5,StringLiteral_9224,(MethodInfo *)0x0);
        if (bVar2) {
          HEFOANCOHDC__FNDCCCJMHMI
                    ((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
      else {
                    /* try { // try from 03520954 to 0362097b has its CatchHandler @ 03520b44 */
        if ((uVar3 == 0xc97d0d2f) &&
           (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_10322,(MethodInfo *)0x0), bVar2)
           ) {
          HEFOANCOHDC__FFMODBDABFB
                    ((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,LOFMIFGLIKN,HPACPFLKHPK_00,in_x5);
          return;
        }
      }
    }
    else if (uVar3 == 0xdece5340) {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_10311,(MethodInfo *)0x0);
      if (bVar2) {
        HEFOANCOHDC__FAEPEDPFHBA((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
    else if (uVar3 == 0xe7166311) {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4718,(MethodInfo *)0x0);
      if (bVar2) {
        HEFOANCOHDC__AEBKCLNFHDI(__this,pOVar7,ACCIJLGMHOO,HPACPFLKHPK_00,in_x4);
        return;
      }
    }
    else if ((uVar3 == 0xe7e9033c) &&
            (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4717,(MethodInfo *)0x0), bVar2)
            ) {
                    /* try { // try from 03520b24 to 03620b2b has its CatchHandler @ 03520b4c */
                    /* try { // try from 03520b2c to 03620b2f has its CatchHandler @ 03520854 */
                    /* try { // try from 03520b30 to 03620b33 has its CatchHandler @ 03520b3c */
                    /* try { // try from 03520b34 to 03620b5b has its CatchHandler @ 03520854 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03520b30 with catch @ 03520b3c
                        */
      HEFOANCOHDC__GOJPPGEGLBM((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
  else if (uVar3 < 0xeae907f6) {
                    /* try { // try from 03520a0c to 03620a1f has its CatchHandler @ 03520b48 */
    if (uVar3 == 0xe9e90662) {
      bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4713,(MethodInfo *)0x0);
      if (bVar2) {
        HEFOANCOHDC__BHHBMJILNLB((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
    else {
                    /* try { // try from 03520a20 to 03620b23 has its CatchHandler @ 03520854 */
      if ((uVar3 == 0xeae907f5) &&
         (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_4715,(MethodInfo *)0x0), bVar2)) {
        HEFOANCOHDC__BCJJIEDLKKN((HEFOANCOHDC_o *)0x1,pOVar7,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5)
        ;
        return;
      }
    }
  }
  else if (uVar3 == 0xeb8e40f4) {
    bVar2 = System_String__op_Equality(pSVar5,StringLiteral_12485,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 03520e90 to 03620eb7 has its CatchHandler @ 03521030 */
      HEFOANCOHDC__GNJJNIFJNKF
                ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_05,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
  else if (uVar3 == 0xf4b94d71) {
    bVar2 = System_String__op_Equality(pSVar5,StringLiteral_3114,(MethodInfo *)0x0);
    if (bVar2) {
      HEFOANCOHDC__ECNFLHKCENA
                ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_06,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
  else {
                    /* try { // try from 03520bec to 03620bf7 has its CatchHandler @ 03520854 */
    if ((uVar3 == 0xf4c753db) &&
       (bVar2 = System_String__op_Equality(pSVar5,StringLiteral_11431,(MethodInfo *)0x0), bVar2)) {
                    /* try { // try from 03520bf8 to 03620bff has its CatchHandler @ 03520c00 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03520b84 with catch @ 03520c00
                       catch(type#2 @ 00000000) { ... } // from try @ 03520bf8 with catch @ 03520c00
                        */
                    /* try { // try from 03520c04 to 03620e33 has its CatchHandler @ 03520c04
                       catch() { ... } // from try @ 03520c04 with catch @ 03520c04
                       catch() { ... } // from try @ 03520f3c with catch @ 03520c04
                       catch() { ... } // from try @ 03521000 with catch @ 03520c04
                       catch() { ... } // from try @ 03521008 with catch @ 03520c04
                       catch() { ... } // from try @ 035210c4 with catch @ 03520c04 */
      HEFOANCOHDC__FICAPACFMIA
                ((HEFOANCOHDC_o *)0x1,BCKBBGCOMJD_02,ACCIJLGMHOO,in_x3,HPACPFLKHPK_00,in_x5);
      return;
    }
  }
                    /* try { // try from 03520ed8 to 03620edf has its CatchHandler @ 03521014 */
  iVar4 = NILLKLHKLHG__EOGEJOBHJMC((ACCIJLGMHOO->fields).IHJHOFMNAOA,(MethodInfo *)0x0);
  pSVar5 = (ACCIJLGMHOO->fields).IHJHOFMNAOA;
  if (pSVar5 != (System_String_o *)0x0) {
                    /* try { // try from 03520eec to 03620ef7 has its CatchHandler @ 03521024 */
                    /* try { // try from 03520efc to 03620f0f has its CatchHandler @ 0352102c */
    pOVar7 = (OLKKAIFGGAK_o *)0x0;
    bVar2 = System_String__Equals(pSVar5,StringLiteral_4531,(MethodInfo *)0x0);
    if ((iVar4 == 0) && (!bVar2)) {
                    /* try { // try from 03520f18 to 03620f3b has its CatchHandler @ 03521038 */
      return;
    }
                    /* try { // try from 03520f3c to 03620fef has its CatchHandler @ 03520c04 */
    HEFOANCOHDC__NFBKOCDCCMJ
              ((HEFOANCOHDC_o *)(ulong)bVar2,bVar2,pOVar7,ACCIJLGMHOO,(HDBNGIBFEBA_o *)in_x4,
               HPACPFLKHPK_00,in_x6);
    return;
  }
LAB_03520f44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

