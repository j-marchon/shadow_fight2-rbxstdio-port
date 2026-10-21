// LEGDPJHPEOB$$HLACBAJGCAI @ RVA 0x3547028

void LEGDPJHPEOB__HLACBAJGCAI
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *AJOBAPIPBJB,
               MMFIDKMDADC_o *KDBIBINALOL,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  KKEKKPIDGBK_o *pKVar3;
  VirtualInvokeData *pVVar4;
  KKEKKPIDGBK_c *pKVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_String_o *pSVar8;
  
  if ((DAT_04568b18 & 1) == 0) {
    FUN_01bab630(&KKEKKPIDGBK_TypeInfo);
    FUN_01bab630(&MKFAKELPPAC_TypeInfo);
    FUN_01bab630(&StringLiteral_1606);
    FUN_01bab630(&StringLiteral_1567);
    DAT_04568b18 = 1;
  }
  if ((MKFAKELPPAC_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pKVar3 = MKFAKELPPAC__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((AJOBAPIPBJB != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) && (pKVar3 != (KKEKKPIDGBK_o *)0x0)) {
    pKVar5 = pKVar3->klass;
    pSVar8 = (AJOBAPIPBJB->fields).KCPPJGKAILM;
    uVar2._0_1_ = (pKVar5->_2).rank;
    uVar2._1_1_ = (pKVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pKVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)KKEKKPIDGBK_TypeInfo) {
          pVVar4 = pKVar5->vtable + (*piVar7 + 7);
          goto LAB_03647118;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pKVar3,KKEKKPIDGBK_TypeInfo,7);
LAB_03647118:
    uVar6 = (*pVVar4->methodPtr)(pKVar3,pSVar8,pVVar4->method);
    puVar1 = &StringLiteral_1606;
    if ((uVar6 & 1) == 0) {
      puVar1 = &StringLiteral_1567;
    }
    if (KDBIBINALOL != (MMFIDKMDADC_o *)0x0) {
      (KDBIBINALOL->fields).HPACPFLKHPK = (System_String_o *)*puVar1;
      thunk_FUN_01c20e04(&KDBIBINALOL->fields);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

