// EEOMEMBBGNA$$JIBNOKGNLEN @ RVA 0x32FAE94

void EEOMEMBBGNA__JIBNOKGNLEN(EEOMEMBBGNA_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int32_t EFJNKONCKNF;
  int32_t HAOHGBBPBII;
  ushort uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  MGDJPGGPDJI_o *pMVar4;
  EEGDOGKBLNG_o *pEVar5;
  long lVar6;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  AKOMJPINHEN_o *__this_00;
  int64_t iVar9;
  EEOMEMBBGNA_o *__this_01;
  MethodInfo *method_00;
  Il2CppClass *pIVar10;
  System_Action_MGDJPGGPDJI__o *pSVar11;
  ulong uVar12;
  int32_t *piVar13;
  
  if ((DAT_045676d4 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<HBHFOKIPAHA>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_17802);
    FUN_01bab630(&StringLiteral_10819);
    DAT_045676d4 = 1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__Log(StringLiteral_10819,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    pIVar3 = KEFHDOHHHML__PFNEPJAFEDF<object>
                       (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<HBHFOKIPAHA>__);
    if (((pIVar3 == (Il2CppObject *)0x0) || ((__this->fields).MICFEIBNOLM == (OJEHKJHEBID_o *)0x0))
       || (pMVar4 = EEOMEMBBGNA__MPCGKMBAHHO(__this,(int64_t)pIVar3[2].klass,method),
          pMVar4 == (MGDJPGGPDJI_o *)0x0)) {
      return;
    }
    EFJNKONCKNF = *(int32_t *)&pIVar3[2].monitor;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
      HAOHGBBPBII = (pEVar5->fields).LPMFKCDDEIA;
      (pMVar4->fields).BDPMJNBHKIJ = EFJNKONCKNF;
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar6 = FUN_01bab718(string___TypeInfo,2);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(undefined8 *)(lVar6 + 0x20) = (pMVar4->fields).LLBEKLPKDHK;
          thunk_FUN_01c20e04((undefined8 *)(lVar6 + 0x20));
          pSVar7 = IDGOGBNEGAM__ONLBMMFEPOI(EFJNKONCKNF,(MethodInfo *)0x0);
          if (1 < *(uint *)(lVar6 + 0x18)) {
            *(System_String_o **)(lVar6 + 0x28) = pSVar7;
            thunk_FUN_01c20e04();
            uVar2 = StringLiteral_17802;
            if (pIVar3 != (Il2CppObject *)0x0) {
              pIVar10 = pIVar3->klass;
              uVar1._0_1_ = (pIVar10->_2).rank;
              uVar1._1_1_ = (pIVar10->_2).minimumAlignment;
              uVar12 = (ulong)uVar1;
              if (uVar12 != 0) {
                piVar13 = &((pIVar10->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar13 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar8 = pIVar10->vtable + (*piVar13 + 0xc);
                    goto LAB_033fb0b4;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              pVVar8 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_033fb0b4:
              pSVar7 = (System_String_o *)(*pVVar8->methodPtr)(pIVar3,uVar2,lVar6,pVVar8->method);
              __this_00 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
              if (__this_00 != (AKOMJPINHEN_o *)0x0) {
                AKOMJPINHEN__GJAEDMLMJIK(__this_00,pSVar7,3,true,(MethodInfo *)0x0);
                lVar6 = (pMVar4->fields).ANAJGHJEEOC;
                pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                if (pEVar5 != (EEGDOGKBLNG_o *)0x0) {
                  iVar9 = EEGDOGKBLNG__APCMGOCHMGC(pEVar5,(MethodInfo *)0x0);
                  if (lVar6 == iVar9) {
                    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pEVar5 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    if (pEVar5 == (EEGDOGKBLNG_o *)0x0) goto LAB_033fb174;
                    method_00 = (MethodInfo *)0x0;
                    EEGDOGKBLNG__IJIJACHHPBO
                              (pEVar5,(pMVar4->fields).BDPMJNBHKIJ,true,(MethodInfo *)0x0);
                    EEOMEMBBGNA__ICNCJDCHLJE(__this_01,EFJNKONCKNF,HAOHGBBPBII,method_00);
                  }
                  pSVar11 = (__this->fields).FAEDLDIIDMG;
                  if (pSVar11 != (System_Action_MGDJPGGPDJI__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033fb170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(pSVar11->fields).super.super.invoke_impl)
                              ((pSVar11->fields).super.super.method_code,pMVar4,
                               (pSVar11->fields).super.super.method);
                    return;
                  }
                }
              }
            }
            goto LAB_033fb174;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_033fb174:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

