// LJNJDFEAIOH$$FLHCPMBEGMD @ RVA 0x30396C0

void LJNJDFEAIOH__FLHCPMBEGMD(int32_t OICBCFGIIOA,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  VirtualInvokeData *pVVar7;
  AKOMJPINHEN_o *__this;
  Il2CppClass *pIVar8;
  long lVar9;
  ulong uVar10;
  int32_t *piVar11;
  undefined8 uVar12;
  int32_t local_24;
  
  local_24 = OICBCFGIIOA;
  if ((DAT_04565d68 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_16983);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_16982);
    DAT_04565d68 = 1;
  }
  pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar5 = Method_System_Array_Empty<string>__;
  if (OICBCFGIIOA < 1) {
    lVar9 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
    if (lVar9 == 0) {
      FUN_01b8167c(Method_System_Array_Empty<string>__);
      lVar9 = *(long *)(lVar5 + 0x38);
    }
    lVar9 = *(long *)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01b81620();
    }
    if (*(int *)(lVar9 + 0xe0) == 0) {
      thunk_FUN_01ba7564();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01b81620();
    }
    uVar3 = StringLiteral_16982;
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_031399b4;
    pIVar8 = pIVar4->klass;
    uVar12 = **(undefined8 **)(lVar5 + 0xb8);
    uVar2._0_1_ = (pIVar8->_2).rank;
    uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar2;
    if (uVar10 != 0) {
      piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar7 = pIVar8->vtable + (*piVar11 + 0xc);
          goto LAB_031398f8;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031398f8:
    pSVar6 = (System_String_o *)(*pVVar7->methodPtr)(pIVar4,uVar3,uVar12,pVVar7->method);
    JJPNLEPEAFM__OOOIOMHJONP
              (StringLiteral_17850,pSVar6,StringLiteral_9679,StringLiteral_1,
               (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,
               (MethodInfo *)0x0);
  }
  else {
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    pSVar6 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    if (lVar5 == 0) goto LAB_031399b4;
    if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    *(System_String_o **)(lVar5 + 0x20) = pSVar6;
    thunk_FUN_01c20e04();
    uVar3 = StringLiteral_16983;
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_031399b4;
    pIVar8 = pIVar4->klass;
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar7 = pIVar8->vtable + (*piVar11 + 0xc);
          goto LAB_031398cc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_031398cc:
    pSVar6 = (System_String_o *)(*pVVar7->methodPtr)(pIVar4,uVar3,lVar5,pVVar7->method);
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
  if (__this != (AKOMJPINHEN_o *)0x0) {
    AKOMJPINHEN__GJAEDMLMJIK(__this,pSVar6,2,true,(MethodInfo *)0x0);
    return;
  }
LAB_031399b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

