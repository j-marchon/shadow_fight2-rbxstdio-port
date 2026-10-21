// EEOMEMBBGNA$$OIHOMNDJOMI @ RVA 0x32FA12C

void EEOMEMBBGNA__OIHOMNDJOMI(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  EEGDOGKBLNG_o *__this_00;
  Il2CppClass *pIVar4;
  MGDJPGGPDJI_o *pMVar5;
  long lVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *NONPLOOOOAG;
  AKOMJPINHEN_o *__this_01;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  OJEHKJHEBID_o *pOVar9;
  System_Action_long__o *pSVar10;
  ulong uVar11;
  int32_t *piVar12;
  Il2CppClass *PEJIFIIDFMM;
  
  if ((DAT_045676c8 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<LKAFKHBBNOH>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17800);
    FUN_01bab630(&StringLiteral_10816);
    DAT_045676c8 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10816,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<LKAFKHBBNOH>__);
    if ((pIVar3 == (Il2CppObject *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0)) {
      return;
    }
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      pIVar4 = (Il2CppClass *)EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      PEJIFIIDFMM = pIVar3[2].klass;
      if (PEJIFIIDFMM == pIVar4) {
        pOVar9 = (__this->fields).MICFEIBNOLM;
        if (pOVar9 != (OJEHKJHEBID_o *)0x0) {
          pMVar8 = (MethodInfo *)(pOVar9->fields).GJNOEAKNMOG;
          EEOMEMBBGNA__MONHMPCJOFE
                    ((EEOMEMBBGNA_o *)pIVar4,(int64_t)pIVar4,(System_String_o *)pMVar8,in_x3);
          EEOMEMBBGNA__MECHLOOCDCI(__this,true,pMVar8);
          return;
        }
      }
      else {
        pMVar5 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)PEJIFIIDFMM,method);
        if (pMVar5 != (MGDJPGGPDJI_o *)0x0) {
          pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                             (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 033fa2ac to 034fa4cb has its CatchHandler @ 033fa2ac
                       catch() { ... } // from try @ 033fa2ac with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa5f0 with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa734 with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa73c with catch @ 033fa2ac
                       catch() { ... } // from try @ 033fa808 with catch @ 033fa2ac */
          lVar6 = FUN_01bab718(string___TypeInfo,1);
          if (lVar6 == 0) goto LAB_033fa3d4;
          if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          *(System_String_o **)(lVar6 + 0x20) = (pMVar5->fields).LLBEKLPKDHK;
          thunk_FUN_01c20e04();
          uVar2 = StringLiteral_17800;
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_033fa3d4;
          pIVar4 = pIVar3->klass;
          uVar1._0_1_ = (pIVar4->_2).rank;
          uVar1._1_1_ = (pIVar4->_2).minimumAlignment;
          uVar11 = (ulong)uVar1;
          if (uVar11 != 0) {
            piVar12 = &((pIVar4->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar7 = pIVar4->vtable + (*piVar12 + 0xc);
                goto LAB_033fa350;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033fa350:
          NONPLOOOOAG = (System_String_o *)(*pVVar7->methodPtr)(pIVar3,uVar2,lVar6,pVVar7->method);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
          }
          __this_01 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
          if (__this_01 == (AKOMJPINHEN_o *)0x0) goto LAB_033fa3d4;
          AKOMJPINHEN__GJAEDMLMJIK(__this_01,NONPLOOOOAG,3,true,(MethodInfo *)0x0);
        }
        pSVar10 = (__this->fields).KBBECJNEHBM;
        if (pSVar10 != (System_Action_long__o *)0x0) {
          pMVar8 = (MethodInfo *)(pSVar10->fields).super.super.method;
          (*(code *)(pSVar10->fields).super.super.invoke_impl)
                    ((pSVar10->fields).super.super.method_code,PEJIFIIDFMM);
          EEOMEMBBGNA__MCDBOKFCGNK(__this,(int64_t)PEJIFIIDFMM,pMVar8);
          return;
        }
      }
    }
  }
LAB_033fa3d4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

