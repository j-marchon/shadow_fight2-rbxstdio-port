// KGLCGFMIEGI$$LHEBEPEJEPE @ RVA 0x31EBB50

void KGLCGFMIEGI__LHEBEPEJEPE
               (KGLCGFMIEGI_o *__this,Facebook_Unity_ILoginResult_o *HPACPFLKHPK,
               LLIHPIMPDLC_o *NCMNKCDJPAA,MethodInfo *method)

{
  System_String_o *str1;
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  Facebook_Unity_ILoginResult_c *pFVar7;
  System_Action_bool__o *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04566d9f & 1) == 0) {
    FUN_01bab630(&Facebook_Unity_IResult_TypeInfo);
    FUN_01bab630(&StringLiteral_588);
    FUN_01bab630(&StringLiteral_14507);
    FUN_01bab630(&StringLiteral_8621);
    FUN_01bab630(&StringLiteral_8620);
    FUN_01bab630(&StringLiteral_8622);
    DAT_04566d9f = 1;
  }
  if (HPACPFLKHPK == (Facebook_Unity_ILoginResult_o *)0x0) {
    pSVar6 = (System_String_o *)0x0;
    pSVar5 = StringLiteral_8621;
  }
  else {
    pFVar7 = HPACPFLKHPK->klass;
    uVar1._0_1_ = (pFVar7->_2).rank;
    uVar1._1_1_ = (pFVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pFVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar4 = pFVar7->vtable + *piVar10;
          goto LAB_032ebc30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,0);
LAB_032ebc30:
    pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
    bVar3 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
    pSVar5 = StringLiteral_8621;
    if (bVar3) {
      bVar3 = KGLCGFMIEGI__EDBFDLIIHGI((KGLCGFMIEGI_o *)0x1,method_00);
      if (bVar3) {
        method_01 = (MethodInfo *)0x0;
        KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8622,(MethodInfo *)0x0);
        KGLCGFMIEGI__ENFBBKEOLCL(__this,NCMNKCDJPAA,method_01);
        return;
      }
      KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,StringLiteral_8620,(MethodInfo *)0x0);
      goto LAB_032ebd3c;
    }
    pFVar7 = HPACPFLKHPK->klass;
    uVar2._0_1_ = (pFVar7->_2).rank;
    uVar2._1_1_ = (pFVar7->_2).minimumAlignment;
    uVar9 = (ulong)uVar2;
    if (uVar9 != 0) {
      piVar10 = &((pFVar7->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)Facebook_Unity_IResult_TypeInfo) {
          pVVar4 = pFVar7->vtable + *piVar10;
          goto LAB_032ebcf4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(HPACPFLKHPK,Facebook_Unity_IResult_TypeInfo,0);
LAB_032ebcf4:
    pSVar6 = (System_String_o *)(*pVVar4->methodPtr)(HPACPFLKHPK,pVVar4->method);
  }
  str1 = StringLiteral_14507;
  if (pSVar6 != (System_String_o *)0x0) {
    str1 = pSVar6;
  }
  pSVar5 = System_String__Concat(pSVar5,str1,StringLiteral_588,(MethodInfo *)0x0);
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,pSVar5,(MethodInfo *)0x0);
LAB_032ebd3c:
  pSVar8 = (__this->fields).NEMMLKGAOFE;
  if (pSVar8 != (System_Action_bool__o *)0x0) {
    (*(code *)(pSVar8->fields).super.super.invoke_impl)
              ((pSVar8->fields).super.super.method_code,0,(pSVar8->fields).super.super.method);
  }
  if ((NCMNKCDJPAA != (LLIHPIMPDLC_o *)0x0) &&
     (pSVar8 = (__this->fields).IJLLOMCHLBP, pSVar8 != (System_Action_bool__o *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x032ebd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar8->fields).super.super.invoke_impl)
              ((pSVar8->fields).super.super.method_code,0,(pSVar8->fields).super.super.method);
    return;
  }
  return;
}

