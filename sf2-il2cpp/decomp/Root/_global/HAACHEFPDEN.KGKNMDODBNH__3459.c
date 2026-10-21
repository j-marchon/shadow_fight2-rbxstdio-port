// TypeDefIndex 3459
// Namespace: 
// [CompilerGenerated]
// private sealed class HAACHEFPDEN.KGKNMDODBNH
// Fields:
//   public string offerNameSimplified; // 0x10

// ===== internal bool MDFKDJPLEEF(NCCFNKMICGK x)  [RVA 0x3569280]
// HAACHEFPDEN.KGKNMDODBNH$$MDFKDJPLEEF @ RVA 0x3569280

bool HAACHEFPDEN_KGKNMDODBNH__MDFKDJPLEEF
               (HAACHEFPDEN_KGKNMDODBNH_o *__this,NCCFNKMICGK_o *x,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *a;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04568c14 & 1) == 0) {
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_04568c14 = 1;
  }
  if (x == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
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
        pVVar3 = pNVar4->vtable + (*piVar6 + 2);
        goto LAB_0366930c;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(x,NCCFNKMICGK_TypeInfo,2);
LAB_0366930c:
  a = (System_String_o *)(*pVVar3->methodPtr)(x,pVVar3->method);
  bVar2 = System_String__op_Equality(a,(__this->fields).offerNameSimplified,(MethodInfo *)0x0);
  return bVar2;
}


// ===== public void .ctor()  [RVA 0x3569278]
// HAACHEFPDEN.KGKNMDODBNH$$.ctor @ RVA 0x3569278

void HAACHEFPDEN_KGKNMDODBNH___ctor(HAACHEFPDEN_KGKNMDODBNH_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

