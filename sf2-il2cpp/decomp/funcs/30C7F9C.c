// ADAHHFAPLLM$$NFMANKNGJLM @ RVA 0x30C7F9C

void ADAHHFAPLLM__NFMANKNGJLM
               (ADAHHFAPLLM_o *__this,int32_t OGPGLGPMEPD,System_String_o *JEHFOBHMGJM,
               System_String_o *NONPLOOOOAG,int32_t KDNLAOJBFMH,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  LNADBMOHMKN_c *pLVar4;
  ulong uVar5;
  int32_t *piVar6;
  LNADBMOHMKN_o *pLVar7;
  
  if ((DAT_045662c7 & 1) == 0) {
    FUN_01bab630(&LNADBMOHMKN_TypeInfo);
    DAT_045662c7 = 1;
  }
  if (((__this->fields)._IOLEJLFICGM_k__BackingField != false) &&
     (pLVar7 = (__this->fields).IOPFMDCMMLD, pLVar7 != (LNADBMOHMKN_o *)0x0)) {
    pLVar4 = pLVar7->klass;
    uVar1._0_1_ = (pLVar4->_2).rank;
    uVar1._1_1_ = (pLVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pLVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
          pVVar3 = pLVar4->vtable + *piVar6;
          goto LAB_031c8044;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pLVar7,LNADBMOHMKN_TypeInfo,0);
LAB_031c8044:
    (*pVVar3->methodPtr)(pLVar7,(ulong)(uint)OGPGLGPMEPD,pVVar3->method);
    pLVar7 = (__this->fields).IOPFMDCMMLD;
    if (pLVar7 != (LNADBMOHMKN_o *)0x0) {
      pLVar4 = pLVar7->klass;
      uVar2._0_1_ = (pLVar4->_2).rank;
      uVar2._1_1_ = (pLVar4->_2).minimumAlignment;
      uVar5 = (ulong)uVar2;
      if (uVar5 != 0) {
        piVar6 = &((pLVar4->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
              (Il2CppClass *)LNADBMOHMKN_TypeInfo) {
            pVVar3 = pLVar4->vtable + (*piVar6 + 1);
            goto LAB_031c80c4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      pVVar3 = (VirtualInvokeData *)FUN_01b81914(pLVar7,LNADBMOHMKN_TypeInfo,1);
LAB_031c80c4:
                    /* WARNING: Could not recover jumptable at 0x031c80ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pVVar3->methodPtr)
                (pLVar7,(ulong)(uint)OGPGLGPMEPD,JEHFOBHMGJM,NONPLOOOOAG,(long)KDNLAOJBFMH,
                 pVVar3->method);
      return;
    }
  }
  return;
}

