// FAIJGJCCKJC$$MAPOGIEBMKE @ RVA 0x316A78C

/* WARNING: Type propagation algorithm not settling */

void FAIJGJCCKJC__MAPOGIEBMKE(FAIJGJCCKJC_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  int iVar2;
  FAIJGJCCKJC_Fields *pFVar3;
  bool bVar4;
  int32_t iVar5;
  JMDPBFOCHHP_o *pJVar6;
  JMDPBFOCHHP_FNILDHLJBBJ_o *pJVar7;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_00;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  NMAHEBEALAB_o *__this_01;
  MethodInfo *extraout_x1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *pJVar10;
  int64_t iVar11;
  System_String_o **ppSVar12;
  int64_t GOKKDGLPFPJ;
  float fVar13;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_c0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_a0;
  undefined8 local_78;
  undefined1 local_70 [24];
  Il2CppClass *pIStack_58;
  
  if ((DAT_045668f0 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&IEHDDOIHPNI_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&NMAHEBEALAB_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045668f0 = 1;
    method = extraout_x1;
  }
  local_78 = (Il2CppMethodPointer)0x0;
  local_70._8_8_ = (InvokerMethod)0x0;
  local_70._0_8_ = (Il2CppMethodPointer)0x0;
  pIStack_58 = (Il2CppClass *)0x0;
  local_70._16_8_ = (char *)0x0;
  if ((__this->fields).FBBBEHLGDJK == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  pJVar10 = (__this->fields).FBBBEHLGDJK;
  if ((pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) && (pJVar6 != (JMDPBFOCHHP_o *)0x0)) {
    pJVar7 = JMDPBFOCHHP__OJOIAONADNG(pJVar6,(pJVar10->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
    if ((pJVar7 == (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) || ((pJVar7->fields).HNGIBIJJKAP == false)) {
      iVar11 = 0;
    }
    else {
      __this_00 = (pJVar7->fields).GFBNJPMOEKD;
      if ((__this_00 == (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0) ||
         (pIVar8 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,0,
                              Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__),
         pIVar8 == (Il2CppObject *)0x0)) goto LAB_0326aad4;
      iVar11 = (int64_t)*(int *)&pIVar8[1].monitor;
    }
    pJVar10 = (__this->fields).FBBBEHLGDJK;
    if (pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
      pCVar1 = &(__this->fields).super._AHMCDBKNKAJ_k__BackingField;
      local_70._8_8_ = (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
      local_70._0_8_ = (pCVar1->fields).currentCryptoKey;
      pIStack_58 = *(Il2CppClass **)
                    &(__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
      local_70._16_8_ = (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
      GOKKDGLPFPJ = (pJVar10->fields).CEGNAMELGID;
      pSVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ToString
                         ((CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *)local_70,
                          (MethodInfo *)0x0);
      __this_01 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
      NMAHEBEALAB___ctor(__this_01,StringLiteral_1,StringLiteral_1,GOKKDGLPFPJ,iVar11,pSVar9,
                         StringLiteral_1,0,false,false,false,(MethodInfo *)0x0);
      if (__this_01 != (NMAHEBEALAB_o *)0x0) {
        (__this_01->fields).CKGAMIHJOMC = true;
        local_a0.fields.hiddenValue =
             (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
        local_a0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
        pFVar3 = &__this->fields;
        local_a0.fields.fakeValueActive =
             (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
        local_a0.fields.inited = (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.inited;
        local_a0.fields._26_6_ =
             *(undefined6 *)&(pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
        local_a0.fields.fakeValue =
             (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
        iVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                           (&local_a0,(MethodInfo *)0x0);
        local_78 = (Il2CppMethodPointer)CONCAT44((int)iVar11,(undefined4)local_78);
        pSVar9 = System_Int32__ToString((int)&local_78 + 4,(MethodInfo *)0x0);
        (__this_01->fields).HCCELBFOFPE = pSVar9;
        thunk_FUN_01c20e04();
        local_78 = (Il2CppMethodPointer)
                   CONCAT44((__this->fields).super._IAEGOLJCOIB_k__BackingField,(undefined4)local_78
                           );
        pSVar9 = System_Int32__ToString((int)&local_78 + 4,(MethodInfo *)0x0);
        ppSVar12 = &(__this_01->fields).EGEHGIEAIJL;
        *ppSVar12 = pSVar9;
        thunk_FUN_01c20e04(ppSVar12,pSVar9);
        pJVar10 = (__this->fields).FBBBEHLGDJK;
        if (pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
          bVar4 = System_String__IsNullOrEmpty((pJVar10->fields).KIDAPFADKEE,(MethodInfo *)0x0);
          if (!bVar4) {
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            pJVar6 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
            pJVar10 = (__this->fields).FBBBEHLGDJK;
            if ((pJVar10 == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) || (pJVar6 == (JMDPBFOCHHP_o *)0x0))
            goto LAB_0326aad4;
            pJVar10 = JMDPBFOCHHP__DIFLKMKBENA
                                (pJVar6,(pJVar10->fields).KIDAPFADKEE,false,(MethodInfo *)0x0);
            if (pJVar10 != (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
              local_c0.fields.hiddenValue =
                   (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.hiddenValue;
              local_c0.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
              pFVar3 = &__this->fields;
              local_c0.fields.fakeValueActive =
                   (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.fakeValueActive;
              local_c0.fields.inited = (pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.inited;
              local_c0.fields._26_6_ =
                   *(undefined6 *)&(pFVar3->super)._AHMCDBKNKAJ_k__BackingField.fields.field_0x1a;
              local_c0.fields.fakeValue =
                   (__this->fields).super._AHMCDBKNKAJ_k__BackingField.fields.fakeValue;
              iVar11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                 (&local_c0,(MethodInfo *)0x0);
              iVar2 = (pJVar10->fields).NGMFKGGBHND;
              fVar13 = ((float)(iVar11 - iVar2) / (float)iVar2) * 100.0;
              if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              iVar5 = -0x80000000;
              if (fVar13 != INFINITY) {
                iVar5 = (int)fVar13;
              }
              iVar5 = MGNPHCAAEIO__JLNDJMOBBLI(iVar5,(MethodInfo *)0x0);
              if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(System_Math_TypeInfo);
              }
              local_78 = (Il2CppMethodPointer)CONCAT44(local_78._4_4_,ABS((float)iVar5));
              pSVar9 = System_Single__ToString(ABS((float)iVar5),(MethodInfo *)&local_78);
              *ppSVar12 = pSVar9;
              thunk_FUN_01c20e04(ppSVar12,pSVar9);
            }
          }
          (__this->fields).super.DLBFLPBOJNI = __this_01;
          thunk_FUN_01c20e04(&(__this->fields).super.DLBFLPBOJNI,__this_01);
          if ((IEHDDOIHPNI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          IEHDDOIHPNI__EDNBFMMPAHG((HOOAAGABMBL_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0326aad4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

