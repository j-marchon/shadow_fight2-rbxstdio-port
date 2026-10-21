// TypeDefIndex 1387
// Namespace: 
// public static class IBILBKNKKDG
// Fields:
//   private static bool ECCPBJGMNPE; // 0x0
//   private static EOJBGBDLBKJ IOPFMDCMMLD; // 0x8
//   private static NHOILKKCIMI BAMNHCAKCIG; // 0x10

// ===== public static void DHAAGKPHJLA(string IHNKCJHDDKD)  [RVA 0x3173648]
// IBILBKNKKDG$$DHAAGKPHJLA @ RVA 0x3173648

void IBILBKNKKDG__DHAAGKPHJLA(System_String_o *IHNKCJHDDKD,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  EOJBGBDLBKJ_c *pEVar3;
  ulong uVar4;
  int32_t *piVar5;
  EOJBGBDLBKJ_o *pEVar6;
  
  if ((DAT_04566940 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566940 = 1;
  }
  pEVar6 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  if (pEVar6 == (EOJBGBDLBKJ_o *)0x0) {
    return;
  }
  pEVar3 = pEVar6->klass;
  uVar1._0_1_ = (pEVar3->_2).rank;
  uVar1._1_1_ = (pEVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pEVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar2 = pEVar3->vtable + (*piVar5 + 5);
        goto LAB_032736fc;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pEVar6,EOJBGBDLBKJ_TypeInfo,5);
LAB_032736fc:
                    /* WARNING: Could not recover jumptable at 0x03273710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pEVar6,IHNKCJHDDKD,pVVar2->method);
  return;
}


// ===== public static void CLNAOMIIBLH()  [RVA 0x3173714]
// IBILBKNKKDG$$CLNAOMIIBLH @ RVA 0x3173714

void IBILBKNKKDG__CLNAOMIIBLH(MethodInfo *method)

{
  ushort uVar1;
  IBILBKNKKDG_StaticFields *pIVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  
  if ((DAT_04566941 & 1) == 0) {
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_04566941 = 1;
  }
  pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  pEVar7 = pIVar2->IOPFMDCMMLD;
  if (pEVar7 != (EOJBGBDLBKJ_o *)0x0) {
    pEVar4 = pEVar7->klass;
    uVar1._0_1_ = (pEVar4->_2).rank;
    uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar3 = pEVar4->vtable + *piVar6;
          goto LAB_032737b4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,System_IDisposable_TypeInfo,0);
LAB_032737b4:
    (*pVVar3->methodPtr)(pEVar7,pVVar3->method);
    pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  }
  pIVar2->IOPFMDCMMLD = (EOJBGBDLBKJ_o *)0x0;
  thunk_FUN_01c20e04(&pIVar2->IOPFMDCMMLD,0);
  pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  if (pIVar2->BAMNHCAKCIG != (NHOILKKCIMI_o *)0x0) {
    NHOILKKCIMI__Dispose(pIVar2->BAMNHCAKCIG,(MethodInfo *)0x0);
    pIVar2 = IBILBKNKKDG_TypeInfo->static_fields;
  }
  pIVar2->BAMNHCAKCIG = (NHOILKKCIMI_o *)0x0;
  thunk_FUN_01c20e04(&pIVar2->BAMNHCAKCIG,0);
  return;
}


// ===== public static void EHAJCBIIBKB(string NFDKMBAGHPD)  [RVA 0x317380C]
// IBILBKNKKDG$$EHAJCBIIBKB @ RVA 0x317380C

void IBILBKNKKDG__EHAJCBIIBKB(System_String_o *NFDKMBAGHPD,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  
  if ((DAT_04566942 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566942 = 1;
  }
  bVar2 = System_String__IsNullOrWhiteSpace(NFDKMBAGHPD,(MethodInfo *)0x0);
  if ((bVar2) ||
     (pEVar7 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD, pEVar7 == (EOJBGBDLBKJ_o *)0x0)) {
    return;
  }
  pEVar4 = pEVar7->klass;
  uVar1._0_1_ = (pEVar4->_2).rank;
  uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar3 = pEVar4->vtable + (*piVar6 + 2);
        goto LAB_032738d0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,EOJBGBDLBKJ_TypeInfo,2);
LAB_032738d0:
                    /* WARNING: Could not recover jumptable at 0x032738e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pEVar7,NFDKMBAGHPD,pVVar3->method);
  return;
}


// ===== public static void ACNFBPJGBDP(CFGLKHFFEKA CEHOJOFLMFF)  [RVA 0x31738E8]
// IBILBKNKKDG$$ACNFBPJGBDP @ RVA 0x31738E8

void IBILBKNKKDG__ACNFBPJGBDP(CFGLKHFFEKA_o *CEHOJOFLMFF,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  undefined1 auVar8 [16];
  
  auVar8._8_8_ = method;
  auVar8._0_8_ = CEHOJOFLMFF;
  if ((DAT_04566943 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    auVar8 = FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566943 = 1;
  }
  pEVar7 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  if (pEVar7 == (EOJBGBDLBKJ_o *)0x0) {
    return;
  }
  if (CEHOJOFLMFF == (CFGLKHFFEKA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(auVar8._0_8_,auVar8._8_8_);
  }
  uVar2 = (*(CEHOJOFLMFF->klass->vtable)._3_ToString.methodPtr)
                    (CEHOJOFLMFF,(CEHOJOFLMFF->klass->vtable)._3_ToString.method);
  pEVar4 = pEVar7->klass;
  uVar1._0_1_ = (pEVar4->_2).rank;
  uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar3 = pEVar4->vtable + (*piVar6 + 7);
        goto LAB_032739b4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,EOJBGBDLBKJ_TypeInfo,7);
LAB_032739b4:
                    /* WARNING: Could not recover jumptable at 0x032739c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pEVar7,uVar2,pVVar3->method);
  return;
}


// ===== public static void GIMAJOGGBHM()  [RVA 0x31739D0]
// IBILBKNKKDG$$GIMAJOGGBHM @ RVA 0x31739D0

void IBILBKNKKDG__GIMAJOGGBHM(MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  EOJBGBDLBKJ_o *pEVar4;
  VirtualInvokeData *pVVar5;
  NHOILKKCIMI_o *pNVar6;
  NHOILKKCIMI_o **ppNVar7;
  EOJBGBDLBKJ_o **ppEVar8;
  EOJBGBDLBKJ_c *pEVar9;
  ulong uVar10;
  int32_t *piVar11;
  EOJBGBDLBKJ_o *pEVar12;
  
  if ((DAT_04566944 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    method = (MethodInfo *)FUN_01bab630(&NHOILKKCIMI_TypeInfo);
    DAT_04566944 = 1;
  }
  if (IBILBKNKKDG_TypeInfo->static_fields->ECCPBJGMNPE != false) {
    return;
  }
  IBILBKNKKDG_TypeInfo->static_fields->ECCPBJGMNPE = true;
  pEVar4 = IBILBKNKKDG__ADLLFHPKFIB(method);
  ppEVar8 = &IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  *ppEVar8 = pEVar4;
  thunk_FUN_01c20e04(ppEVar8,pEVar4);
  pEVar12 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
  pEVar4 = (EOJBGBDLBKJ_o *)0x0;
  if (pEVar12 != (EOJBGBDLBKJ_o *)0x0) {
    pEVar9 = pEVar12->klass;
    uVar1._0_1_ = (pEVar9->_2).rank;
    uVar1._1_1_ = (pEVar9->_2).minimumAlignment;
    uVar10 = (ulong)uVar1;
    if (uVar10 != 0) {
      piVar11 = &((pEVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
            (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
          pVVar5 = pEVar9->vtable + *piVar11;
          goto LAB_03273abc;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar12,EOJBGBDLBKJ_TypeInfo,0);
LAB_03273abc:
    (*pVVar5->methodPtr)(pEVar12,pVVar5->method);
    pEVar12 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
    pEVar4 = (EOJBGBDLBKJ_o *)0x0;
    if (pEVar12 != (EOJBGBDLBKJ_o *)0x0) {
      pEVar9 = pEVar12->klass;
      uVar2._0_1_ = (pEVar9->_2).rank;
      uVar2._1_1_ = (pEVar9->_2).minimumAlignment;
      uVar10 = (ulong)uVar2;
      if (uVar10 != 0) {
        piVar11 = &((pEVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
            pVVar5 = pEVar9->vtable + (*piVar11 + 6);
            goto LAB_03273b28;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar12,EOJBGBDLBKJ_TypeInfo,6);
LAB_03273b28:
      (*pVVar5->methodPtr)(pEVar12,pVVar5->method);
      pEVar12 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
      pEVar4 = (EOJBGBDLBKJ_o *)0x0;
      if (pEVar12 != (EOJBGBDLBKJ_o *)0x0) {
        pEVar9 = pEVar12->klass;
        uVar3._0_1_ = (pEVar9->_2).rank;
        uVar3._1_1_ = (pEVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar3;
        if (uVar10 != 0) {
          piVar11 = &((pEVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
              pVVar5 = pEVar9->vtable + (*piVar11 + 3);
              goto LAB_03273b94;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pEVar12,EOJBGBDLBKJ_TypeInfo,3);
LAB_03273b94:
        uVar10 = (*pVVar5->methodPtr)(pEVar12,pVVar5->method);
        if ((uVar10 & 1) == 0) {
          return;
        }
        pEVar4 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD;
      }
    }
  }
  pNVar6 = (NHOILKKCIMI_o *)thunk_FUN_01bda818(NHOILKKCIMI_TypeInfo);
  NHOILKKCIMI___ctor(pNVar6,pEVar4,10,0x7fffffff,(MethodInfo *)0x0);
  ppNVar7 = &IBILBKNKKDG_TypeInfo->static_fields->BAMNHCAKCIG;
  *ppNVar7 = pNVar6;
  thunk_FUN_01c20e04(ppNVar7,pNVar6);
  pNVar6 = IBILBKNKKDG_TypeInfo->static_fields->BAMNHCAKCIG;
  if (pNVar6 == (NHOILKKCIMI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  NHOILKKCIMI__GIMAJOGGBHM(pNVar6,(MethodInfo *)0x0);
  return;
}


// ===== private static EOJBGBDLBKJ ADLLFHPKFIB()  [RVA 0x3173C10]
// IBILBKNKKDG$$ADLLFHPKFIB @ RVA 0x3173C10

EOJBGBDLBKJ_o * IBILBKNKKDG__ADLLFHPKFIB(MethodInfo *method)

{
  int32_t iVar1;
  CPHBJEDCAEO_o *LPBPGPJICKO;
  FJNIPMODEPO_o *__this;
  EOJBGBDLBKJ_o *__this_00;
  
  if ((DAT_04566945 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&FJNIPMODEPO_TypeInfo);
    FUN_01bab630(&IKFKOKJKJNN_TypeInfo);
    DAT_04566945 = 1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar1 != 8) {
    if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar1 != 0xb) {
      __this_00 = (EOJBGBDLBKJ_o *)thunk_FUN_01bda818(IKFKOKJKJNN_TypeInfo);
      IKFKOKJKJNN___ctor((IKFKOKJKJNN_o *)__this_00,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  LPBPGPJICKO = LLDOMGIEPNE__AIHNLLGNBLC((MethodInfo *)0x0);
  __this = (FJNIPMODEPO_o *)thunk_FUN_01bda818(FJNIPMODEPO_TypeInfo);
  FJNIPMODEPO___ctor(__this,LPBPGPJICKO,(MethodInfo *)0x0);
  return (EOJBGBDLBKJ_o *)__this;
}


// ===== public static void HBFCADLMGIN(string MPMJDINCJNH)  [RVA 0x3173CF8]
// IBILBKNKKDG$$HBFCADLMGIN @ RVA 0x3173CF8

void IBILBKNKKDG__HBFCADLMGIN(System_String_o *MPMJDINCJNH,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  EOJBGBDLBKJ_c *pEVar4;
  ulong uVar5;
  int32_t *piVar6;
  EOJBGBDLBKJ_o *pEVar7;
  
  if ((DAT_04566946 & 1) == 0) {
    FUN_01bab630(&EOJBGBDLBKJ_TypeInfo);
    FUN_01bab630(&IBILBKNKKDG_TypeInfo);
    DAT_04566946 = 1;
  }
  bVar2 = System_String__IsNullOrWhiteSpace(MPMJDINCJNH,(MethodInfo *)0x0);
  if ((bVar2) ||
     (pEVar7 = IBILBKNKKDG_TypeInfo->static_fields->IOPFMDCMMLD, pEVar7 == (EOJBGBDLBKJ_o *)0x0)) {
    return;
  }
  pEVar4 = pEVar7->klass;
  uVar1._0_1_ = (pEVar4->_2).rank;
  uVar1._1_1_ = (pEVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pEVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)EOJBGBDLBKJ_TypeInfo) {
        pVVar3 = pEVar4->vtable + (*piVar6 + 1);
        goto LAB_03273dbc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pEVar7,EOJBGBDLBKJ_TypeInfo,1);
LAB_03273dbc:
                    /* WARNING: Could not recover jumptable at 0x03273dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar3->methodPtr)(pEVar7,MPMJDINCJNH,pVVar3->method);
  return;
}

