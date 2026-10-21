// IMAPABEJECG$$JGDKNDBAIHM @ RVA 0x35C1388

void IMAPABEJECG__JGDKNDBAIHM(System_Action_bool__o *BLMFLPJJMPF,MethodInfo *method)

{
  ushort uVar1;
  System_Action_bool__o *method_00;
  VirtualInvokeData *pVVar2;
  CNOGBOOJFIP_c *pCVar3;
  ulong uVar4;
  int32_t *piVar5;
  CNOGBOOJFIP_o *pCVar6;
  
  method_00 = BLMFLPJJMPF;
  if ((DAT_04568f1d & 1) == 0) {
    FUN_01bab630(&CNOGBOOJFIP_TypeInfo);
    method_00 = (System_Action_bool__o *)FUN_01bab630(&IMAPABEJECG_TypeInfo);
    DAT_04568f1d = 1;
  }
  IMAPABEJECG__PPCPAHAPCNB((MethodInfo *)method_00);
  pCVar6 = IMAPABEJECG_TypeInfo->static_fields->BPIIMPKLPCP;
  if (pCVar6 == (CNOGBOOJFIP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pCVar3 = pCVar6->klass;
  uVar1._0_1_ = (pCVar3->_2).rank;
  uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pCVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)CNOGBOOJFIP_TypeInfo) {
        pVVar2 = pCVar3->vtable + *piVar5;
        goto LAB_036c1430;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pCVar6,CNOGBOOJFIP_TypeInfo,0);
LAB_036c1430:
                    /* WARNING: Could not recover jumptable at 0x036c1444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pCVar6,BLMFLPJJMPF,pVVar2->method);
  return;
}

