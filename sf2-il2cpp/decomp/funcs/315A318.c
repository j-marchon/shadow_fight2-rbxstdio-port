// LIDILBBODBM$$EOOKNHCKOKI @ RVA 0x315A318

System_TimeSpan_o LIDILBBODBM__EOOKNHCKOKI(LIDILBBODBM_o *__this,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  System_TimeSpan_o SVar4;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar9;
  undefined1 auVar10 [16];
  
  auVar10._8_8_ = method;
  auVar10._0_8_ = __this;
  if ((DAT_0456685f & 1) == 0) {
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    auVar10 = FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_0456685f = 1;
  }
  pMVar9 = (__this->fields).OAOMFCGPCBP;
  if (pMVar9 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
    pMVar5 = pMVar9->klass;
    uVar2._0_1_ = (pMVar5->_2).rank;
    uVar2._1_1_ = (pMVar5->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pMVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
          pVVar3 = pMVar5->vtable + *piVar8;
          goto LAB_0325a3ac;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pMVar9,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0325a3ac:
    auVar10 = (*pVVar3->methodPtr)(pMVar9,pVVar3->method);
    if ((auVar10._0_8_ != 0) && (lVar6 = *(long *)(auVar10._0_8_ + 0x20), lVar6 != 0)) {
      iVar1 = *(int *)(lVar6 + 0x10);
      if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      SVar4 = System_TimeSpan__FromSeconds((double)iVar1,(MethodInfo *)0x0);
      return (System_TimeSpan_o)SVar4.fields._ticks;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar10._0_8_,auVar10._8_8_);
}

