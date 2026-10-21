// JIBAEMHNBOF.PJCFOJCHHHH$$OKEGDDNIIOA @ RVA 0x30CCAF8

bool JIBAEMHNBOF_PJCFOJCHHHH__OKEGDDNIIOA
               (JIBAEMHNBOF_PJCFOJCHHHH_o *__this,JIBAEMHNBOF_HHCLGENAOLA_o *offerData,
               MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *b;
  NCCFNKMICGK_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  NCCFNKMICGK_o *pNVar7;
  System_String_o *a;
  
  if ((DAT_045662e3 & 1) == 0) {
    FUN_01bab630(&NCCFNKMICGK_TypeInfo);
    DAT_045662e3 = 1;
  }
  if ((offerData == (JIBAEMHNBOF_HHCLGENAOLA_o *)0x0) ||
     (pNVar7 = (__this->fields).offer, pNVar7 == (NCCFNKMICGK_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar4 = pNVar7->klass;
  a = (offerData->fields).FCENJIHACAA;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NCCFNKMICGK_TypeInfo) {
        pVVar3 = pNVar4->vtable + (*piVar6 + 2);
        goto LAB_031ccb90;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pNVar7,NCCFNKMICGK_TypeInfo,2);
LAB_031ccb90:
  b = (System_String_o *)(*pVVar3->methodPtr)(pNVar7,pVVar3->method);
  bVar2 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  return bVar2;
}

