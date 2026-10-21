// BBBBKBBFNOG$$BBCMEABEICF @ RVA 0x34D11A4

void BBBBKBBFNOG__BBCMEABEICF(bool FIJLCCEJANF,IGPDCHBJAPD_o *PNPKEKHEMCD,MethodInfo *method)

{
  System_String_o *AJBDHHOLPMM;
  BBBBKBBFNOG_c *pBVar1;
  int64_t CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  BBBBKBBFNOG_StaticFields *pBVar2;
  IGPDCHBJAPD_JMPAGIGEFME_o *pIVar3;
  long lVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  int64_t local_50;
  int64_t iStack_48;
  int64_t iStack_40;
  bool_conflict bStack_38;
  bool_conflict bStack_37;
  undefined6 uStack_36;
  
  if ((DAT_045686b7 & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&System_Convert_TypeInfo);
    DAT_045686b7 = 1;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,0,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  method_00 = extraout_x1;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    method_00 = extraout_x1_00;
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = bStack_38;
  (pBVar2->HEINPMAGCOD).fields.inited = bStack_37;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = uStack_36;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = iStack_40;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = iStack_48;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_50;
  if (PNPKEKHEMCD == (IGPDCHBJAPD_o *)0x0) {
LAB_035d1330:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  AJBDHHOLPMM = BBBBKBBFNOG__EJCGFFJOGHF((PNPKEKHEMCD->fields).DBIAAJNKHLH,method_00);
  fVar5 = BBBBKBBFNOG__CCHJODGDDAI(AJBDHHOLPMM,method_01);
  pBVar1 = BBBBKBBFNOG_TypeInfo;
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  pBVar2->AHCKJLKAKMN = fVar5;
  pIVar3 = (PNPKEKHEMCD->fields).GIIFANGGEHM;
  if (pIVar3 == (IGPDCHBJAPD_JMPAGIGEFME_o *)0x0) goto LAB_035d1330;
  pBVar2->CLGHDPOCECK = (pIVar3->fields).DCDLMCEEOCC;
  if (FIJLCCEJANF) {
    if ((pBVar1->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
      fVar5 = pBVar2->AHCKJLKAKMN;
      pBVar1 = BBBBKBBFNOG_TypeInfo;
    }
    if (1.0 < fVar5) {
      if ((pBVar1->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
        fVar5 = pBVar2->AHCKJLKAKMN;
      }
      lVar4 = pBVar2->CLGHDPOCECK;
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      CJNHFNHJHPE = System_Convert__ToInt64((fVar5 + -1.0) * (float)lVar4,(MethodInfo *)0x0);
      goto LAB_035d12e0;
    }
  }
  CJNHFNHJHPE = 0;
LAB_035d12e0:
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
            (&local_70,CJNHFNHJHPE,(MethodInfo *)0x0);
  iStack_48 = local_70.fields.hiddenValue;
  local_50 = local_70.fields.currentCryptoKey;
  bStack_38 = local_70.fields.fakeValueActive;
  bStack_37 = local_70.fields.inited;
  uStack_36 = local_70.fields._26_6_;
  iStack_40 = local_70.fields.fakeValue;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar2 = BBBBKBBFNOG_TypeInfo->static_fields;
  (pBVar2->HEINPMAGCOD).fields.fakeValueActive = bStack_38;
  (pBVar2->HEINPMAGCOD).fields.inited = bStack_37;
  *(undefined6 *)&(pBVar2->HEINPMAGCOD).fields.field_0x1a = uStack_36;
  (pBVar2->HEINPMAGCOD).fields.fakeValue = iStack_40;
  (pBVar2->HEINPMAGCOD).fields.hiddenValue = iStack_48;
  (pBVar2->HEINPMAGCOD).fields.currentCryptoKey = local_50;
  return;
}

