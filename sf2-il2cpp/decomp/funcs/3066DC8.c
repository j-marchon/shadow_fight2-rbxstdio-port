// ACHLOMELAJE$$OGPHHGFFKHD @ RVA 0x3066DC8

void ACHLOMELAJE__OGPHHGFFKHD
               (ACHLOMELAJE_o *__this,int64_t CJNHFNHJHPE,int32_t ACCIHBHMFPN,bool FJDHMCHMBFJ,
               MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  long lVar2;
  long lVar3;
  int64_t iVar4;
  MethodInfo *pMVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar6;
  System_String_o *value;
  int64_t iVar7;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_o *pSVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_190;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_170;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_150;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_130;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
  if ((DAT_04565f04 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
    FUN_01bab630(&long_TypeInfo);
    FUN_01bab630(&MDNLIFLBFNO_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&StringLiteral_3535);
    FUN_01bab630(&StringLiteral_16949);
    FUN_01bab630(&StringLiteral_19132);
    FUN_01bab630(&StringLiteral_21625);
    DAT_04565f04 = 1;
  }
  pCVar1 = &(__this->fields).OGOANIHOCBO;
  local_70.fields.hiddenValue = (__this->fields).OGOANIHOCBO.fields.hiddenValue;
  local_70.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
  local_70.fields.fakeValueActive = (__this->fields).OGOANIHOCBO.fields.fakeValueActive;
  local_70.fields.inited = (__this->fields).OGOANIHOCBO.fields.inited;
  local_70.fields._26_6_ = *(undefined6 *)&(__this->fields).OGOANIHOCBO.fields.field_0x1a;
  local_70.fields.fakeValue = (__this->fields).OGOANIHOCBO.fields.fakeValue;
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0);
  if (iVar4 != CJNHFNHJHPE) {
    local_90.fields.hiddenValue = (__this->fields).OGOANIHOCBO.fields.hiddenValue;
    local_90.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_90.fields.fakeValueActive = (__this->fields).OGOANIHOCBO.fields.fakeValueActive;
    local_90.fields.inited = (__this->fields).OGOANIHOCBO.fields.inited;
    local_90.fields._26_6_ = *(undefined6 *)&(__this->fields).OGOANIHOCBO.fields.field_0x1a;
    local_90.fields.fakeValue = (__this->fields).OGOANIHOCBO.fields.fakeValue;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0)
    ;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
              (&local_d0,CJNHFNHJHPE,(MethodInfo *)0x0);
    local_b0.fields.currentCryptoKey =
         CONCAT71(local_d0.fields.currentCryptoKey._1_7_,
                  (undefined1)local_d0.fields.currentCryptoKey);
    local_b0.fields.hiddenValue = local_d0.fields.hiddenValue;
    local_b0.fields.fakeValueActive = local_d0.fields.fakeValueActive;
    local_b0.fields.inited = local_d0.fields.inited;
    local_b0.fields._26_6_ = local_d0.fields._26_6_;
    local_b0.fields.fakeValue = local_d0.fields.fakeValue;
    (__this->fields).OGOANIHOCBO.fields.hiddenValue = local_d0.fields.hiddenValue;
    (pCVar1->fields).currentCryptoKey = local_b0.fields.currentCryptoKey;
    (__this->fields).OGOANIHOCBO.fields.fakeValueActive = local_d0.fields.fakeValueActive;
    (__this->fields).OGOANIHOCBO.fields.inited = local_d0.fields.inited;
    *(undefined6 *)&(__this->fields).OGOANIHOCBO.fields.field_0x1a = local_d0.fields._26_6_;
    (__this->fields).OGOANIHOCBO.fields.fakeValue = local_d0.fields.fakeValue;
    local_f0.fields.hiddenValue = local_d0.fields.hiddenValue;
    local_f0.fields.fakeValueActive = local_d0.fields.fakeValueActive;
    local_f0.fields.inited = local_d0.fields.inited;
    local_f0.fields._26_6_ = local_d0.fields._26_6_;
    local_f0.fields.fakeValue = local_d0.fields.fakeValue;
    pMVar5 = (MethodInfo *)
             CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                       (&local_f0,(MethodInfo *)0x0);
    KIHIPAJGNBF__MLDEHFFGJDP
              ((KIHIPAJGNBF_o *)__this,StringLiteral_3535,(int64_t)pMVar5,(MethodInfo *)0x0);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    lVar3 = iVar4 - CJNHFNHJHPE;
    lVar2 = -lVar3;
    if (-1 < lVar3) {
      lVar2 = lVar3;
    }
    if (ACCIHBHMFPN != 0) {
      if (iVar4 < CJNHFNHJHPE) {
        if (FJDHMCHMBFJ) {
          local_110.fields.hiddenValue = (__this->fields).MBINFANFLMC.fields.hiddenValue;
          local_110.fields.currentCryptoKey = (__this->fields).MBINFANFLMC.fields.currentCryptoKey;
          local_110.fields.fakeValueActive = (__this->fields).MBINFANFLMC.fields.fakeValueActive;
          local_110.fields.inited = (__this->fields).MBINFANFLMC.fields.inited;
          local_110.fields._26_6_ = *(undefined6 *)&(__this->fields).MBINFANFLMC.fields.field_0x1a;
          local_110.fields.fakeValue = (__this->fields).MBINFANFLMC.fields.fakeValue;
          iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_110,(MethodInfo *)0x0);
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                    (&local_b0,iVar4 + lVar2,(MethodInfo *)0x0);
          local_130.fields.hiddenValue = local_b0.fields.hiddenValue;
          local_130.fields.currentCryptoKey = local_b0.fields.currentCryptoKey;
          local_130.fields.fakeValueActive = local_b0.fields.fakeValueActive;
          local_130.fields.inited = local_b0.fields.inited;
          local_130.fields._26_6_ = local_b0.fields._26_6_;
          local_130.fields.fakeValue = local_b0.fields.fakeValue;
          ACHLOMELAJE__GNICHBNKEMA(__this,&local_130,pMVar5);
        }
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    thunk_FUN_01bda818(MDNLIFLBFNO_TypeInfo);
        MDNLIFLBFNO___ctor((MDNLIFLBFNO_o *)__this_00,(MethodInfo *)0x0);
        local_b0.fields.currentCryptoKey = lVar2;
        pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(long_TypeInfo,&local_b0);
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,StringLiteral_16949,pIVar6,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
        pMVar5 = extraout_x1;
        if ((ACHLOMELAJE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar5 = extraout_x1_00;
        }
        value = ACHLOMELAJE__OKJNKOBMIPA(ACCIHBHMFPN,pMVar5);
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,StringLiteral_21625,(Il2CppObject *)value,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
        local_d0.fields.currentCryptoKey._0_1_ = FJDHMCHMBFJ;
        pIVar6 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,&local_d0);
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (__this_00,StringLiteral_19132,pIVar6,
                   Method_System_Collections_Generic_Dictionary<string,_object>_set_Item__);
        NFNBHPOJFNJ__NOJIAJPLOKB(4,(MDNLIFLBFNO_o *)__this_00,false,(MethodInfo *)0x0);
      }
      else if (CJNHFNHJHPE < iVar4) {
        pCVar1 = &(__this->fields).MBINFANFLMC;
        local_150.fields.hiddenValue = (__this->fields).MBINFANFLMC.fields.hiddenValue;
        local_150.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
        local_150.fields.fakeValueActive = (__this->fields).MBINFANFLMC.fields.fakeValueActive;
        local_150.fields.inited = (__this->fields).MBINFANFLMC.fields.inited;
        local_150.fields._26_6_ = *(undefined6 *)&(__this->fields).MBINFANFLMC.fields.field_0x1a;
        local_150.fields.fakeValue = (__this->fields).MBINFANFLMC.fields.fakeValue;
        iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_150,(MethodInfo *)0x0);
        if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(System_Math_TypeInfo);
        }
        pMVar5 = (MethodInfo *)0x0;
        iVar4 = System_Math__Max(0,(lVar2 - iVar4) + iVar7,(MethodInfo *)0x0);
        local_170.fields.hiddenValue = (__this->fields).MBINFANFLMC.fields.hiddenValue;
        local_170.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
        local_170.fields.fakeValueActive = (__this->fields).MBINFANFLMC.fields.fakeValueActive;
        local_170.fields.inited = (__this->fields).MBINFANFLMC.fields.inited;
        local_170.fields._26_6_ = *(undefined6 *)&(__this->fields).MBINFANFLMC.fields.field_0x1a;
        local_170.fields.fakeValue = (__this->fields).MBINFANFLMC.fields.fakeValue;
        iVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_170,(MethodInfo *)0x0);
        CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                  (&local_b0,iVar7 - iVar4,(MethodInfo *)0x0);
        local_190.fields.hiddenValue = local_b0.fields.hiddenValue;
        local_190.fields.currentCryptoKey = local_b0.fields.currentCryptoKey;
        local_190.fields.fakeValueActive = local_b0.fields.fakeValueActive;
        local_190.fields.inited = local_b0.fields.inited;
        local_190.fields._26_6_ = local_b0.fields._26_6_;
        local_190.fields.fakeValue = local_b0.fields.fakeValue;
        ACHLOMELAJE__GNICHBNKEMA(__this,&local_190,pMVar5);
      }
    }
    pSVar8 = (__this->fields).AEHLCIIPAJJ;
    if (pSVar8 != (System_Action_o *)0x0) {
      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                ((pSVar8->fields).super.super.method_code,(pSVar8->fields).super.super.method);
    }
  }
  return;
}

