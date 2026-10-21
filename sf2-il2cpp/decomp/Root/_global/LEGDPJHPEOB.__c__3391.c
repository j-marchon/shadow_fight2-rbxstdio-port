// TypeDefIndex 3391
// Namespace: 
// [Serializable]
// private sealed class LEGDPJHPEOB.<>c
// Fields:
//   public static readonly LEGDPJHPEOB.<>c <>9; // 0x0
//   public static Func<NCCFNKMICGK, bool> <>9__74_0; // 0x8
//   public static Func<NCCFNKMICGK, bool> <>9__74_1; // 0x10
//   public static Func<NCCFNKMICGK, bool> <>9__74_2; // 0x18
//   public static Func<NCCFNKMICGK, bool> <>9__74_3; // 0x20
//   public static Func<NCCFNKMICGK, bool> <>9__74_4; // 0x28
//   public static Func<NCCFNKMICGK, bool> <>9__74_5; // 0x30

// ===== public void .ctor()  [RVA 0x35522B0]
// LEGDPJHPEOB.<>c$$.ctor @ RVA 0x35522B0

void LEGDPJHPEOB_<>c___ctor(LEGDPJHPEOB___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool BKJJDOGIFBJ(NCCFNKMICGK offer)  [RVA 0x35522B8]
// LEGDPJHPEOB.<>c$$BKJJDOGIFBJ @ RVA 0x35522B8

bool LEGDPJHPEOB_<>c__BKJJDOGIFBJ(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b40 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b40 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_03652340;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_03652340:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool AMODLCCMEFG(NCCFNKMICGK offer)  [RVA 0x355236C]
// LEGDPJHPEOB.<>c$$AMODLCCMEFG @ RVA 0x355236C

bool LEGDPJHPEOB_<>c__AMODLCCMEFG(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b41 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b41 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_036523f4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_036523f4:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool JKLLEJDHGFE(NCCFNKMICGK offer)  [RVA 0x3552420]
// LEGDPJHPEOB.<>c$$JKLLEJDHGFE @ RVA 0x3552420

bool LEGDPJHPEOB_<>c__JKLLEJDHGFE(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b42 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b42 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_036524a8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_036524a8:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x35524D4]
// LEGDPJHPEOB.<>c$$.cctor @ RVA 0x35524D4

void LEGDPJHPEOB_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04568b43 & 1) == 0) {
    FUN_01bab630(&LEGDPJHPEOB_<>c_TypeInfo);
    DAT_04568b43 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(LEGDPJHPEOB_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  LEGDPJHPEOB_<>c_TypeInfo->static_fields->__9 = (LEGDPJHPEOB___c_o *)__this;
  thunk_FUN_01c20e04(LEGDPJHPEOB_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool DNJGEOKICDG(NCCFNKMICGK offer)  [RVA 0x355253C]
// LEGDPJHPEOB.<>c$$DNJGEOKICDG @ RVA 0x355253C

bool LEGDPJHPEOB_<>c__DNJGEOKICDG(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b44 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b44 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_036525c4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_036525c4:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool CMBHLNNACAD(NCCFNKMICGK offer)  [RVA 0x35525F0]
// LEGDPJHPEOB.<>c$$CMBHLNNACAD @ RVA 0x35525F0

bool LEGDPJHPEOB_<>c__CMBHLNNACAD(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b45 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b45 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_03652678;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_03652678:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool MBNFGEODNLP(NCCFNKMICGK offer)  [RVA 0x35526A4]
// LEGDPJHPEOB.<>c$$MBNFGEODNLP @ RVA 0x35526A4

bool LEGDPJHPEOB_<>c__MBNFGEODNLP(LEGDPJHPEOB___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568b46 & 1) == 0) {
    __this = (LEGDPJHPEOB___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568b46 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_0365272c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_0365272c:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (LEGDPJHPEOB___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

