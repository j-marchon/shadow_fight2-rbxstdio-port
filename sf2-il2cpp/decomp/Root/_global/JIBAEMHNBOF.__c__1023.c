// TypeDefIndex 1023
// Namespace: 
// [Serializable]
// private sealed class JIBAEMHNBOF.<>c
// Fields:
//   public static readonly JIBAEMHNBOF.<>c <>9; // 0x0
//   public static Func<NCCFNKMICGK, bool> <>9__15_0; // 0x8
//   public static Action<NCCFNKMICGK> <>9__15_1; // 0x10
//   public static Func<NCCFNKMICGK, int> <>9__15_3; // 0x18

// ===== internal bool JGGMNIALIBF(NCCFNKMICGK x)  [RVA 0x30CC810]
// JIBAEMHNBOF.<>c$$JGGMNIALIBF @ RVA 0x30CC810

bool JIBAEMHNBOF_<>c__JGGMNIALIBF(JIBAEMHNBOF___c_o *__this,NCCFNKMICGK_o *x,MethodInfo *method)

{
  ushort uVar1;
  undefined1 uVar2;
  VirtualInvokeData *pVVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045662df & 1) == 0) {
    __this = (JIBAEMHNBOF___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662df = 1;
  }
  if (x == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pNVar4 = x->klass;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar3 = pNVar4->vtable + (*piVar6 + 3);
        goto LAB_031cc898;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(x,NCCFNKMICGK_TypeInfo,3);
LAB_031cc898:
                    /* WARNING: Could not recover jumptable at 0x031cc8a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*pVVar3->methodPtr)(x,pVVar3->method);
  return (bool)uVar2;
}


// ===== internal int LEFEHLFGNHL(NCCFNKMICGK x)  [RVA 0x30CC8B0]
// JIBAEMHNBOF.<>c$$LEFEHLFGNHL @ RVA 0x30CC8B0

int32_t JIBAEMHNBOF_<>c__LEFEHLFGNHL(JIBAEMHNBOF___c_o *__this,NCCFNKMICGK_o *x,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045662e0 & 1) == 0) {
    __this = (JIBAEMHNBOF___c_o *)FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662e0 = 1;
  }
  if (x != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = x->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar2 = pNVar4->vtable + (*piVar6 + 1);
          goto LAB_031cc938;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(x,NCCFNKMICGK_TypeInfo,1);
LAB_031cc938:
    lVar3 = (*pVVar2->methodPtr)(x,pVVar2->method);
    __this = (JIBAEMHNBOF___c_o *)0x0;
    if (lVar3 != 0) {
      return *(int32_t *)(lVar3 + 0x2c);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== private static void .cctor()  [RVA 0x30CC95C]
// JIBAEMHNBOF.<>c$$.cctor @ RVA 0x30CC95C

void JIBAEMHNBOF_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045662e1 & 1) == 0) {
    FUN_01bab630(&JIBAEMHNBOF_<>c_TypeInfo);
    DAT_045662e1 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(JIBAEMHNBOF_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  JIBAEMHNBOF_<>c_TypeInfo->static_fields->__9 = (JIBAEMHNBOF___c_o *)__this;
  thunk_FUN_01c20e04(JIBAEMHNBOF_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== public void .ctor()  [RVA 0x30CC9C4]
// JIBAEMHNBOF.<>c$$.ctor @ RVA 0x30CC9C4

void JIBAEMHNBOF_<>c___ctor(JIBAEMHNBOF___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal void OFGONBICNNL(NCCFNKMICGK x)  [RVA 0x30CC9CC]
// JIBAEMHNBOF.<>c$$OFGONBICNNL @ RVA 0x30CC9CC

void JIBAEMHNBOF_<>c__OFGONBICNNL(JIBAEMHNBOF___c_o *__this,NCCFNKMICGK_o *x,MethodInfo *method)

{
  JIBAEMHNBOF__BCLJHFNMAID(x,(MethodInfo *)0x0);
  return;
}

