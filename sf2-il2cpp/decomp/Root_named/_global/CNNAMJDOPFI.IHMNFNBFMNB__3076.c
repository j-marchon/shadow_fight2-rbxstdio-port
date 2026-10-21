// TypeDefIndex 3076
// Namespace: 
// [CompilerGenerated]
// private sealed class CNNAMJDOPFI.IHMNFNBFMNB
// Fields:
//   public IObserver<string[]> observer; // 0x10
//   public CNNAMJDOPFI <>4__this; // 0x18

// ===== internal void GFCOMIAEKPG(GPBHNPOEFDO response)  [RVA 0x34C5C58]
// CNNAMJDOPFI.IHMNFNBFMNB$$GFCOMIAEKPG @ RVA 0x34C5C58

void CNNAMJDOPFI_IHMNFNBFMNB__GFCOMIAEKPG
               (CNNAMJDOPFI_IHMNFNBFMNB_o *__this,GPBHNPOEFDO_o *response,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  Il2CppObject *pIVar4;
  bool bVar5;
  VirtualInvokeData *pVVar6;
  long lVar7;
  CNNAMJDOPFI_o *pCVar8;
  HMKGDNALGCC_c *pHVar9;
  long lVar10;
  System_IObserver_string____c *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  HMKGDNALGCC_o *pHVar14;
  System_IObserver_string____o *pSVar15;
  Il2CppObject *local_28;
  
  if ((DAT_04568635 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&Method_CNNAMJDOPFI_GBKADKFAHBA<string[]>__);
    FUN_01bab630(&HMKGDNALGCC_TypeInfo);
    FUN_01bab630(&System_IObserver<string[]>_TypeInfo);
    FUN_01bab630(&StringLiteral_6807/*"GetMirrorsRequestComplete: error when getting mirrors from server."*/);
    FUN_01bab630(&StringLiteral_6808/*"GetMirrorsRequestComplete: mirrors selected from server."*/);
    DAT_04568635 = 1;
  }
  local_28 = (Il2CppObject *)0x0;
  if (response != (GPBHNPOEFDO_o *)0x0) {
    bVar5 = System_String__IsNullOrWhiteSpace((response->fields).KOANCCDDBDA,(MethodInfo *)0x0);
    if ((bVar5) ||
       (bVar5 = CNNAMJDOPFI__GBKADKFAHBA<object>
                          ((response->fields).KOANCCDDBDA,&local_28,
                           Method_CNNAMJDOPFI_GBKADKFAHBA<string[]>__), !bVar5)) {
      lVar7 = Method_System_Array_Empty<string>__;
      lVar10 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
      if (lVar10 == 0) {
        FUN_01b8167c(Method_System_Array_Empty<string>__);
        lVar10 = *(long *)(lVar7 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_01b81620();
      }
      if (*(int *)(lVar10 + 0xe0) == 0) {
        thunk_FUN_01ba7564();
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_01b81620();
      }
      local_28 = (Il2CppObject *)**(undefined8 **)(lVar7 + 0xb8);
      KFJJHMDIFIG__ONCJPMNKDIM
                ((Il2CppObject *)(__this->fields).__4__this,StringLiteral_6807/*"GetMirrorsRequestComplete: error when getting mirrors from server."*/,(MethodInfo *)0x0);
    }
    else {
      KFJJHMDIFIG__DHAAGKPHJLA
                ((Il2CppObject *)(__this->fields).__4__this,StringLiteral_6808/*"GetMirrorsRequestComplete: mirrors selected from server."*/,(MethodInfo *)0x0);
      pIVar4 = local_28;
      pCVar8 = (__this->fields).__4__this;
      if ((pCVar8 == (CNNAMJDOPFI_o *)0x0) ||
         (pHVar14 = (pCVar8->fields).CMJNDHHGCBI, pHVar14 == (HMKGDNALGCC_o *)0x0))
      goto LAB_035c5eec;
      pHVar9 = pHVar14->klass;
      uVar1._0_1_ = (pHVar9->_2).rank;
      uVar1._1_1_ = (pHVar9->_2).minimumAlignment;
      uVar12 = (ulong)uVar1;
      if (uVar12 != 0) {
        piVar13 = &((pHVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)HMKGDNALGCC_TypeInfo) {
            pVVar6 = pHVar9->vtable + (*piVar13 + 2);
            goto LAB_035c5df8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pHVar14,HMKGDNALGCC_TypeInfo,2);
LAB_035c5df8:
      (*pVVar6->methodPtr)(pHVar14,pIVar4,pVVar6->method);
    }
    pIVar4 = local_28;
    pSVar15 = (__this->fields).observer;
    if (pSVar15 != (System_IObserver_string____o *)0x0) {
      pSVar11 = pSVar15->klass;
      uVar2._0_1_ = (pSVar11->_2).rank;
      uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar12 = (ulong)uVar2;
      if (uVar12 != 0) {
        piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
              (Il2CppClass *)System_IObserver<string[]>_TypeInfo) {
            pVVar6 = pSVar11->vtable + *piVar13;
            goto LAB_035c5e68;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar15,System_IObserver<string[]>_TypeInfo,0);
LAB_035c5e68:
      (*pVVar6->methodPtr)(pSVar15,pIVar4,pVVar6->method);
      pSVar15 = (__this->fields).observer;
      if (pSVar15 != (System_IObserver_string____o *)0x0) {
        pSVar11 = pSVar15->klass;
        uVar3._0_1_ = (pSVar11->_2).rank;
        uVar3._1_1_ = (pSVar11->_2).minimumAlignment;
        uVar12 = (ulong)uVar3;
        if (uVar12 != 0) {
          piVar13 = &((pSVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                (Il2CppClass *)System_IObserver<string[]>_TypeInfo) {
              pVVar6 = pSVar11->vtable + (*piVar13 + 2);
              goto LAB_035c5ed0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pSVar15,System_IObserver<string[]>_TypeInfo,2);
LAB_035c5ed0:
        (*pVVar6->methodPtr)(pSVar15,pVVar6->method);
        return;
      }
    }
  }
LAB_035c5eec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34C5C50]
// CNNAMJDOPFI.IHMNFNBFMNB$$.ctor @ RVA 0x34C5C50

void CNNAMJDOPFI_IHMNFNBFMNB___ctor(CNNAMJDOPFI_IHMNFNBFMNB_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

