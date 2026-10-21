// BECIPDJBAOG$$FGMBOHECONG @ RVA 0x30D1910

void BECIPDJBAOG__FGMBOHECONG
               (BECIPDJBAOG_o *__this,System_Collections_Generic_IList_BECIPDJBAOG__o *IBKIPBJJCPG,
               bool CMBNNBBFJBC,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  VirtualInvokeData *pVVar4;
  BECIPDJBAOG_o *IBKIPBJJCPG_00;
  System_Collections_Generic_IList_BECIPDJBAOG__c *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  uint uVar8;
  
  if ((DAT_04566317 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_ICollection<BECIPDJBAOG>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<BECIPDJBAOG>_TypeInfo);
    DAT_04566317 = 1;
  }
  if (IBKIPBJJCPG == (System_Collections_Generic_IList_BECIPDJBAOG__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar8 = 0;
  do {
    pSVar5 = IBKIPBJJCPG->klass;
    uVar1._0_1_ = (pSVar5->_2).rank;
    uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_ICollection<BECIPDJBAOG>_TypeInfo) {
          pVVar4 = pSVar5->vtable + *piVar7;
          goto LAB_031d19c0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(IBKIPBJJCPG,System_Collections_Generic_ICollection<BECIPDJBAOG>_TypeInfo,0
                         );
LAB_031d19c0:
    iVar3 = (*pVVar4->methodPtr)(IBKIPBJJCPG,pVVar4->method);
    if (iVar3 <= (int)uVar8) {
      return;
    }
    pSVar5 = IBKIPBJJCPG->klass;
    uVar2._0_1_ = (pSVar5->_2).rank;
    uVar2._1_1_ = (pSVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pSVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IList<BECIPDJBAOG>_TypeInfo) {
          pVVar4 = pSVar5->vtable + *piVar7;
          goto LAB_031d1a20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)
             FUN_01b81914(IBKIPBJJCPG,System_Collections_Generic_IList<BECIPDJBAOG>_TypeInfo,0);
LAB_031d1a20:
    IBKIPBJJCPG_00 = (BECIPDJBAOG_o *)(*pVVar4->methodPtr)(IBKIPBJJCPG,(ulong)uVar8,pVVar4->method);
    BECIPDJBAOG__FGMBOHECONG(__this,IBKIPBJJCPG_00,CMBNNBBFJBC,method);
    uVar8 = uVar8 + 1;
  } while( true );
}

