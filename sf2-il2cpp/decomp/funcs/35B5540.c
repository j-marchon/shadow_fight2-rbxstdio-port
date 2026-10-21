// FDJKKAFIEFB$$JLFIDNOPECP @ RVA 0x35B5540

DBNEEHGBCJD_o *
FDJKKAFIEFB__JLFIDNOPECP(FDJKKAFIEFB_o *__this,DBNEEHGBCJD_o *NFDKMBAGHPD,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  DBNEEHGBCJD_o *pDVar7;
  System_Collections_Generic_List_DBNEEHGBCJD__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Generic_List_DBNEEHGBCJD__o *pSVar11;
  
  if ((DAT_04568eb2 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo);
    DAT_04568eb2 = 1;
  }
  if (((NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0) ||
      (NFDKMBAGHPD = (__this->fields)._ELDCPOBNFJJ_k__BackingField,
      NFDKMBAGHPD != (DBNEEHGBCJD_o *)0x0)) &&
     (pSVar11 = (__this->fields).DIKCNPKCGJP,
     pSVar11 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0)) {
    pSVar8 = pSVar11->klass;
    iVar1 = (NFDKMBAGHPD->fields)._HBPAJOBFMLH_k__BackingField;
    uVar2._0_1_ = (pSVar8->_2).rank;
    uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo) {
          pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
          goto LAB_036b55e8;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)
             FUN_01b81914(pSVar11,
                          System_Collections_Generic_IReadOnlyCollection<DBNEEHGBCJD>_TypeInfo,0);
LAB_036b55e8:
    iVar5 = (*pVVar6->methodPtr)(pSVar11,pVVar6->method);
    pSVar11 = (__this->fields).DIKCNPKCGJP;
    if (pSVar11 != (System_Collections_Generic_List_DBNEEHGBCJD__o *)0x0) {
      pSVar8 = pSVar11->klass;
      uVar3._0_1_ = (pSVar8->_2).rank;
      uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar3;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo) {
            pVVar6 = &(pSVar8->vtable)._0_Equals + *piVar10;
            goto LAB_036b5654;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)
               FUN_01b81914(pSVar11,System_Collections_Generic_IReadOnlyList<DBNEEHGBCJD>_TypeInfo,0
                           );
LAB_036b5654:
      iVar1 = iVar1 + 1;
      iVar4 = 0;
      if (iVar5 != 0) {
        iVar4 = iVar1 / iVar5;
      }
                    /* WARNING: Could not recover jumptable at 0x036b5670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pDVar7 = (DBNEEHGBCJD_o *)
               (*pVVar6->methodPtr)(pSVar11,(ulong)(uint)(iVar1 - iVar4 * iVar5),pVVar6->method);
      return pDVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

