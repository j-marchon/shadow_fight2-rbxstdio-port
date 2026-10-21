// EEOMEMBBGNA$$LPHIKAHDOHG @ RVA 0x32F8F48

void EEOMEMBBGNA__LPHIKAHDOHG(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  MGDJPGGPDJI_o *pMVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *NONPLOOOOAG;
  AKOMJPINHEN_o *__this_00;
  MethodInfo *method_00;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  System_Action_MGDJPGGPDJI__o *pSVar10;
  
  if ((DAT_045676b0 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<MGDJPGGPDJI>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17799);
    FUN_01bab630(&StringLiteral_10815);
    DAT_045676b0 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10815,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pMVar3 = (MGDJPGGPDJI_o *)
             KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<MGDJPGGPDJI>__);
    if ((pMVar3 == (MGDJPGGPDJI_o *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0))
    {
                    /* try { // try from 033f90d4 to 034f90db has its CatchHandler @ 033f9290 */
                    /* try { // try from 033f90e0 to 034f90eb has its CatchHandler @ 033f928c */
      return;
    }
                    /* try { // try from 033f9028 to 034f902f has its CatchHandler @ 033f92c4 */
    EEOMEMBBGNA__LIPJMNBEHGN(__this,pMVar3,method);
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 033f9040 to 034f9047 has its CatchHandler @ 033f92c0 */
    lVar5 = FUN_01bab718(string___TypeInfo,1);
    if (lVar5 != 0) {
                    /* try { // try from 033f9068 to 034f9077 has its CatchHandler @ 033f92b8 */
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      *(System_String_o **)(lVar5 + 0x20) = (pMVar3->fields).LLBEKLPKDHK;
                    /* try { // try from 033f9078 to 034f9083 has its CatchHandler @ 033f92b4 */
      thunk_FUN_01c20e04();
      uVar2 = StringLiteral_17799;
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar7 = pIVar4->klass;
        uVar1._0_1_ = (pIVar7->_2).rank;
        uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
        uVar8 = (ulong)uVar1;
        if (uVar8 != 0) {
          piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
          do {
                    /* try { // try from 033f90ac to 034f90b7 has its CatchHandler @ 033f9298 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
              pVVar6 = pIVar7->vtable + (*piVar9 + 0xc);
              goto LAB_033f90f4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar4,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033f90f4:
                    /* try { // try from 033f90fc to 034f9107 has its CatchHandler @ 033f9284 */
        NONPLOOOOAG = (System_String_o *)(*pVVar6->methodPtr)(pIVar4,uVar2,lVar5,pVVar6->method);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
                    /* try { // try from 033f9128 to 034f9137 has its CatchHandler @ 033f92ac */
        __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
        if (__this_00 != (AKOMJPINHEN_o *)0x0) {
          method_00 = (MethodInfo *)0x3;
                    /* try { // try from 033f913c to 034f9147 has its CatchHandler @ 033f929c */
          AKOMJPINHEN__GJAEDMLMJIK(__this_00,NONPLOOOOAG,3,true,(MethodInfo *)0x0);
                    /* try { // try from 033f9148 to 034f925b has its CatchHandler @ 033f8e3c */
          pSVar10 = (__this->fields).GDANBHGOGAB;
          pMVar3 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(pMVar3->fields).ANAJGHJEEOC,method_00);
          if (pSVar10 != (System_Action_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033f9178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar10->fields).super.super.invoke_impl)
                      ((pSVar10->fields).super.super.method_code,pMVar3,
                       (pSVar10->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

