// FBAABPGMPCC$$HJBOAHBLHHF @ RVA 0x31ACE30

System_Collections_Generic_IEnumerable_PackSettings__o *
FBAABPGMPCC__HJBOAHBLHHF(FBAABPGMPCC_o *__this,int32_t AFDBEEENAHK,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  System_Collections_Generic_IEnumerable_PackSettings__o *pSVar3;
  NKEPNPALKMO_c *pNVar4;
  ulong uVar5;
  int32_t *piVar6;
  NKEPNPALKMO_o *pNVar7;
  
  if ((DAT_04566b55 & 1) == 0) {
    FUN_01bab630(&NKEPNPALKMO_TypeInfo);
    DAT_04566b55 = 1;
  }
  pNVar7 = (__this->fields).MKMKEFBPBMF;
  if (pNVar7 == (NKEPNPALKMO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar4 = pNVar7->klass;
  uVar1._0_1_ = (pNVar4->_2).rank;
  uVar1._1_1_ = (pNVar4->_2).minimumAlignment;
  uVar5 = (ulong)uVar1;
  if (uVar5 != 0) {
    piVar6 = &((pNVar4->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
          (Il2CppClass *)NKEPNPALKMO_TypeInfo) {
        pVVar2 = pNVar4->vtable + (*piVar6 + 1);
        goto LAB_032acec0;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pNVar7,NKEPNPALKMO_TypeInfo,1);
LAB_032acec0:
                    /* WARNING: Could not recover jumptable at 0x032aced4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_Collections_Generic_IEnumerable_PackSettings__o *)
           (*pVVar2->methodPtr)(pNVar7,(ulong)(uint)AFDBEEENAHK,pVVar2->method);
  return pSVar3;
}

