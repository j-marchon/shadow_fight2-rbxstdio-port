// PNHGEFAOFFE$$AICJJLCHHJM @ RVA 0x3183208

void PNHGEFAOFFE__AICJJLCHHJM(PNHGEFAOFFE_o *__this)

{
  ushort uVar1;
  DGGBFKNKEAH_o *pDVar2;
  ulong uVar3;
  PBAKFOBIHEG_o *pPVar4;
  System_Collections_IEnumerator_o *pSVar5;
  VirtualInvokeData *pVVar6;
  MethodInfo *method;
  PBAKFOBIHEG_c *pPVar7;
  int32_t *piVar8;
  
  if ((DAT_045669bd & 1) == 0) {
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    DAT_045669bd = 1;
  }
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
    DAT_045655e8 = '\x01';
  }
  pDVar2 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  if (pDVar2 != (DGGBFKNKEAH_o *)0x0) {
    uVar3 = (*(pDVar2->klass->vtable)._21_HKLIPCEAINH.methodPtr)
                      (pDVar2,(pDVar2->klass->vtable)._21_HKLIPCEAINH.method);
    if ((uVar3 & 1) != 0) {
      return;
    }
    pPVar4 = CoroutineManager__get_Current((MethodInfo *)0x0);
    pSVar5 = PNHGEFAOFFE__ONEKMBKBFEB(__this,method);
    if (pPVar4 != (PBAKFOBIHEG_o *)0x0) {
      pPVar7 = pPVar4->klass;
      uVar1._0_1_ = (pPVar7->_2).rank;
      uVar1._1_1_ = (pPVar7->_2).minimumAlignment;
      uVar3 = (ulong)uVar1;
      if (uVar3 != 0) {
        piVar8 = &((pPVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar6 = pPVar7->vtable + *piVar8;
            goto LAB_032814e8;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pPVar4,PBAKFOBIHEG_TypeInfo,0);
LAB_032814e8:
                    /* WARNING: Could not recover jumptable at 0x03281500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar6->methodPtr)(pPVar4,pSVar5,0,pVVar6->method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

