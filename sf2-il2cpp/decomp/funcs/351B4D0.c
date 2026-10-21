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
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_18320);
    FUN_01bab630(&StringLiteral_12068);
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
    pSVar3 = StringLiteral_12068;
    if (bVar2) {
      str1 = string_TypeInfo->static_fields->Empty;
    }
    else {
      str1 = System_String__Concat(StringLiteral_18320,*ppSVar9,StringLiteral_802,(MethodInfo *)0x0)
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

