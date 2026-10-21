// CHDGOFBHAFI$$LKBMEILOMKO @ RVA 0x32449D4

void CHDGOFBHAFI__LKBMEILOMKO(CHDGOFBHAFI_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  CHDGOFBHAFI_o *__this_00;
  Il2CppObject *pIVar3;
  long lVar4;
  HCKCBFOGMMJ_o *__this_01;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  AKOMJPINHEN_o *__this_02;
  MethodInfo *in_x3;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  
  if ((DAT_045670ac & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16984);
    DAT_045670ac = 1;
  }
  if (IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) {
    __this_00 = (CHDGOFBHAFI_o *)
                KEFHDOHHHML__PFNEPJAFEDF<object>
                          (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<NODLJPNGNBG>__);
    CHDGOFBHAFI__PKKGAFHHDMN
              (__this_00,(__this->fields).AABMLCNHHPN,(NODLJPNGNBG_o *)__this_00,in_x3);
    if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
      if (*(int *)&(__this_00->fields).MHOOOLECDKK != 3) {
        return;
      }
      pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar4 = FUN_01bab718(string___TypeInfo,1);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
      }
      __this_01 = HJPEKDOPBHN__OGBJOOPBEFG((MethodInfo *)0x0);
      if ((__this_01 != (HCKCBFOGMMJ_o *)0x0) &&
         (pSVar5 = HCKCBFOGMMJ__OKJEEFHMCCD
                             (__this_01,(int64_t)(__this_00->fields).LMKOLDHCAAK,true,
                              (MethodInfo *)0x0), lVar4 != 0)) {
        if (*(int *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        *(System_String_o **)(lVar4 + 0x20) = pSVar5;
        thunk_FUN_01c20e04();
        uVar2 = StringLiteral_16984;
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar7 = pIVar3->klass;
          uVar1._0_1_ = (pIVar7->_2).rank;
          uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar1;
          if (uVar8 != 0) {
            piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                pVVar6 = pIVar7->vtable + (*piVar9 + 0xc);
                goto LAB_03344b70;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar3,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03344b70:
          pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(pIVar3,uVar2,lVar4,pVVar6->method);
          __this_02 = HJPEKDOPBHN__BMIEIJAJNAJ((MethodInfo *)0x0);
          if (__this_02 != (AKOMJPINHEN_o *)0x0) {
            AKOMJPINHEN__GJAEDMLMJIK(__this_02,pSVar5,2,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

