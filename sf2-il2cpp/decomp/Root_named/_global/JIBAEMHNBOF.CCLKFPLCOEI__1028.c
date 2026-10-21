// TypeDefIndex 1028
// Namespace: 
// [CompilerGenerated]
// private sealed class JIBAEMHNBOF.CCLKFPLCOEI
// Fields:
//   public JIBAEMHNBOF.HHCLGENAOLA offerData; // 0x10

// ===== public void .ctor()  [RVA 0x30CCBC0]
// JIBAEMHNBOF.CCLKFPLCOEI$$.ctor @ RVA 0x30CCBC0

void JIBAEMHNBOF_CCLKFPLCOEI___ctor(JIBAEMHNBOF_CCLKFPLCOEI_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== internal bool OOBFKMDCNBI(NCCFNKMICGK offer)  [RVA 0x30CCBC8]
// JIBAEMHNBOF.CCLKFPLCOEI$$OOBFKMDCNBI @ RVA 0x30CCBC8

bool JIBAEMHNBOF_CCLKFPLCOEI__OOBFKMDCNBI
               (JIBAEMHNBOF_CCLKFPLCOEI_o *__this,NCCFNKMICGK_o *offer,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *a;
  NCCFNKMICGK_c *pNVar4;
  JIBAEMHNBOF_HHCLGENAOLA_o *pJVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045662e4 & 1) == 0) {
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662e4 = 1;
  }
  if (offer != (NCCFNKMICGK_o *)0x0) {
    pNVar4 = offer->klass;
    uVar1._0_1_ = (pNVar4->_2).rank;
    uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pNVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
          pVVar3 = pNVar4->vtable + (*piVar7 + 2);
          goto LAB_031ccc54;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(offer,NCCFNKMICGK_TypeInfo,2);
LAB_031ccc54:
    a = (System_String_o *)(*pVVar3->methodPtr)(offer,pVVar3->method);
    pJVar5 = (__this->fields).offerData;
    if (pJVar5 != (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0) {
      bVar2 = System_String__op_Equality(a,(pJVar5->fields).FCENJIHACAA,(MethodInfo *)0x0);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

