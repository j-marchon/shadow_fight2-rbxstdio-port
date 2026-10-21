// DNFILNINCDI.DDHCBIPLLGF$$EFDDMENDCDI @ RVA 0x307362C

void DNFILNINCDI_DDHCBIPLLGF__EFDDMENDCDI(DNFILNINCDI_DDHCBIPLLGF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  UnityEngine_Networking_UnityWebRequest_c *pUVar3;
  ulong uVar4;
  int32_t *piVar5;
  UnityEngine_Networking_UnityWebRequest_o *pUVar6;
  
  if ((DAT_04565f90 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_04565f90 = 1;
  }
  pUVar6 = (__this->fields)._w_5__2;
  (__this->fields).__1__state = -1;
  if (pUVar6 == (UnityEngine_Networking_UnityWebRequest_o *)0x0) {
    return;
  }
  pUVar3 = pUVar6->klass;
  uVar1._0_1_ = (pUVar3->_2).rank;
  uVar1._1_1_ = (pUVar3->_2).minimumAlignment;
  uVar4 = (ulong)uVar1;
  if (uVar4 != 0) {
    piVar5 = &((pUVar3->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar5 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar2 = &(pUVar3->vtable)._0_Equals + *piVar5;
        goto LAB_031736c8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  pVVar2 = (VirtualInvokeData *)FUN_01b81914(pUVar6,System_IDisposable_TypeInfo,0);
LAB_031736c8:
                    /* WARNING: Could not recover jumptable at 0x031736d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar2->methodPtr)(pUVar6,pVVar2->method);
  return;
}

