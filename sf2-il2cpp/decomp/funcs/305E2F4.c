// ACHLOMELAJE$$CEICBEHCCDA @ RVA 0x305E2F4

void ACHLOMELAJE__CEICBEHCCDA
               (ACHLOMELAJE_o *__this,int64_t CJNHFNHJHPE,bool FJDHMCHMBFJ,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  long lVar2;
  int iVar3;
  int64_t iVar4;
  int64_t iVar5;
  MethodInfo *method_00;
  System_Action_o *pSVar6;
  double dVar7;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_130;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
  method_00 = (MethodInfo *)(ulong)FJDHMCHMBFJ;
  if ((DAT_04565ee8 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&StringLiteral_9186);
    DAT_04565ee8 = 1;
  }
  iVar3 = (__this->fields).FLJFBLEOGDG;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar7 = System_Math__Pow(10.0,(double)iVar3,(MethodInfo *)0x0);
  pCVar1 = &(__this->fields).HNBDIMMCOHD;
  local_70.fields.hiddenValue = (__this->fields).HNBDIMMCOHD.fields.hiddenValue;
  local_70.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
  local_70.fields.fakeValueActive = (__this->fields).HNBDIMMCOHD.fields.fakeValueActive;
  local_70.fields.inited = (__this->fields).HNBDIMMCOHD.fields.inited;
  local_70.fields._26_6_ = *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a;
  local_70.fields.fakeValue = (__this->fields).HNBDIMMCOHD.fields.fakeValue;
  lVar2 = -0x8000000000000000;
  if (dVar7 != INFINITY) {
    lVar2 = (long)dVar7;
  }
  if (lVar2 < 2) {
    lVar2 = 1;
  }
  iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0);
  if (iVar4 != CJNHFNHJHPE) {
    local_90.fields.hiddenValue = (__this->fields).HNBDIMMCOHD.fields.hiddenValue;
    local_90.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_90.fields.fakeValueActive = (__this->fields).HNBDIMMCOHD.fields.fakeValueActive;
    local_90.fields.inited = (__this->fields).HNBDIMMCOHD.fields.inited;
    local_90.fields._26_6_ = *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a;
    local_90.fields.fakeValue = (__this->fields).HNBDIMMCOHD.fields.fakeValue;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0)
    ;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
              (&local_d0,CJNHFNHJHPE,(MethodInfo *)0x0);
    local_b0.fields.hiddenValue = local_d0.fields.hiddenValue;
    local_b0.fields.currentCryptoKey = local_d0.fields.currentCryptoKey;
    local_b0.fields.fakeValueActive = local_d0.fields.fakeValueActive;
    local_b0.fields.inited = local_d0.fields.inited;
    local_b0.fields._26_6_ = local_d0.fields._26_6_;
    local_b0.fields.fakeValue = local_d0.fields.fakeValue;
    (__this->fields).HNBDIMMCOHD.fields.hiddenValue = local_d0.fields.hiddenValue;
    (pCVar1->fields).currentCryptoKey = local_d0.fields.currentCryptoKey;
    (__this->fields).HNBDIMMCOHD.fields.fakeValueActive = local_d0.fields.fakeValueActive;
    (__this->fields).HNBDIMMCOHD.fields.inited = local_d0.fields.inited;
    *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a = local_d0.fields._26_6_;
    (__this->fields).HNBDIMMCOHD.fields.fakeValue = local_d0.fields.fakeValue;
    if (FJDHMCHMBFJ) {
      local_f0.fields.hiddenValue = (__this->fields).GMGHJMNBDDJ.fields.hiddenValue;
      local_f0.fields.currentCryptoKey = (__this->fields).GMGHJMNBDDJ.fields.currentCryptoKey;
      local_f0.fields.fakeValueActive = (__this->fields).GMGHJMNBDDJ.fields.fakeValueActive;
      local_f0.fields.inited = (__this->fields).GMGHJMNBDDJ.fields.inited;
      local_f0.fields._26_6_ = *(undefined6 *)&(__this->fields).GMGHJMNBDDJ.fields.field_0x1a;
      local_f0.fields.fakeValue = (__this->fields).GMGHJMNBDDJ.fields.fakeValue;
      iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                        (&local_f0,(MethodInfo *)0x0);
      CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                (&local_b0,(CJNHFNHJHPE - iVar4) + iVar5,(MethodInfo *)0x0);
      local_110.fields.hiddenValue = local_b0.fields.hiddenValue;
      local_110.fields.currentCryptoKey = local_b0.fields.currentCryptoKey;
      local_110.fields.fakeValueActive = local_b0.fields.fakeValueActive;
      local_110.fields.inited = local_b0.fields.inited;
      local_110.fields._26_6_ = local_b0.fields._26_6_;
      local_110.fields.fakeValue = local_b0.fields.fakeValue;
      ACHLOMELAJE__DLKOKAPHODP(__this,&local_110,method_00);
    }
    local_130.fields.hiddenValue = (__this->fields).HNBDIMMCOHD.fields.hiddenValue;
    local_130.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_130.fields.fakeValueActive = (__this->fields).HNBDIMMCOHD.fields.fakeValueActive;
    local_130.fields.inited = (__this->fields).HNBDIMMCOHD.fields.inited;
    local_130.fields._26_6_ = *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a;
    local_130.fields.fakeValue = (__this->fields).HNBDIMMCOHD.fields.fakeValue;
    iVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                      (&local_130,(MethodInfo *)0x0);
    KIHIPAJGNBF__MLDEHFFGJDP
              ((KIHIPAJGNBF_o *)__this,StringLiteral_9186,iVar4 * lVar2,(MethodInfo *)0x0);
    pSVar6 = (__this->fields).IHCEKKFJNKN;
    if (pSVar6 != (System_Action_o *)0x0) {
      (*(code *)(pSVar6->fields).super.super.invoke_impl)
                ((pSVar6->fields).super.super.method_code,(pSVar6->fields).super.super.method);
    }
  }
  return;
}

