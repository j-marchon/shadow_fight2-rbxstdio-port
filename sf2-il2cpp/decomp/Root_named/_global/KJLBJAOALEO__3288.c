// TypeDefIndex 3288
// Namespace: 
// public class KJLBJAOALEO : PNFHEJAEPHI
// Fields:
//   private readonly ILevelPlayRewardedAd COHIBLKOLHH; // 0x60

// ===== private void HHHKFAKNKOL(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x351B428]
// KJLBJAOALEO$$HHHKFAKNKOL @ RVA 0x351B428

void KJLBJAOALEO__HHHKFAKNKOL
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568983 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568983 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + *piVar5;
        goto LAB_0361b4b4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0);
LAB_0361b4b4:
                    /* WARNING: Could not recover jumptable at 0x0361b4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public override void BFCCEGGDJEF(MPAKDCNMLEG ACCIHBHMFPN)  [RVA 0x351B4D0]
// KJLBJAOALEO$$BFCCEGGDJEF @ RVA 0x351B4D0

void KJLBJAOALEO__BFCCEGGDJEF(KJLBJAOALEO_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *str1;
  System_Action_MPAKDCNMLEG__o *pSVar6;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar10;
  
  if ((DAT_04568984 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_18320/*"for Placement='"*/);
    FUN_01bab630(&StringLiteral_12068/*"Show "*/);
    DAT_04568984 = 1;
  }
  (__this->fields).super.super.JBNGADJBDHB = ACCIHBHMFPN;
  pSVar3 = DCNILGDHLEK__GHCMBEAMILB(ACCIHBHMFPN,(MethodInfo *)0x0);
  ppSVar9 = &(__this->fields).super.super._DGPEEKHPKHO_k__BackingField;
  *ppSVar9 = pSVar3;
  thunk_FUN_01c20e04(ppSVar9,pSVar3);
  uVar4 = (*(__this->klass->vtable)._6_BPHNBPHFDLM.methodPtr)
                    (__this,(__this->klass->vtable)._6_BPHNBPHFDLM.method);
  if (((uVar4 & 1) == 0) ||
     ((bVar2 = System_String__IsNullOrWhiteSpace(*ppSVar9,(MethodInfo *)0x0), !bVar2 &&
      (bVar2 = Unity_Services_LevelPlay_LevelPlayRewardedAd__IsPlacementCapped
                         (*ppSVar9,(MethodInfo *)0x0), bVar2)))) {
    pSVar6 = (__this->fields).super.super.NBEAOEDKFLO;
    if (pSVar6 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0361b5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar6->fields).super.super.invoke_impl)
                ((pSVar6->fields).super.super.method_code,(__this->fields).super.super.JBNGADJBDHB,
                 (pSVar6->fields).super.super.method);
      return;
    }
  }
  else {
    bVar2 = System_String__IsNullOrWhiteSpace(*ppSVar9,(MethodInfo *)0x0);
    pSVar3 = StringLiteral_12068/*"Show "*/;
    if (bVar2) {
      str1 = string_TypeInfo->static_fields->Empty;
    }
    else {
      str1 = System_String__Concat(StringLiteral_18320/*"for Placement='"*/,*ppSVar9,StringLiteral_802/*"'"*/,(MethodInfo *)0x0)
      ;
    }
    pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
    FCMAKNBEJDA__DHAAGKPHJLA((FCMAKNBEJDA_o *)__this,pSVar3,(MethodInfo *)0x0);
    pUVar10 = (__this->fields).COHIBLKOLHH;
    if (pUVar10 != (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
      pUVar7 = pUVar10->klass;
      pSVar3 = (__this->fields).super.super._DGPEEKHPKHO_k__BackingField;
      uVar1._0_1_ = (pUVar7->_2).rank;
      uVar1._1_1_ = (pUVar7->_2).minimumAlignment;
      uVar4 = (ulong)uVar1;
      if (uVar4 != 0) {
        piVar8 = &((pUVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
            pVVar5 = pUVar7->vtable + (*piVar8 + 0x13);
            goto LAB_0361b688;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pUVar10,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0x13);
LAB_0361b688:
                    /* WARNING: Could not recover jumptable at 0x0361b69c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(pUVar10,pSVar3,pVVar5->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DKNJPDBJIAO(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x351B6A4]
// KJLBJAOALEO$$DKNJPDBJIAO @ RVA 0x351B6A4

void KJLBJAOALEO__DKNJPDBJIAO
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568985 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568985 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 0xc);
        goto LAB_0361b734;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0xc);
LAB_0361b734:
                    /* WARNING: Could not recover jumptable at 0x0361b748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void EDMJOIGKANG(Action<LevelPlayAdInfo, LevelPlayReward> JLPMKKKMANE)  [RVA 0x351B750]
// KJLBJAOALEO$$EDMJOIGKANG @ RVA 0x351B750

void KJLBJAOALEO__EDMJOIGKANG
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__LevelPlayReward__o *JLPMKKKMANE
               ,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568986 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568986 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 9);
        goto LAB_0361b7e0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,9);
LAB_0361b7e0:
                    /* WARNING: Could not recover jumptable at 0x0361b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void IPMMAMLNDMF(Action<LevelPlayAdInfo, LevelPlayReward> JLPMKKKMANE)  [RVA 0x351B7FC]
// KJLBJAOALEO$$IPMMAMLNDMF @ RVA 0x351B7FC

void KJLBJAOALEO__IPMMAMLNDMF
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__LevelPlayReward__o *JLPMKKKMANE
               ,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568987 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568987 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 8);
        goto LAB_0361b88c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,8);
LAB_0361b88c:
                    /* WARNING: Could not recover jumptable at 0x0361b8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void PMENOONHJCM(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x351B8A8]
// KJLBJAOALEO$$PMENOONHJCM @ RVA 0x351B8A8

void KJLBJAOALEO__PMENOONHJCM
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568988 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568988 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 0xd);
        goto LAB_0361b938;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0xd);
LAB_0361b938:
                    /* WARNING: Could not recover jumptable at 0x0361b94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void PDHBBHGIIPH(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x351B954]
// KJLBJAOALEO$$PDHBBHGIIPH @ RVA 0x351B954

void KJLBJAOALEO__PDHBBHGIIPH
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568989 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568989 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 1);
        goto LAB_0361b9e4;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,1);
LAB_0361b9e4:
                    /* WARNING: Could not recover jumptable at 0x0361b9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public override void FDKDJJJDKKK(MPAKDCNMLEG ACCIHBHMFPN)  [RVA 0x351BA00]
// KJLBJAOALEO$$FDKDJJJDKKK @ RVA 0x351BA00

void KJLBJAOALEO__FDKDJJJDKKK(KJLBJAOALEO_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  ulong uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_0456898a & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_0456898a = 1;
  }
  uVar2 = (*(__this->klass->vtable)._10_CDEIMFELDHP.methodPtr)
                    (__this,(__this->klass->vtable)._10_CDEIMFELDHP.method);
  if ((uVar2 & 1) != 0) {
    return;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  (__this->fields).super.HNIADPLNEII = true;
  (__this->fields).super.super.JBNGADJBDHB = ACCIHBHMFPN;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar4 = pUVar6->klass;
  uVar1._0_1_ = (pUVar4->_2).rank;
  uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
  uVar2 = (ulong)uVar1;
  if (uVar2 != 0) {
    piVar5 = &((pUVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar3 = pUVar4->vtable + (*piVar5 + 0x12);
        goto LAB_0361babc;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0x12);
LAB_0361babc:
                    /* WARNING: Could not recover jumptable at 0x0361bacc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pUVar6,pVVar3->method);
  return;
}


// ===== private void AEHOAEDLPNI(Action<LevelPlayAdError> JLPMKKKMANE)  [RVA 0x351BAD4]
// KJLBJAOALEO$$AEHOAEDLPNI @ RVA 0x351BAD4

void KJLBJAOALEO__AEHOAEDLPNI
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdError__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_0456898b & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_0456898b = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 3);
        goto LAB_0361bb64;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,3);
LAB_0361bb64:
                    /* WARNING: Could not recover jumptable at 0x0361bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void EJDMDCIOBKI()  [RVA 0x351BB80]
// KJLBJAOALEO$$EJDMDCIOBKI @ RVA 0x351BB80

void KJLBJAOALEO__EJDMDCIOBKI(KJLBJAOALEO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar4;
  ulong uVar5;
  int32_t *piVar6;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456898c & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    auVar8 = FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_0456898c = 1;
  }
  pUVar7 = (__this->fields).COHIBLKOLHH;
  if (pUVar7 != (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
    pUVar4 = pUVar7->klass;
    uVar1._0_1_ = (pUVar4->_2).rank;
    uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
          pVVar3 = pUVar4->vtable + (*piVar6 + 0x14);
          goto LAB_0361bc18;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pUVar7,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0x14);
LAB_0361bc18:
    auVar8 = (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
    pUVar7 = (__this->fields).COHIBLKOLHH;
    if (pUVar7 != (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
      pUVar4 = pUVar7->klass;
      uVar2._0_1_ = (pUVar4->_2).rank;
      uVar2._1_1_ = (pUVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar2;
      if (uVar5 != 0) {
        piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)System_IDisposable_TypeInfo) {
            pVVar3 = pUVar4->vtable + *piVar6;
            goto LAB_0361bc80;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pUVar7,System_IDisposable_TypeInfo,0);
LAB_0361bc80:
                    /* WARNING: Could not recover jumptable at 0x0361bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
}


// ===== public override bool BPHNBPHFDLM()  [RVA 0x351BC98]
// KJLBJAOALEO$$BPHNBPHFDLM @ RVA 0x351BC98

bool KJLBJAOALEO__BPHNBPHFDLM(KJLBJAOALEO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar4;
  ulong uVar5;
  int32_t *piVar6;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_0456898d & 1) == 0) {
    auVar8 = FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_0456898d = 1;
  }
  pUVar7 = (__this->fields).COHIBLKOLHH;
  if (pUVar7 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  pUVar4 = pUVar7->klass;
  uVar1._0_1_ = (pUVar4->_2).rank;
  uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar3 = pUVar4->vtable + (*piVar6 + 0x15);
        goto LAB_0361bd24;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pUVar7,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,0x15);
LAB_0361bd24:
                    /* WARNING: Could not recover jumptable at 0x0361bd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
  return (bool)uVar2;
}


// ===== private void BIDAABHABNN(Action<LevelPlayAdError> JLPMKKKMANE)  [RVA 0x351BD3C]
// KJLBJAOALEO$$BIDAABHABNN @ RVA 0x351BD3C

void KJLBJAOALEO__BIDAABHABNN
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdError__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_0456898e & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_0456898e = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 2);
        goto LAB_0361bdcc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,2);
LAB_0361bdcc:
                    /* WARNING: Could not recover jumptable at 0x0361bde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void KIIMDDDFKML(ValueTuple<LevelPlayAdInfo, LevelPlayReward> OHNNFPGGEFK)  [RVA 0x351BDE8]
// KJLBJAOALEO$$KIIMDDDFKML @ RVA 0x351BDE8

void KJLBJAOALEO__KIIMDDDFKML
               (KJLBJAOALEO_o *__this,
               System_ValueTuple_LevelPlayAdInfo__LevelPlayReward__o OHNNFPGGEFK,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *__this_00;
  UniRx_IScheduler_o *pUVar2;
  undefined8 uVar3;
  VirtualInvokeData *pVVar4;
  UniRx_IScheduler_c *pUVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_0456898f & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&Method_KJLBJAOALEO_LNPANPEKHGK_HCOEPHNCBJI__);
    FUN_01bab630(&KJLBJAOALEO_LNPANPEKHGK_TypeInfo);
                    /* try { // try from 0361be4c to 0371c16f has its CatchHandler @ 0361be4c
                       catch() { ... } // from try @ 0361be4c with catch @ 0361be4c
                       catch() { ... } // from try @ 0361c19c with catch @ 0361be4c
                       catch() { ... } // from try @ 0361c220 with catch @ 0361be4c
                       catch() { ... } // from try @ 0361c268 with catch @ 0361be4c */
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    DAT_0456898f = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KJLBJAOALEO_LNPANPEKHGK_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    __this_00[1].monitor = OHNNFPGGEFK.fields.Item1;
    __this_00[2].klass = (Il2CppClass *)OHNNFPGGEFK.fields.Item2;
    thunk_FUN_01c20e04(&__this_00[1].monitor,0);
    if ((UniRx_Scheduler_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pUVar2 = UniRx_Scheduler__get_MainThread((MethodInfo *)0x0);
    uVar3 = thunk_FUN_01bda818(System_Action_TypeInfo);
    System_Action___ctor();
    if (pUVar2 != (UniRx_IScheduler_o *)0x0) {
      pUVar5 = pUVar2->klass;
      uVar1._0_1_ = (pUVar5->_2).rank;
      uVar1._1_1_ = (pUVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pUVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)UniRx_IScheduler_TypeInfo) {
            pVVar4 = pUVar5->vtable + (*piVar7 + 1);
            goto LAB_0361bf48;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pUVar2,UniRx_IScheduler_TypeInfo,1);
LAB_0361bf48:
                    /* WARNING: Could not recover jumptable at 0x0361bf64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar4->methodPtr)(pUVar2,uVar3,pVVar4->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MFDKNEDKFFB(Action<LevelPlayAdInfo, LevelPlayAdError> JLPMKKKMANE)  [RVA 0x351BF74]
// KJLBJAOALEO$$MFDKNEDKFFB @ RVA 0x351BF74

void KJLBJAOALEO__MFDKNEDKFFB
               (KJLBJAOALEO_o *__this,
               System_Action_LevelPlayAdInfo__LevelPlayAdError__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568990 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568990 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 6);
        goto LAB_0361c004;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,6);
LAB_0361c004:
                    /* WARNING: Could not recover jumptable at 0x0361c018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public void .ctor(string FKMJHKGHKFF)  [RVA 0x351C020]
// KJLBJAOALEO$$.ctor @ RVA 0x351C020

void KJLBJAOALEO___ctor(KJLBJAOALEO_o *__this,System_String_o *FKMJHKGHKFF,MethodInfo *method)

{
  Unity_Services_LevelPlay_LevelPlayRewardedAd_o *__this_00;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o **ppUVar1;
  System_Action_Action_T___o *pSVar2;
  System_Action_Action_T___o *pSVar3;
  System_IObservable_T__o *pSVar4;
  System_Action_T__o *pSVar5;
  Il2CppObject *pIVar6;
  System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError____Action_LevelPlayAdInfo__LevelPlayAdError___o
  **ppSVar7;
  System_Action_TDelegate__o *pSVar8;
  System_Action_TDelegate__o *pSVar9;
  System_IObservable_TEventArgs__o *pSVar10;
  System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayReward____Action_LevelPlayAdInfo__LevelPlayReward___o
  **ppSVar11;
  System_Action_o *disposeAction;
  System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError____Action_LevelPlayAdInfo__LevelPlayAdError___o
  *conversion;
  System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayReward____Action_LevelPlayAdInfo__LevelPlayReward___o
  *conversion_00;
  
  if ((DAT_04568991 & 1) == 0) {
    FUN_01bab630(&System_Action<ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo>_TypeInfo);
    FUN_01bab630(&System_Action<ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayAdError>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&
                 System_Func<Action<ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>,_Action<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo
                );
    FUN_01bab630(&
                 System_Func<Action<ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>,_Action<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo
                );
    FUN_01bab630(&Method_KJLBJAOALEO_AEHOAEDLPNI__);
    FUN_01bab630(&Method_KJLBJAOALEO_AOGBDGDFCCO__);
    FUN_01bab630(&Method_KJLBJAOALEO_BAMPIGNOEJN__);
    FUN_01bab630(&Method_KJLBJAOALEO_BIDAABHABNN__);
    FUN_01bab630(&Method_KJLBJAOALEO_DKNJPDBJIAO__);
    FUN_01bab630(&Method_KJLBJAOALEO_EDMJOIGKANG__);
    FUN_01bab630(&Method_KJLBJAOALEO_EJDMDCIOBKI__);
    FUN_01bab630(&Method_KJLBJAOALEO_HHHKFAKNKOL__);
    FUN_01bab630(&Method_KJLBJAOALEO_HKIMMEPOCEB__);
    FUN_01bab630(&Method_KJLBJAOALEO_IPMMAMLNDMF__);
                    /* try { // try from 0361c170 to 0371c177 has its CatchHandler @ 0361c204 */
    FUN_01bab630(&Method_KJLBJAOALEO_KIIMDDDFKML__);
                    /* try { // try from 0361c180 to 0371c19b has its CatchHandler @ 0361c208 */
    FUN_01bab630(&Method_KJLBJAOALEO_MFDKNEDKFFB__);
    FUN_01bab630(&Method_KJLBJAOALEO_PDHBBHGIIPH__);
                    /* try { // try from 0361c19c to 0371c21b has its CatchHandler @ 0361be4c */
    FUN_01bab630(&Method_KJLBJAOALEO_PMENOONHJCM__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayRewardedAd_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdError>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
    FUN_01bab630(&
                 Method_UniRx_ObservableExtensions_Subscribe<ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>__
                );
    FUN_01bab630(&
                 Method_UniRx_ObservableExtensions_Subscribe<ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>__
                );
    FUN_01bab630(&
                 Method_UniRx_Observable_FromEvent<Action<LevelPlayAdInfo,_LevelPlayReward>,_ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>__
                );
    FUN_01bab630(&
                 Method_UniRx_Observable_FromEvent<Action<LevelPlayAdInfo,_LevelPlayAdError>,_ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>__
                );
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayAdError>__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361c170 with catch @ 0361c204
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0361c180 with catch @ 0361c208
                        */
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
                    /* try { // try from 0361c21c to 0371c21f has its CatchHandler @ 0361c250 */
                    /* try { // try from 0361c220 to 0371c25f has its CatchHandler @ 0361be4c */
    FUN_01bab630(&Method_PNFHEJAEPHI_DOKBCLHIPEA__);
    FUN_01bab630(&Method_PNFHEJAEPHI_EILMLNFCAAK__);
    FUN_01bab630(&Method_PNFHEJAEPHI_LAJOGIIJIEO__);
    FUN_01bab630(&Method_PNFHEJAEPHI_LNLEFANOIDH__);
                    /* catch() { ... } // from try @ 0361c21c with catch @ 0361c250 */
    FUN_01bab630(&Method_PNFHEJAEPHI_PCALMGLCBKG__);
    FUN_01bab630(&Method_KJLBJAOALEO_<>c_AKLCBIPLFOO__);
                    /* try { // try from 0361c260 to 0371c267 has its CatchHandler @ 0361c280 */
                    /* try { // try from 0361c268 to 0371c277 has its CatchHandler @ 0361be4c */
    FUN_01bab630(&Method_KJLBJAOALEO_<>c_DACCEKBJBBC__);
    FUN_01bab630(&KJLBJAOALEO_<>c_TypeInfo);
                    /* try { // try from 0361c278 to 0371c27f has its CatchHandler @ 0361c280 */
    DAT_04568991 = 1;
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0361c260 with catch @ 0361c280
                       catch(type#2 @ 00000000) { ... } // from try @ 0361c278 with catch @ 0361c280
                        */
  PNFHEJAEPHI___ctor((PNFHEJAEPHI_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Unity_Services_LevelPlay_LevelPlayRewardedAd_o *)
              thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayRewardedAd_TypeInfo);
  Unity_Services_LevelPlay_LevelPlayRewardedAd___ctor
            (__this_00,FKMJHKGHKFF,(Unity_Services_LevelPlay_LevelPlayRewardedAd_Config_o *)0x0,
             (MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).COHIBLKOLHH;
  *ppUVar1 = (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)__this_00;
  thunk_FUN_01c20e04(ppUVar1,__this_00);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdError>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdError>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdError>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdError>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdError>__)
  ;
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  pSVar2 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar3 = (System_Action_Action_T___o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar4 = UniRx_Observable__FromEvent<object>
                     (pSVar2,pSVar3,Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
  pSVar5 = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<LevelPlayAdInfo>_TypeInfo);
  System_Action<object>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<object>
                     (pSVar4,pSVar5,Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  if ((KJLBJAOALEO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  conversion = KJLBJAOALEO_<>c_TypeInfo->static_fields->__9__3_8;
  if (conversion ==
      (System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError____Action_LevelPlayAdInfo__LevelPlayAdError___o
       *)0x0) {
    if ((KJLBJAOALEO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    conversion = (System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayAdError____Action_LevelPlayAdInfo__LevelPlayAdError___o
                  *)thunk_FUN_01bda818(
                                      System_Func<Action<ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>,_Action<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo
                                      );
    System_Func<object,_object>___ctor();
    ppSVar7 = &KJLBJAOALEO_<>c_TypeInfo->static_fields->__9__3_8;
    *ppSVar7 = conversion;
    thunk_FUN_01c20e04(ppSVar7,conversion);
  }
  pSVar8 = (System_Action_TDelegate__o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar9 = (System_Action_TDelegate__o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo);
  System_Action<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar10 = UniRx_Observable__FromEvent<object,_ValueTuple<object,_object>>
                      ((System_Func_Action_TEventArgs___TDelegate__o *)conversion,pSVar8,pSVar9,
                       Method_UniRx_Observable_FromEvent<Action<LevelPlayAdInfo,_LevelPlayAdError>,_ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>__
                      );
  pSVar5 = (System_Action_T__o *)
           thunk_FUN_01bda818(System_Action<ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>_TypeInfo)
  ;
  System_Action<ValueTuple<object,_object>>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<ValueTuple<object,_object>>
                     ((System_IObservable_T__o *)pSVar10,pSVar5,
                      Method_UniRx_ObservableExtensions_Subscribe<ValueTuple<LevelPlayAdInfo,_LevelPlayAdError>>__
                     );
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  if ((KJLBJAOALEO_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  conversion_00 = KJLBJAOALEO_<>c_TypeInfo->static_fields->__9__3_11;
  if (conversion_00 ==
      (System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayReward____Action_LevelPlayAdInfo__LevelPlayReward___o
       *)0x0) {
    if ((KJLBJAOALEO_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    conversion_00 =
         (System_Func_Action_ValueTuple_LevelPlayAdInfo__LevelPlayReward____Action_LevelPlayAdInfo__LevelPlayReward___o
          *)thunk_FUN_01bda818(
                              System_Func<Action<ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>,_Action<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo
                              );
    System_Func<object,_object>___ctor();
    ppSVar11 = &KJLBJAOALEO_<>c_TypeInfo->static_fields->__9__3_11;
    *ppSVar11 = conversion_00;
    thunk_FUN_01c20e04(ppSVar11,conversion_00);
  }
  pSVar8 = (System_Action_TDelegate__o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo);
  System_Action<object>___ctor();
  pSVar9 = (System_Action_TDelegate__o *)
           thunk_FUN_01bda818(System_Action<Action<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo);
  System_Action<object>___ctor();
  if ((UniRx_Observable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar10 = UniRx_Observable__FromEvent<object,_ValueTuple<object,_object>>
                      ((System_Func_Action_TEventArgs___TDelegate__o *)conversion_00,pSVar8,pSVar9,
                       Method_UniRx_Observable_FromEvent<Action<LevelPlayAdInfo,_LevelPlayReward>,_ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>__
                      );
  pSVar5 = (System_Action_T__o *)
           thunk_FUN_01bda818(System_Action<ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>_TypeInfo);
  System_Action<ValueTuple<object,_object>>___ctor();
  pIVar6 = (Il2CppObject *)
           UniRx_ObservableExtensions__Subscribe<ValueTuple<object,_object>>
                     ((System_IObservable_T__o *)pSVar10,pSVar5,
                      Method_UniRx_ObservableExtensions_Subscribe<ValueTuple<LevelPlayAdInfo,_LevelPlayReward>>__
                     );
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  disposeAction = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
  System_Action___ctor();
  if ((UniRx_Disposable_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pIVar6 = (Il2CppObject *)UniRx_Disposable__Create(disposeAction,(MethodInfo *)0x0);
  UniRx_DisposableExtensions__AddTo<object>
            (pIVar6,(System_Collections_Generic_ICollection_IDisposable__o *)
                    (__this->fields).super.CAEFEOBGDEH,
             Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
  return;
}


// ===== private void HKIMMEPOCEB(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x351C8C4]
// KJLBJAOALEO$$HKIMMEPOCEB @ RVA 0x351C8C4

void KJLBJAOALEO__HKIMMEPOCEB
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568992 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568992 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 5);
        goto LAB_0361c954;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,5);
LAB_0361c954:
                    /* WARNING: Could not recover jumptable at 0x0361c968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void BAMPIGNOEJN(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x351C970]
// KJLBJAOALEO$$BAMPIGNOEJN @ RVA 0x351C970

void KJLBJAOALEO__BAMPIGNOEJN
               (KJLBJAOALEO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568993 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568993 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 4);
        goto LAB_0361ca00;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,4);
LAB_0361ca00:
                    /* WARNING: Could not recover jumptable at 0x0361ca14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void AOGBDGDFCCO(Action<LevelPlayAdInfo, LevelPlayAdError> JLPMKKKMANE)  [RVA 0x351CA1C]
// KJLBJAOALEO$$AOGBDGDFCCO @ RVA 0x351CA1C

void KJLBJAOALEO__AOGBDGDFCCO
               (KJLBJAOALEO_o *__this,
               System_Action_LevelPlayAdInfo__LevelPlayAdError__o *JLPMKKKMANE,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *pUVar6;
  
  if ((DAT_04568994 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo);
    DAT_04568994 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayRewardedAd_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 7);
        goto LAB_0361caac;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayRewardedAd_TypeInfo,7);
LAB_0361caac:
                    /* WARNING: Could not recover jumptable at 0x0361cac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

