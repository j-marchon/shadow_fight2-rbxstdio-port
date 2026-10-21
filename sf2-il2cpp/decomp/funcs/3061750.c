// ACHLOMELAJE$$ALAHADGPCNI @ RVA 0x3061750

void ACHLOMELAJE__ALAHADGPCNI(ACHLOMELAJE_o *__this,int32_t GMALOFEKAHI,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *pCVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int64_t iVar6;
  System_Action_o *pSVar7;
  double dVar8;
  double dVar9;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  int64_t local_b0;
  int64_t iStack_a8;
  int64_t iStack_a0;
  bool_conflict bStack_98;
  bool_conflict bStack_97;
  undefined6 uStack_96;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
  if ((DAT_04565ecf & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565ecf = 1;
  }
  iVar4 = (__this->fields).FLJFBLEOGDG;
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar8 = System_Math__Pow(10.0,(double)(iVar4 - GMALOFEKAHI),(MethodInfo *)0x0);
  pCVar1 = &(__this->fields).HNBDIMMCOHD;
  local_70.fields.hiddenValue = (__this->fields).HNBDIMMCOHD.fields.hiddenValue;
  local_70.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
  local_70.fields.fakeValueActive = (__this->fields).HNBDIMMCOHD.fields.fakeValueActive;
  local_70.fields.inited = (__this->fields).HNBDIMMCOHD.fields.inited;
  local_70.fields._26_6_ = *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a;
  local_70.fields.fakeValue = (__this->fields).HNBDIMMCOHD.fields.fakeValue;
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0);
  dVar9 = (double)iVar6 / dVar8;
  if (1.0 < dVar8) {
    local_90.fields.hiddenValue = (__this->fields).HNBDIMMCOHD.fields.hiddenValue;
    local_90.fields.currentCryptoKey = (pCVar1->fields).currentCryptoKey;
    local_90.fields.fakeValueActive = (__this->fields).HNBDIMMCOHD.fields.fakeValueActive;
    local_90.fields.inited = (__this->fields).HNBDIMMCOHD.fields.inited;
    local_90.fields._26_6_ = *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a;
    local_90.fields.fakeValue = (__this->fields).HNBDIMMCOHD.fields.fakeValue;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0)
    ;
    lVar3 = -0x8000000000000000;
    if (dVar8 != INFINITY) {
      lVar3 = (long)dVar8;
    }
    lVar5 = 0;
    if (lVar3 != 0) {
      lVar5 = iVar6 / lVar3;
    }
    if (0 < iVar6 - lVar5 * lVar3) {
      dVar9 = dVar9 + 1.0;
    }
  }
                    /* try { // try from 03161838 to 03261947 has its CatchHandler @ 03161838
                       catch() { ... } // from try @ 03161838 with catch @ 03161838
                       catch() { ... } // from try @ 031619f8 with catch @ 03161838
                       catch() { ... } // from try @ 03161a78 with catch @ 03161838
                       catch() { ... } // from try @ 03161a80 with catch @ 03161838
                       catch() { ... } // from try @ 03161b1c with catch @ 03161838 */
  iVar6 = -0x8000000000000000;
  if (dVar9 != INFINITY) {
    iVar6 = (long)dVar9;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_d0,iVar6,(MethodInfo *)0x0);
  pCVar2 = &(__this->fields).GMGHJMNBDDJ;
  iStack_a8 = local_d0.fields.hiddenValue;
  local_b0 = local_d0.fields.currentCryptoKey;
  bStack_98 = local_d0.fields.fakeValueActive;
  bStack_97 = local_d0.fields.inited;
  uStack_96 = local_d0.fields._26_6_;
  iStack_a0 = local_d0.fields.fakeValue;
  (__this->fields).HNBDIMMCOHD.fields.hiddenValue = local_d0.fields.hiddenValue;
  (pCVar1->fields).currentCryptoKey = local_d0.fields.currentCryptoKey;
  (__this->fields).HNBDIMMCOHD.fields.fakeValueActive = local_d0.fields.fakeValueActive;
  (__this->fields).HNBDIMMCOHD.fields.inited = local_d0.fields.inited;
  *(undefined6 *)&(__this->fields).HNBDIMMCOHD.fields.field_0x1a = local_d0.fields._26_6_;
  (__this->fields).HNBDIMMCOHD.fields.fakeValue = local_d0.fields.fakeValue;
  local_f0.fields.hiddenValue = (__this->fields).GMGHJMNBDDJ.fields.hiddenValue;
  local_f0.fields.currentCryptoKey = (pCVar2->fields).currentCryptoKey;
  local_f0.fields.fakeValueActive = (__this->fields).GMGHJMNBDDJ.fields.fakeValueActive;
  local_f0.fields.inited = (__this->fields).GMGHJMNBDDJ.fields.inited;
  local_f0.fields._26_6_ = *(undefined6 *)&(__this->fields).GMGHJMNBDDJ.fields.field_0x1a;
  local_f0.fields.fakeValue = (__this->fields).GMGHJMNBDDJ.fields.fakeValue;
  iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_f0,(MethodInfo *)0x0);
  dVar9 = (double)iVar6 / dVar8;
  if (1.0 < dVar8) {
    local_110.fields.hiddenValue = (__this->fields).GMGHJMNBDDJ.fields.hiddenValue;
    local_110.fields.currentCryptoKey = (pCVar2->fields).currentCryptoKey;
    local_110.fields.fakeValueActive = (__this->fields).GMGHJMNBDDJ.fields.fakeValueActive;
    local_110.fields.inited = (__this->fields).GMGHJMNBDDJ.fields.inited;
    local_110.fields._26_6_ = *(undefined6 *)&(__this->fields).GMGHJMNBDDJ.fields.field_0x1a;
    local_110.fields.fakeValue = (__this->fields).GMGHJMNBDDJ.fields.fakeValue;
    iVar6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                      (&local_110,(MethodInfo *)0x0);
    lVar3 = -0x8000000000000000;
    if (dVar8 != INFINITY) {
      lVar3 = (long)dVar8;
    }
    lVar5 = 0;
    if (lVar3 != 0) {
      lVar5 = iVar6 / lVar3;
    }
    if (0 < iVar6 - lVar5 * lVar3) {
      dVar9 = dVar9 + 1.0;
    }
  }
  iVar6 = -0x8000000000000000;
  if (dVar9 != INFINITY) {
    iVar6 = (long)dVar9;
  }
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_d0,iVar6,(MethodInfo *)0x0);
  iStack_a8 = local_d0.fields.hiddenValue;
  local_b0 = local_d0.fields.currentCryptoKey;
  bStack_98 = local_d0.fields.fakeValueActive;
  bStack_97 = local_d0.fields.inited;
  uStack_96 = local_d0.fields._26_6_;
  iStack_a0 = local_d0.fields.fakeValue;
  (__this->fields).GMGHJMNBDDJ.fields.hiddenValue = local_d0.fields.hiddenValue;
  (pCVar2->fields).currentCryptoKey = local_d0.fields.currentCryptoKey;
  (__this->fields).GMGHJMNBDDJ.fields.fakeValueActive = local_d0.fields.fakeValueActive;
  (__this->fields).GMGHJMNBDDJ.fields.inited = local_d0.fields.inited;
  *(undefined6 *)&(__this->fields).GMGHJMNBDDJ.fields.field_0x1a = local_d0.fields._26_6_;
  (__this->fields).GMGHJMNBDDJ.fields.fakeValue = local_d0.fields.fakeValue;
  pSVar7 = (__this->fields).HIKINPLMBCL;
  if (pSVar7 != (System_Action_o *)0x0) {
    (*(code *)(pSVar7->fields).super.super.invoke_impl)
              ((pSVar7->fields).super.super.method_code,(pSVar7->fields).super.super.method);
  }
  return;
}

