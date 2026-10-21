// CHDGOFBHAFI$$AFHLHFMLNEO @ RVA 0x32440BC

NODLJPNGNBG_o *
CHDGOFBHAFI__AFHLHFMLNEO
          (System_Collections_Generic_IList_NODLJPNGNBG__o *JPKOCGKEPKM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  EEGDOGKBLNG_o *__this;
  int64_t iVar4;
  VirtualInvokeData *pVVar5;
  NODLJPNGNBG_o *pNVar6;
  ICBMOMGINFH_o **ppIVar7;
  MethodInfo *extraout_x1;
  System_Collections_Generic_IList_NODLJPNGNBG__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  uint uVar11;
  
  if ((DAT_045670ca & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_ICollection<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<NODLJPNGNBG>_TypeInfo);
    FUN_01bab630(&NODLJPNGNBG_TypeInfo);
    FUN_01bab630(&StringLiteral_10907);
    DAT_045670ca = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if ((__this == (EEGDOGKBLNG_o *)0x0) ||
     (iVar4 = EEGDOGKBLNG__APCMGOCHMGC(__this,(MethodInfo *)0x0),
     JPKOCGKEPKM == (System_Collections_Generic_IList_NODLJPNGNBG__o *)0x0)) {
LAB_033442dc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar11 = 0;
  do {
    pSVar8 = JPKOCGKEPKM->klass;
    uVar1._0_1_ = (pSVar8->_2).rank;
    uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<NODLJPNGNBG>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_033441dc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(JPKOCGKEPKM,System_Collections_Generic_ICollection<NODLJPNGNBG>_TypeInfo,0
                         );
LAB_033441dc:
    iVar3 = (*pVVar5->methodPtr)(JPKOCGKEPKM,pVVar5->method);
    if (iVar3 <= (int)uVar11) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_10907,(MethodInfo *)0x0);
      pNVar6 = (NODLJPNGNBG_o *)thunk_FUN_01bda818(NODLJPNGNBG_TypeInfo);
      NODLJPNGNBG___ctor(pNVar6,(MethodInfo *)0x0);
      if (pNVar6 != (NODLJPNGNBG_o *)0x0) {
        (pNVar6->fields).ANAJGHJEEOC = iVar4;
        (pNVar6->fields).LINGIJDCLLC = 0;
        ppIVar7 = &(pNVar6->fields).PMMFPJJOPKE;
        *ppIVar7 = (ICBMOMGINFH_o *)0x0;
        thunk_FUN_01c20e04(ppIVar7,0);
        (pNVar6->fields).DMFDEJEDMPO = true;
        (pNVar6->fields).PFJPLCAIGJH = 1;
        return pNVar6;
      }
      goto LAB_033442dc;
    }
    pSVar8 = JPKOCGKEPKM->klass;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IList<NODLJPNGNBG>_TypeInfo) {
          pVVar5 = pSVar8->vtable + *piVar10;
          goto LAB_0334423c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(JPKOCGKEPKM,System_Collections_Generic_IList<NODLJPNGNBG>_TypeInfo,0);
LAB_0334423c:
    pNVar6 = (NODLJPNGNBG_o *)(*pVVar5->methodPtr)(JPKOCGKEPKM,(ulong)uVar11,pVVar5->method);
    if (pNVar6 == (NODLJPNGNBG_o *)0x0) goto LAB_033442dc;
    uVar11 = uVar11 + 1;
    if ((pNVar6->fields).ANAJGHJEEOC == iVar4) {
      return pNVar6;
    }
  } while( true );
}

