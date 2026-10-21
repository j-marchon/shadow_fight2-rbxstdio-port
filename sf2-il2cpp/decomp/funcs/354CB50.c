// LEGDPJHPEOB$$EDGFKLMHKLH @ RVA 0x354CB50

void LEGDPJHPEOB__EDGFKLMHKLH
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_array *pSVar3;
  EILGGBOIMGE_FMFDKGKCBBG_o *__this_00;
  LEGDPJHPEOB_o *__this_01;
  DEKKGJNMFEB_o *pDVar4;
  BFBONKPKBNL_o *pBVar5;
  GGLKHCAIGDI_o *__this_02;
  IGFGDDANEPE_o *NKCMBEFHFII;
  System_Object_array *args;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  double dVar10;
  undefined1 auVar11 [16];
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_03;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_80;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  if ((DAT_04568b2b & 1) == 0) {
    FUN_01bab630(&DEKKGJNMFEB_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
    FUN_01bab630(&LEGDPJHPEOB_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_11106);
    FUN_01bab630(&StringLiteral_3258);
    FUN_01bab630(&StringLiteral_3536);
    FUN_01bab630(&StringLiteral_5292);
    FUN_01bab630(&StringLiteral_10677);
    FUN_01bab630(&StringLiteral_8095);
    FUN_01bab630(&StringLiteral_13809);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568b2b = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_80.fields.hiddenValue = 0;
  local_80.fields.currentCryptoKey = 0;
  local_80.fields.fakeValueActive = false;
  local_80.fields.inited = false;
  local_80.fields._26_6_ = 0;
  local_80.fields.fakeValue = 0;
  if (((ACCIJLGMHOO == (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) ||
      (pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0),
      pSVar2 == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__Split(pSVar2,0x7c,0,(MethodInfo *)0x0),
     pSVar3 == (System_String_array *)0x0)) goto LAB_0364d044;
  if ((int)pSVar3->max_length < 2) {
    return;
  }
  pSVar2 = pSVar3->m_Items[0];
  __this_00 = (EILGGBOIMGE_FMFDKGKCBBG_o *)thunk_FUN_01bda818(EILGGBOIMGE_FMFDKGKCBBG_TypeInfo);
  EILGGBOIMGE_FMFDKGKCBBG___ctor(__this_00,(MethodInfo *)0x0);
  auVar11 = thunk_FUN_01bda818(LEGDPJHPEOB_TypeInfo);
  __this_01 = auVar11._0_8_;
  LEGDPJHPEOB___ctor(__this_01,auVar11._8_8_);
  if (__this_01 == (LEGDPJHPEOB_o *)0x0) goto LAB_0364d044;
  (__this_01->fields).AAJBIMFNMBB = (__this->fields).AAJBIMFNMBB;
  thunk_FUN_01c20e04();
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this_01,pSVar2,__this_00,false,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  if (__this_00 == (EILGGBOIMGE_FMFDKGKCBBG_o *)0x0) goto LAB_0364d044;
  if ((uint)pSVar3->max_length < 2) {
LAB_0364d048:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
  pMVar9 = (MethodInfo *)(__this_00->fields).DFJBJLBLBGB;
  EILGGBOIMGE__KFMNMGGDHFD
            ((EILGGBOIMGE_o *)__this_01,pSVar3->m_Items[1],__this_00,false,(System_String_o *)0x0,
             (MethodInfo *)0x0);
  method_00 = (MethodInfo *)(__this_00->fields).DFJBJLBLBGB;
  local_48 = 0;
  if ((int)pSVar3->max_length == 3) {
                    /* try { // try from 0364cd2c to 0374cd2f has its CatchHandler @ 0364cd3c */
                    /* try { // try from 0364cd30 to 0374cd5b has its CatchHandler @ 0364b724 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364bf18 with catch @ 0364cd34
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364bf24 with catch @ 0364cd38
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364cd2c with catch @ 0364cd3c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364bf50 with catch @ 0364cd40
                        */
    EILGGBOIMGE__KFMNMGGDHFD
              ((EILGGBOIMGE_o *)__this_01,pSVar3->m_Items[2],__this_00,false,(System_String_o *)0x0,
               (MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0364befc with catch @ 0364cd44
                        */
    dVar10 = (__this_00->fields).HNFHNNLOLGK;
                    /* try { // try from 0364cd5c to 0374cd5f has its CatchHandler @ 0364cd88 */
    local_48 = -0x8000000000000000;
    if (dVar10 != INFINITY) {
      local_48 = (long)dVar10;
    }
  }
  pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_8095,(MethodInfo *)0x0);
  if (bVar1) {
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364d044;
                    /* catch() { ... } // from try @ 0364cd5c with catch @ 0364cd88 */
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)pMVar9;
    method_00 = pMVar9;
    goto LAB_0364cef0;
  }
                    /* try { // try from 0364cd98 to 0374cd9f has its CatchHandler @ 0364cdb4 */
                    /* try { // try from 0364cda0 to 0374cdab has its CatchHandler @ 0364b724 */
                    /* try { // try from 0364cdac to 0374cdb3 has its CatchHandler @ 0364cdb4 */
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_11106,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0364cd98 with catch @ 0364cdb4
                       catch(type#2 @ 00000000) { ... } // from try @ 0364cdac with catch @ 0364cdb4
                        */
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364d044;
    (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)method_00;
    goto LAB_0364cef0;
  }
  bVar1 = System_String__op_Equality(pSVar2,StringLiteral_13809,(MethodInfo *)0x0);
  if (bVar1) {
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pDVar4 == (DEKKGJNMFEB_o *)0x0) goto LAB_0364d044;
    pBVar5 = DEKKGJNMFEB__NCFEMNMDBMJ
                       (pDVar4,(System_String_o *)pMVar9,(System_String_o *)method_00,
                        (MethodInfo *)0x0);
    pMVar9 = StringLiteral_1567;
    if (pBVar5 != (BFBONKPKBNL_o *)0x0) {
      uStack_58._0_4_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.fakeValue;
      uStack_58._4_1_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.fakeValueActive;
      uStack_58._5_1_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.inited;
      uStack_58._6_2_ =
           *(undefined2 *)&(pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.field_0xe;
      local_60._0_4_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.currentCryptoKey;
      local_60._4_4_ = (pBVar5->fields)._LAOFJOMPFDL_k__BackingField.fields.hiddenValue;
      __this_03.fields.fakeValue = 0;
      __this_03.fields.fakeValueActive = false;
      __this_03.fields.inited = false;
      __this_03.fields._14_2_ = 0;
      __this_03.fields._0_8_ = &local_60;
      pMVar9 = (MethodInfo *)
               CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(__this_03,method_00);
    }
joined_r0x0364ce60:
    method_00 = pMVar9;
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) {
LAB_0364d044:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  else {
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_5292,(MethodInfo *)0x0);
    if (bVar1) {
      pMVar9 = (MethodInfo *)System_Int64__ToString((int64_t)&local_48,(MethodInfo *)0x0);
      goto joined_r0x0364ce60;
    }
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3536,(MethodInfo *)0x0);
    if (bVar1) {
      if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar4 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pDVar4 == (DEKKGJNMFEB_o *)0x0) goto LAB_0364d044;
      pBVar5 = DEKKGJNMFEB__NCFEMNMDBMJ
                         (pDVar4,(System_String_o *)pMVar9,(System_String_o *)method_00,
                          (MethodInfo *)0x0);
      pMVar9 = StringLiteral_1567;
      if (pBVar5 != (BFBONKPKBNL_o *)0x0) {
        local_80.fields.hiddenValue =
             (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.hiddenValue;
        local_80.fields.currentCryptoKey =
             (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.currentCryptoKey;
        local_80.fields.fakeValueActive =
             (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValueActive;
        local_80.fields.inited = (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.inited;
        local_80.fields._26_6_ =
             *(undefined6 *)&(pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.field_0x1a;
        local_80.fields.fakeValue = (pBVar5->fields)._BGAELGPOEHE_k__BackingField.fields.fakeValue;
        pMVar9 = (MethodInfo *)
                 CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                           (&local_80,(MethodInfo *)0x0);
      }
      goto joined_r0x0364ce60;
    }
    bVar1 = System_String__op_Equality(pSVar2,StringLiteral_3258,(MethodInfo *)0x0);
    if (!bVar1) {
      args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
      if (args != (System_Object_array *)0x0) {
        pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if ((pSVar2 != (System_String_o *)0x0) &&
           (lVar6 = thunk_FUN_01bda71c(pSVar2,(((args->obj).klass)->_1).element_class), lVar6 == 0))
        {
          uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
          FUN_01bab798(uVar7,0);
        }
        if ((int)args->max_length != 0) {
          args->m_Items[0] = (Il2CppObject *)pSVar2;
          thunk_FUN_01c20e04(args->m_Items,pSVar2);
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogErrorFormat(StringLiteral_10677,args,(MethodInfo *)0x0);
          return;
        }
        goto LAB_0364d048;
      }
      goto LAB_0364d044;
    }
    if ((DEKKGJNMFEB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pDVar4 = DEKKGJNMFEB__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pDVar4 == (DEKKGJNMFEB_o *)0x0) goto LAB_0364d044;
    __this_02 = DEKKGJNMFEB__LDGJEEGACHJ(pDVar4,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo);
    }
    NKCMBEFHFII = NLPJLHOEAOE__JNFIBDBHNOA((System_String_o *)pMVar9,(MethodInfo *)0x0);
    if (((__this_02 == (GGLKHCAIGDI_o *)0x0) || (NKCMBEFHFII == (IGFGDDANEPE_o *)0x0)) ||
       (bVar1 = GGLKHCAIGDI__DDAKFOBLNJL(__this_02,NKCMBEFHFII,(MethodInfo *)0x0), !bVar1)) {
      puVar8 = &StringLiteral_1567;
    }
    else {
      puVar8 = &StringLiteral_1606;
    }
    if (JDGILABGBGH == (MMFIDKMDADC_o *)0x0) goto LAB_0364d044;
    method_00 = (MethodInfo *)*puVar8;
  }
  (JDGILABGBGH->fields).HPACPFLKHPK = (System_String_o *)method_00;
LAB_0364cef0:
  thunk_FUN_01c20e04(&JDGILABGBGH->fields,method_00);
  return;
}

