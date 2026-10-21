// TypeDefIndex 2158
// Namespace: 
// [Serializable]
// private sealed class NOMBKAHPOHM.<>c
// Fields:
//   public static readonly NOMBKAHPOHM.<>c <>9; // 0x0
//   public static Predicate<NCCFNKMICGK> <>9__14_0; // 0x8
//   public static Predicate<NCCFNKMICGK> <>9__14_1; // 0x10
//   public static Predicate<NCCFNKMICGK> <>9__14_2; // 0x18
//   public static Predicate<NCCFNKMICGK> <>9__14_3; // 0x20
//   public static Predicate<NCCFNKMICGK> <>9__14_4; // 0x28
//   public static Predicate<NCCFNKMICGK> <>9__14_5; // 0x30

// ===== public void .ctor()  [RVA 0x32DA85C]
// NOMBKAHPOHM.<>c$$.ctor @ RVA 0x32DA85C

void NOMBKAHPOHM_<>c___ctor(NOMBKAHPOHM___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x32DA864]
// NOMBKAHPOHM.<>c$$.cctor @ RVA 0x32DA864

void NOMBKAHPOHM_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045675b2 & 1) == 0) {
    FUN_01bab630(&NOMBKAHPOHM_<>c_TypeInfo);
    DAT_045675b2 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NOMBKAHPOHM_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  NOMBKAHPOHM_<>c_TypeInfo->static_fields->__9 = (NOMBKAHPOHM___c_o *)__this;
  thunk_FUN_01c20e04(NOMBKAHPOHM_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool KGIJBABIHFD(NCCFNKMICGK offer)  [RVA 0x32DA8CC]
// NOMBKAHPOHM.<>c$$KGIJBABIHFD @ RVA 0x32DA8CC

bool NOMBKAHPOHM_<>c__KGIJBABIHFD(NOMBKAHPOHM___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045675b3 & 1) == 0) {
    __this = (NOMBKAHPOHM___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b3 = 1;
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
          goto LAB_033da954;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_033da954:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (NOMBKAHPOHM___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool MPFPAMFEAKC(NCCFNKMICGK offer)  [RVA 0x32DA980]
// NOMBKAHPOHM.<>c$$MPFPAMFEAKC @ RVA 0x32DA980

bool NOMBKAHPOHM_<>c__MPFPAMFEAKC(NOMBKAHPOHM___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045675b4 & 1) == 0) {
    __this = (NOMBKAHPOHM___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b4 = 1;
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
          goto LAB_033daa08;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_033daa08:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (NOMBKAHPOHM___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool ANIDCFPKNHP(NCCFNKMICGK offer)  [RVA 0x32DAA34]
// NOMBKAHPOHM.<>c$$ANIDCFPKNHP @ RVA 0x32DAA34

bool NOMBKAHPOHM_<>c__ANIDCFPKNHP(NOMBKAHPOHM___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045675b5 & 1) == 0) {
    __this = (NOMBKAHPOHM___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b5 = 1;
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
          goto LAB_033daabc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_033daabc:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (NOMBKAHPOHM___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool GHNCMJNEIDO(NCCFNKMICGK offer)  [RVA 0x32DAAE8]
// NOMBKAHPOHM.<>c$$GHNCMJNEIDO @ RVA 0x32DAAE8

bool NOMBKAHPOHM_<>c__GHNCMJNEIDO(NOMBKAHPOHM___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045675b6 & 1) == 0) {
    __this = (NOMBKAHPOHM___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b6 = 1;
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
          goto LAB_033dab70;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_033dab70:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (NOMBKAHPOHM___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool FCCPKCPEECD(NCCFNKMICGK offer)  [RVA 0x32DAB9C]
// NOMBKAHPOHM.<>c$$FCCPKCPEECD @ RVA 0x32DAB9C

bool NOMBKAHPOHM_<>c__FCCPKCPEECD(NOMBKAHPOHM___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045675b7 & 1) == 0) {
    __this = (NOMBKAHPOHM___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b7 = 1;
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
          goto LAB_033dac24;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_033dac24:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (NOMBKAHPOHM___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal bool BNAFPHDJKBA(NCCFNKMICGK offer)  [RVA 0x32DAC50]
// NOMBKAHPOHM.<>c$$BNAFPHDJKBA @ RVA 0x32DAC50

bool NOMBKAHPOHM_<>c__BNAFPHDJKBA(NOMBKAHPOHM___c_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045675b8 & 1) == 0) {
    __this = (NOMBKAHPOHM___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045675b8 = 1;
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
          goto LAB_033dacd8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,1);
LAB_033dacd8:
    lVar3 = (*pVVar2->methodPtr)(offer,pVVar2->method);
    __this = (NOMBKAHPOHM___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int *)(lVar3 + 0x18) == 3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

