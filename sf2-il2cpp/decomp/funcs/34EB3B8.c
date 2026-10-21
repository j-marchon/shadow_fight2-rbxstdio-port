// OLKKAIFGGAK$$JPFGODGJKNP @ RVA 0x34EB3B8

void OLKKAIFGGAK__JPFGODGJKNP(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *pCVar1;
  int32_t iVar2;
  OLKKAIFGGAK_o *__this_00;
  OLKKAIFGGAK_GNGMELOMKNL_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  System_Action_OLKKAIFGGAK_GNGMELOMKNL__o *pSVar4;
  float PCNEDMAJMOJ;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_80;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_68;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50 [4];
  
  do {
    __this_00 = __this;
    if ((DAT_04568791 & 1) == 0) {
      FUN_01bab630(&OLKKAIFGGAK_GNGMELOMKNL_TypeInfo,method);
      DAT_04568791 = 1;
      method = extraout_x1;
    }
    __this = (__this_00->fields).NFMBPIPEKGF;
  } while (__this != (OLKKAIFGGAK_o *)0x0);
  local_80.fakeValueActive = (__this_00->fields).MADKCNIEPLO.fields.fakeValueActive;
  local_80.inited = (__this_00->fields).MADKCNIEPLO.fields.inited;
  local_80._18_2_ = *(undefined2 *)&(__this_00->fields).MADKCNIEPLO.fields.field_0x12;
  local_80.hiddenValueOldByte4.fields =
       (__this_00->fields).MADKCNIEPLO.fields.hiddenValueOldByte4.fields;
  local_80.fakeValue = (__this_00->fields).MADKCNIEPLO.fields.fakeValue;
  local_80.currentCryptoKey = (__this_00->fields).MADKCNIEPLO.fields.currentCryptoKey;
  local_80.hiddenValue = (__this_00->fields).MADKCNIEPLO.fields.hiddenValue;
  pCVar1 = &(__this_00->fields).ILPEKKGEAEK;
  PCNEDMAJMOJ = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_80,
                           (MethodInfo *)0x0);
  if (1.0 <= PCNEDMAJMOJ) {
    pMVar3 = (MethodInfo *)0x0;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)pCVar1->fields,
                       (MethodInfo *)0x0);
    OLKKAIFGGAK__FDDFPMCLCGM(__this_00,iVar2 + 1,pMVar3);
    PCNEDMAJMOJ = 0.0;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
              ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_68,0.0,(MethodInfo *)0x0)
    ;
    local_50[0].fakeValueActive = local_68.fakeValueActive;
    local_50[0].inited = local_68.inited;
    local_50[0]._18_2_ = local_68._18_2_;
    local_50[0].hiddenValueOldByte4.fields = local_68.hiddenValueOldByte4.fields;
    local_50[0].fakeValue = local_68.fakeValue;
    local_50[0].currentCryptoKey = local_68.currentCryptoKey;
    local_50[0].hiddenValue = local_68.hiddenValue;
    (__this_00->fields).MADKCNIEPLO.fields.fakeValueActive = local_68.fakeValueActive;
    (__this_00->fields).MADKCNIEPLO.fields.inited = local_68.inited;
    *(undefined2 *)&(__this_00->fields).MADKCNIEPLO.fields.field_0x12 = local_68._18_2_;
    (__this_00->fields).MADKCNIEPLO.fields.hiddenValueOldByte4 =
         (CodeStage_AntiCheat_Common_ACTkByte4_o)local_68.hiddenValueOldByte4.fields;
    (__this_00->fields).MADKCNIEPLO.fields.fakeValue = local_68.fakeValue;
    (__this_00->fields).MADKCNIEPLO.fields.currentCryptoKey = local_68.currentCryptoKey;
    (__this_00->fields).MADKCNIEPLO.fields.hiddenValue = local_68.hiddenValue;
  }
  pMVar3 = (MethodInfo *)0x0;
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)pCVar1->fields,
                     (MethodInfo *)0x0);
  if (1 < iVar2) {
    OLKKAIFGGAK__FDDFPMCLCGM(__this_00,1,pMVar3);
  }
  iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)pCVar1->fields,
                     (MethodInfo *)0x0);
  if (iVar2 != 0) {
    PCNEDMAJMOJ = 1.0;
  }
  __this_01 = (OLKKAIFGGAK_GNGMELOMKNL_o *)thunk_FUN_01bda818(OLKKAIFGGAK_GNGMELOMKNL_TypeInfo);
  OLKKAIFGGAK_GNGMELOMKNL___ctor(__this_01,0xc,PCNEDMAJMOJ,-1,-1,(MethodInfo *)0x0);
  iVar2 = OLKKAIFGGAK__GHJLGMJLODG(__this_00,method_00);
  if (__this_01 != (OLKKAIFGGAK_GNGMELOMKNL_o *)0x0) {
    (__this_01->fields).HMJOAMFPODG = iVar2;
    (__this_01->fields).EGNNBHJHNON = 0x32;
    pSVar4 = (__this_00->fields).JAHLLCFBFNF;
    if (pSVar4 != (System_Action_OLKKAIFGGAK_GNGMELOMKNL__o *)0x0) {
      (*(code *)(pSVar4->fields).super.super.invoke_impl)
                ((pSVar4->fields).super.super.method_code,__this_01,
                 (pSVar4->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

