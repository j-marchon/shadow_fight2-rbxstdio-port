// KGLCGFMIEGI$$DIJCCOKNDLN @ RVA 0x31EC69C

void KGLCGFMIEGI__DIJCCOKNDLN
               (KGLCGFMIEGI_o *__this,Facebook_Unity_IShareResult_o *HPACPFLKHPK,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *value;
  Facebook_Unity_IShareResult_c *pFVar4;
  System_Action_bool__o *pSVar5;
  ulong uVar6;
  int32_t *piVar7;
  
  if ((DAT_04566dad & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_IResult_TypeInfo);
    FUN_01bab630(&StringLiteral_10372);
    DAT_04566dad = 1;
  }
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_10372,(MethodInfo *)0x0);
  pSVar5 = (__this->fields).IJLLOMCHLBP;
  if (pSVar5 == (System_Action_bool__o *)0x0) {
    return;
  }
  if (HPACPFLKHPK == (Facebook_Unity_IShareResult_o *)0x0) {
    bVar2 = true;
  }
  else {
    pFVar4 = HPACPFLKHPK->klass;
    uVar1._0_1_ = (pFVar4->_2).rank;
    uVar1._1_1_ = (pFVar4->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pFVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar3 = pFVar4->vtable + *piVar7;
          goto LAB_032ec774;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,0);
LAB_032ec774:
    value = (System_String_o *)(*pVVar3->methodPtr)(HPACPFLKHPK,pVVar3->method);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (HPACPFLKHPK == (Facebook_Unity_IShareResult_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x032ec7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pSVar5->fields).super.super.invoke_impl)
            ((pSVar5->fields).super.super.method_code,bVar2,(pSVar5->fields).super.super.method);
  return;
}

