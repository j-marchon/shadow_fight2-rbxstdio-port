// TypeDefIndex 301
// Namespace: 
// public class KKHJHHIPPOO : PNFHEJAEPHI
// Fields:
//   private readonly ILevelPlayInterstitialAd COHIBLKOLHH; // 0x60

// ===== private void BAMPIGNOEJN(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x32387F4]
// KKHJHHIPPOO$$BAMPIGNOEJN @ RVA 0x32387F4

void KKHJHHIPPOO__BAMPIGNOEJN
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_0456703b & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_0456703b = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 4);
        goto LAB_03338884;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,4);
LAB_03338884:
                    /* WARNING: Could not recover jumptable at 0x03338898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void HKIMMEPOCEB(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x32388A0]
// KKHJHHIPPOO$$HKIMMEPOCEB @ RVA 0x32388A0

void KKHJHHIPPOO__HKIMMEPOCEB
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_0456703c & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_0456703c = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 5);
        goto LAB_03338930;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,5);
LAB_03338930:
                    /* WARNING: Could not recover jumptable at 0x03338944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public override void FDKDJJJDKKK(MPAKDCNMLEG ACCIHBHMFPN)  [RVA 0x323894C]
// KKHJHHIPPOO$$FDKDJJJDKKK @ RVA 0x323894C

void KKHJHHIPPOO__FDKDJJJDKKK(KKHJHHIPPOO_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  ulong uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_0456703d & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_0456703d = 1;
  }
  uVar2 = (*(__this->klass->vtable)._10_CDEIMFELDHP.methodPtr)
                    (__this,(__this->klass->vtable)._10_CDEIMFELDHP.method);
  if ((uVar2 & 1) != 0) {
    return;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  (__this->fields).super.HNIADPLNEII = true;
  (__this->fields).super.super.JBNGADJBDHB = ACCIHBHMFPN;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar3 = pUVar4->vtable + (*piVar5 + 0x10);
        goto LAB_03338a08;
      }
      uVar2 = uVar2 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar2 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0x10);
LAB_03338a08:
                    /* WARNING: Could not recover jumptable at 0x03338a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pUVar6,pVVar3->method);
  return;
}


// ===== private void DKNJPDBJIAO(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x3238A20]
// KKHJHHIPPOO$$DKNJPDBJIAO @ RVA 0x3238A20

void KKHJHHIPPOO__DKNJPDBJIAO
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_0456703e & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_0456703e = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 6);
        goto LAB_03338ab0;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,6);
LAB_03338ab0:
                    /* WARNING: Could not recover jumptable at 0x03338ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void HHHKFAKNKOL(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x3238ACC]
// KKHJHHIPPOO$$HHHKFAKNKOL @ RVA 0x3238ACC

void KKHJHHIPPOO__HHHKFAKNKOL
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_0456703f & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_0456703f = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + *piVar5;
        goto LAB_03338b58;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0);
LAB_03338b58:
                    /* WARNING: Could not recover jumptable at 0x03338b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void DACCEKBJBBC()  [RVA 0x3238B74]
// KKHJHHIPPOO$$DACCEKBJBBC @ RVA 0x3238B74

void KKHJHHIPPOO__DACCEKBJBBC(KKHJHHIPPOO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar4;
  ulong uVar5;
  int32_t *piVar6;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04567040 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    auVar8 = FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567040 = 1;
  }
  pUVar7 = (__this->fields).COHIBLKOLHH;
  if (pUVar7 != (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
    pUVar4 = pUVar7->klass;
    uVar1._0_1_ = (pUVar4->_2).rank;
    uVar1._1_1_ = (pUVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pUVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
          pVVar3 = pUVar4->vtable + (*piVar6 + 0x12);
          goto LAB_03338c0c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(pUVar7,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0x12);
LAB_03338c0c:
    auVar8 = (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
    pUVar7 = (__this->fields).COHIBLKOLHH;
    if (pUVar7 != (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
            goto LAB_03338c74;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pUVar7,System_IDisposable_TypeInfo,0);
LAB_03338c74:
                    /* WARNING: Could not recover jumptable at 0x03338c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
}


// ===== private void BIDAABHABNN(Action<LevelPlayAdError> JLPMKKKMANE)  [RVA 0x3238C8C]
// KKHJHHIPPOO$$BIDAABHABNN @ RVA 0x3238C8C

void KKHJHHIPPOO__BIDAABHABNN
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdError__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_04567041 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567041 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 2);
        goto LAB_03338d1c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,2);
LAB_03338d1c:
                    /* WARNING: Could not recover jumptable at 0x03338d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public override void BFCCEGGDJEF(MPAKDCNMLEG ACCIHBHMFPN)  [RVA 0x3238D38]
// KKHJHHIPPOO$$BFCCEGGDJEF @ RVA 0x3238D38

void KKHJHHIPPOO__BFCCEGGDJEF(KKHJHHIPPOO_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  ulong uVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *str1;
  System_Action_MPAKDCNMLEG__o *pSVar6;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar10;
  
  if ((DAT_04567042 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_802/*"'"*/);
    FUN_01bab630(&StringLiteral_18320/*"for Placement='"*/);
    FUN_01bab630(&StringLiteral_12068/*"Show "*/);
    DAT_04567042 = 1;
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
      (bVar2 = Unity_Services_LevelPlay_LevelPlayInterstitialAd__IsPlacementCapped
                         (*ppSVar9,(MethodInfo *)0x0), bVar2)))) {
    pSVar6 = (__this->fields).super.super.NBEAOEDKFLO;
    if (pSVar6 != (System_Action_MPAKDCNMLEG__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03338e10. Too many branches */
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
    if (pUVar10 != (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
      pUVar7 = pUVar10->klass;
      pSVar3 = (__this->fields).super.super._DGPEEKHPKHO_k__BackingField;
      uVar1._0_1_ = (pUVar7->_2).rank;
      uVar1._1_1_ = (pUVar7->_2).minimumAlignment;
      uVar4 = (ulong)uVar1;
      if (uVar4 != 0) {
        piVar8 = &((pUVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
            pVVar5 = pUVar7->vtable + (*piVar8 + 0x11);
            goto LAB_03338ef0;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(pUVar10,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0x11)
      ;
LAB_03338ef0:
                    /* WARNING: Could not recover jumptable at 0x03338f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar5->methodPtr)(pUVar10,pSVar3,pVVar5->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override bool BPHNBPHFDLM()  [RVA 0x3238F0C]
// KKHJHHIPPOO$$BPHNBPHFDLM @ RVA 0x3238F0C

bool KKHJHHIPPOO__BPHNBPHFDLM(KKHJHHIPPOO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar4;
  ulong uVar5;
  int32_t *piVar6;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = __this;
  if ((DAT_04567043 & 1) == 0) {
    auVar8 = FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567043 = 1;
  }
  pUVar7 = (__this->fields).COHIBLKOLHH;
  if (pUVar7 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar3 = pUVar4->vtable + (*piVar6 + 0x13);
        goto LAB_03338f98;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)
           FUN_01b81914(pUVar7,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,0x13);
LAB_03338f98:
                    /* WARNING: Could not recover jumptable at 0x03338fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(pUVar7,pVVar3->method);
  return (bool)uVar2;
}


// ===== private void PMENOONHJCM(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x3238FB0]
// KKHJHHIPPOO$$PMENOONHJCM @ RVA 0x3238FB0

void KKHJHHIPPOO__PMENOONHJCM
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_04567044 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567044 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 7);
        goto LAB_03339040;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,7);
LAB_03339040:
                    /* WARNING: Could not recover jumptable at 0x03339054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== public void .ctor(string FKMJHKGHKFF)  [RVA 0x323905C]
// KKHJHHIPPOO$$.ctor @ RVA 0x323905C

void KKHJHHIPPOO___ctor(KKHJHHIPPOO_o *__this,System_String_o *FKMJHKGHKFF,MethodInfo *method)

{
  Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *__this_00;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o **ppUVar1;
  System_Action_Action_T___o *pSVar2;
  System_Action_Action_T___o *pSVar3;
  System_IObservable_T__o *pSVar4;
  System_Action_T__o *pSVar5;
  Il2CppObject *pIVar6;
  System_Action_o *disposeAction;
  
  if ((DAT_04567045 & 1) == 0) {
    FUN_01bab630(&System_Action<Action<LevelPlayAdInfo>>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdError>_TypeInfo);
    FUN_01bab630(&System_Action<LevelPlayAdInfo>_TypeInfo);
    FUN_01bab630(&System_Action<Action<LevelPlayAdError>>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_UniRx_DisposableExtensions_AddTo<IDisposable>__);
    FUN_01bab630(&UniRx_Disposable_TypeInfo);
    FUN_01bab630(&Method_KKHJHHIPPOO_AEHOAEDLPNI__);
    FUN_01bab630(&Method_KKHJHHIPPOO_BAMPIGNOEJN__);
    FUN_01bab630(&Method_KKHJHHIPPOO_BIDAABHABNN__);
    FUN_01bab630(&Method_KKHJHHIPPOO_DACCEKBJBBC__);
    FUN_01bab630(&Method_KKHJHHIPPOO_DKNJPDBJIAO__);
    FUN_01bab630(&Method_KKHJHHIPPOO_HHHKFAKNKOL__);
    FUN_01bab630(&Method_KKHJHHIPPOO_HKIMMEPOCEB__);
    FUN_01bab630(&Method_KKHJHHIPPOO_PDHBBHGIIPH__);
    FUN_01bab630(&Method_KKHJHHIPPOO_PMENOONHJCM__);
    FUN_01bab630(&Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdError>__);
    FUN_01bab630(&Method_UniRx_ObservableExtensions_Subscribe<LevelPlayAdInfo>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayAdError>__);
    FUN_01bab630(&Method_UniRx_Observable_FromEvent<LevelPlayAdInfo>__);
    FUN_01bab630(&UniRx_Observable_TypeInfo);
    FUN_01bab630(&Method_PNFHEJAEPHI_DOKBCLHIPEA__);
    FUN_01bab630(&Method_PNFHEJAEPHI_LAJOGIIJIEO__);
    FUN_01bab630(&Method_PNFHEJAEPHI_LNLEFANOIDH__);
    FUN_01bab630(&Method_PNFHEJAEPHI_PCALMGLCBKG__);
    DAT_04567045 = 1;
  }
  PNFHEJAEPHI___ctor((PNFHEJAEPHI_o *)__this,(MethodInfo *)0x0);
  __this_00 = (Unity_Services_LevelPlay_LevelPlayInterstitialAd_o *)
              thunk_FUN_01bda818(Unity_Services_LevelPlay_LevelPlayInterstitialAd_TypeInfo);
  Unity_Services_LevelPlay_LevelPlayInterstitialAd___ctor
            (__this_00,FKMJHKGHKFF,(Unity_Services_LevelPlay_LevelPlayInterstitialAd_Config_o *)0x0,
             (MethodInfo *)0x0);
  ppUVar1 = &(__this->fields).COHIBLKOLHH;
  *ppUVar1 = (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)__this_00;
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


// ===== private void AEHOAEDLPNI(Action<LevelPlayAdError> JLPMKKKMANE)  [RVA 0x323955C]
// KKHJHHIPPOO$$AEHOAEDLPNI @ RVA 0x323955C

void KKHJHHIPPOO__AEHOAEDLPNI
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdError__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_04567046 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567046 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 3);
        goto LAB_033395ec;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,3);
LAB_033395ec:
                    /* WARNING: Could not recover jumptable at 0x03339600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}


// ===== private void PDHBBHGIIPH(Action<LevelPlayAdInfo> JLPMKKKMANE)  [RVA 0x3239608]
// KKHJHHIPPOO$$PDHBBHGIIPH @ RVA 0x3239608

void KKHJHHIPPOO__PDHBBHGIIPH
               (KKHJHHIPPOO_o *__this,System_Action_LevelPlayAdInfo__o *JLPMKKKMANE,
               MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *pUVar6;
  
  if ((DAT_04567047 & 1) == 0) {
    FUN_01bab630(&Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo);
    DAT_04567047 = 1;
  }
  pUVar6 = (__this->fields).COHIBLKOLHH;
  if (pUVar6 == (Unity_Services_LevelPlay_ILevelPlayInterstitialAd_o *)0x0) {
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
          (Il2CppClass *)Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo) {
        pVVar2 = pUVar3->vtable + (*piVar5 + 1);
        goto LAB_03339698;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pUVar6,Unity_Services_LevelPlay_ILevelPlayInterstitialAd_TypeInfo,1);
LAB_03339698:
                    /* WARNING: Could not recover jumptable at 0x033396ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,JLPMKKKMANE,pVVar2->method);
  return;
}

