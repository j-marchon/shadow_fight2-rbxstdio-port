// IPODBIAMIGB$$KKPLGNGDMJC @ RVA 0x3050AD4

void IPODBIAMIGB__KKPLGNGDMJC(IPODBIAMIGB_o *__this,LADHIKFIKCJ_o *OPAEPDIIOEB,MethodInfo *method)

{
  ushort uVar1;
  HEFALINEJDP_c *pHVar2;
  VirtualInvokeData *pVVar3;
  HEFALINEJDP_c *pHVar4;
  ulong uVar5;
  int32_t *piVar6;
  HEFALINEJDP_o *pHVar7;
  Il2CppMethodPointer pIVar8;
  undefined1 auStack_120 [80];
  undefined1 auStack_d0 [80];
  undefined1 auStack_80 [80];
  
  if ((DAT_04565e4c & 1) == 0) {
    FUN_01bab630(&HEFALINEJDP_TypeInfo);
    DAT_04565e4c = 1;
  }
  pHVar7 = (__this->fields).ILDNHJCHABK;
  memcpy(auStack_d0,OPAEPDIIOEB,0x50);
  pHVar2 = HEFALINEJDP_TypeInfo;
  if (pHVar7 == (HEFALINEJDP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  memcpy(auStack_120,auStack_d0,0x50);
  pHVar4 = pHVar7->klass;
  uVar1._0_1_ = (pHVar4->_2).rank;
  uVar1._1_1_ = (pHVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pHVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)pHVar2) {
        pVVar3 = pHVar4->vtable + *piVar6;
        goto LAB_03150b90;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar3 = (VirtualInvokeData *)FUN_01b81914(pHVar7,pHVar2,0);
LAB_03150b90:
  pIVar8 = pVVar3->methodPtr;
  memcpy(auStack_80,auStack_120,0x50);
  (*pIVar8)(pHVar7,auStack_80,pVVar3->method);
  return;
}

