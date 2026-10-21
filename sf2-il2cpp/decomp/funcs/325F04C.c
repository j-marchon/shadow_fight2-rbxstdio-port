// AAPGCAPGBLG$$CNBENAHGBAL @ RVA 0x325F04C

bool AAPGCAPGBLG__CNBENAHGBAL(AAPGCAPGBLG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ushort uVar1;
  GCPFDLNAFDF_o *pGVar2;
  VirtualInvokeData *pVVar3;
  DADDKDFBPIJ_T__o *__this_00;
  Il2CppObject *pIVar4;
  GCPFDLNAFDF_c *pGVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_045671a4 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    DAT_045671a4 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar2 != (GCPFDLNAFDF_o *)0x0) {
    pGVar5 = pGVar2->klass;
    uVar1._0_1_ = (pGVar5->_2).rank;
    uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pGVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar3 = pGVar5->vtable + *piVar7;
          goto LAB_0335f10c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pGVar2,HHMDFAMGHPB_TypeInfo,0);
LAB_0335f10c:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar3->methodPtr)(pGVar2,pVVar3->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar4 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,KGLJICLJHEL,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      return pIVar4 != (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

