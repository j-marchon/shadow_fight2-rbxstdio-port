// BMJBJMHPJLJ$$DHAAGKPHJLA @ RVA 0x304601C

void BMJBJMHPJLJ__DHAAGKPHJLA(MethodInfo *method)

{
  ushort uVar1;
  GCPFDLNAFDF_o *pGVar2;
  VirtualInvokeData *pVVar3;
  BCHFHHHGEIP_o *__this;
  GCPFDLNAFDF_c *pGVar4;
  ulong uVar5;
  int32_t *piVar6;
  
  if ((DAT_04565dd5 & 1) == 0) {
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_04565dd5 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03146078 to 0324613b has its CatchHandler @ 03146078
                       catch() { ... } // from try @ 03146078 with catch @ 03146078
                       catch() { ... } // from try @ 03146178 with catch @ 03146078
                       catch() { ... } // from try @ 031461b4 with catch @ 03146078
                       catch() { ... } // from try @ 03146200 with catch @ 03146078 */
  pGVar2 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar2 != (GCPFDLNAFDF_o *)0x0) {
    pGVar4 = pGVar2->klass;
    uVar1._0_1_ = (pGVar4->_2).rank;
    uVar1._1_1_ = (pGVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pGVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
          pVVar3 = pGVar4->vtable + (*piVar6 + 4);
          goto LAB_031460dc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar2,HFHIKPAKJFG_TypeInfo,4);
LAB_031460dc:
    __this = (BCHFHHHGEIP_o *)(*pVVar3->methodPtr)(pGVar2,pVVar3->method);
    if (__this != (BCHFHHHGEIP_o *)0x0) {
      BCHFHHHGEIP__JEMJDLHJDOE(__this,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

