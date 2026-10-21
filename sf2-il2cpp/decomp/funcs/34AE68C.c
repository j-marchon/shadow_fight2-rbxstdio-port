// KDPDBGNOFEN$$GHKJILFKNDN @ RVA 0x34AE68C

void KDPDBGNOFEN__GHKJILFKNDN
               (KDPDBGNOFEN_o *__this,Sfs2X_Util_ConfigData_o *PCMFDDODKED,MethodInfo *method)

{
  ushort uVar1;
  Sfs2X_SmartFox_o *__this_00;
  PBAKFOBIHEG_o *pPVar2;
  System_Collections_IEnumerator_o *pSVar3;
  VirtualInvokeData *pVVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_IEnumerator_o **ppSVar8;
  
  method_00 = (MethodInfo *)PCMFDDODKED;
  if ((DAT_04568546 & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_04568546 = 1;
    method_00 = extraout_x1;
  }
  KDPDBGNOFEN__CKBMGIOBIFN(__this,method_00);
  __this_00 = (__this->fields).EBJCMEOKKOK;
  if (__this_00 != (Sfs2X_SmartFox_o *)0x0) {
    Sfs2X_SmartFox__Connect(__this_00,PCMFDDODKED,(MethodInfo *)0x0);
    KDPDBGNOFEN__IMLDFGHHMND(__this,method_01);
    pPVar2 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar3 = KDPDBGNOFEN__DCHKHNPICNI(__this,method_02);
    if (pPVar2 != (PBAKFOBIHEG_o *)0x0) {
      pPVar5 = pPVar2->klass;
      uVar1._0_1_ = (pPVar5->_2).rank;
      uVar1._1_1_ = (pPVar5->_2).minimumAlignment;
      uVar6 = (ulong)uVar1;
      if (uVar6 != 0) {
        piVar7 = &((pPVar5->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar4 = pPVar5->vtable + *piVar7;
            goto LAB_035ae750;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      pVVar4 = (VirtualInvokeData *)FUN_01b81914(pPVar2,PBAKFOBIHEG_TypeInfo,0);
LAB_035ae750:
      pSVar3 = (System_Collections_IEnumerator_o *)
               (*pVVar4->methodPtr)(pPVar2,pSVar3,1,pVVar4->method);
      ppSVar8 = &(__this->fields).OEKNOHANEKC;
      *ppSVar8 = pSVar3;
      thunk_FUN_01c20e04(ppSVar8,pSVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

