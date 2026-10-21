// ECPDONBDGCB$$CKFMOEMDINB @ RVA 0x302F8F8

bool ECPDONBDGCB__CKFMOEMDINB
               (ECPDONBDGCB_o *__this,System_String_o *CJFAPGEEPLM,System_String_o **EGPLJFIKKAO,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  long lVar6;
  System_String_o *newValue;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar7;
  HCOKCPNMKFK_c *pHVar8;
  ulong uVar9;
  int32_t *piVar10;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar11;
  System_String_o *oldValue;
  HCOKCPNMKFK_o *pHVar12;
  
  if ((DAT_04565cee & 1) == 0) {
    FUN_01bab630(&HCOKCPNMKFK_TypeInfo);
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    DAT_04565cee = 1;
  }
  pMVar11 = (__this->fields).OAOMFCGPCBP;
  if (pMVar11 == (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
LAB_0312fafc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pMVar7 = pMVar11->klass;
  uVar1._0_1_ = (pMVar7->_2).rank;
  uVar1._1_1_ = (pMVar7->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pMVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
        pVVar5 = pMVar7->vtable + *piVar10;
        goto LAB_0312f99c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pMVar11,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0312f99c:
  lVar6 = (*pVVar5->methodPtr)(pMVar11,pVVar5->method);
  bVar4 = System_String__IsNullOrWhiteSpace(CJFAPGEEPLM,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((lVar6 == 0) || (CJFAPGEEPLM == (System_String_o *)0x0)) goto LAB_0312fafc;
    bVar4 = System_String__StartsWith
                      (CJFAPGEEPLM,*(System_String_o **)(lVar6 + 0x18),(MethodInfo *)0x0);
    if (bVar4) {
      pHVar12 = (__this->fields).BCHLEFPBFHO;
      if (pHVar12 == (HCOKCPNMKFK_o *)0x0) goto LAB_0312fafc;
      pHVar8 = pHVar12->klass;
      uVar2._0_1_ = (pHVar8->_2).rank;
      uVar2._1_1_ = (pHVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pHVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
            pVVar5 = pHVar8->vtable + (*piVar10 + 5);
            goto LAB_0312fa38;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pHVar12,HCOKCPNMKFK_TypeInfo,5);
LAB_0312fa38:
      uVar9 = (*pVVar5->methodPtr)(pHVar12,pVVar5->method);
      if ((uVar9 & 1) != 0) {
        pHVar12 = (__this->fields).BCHLEFPBFHO;
        if (pHVar12 == (HCOKCPNMKFK_o *)0x0) goto LAB_0312fafc;
        pHVar8 = pHVar12->klass;
        oldValue = *(System_String_o **)(lVar6 + 0x18);
        uVar3._0_1_ = (pHVar8->_2).rank;
        uVar3._1_1_ = (pHVar8->_2).minimumAlignment;
        uVar9 = (ulong)uVar3;
        if (uVar9 != 0) {
          piVar10 = &((pHVar8->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)HCOKCPNMKFK_TypeInfo) {
              pVVar5 = pHVar8->vtable + (*piVar10 + 2);
              goto LAB_0312fad0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar5 = (VirtualInvokeData *)FUN_01b81914(pHVar12,HCOKCPNMKFK_TypeInfo,2);
LAB_0312fad0:
        newValue = (System_String_o *)(*pVVar5->methodPtr)(pHVar12,pVVar5->method);
        CJFAPGEEPLM = System_String__Replace(CJFAPGEEPLM,oldValue,newValue,(MethodInfo *)0x0);
        bVar4 = true;
        goto LAB_0312fa98;
      }
    }
  }
  bVar4 = false;
LAB_0312fa98:
  *EGPLJFIKKAO = CJFAPGEEPLM;
  thunk_FUN_01c20e04(EGPLJFIKKAO,CJFAPGEEPLM);
  return bVar4;
}

