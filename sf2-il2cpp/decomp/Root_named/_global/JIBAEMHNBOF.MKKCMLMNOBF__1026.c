// TypeDefIndex 1026
// Namespace: 
// [CompilerGenerated]
// private sealed class JIBAEMHNBOF.MKKCMLMNOBF
// Fields:
//   public string offerName; // 0x10

// ===== public void .ctor()  [RVA 0x30CCA40]
// JIBAEMHNBOF.MKKCMLMNOBF$$.ctor @ RVA 0x30CCA40

void JIBAEMHNBOF_MKKCMLMNOBF___ctor(JIBAEMHNBOF_MKKCMLMNOBF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool DPEEMJHNEFK(NCCFNKMICGK offer)  [RVA 0x30CCA48]
// JIBAEMHNBOF.MKKCMLMNOBF$$DPEEMJHNEFK @ RVA 0x30CCA48

bool JIBAEMHNBOF_MKKCMLMNOBF__DPEEMJHNEFK
               (JIBAEMHNBOF_MKKCMLMNOBF_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *a;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_045662e2 & 1) == 0) {
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662e2 = 1;
  }
  if (offer == (NCCFNKMICGK_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar4 = offer->klass;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar3 = pNVar4->vtable + (*piVar6 + 2);
        goto LAB_031ccad4;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,2);
LAB_031ccad4:
  a = (System_String_o *)(*pVVar3->methodPtr)(offer,pVVar3->method);
  bVar2 = System_String__op_Equality(a,(__this->fields).offerName,(MethodInfo *)0x0);
  return bVar2;
}

