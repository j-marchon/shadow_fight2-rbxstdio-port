// LIDILBBODBM$$MKEOPCGJMJG @ RVA 0x315A654

bool LIDILBBODBM__MKEOPCGJMJG(LIDILBBODBM_o *__this,int32_t FJDDMAGMKGM,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long lVar3;
  MJPJANJNDCI_CdnMirrorsConfig__c *pMVar4;
  ulong uVar5;
  int32_t *piVar6;
  MJPJANJNDCI_CdnMirrorsConfig__o *pMVar7;
  
  if ((DAT_04566862 & 1) == 0) {
    FUN_01bab630(&MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo);
    DAT_04566862 = 1;
  }
  pMVar7 = (__this->fields).OAOMFCGPCBP;
  if (pMVar7 != (MJPJANJNDCI_CdnMirrorsConfig__o *)0x0) {
    pMVar4 = pMVar7->klass;
    uVar1._0_1_ = (pMVar4->_2).rank;
    uVar1._1_1_ = (pMVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pMVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo) {
          pVVar2 = pMVar4->vtable + *piVar6;
          goto LAB_0325a6e0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar2 = (VirtualInvokeData *)FUN_01b81914(pMVar7,MJPJANJNDCI<CdnMirrorsConfig>_TypeInfo,0);
LAB_0325a6e0:
    lVar3 = (*pVVar2->methodPtr)(pMVar7,pVVar2->method);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
      return *(int *)(*(long *)(lVar3 + 0x20) + 0x14) < FJDDMAGMKGM;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

