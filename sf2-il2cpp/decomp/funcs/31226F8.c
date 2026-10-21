// GDPNBLFNJKP$$BBJCEGGJDJB @ RVA 0x31226F8

System_String_o *
GDPNBLFNJKP__BBJCEGGJDJB(GDPNBLFNJKP_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  GCPFDLNAFDF_o *pGVar3;
  VirtualInvokeData *pVVar4;
  DADDKDFBPIJ_T__o *__this_00;
  Il2CppObject *pIVar5;
  GCPFDLNAFDF_c *pGVar6;
  ulong uVar7;
  int32_t *piVar8;
  Il2CppObject *pIVar9;
  
  if ((DAT_04566630 & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
    FUN_01bab630(&HHMDFAMGHPB_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_1570);
    DAT_04566630 = 1;
  }
  if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar3 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
  if (pGVar3 != (GCPFDLNAFDF_o *)0x0) {
    pGVar6 = pGVar3->klass;
    uVar1._0_1_ = (pGVar6->_2).rank;
    uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pGVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)HHMDFAMGHPB_TypeInfo) {
          pVVar4 = pGVar6->vtable + *piVar8;
          goto LAB_032227c4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pGVar3,HHMDFAMGHPB_TypeInfo,0);
LAB_032227c4:
    __this_00 = (DADDKDFBPIJ_T__o *)(*pVVar4->methodPtr)(pGVar3,pVVar4->method);
    if (__this_00 != (DADDKDFBPIJ_T__o *)0x0) {
      pIVar5 = DADDKDFBPIJ<object>__COMOKILJDGJ
                         (__this_00,KGLJICLJHEL,Method_DADDKDFBPIJ<CCLKPGBIBOP>_COMOKILJDGJ__);
      pIVar9 = (Il2CppObject *)&StringLiteral_1570;
      if (pIVar5 != (Il2CppObject *)0x0) {
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)pIVar5[2].klass,(MethodInfo *)0x0);
        if (!bVar2) {
          pIVar9 = pIVar5 + 2;
        }
      }
      return (System_String_o *)pIVar9->klass;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

