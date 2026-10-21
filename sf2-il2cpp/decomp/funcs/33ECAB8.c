// FCJBEKHDLAF$$MKOHFHJJDFB @ RVA 0x33ECAB8

PJKHAJKEHEL_o * FCJBEKHDLAF__MKOHFHJJDFB(FCJBEKHDLAF_o *__this,bool OEIKLDANLCP,MethodInfo *method)

{
  int iVar1;
  CNIGOFCKBGI_o *pCVar2;
  PJKHAJKEHEL_o *pPVar3;
  PJKHAJKEHEL_o **ppPVar4;
  PJKHAJKEHEL_o **ppPVar5;
  PJKHAJKEHEL_o **ppPVar6;
  float fVar7;
  float fVar8;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if (((__this->fields).FPILBILDOPJ != 5) &&
     (pCVar2 = (__this->fields).KKJBIHIFJOE, pCVar2 != (CNIGOFCKBGI_o *)0x0)) {
    iVar1 = (*(pCVar2->klass->vtable)._14_PKEKLILIONG.methodPtr)
                      (pCVar2,(pCVar2->klass->vtable)._14_PKEKLILIONG.method);
    if (iVar1 == 2) {
      ppPVar4 = &(__this->fields).JEDELFOBLEN;
      goto LAB_034ecb88;
    }
    if (iVar1 == 1) {
      ppPVar4 = &(__this->fields).KCHOEJOHIMM;
      goto LAB_034ecb88;
    }
  }
  ppPVar6 = &(__this->fields).KCHOEJOHIMM;
  pPVar3 = *ppPVar6;
  if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
    local_50.fakeValueActive = (pPVar3->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_50.inited = (pPVar3->fields).JNFNFEJAGGN.fields.inited;
    local_50._18_2_ = *(undefined2 *)&(pPVar3->fields).JNFNFEJAGGN.fields.field_0x12;
    local_50.hiddenValueOldByte4.fields =
         (pPVar3->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (pPVar3->fields).JNFNFEJAGGN.fields.fakeValue;
    local_50.currentCryptoKey = (pPVar3->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_50.hiddenValue = (pPVar3->fields).JNFNFEJAGGN.fields.hiddenValue;
    fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                       (MethodInfo *)0x0);
    ppPVar5 = &(__this->fields).JEDELFOBLEN;
    pPVar3 = *ppPVar5;
    if (pPVar3 != (PJKHAJKEHEL_o *)0x0) {
      local_70.fakeValueActive = (pPVar3->fields).JNFNFEJAGGN.fields.fakeValueActive;
      local_70.inited = (pPVar3->fields).JNFNFEJAGGN.fields.inited;
      local_70._18_2_ = *(undefined2 *)&(pPVar3->fields).JNFNFEJAGGN.fields.field_0x12;
      local_70.hiddenValueOldByte4.fields =
           (pPVar3->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
      local_70.fakeValue = (pPVar3->fields).JNFNFEJAGGN.fields.fakeValue;
      local_70.currentCryptoKey = (pPVar3->fields).JNFNFEJAGGN.fields.currentCryptoKey;
      local_70.hiddenValue = (pPVar3->fields).JNFNFEJAGGN.fields.hiddenValue;
      fVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_70,
                         (MethodInfo *)0x0);
      if (fVar7 <= fVar8) {
        ppPVar4 = ppPVar5;
        if (!OEIKLDANLCP) {
          ppPVar4 = ppPVar6;
        }
      }
      else {
        ppPVar4 = ppPVar6;
        if (!OEIKLDANLCP) {
          ppPVar4 = ppPVar5;
        }
      }
LAB_034ecb88:
                    /* try { // try from 034ecb8c to 035ecdab has its CatchHandler @ 034ecb8c
                       catch() { ... } // from try @ 034ecb8c with catch @ 034ecb8c
                       catch() { ... } // from try @ 034ecdcc with catch @ 034ecb8c
                       catch() { ... } // from try @ 034ecec4 with catch @ 034ecb8c
                       catch() { ... } // from try @ 034eceec with catch @ 034ecb8c
                       catch() { ... } // from try @ 034ecf2c with catch @ 034ecb8c */
      return *ppPVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

