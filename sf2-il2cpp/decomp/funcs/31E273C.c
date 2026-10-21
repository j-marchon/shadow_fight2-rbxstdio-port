// GBAAAJLKFDA.BGCAJLLEIPM$$BFDHBIJKKHK @ RVA 0x31E273C

void GBAAAJLKFDA_BGCAJLLEIPM__BFDHBIJKKHK
               (GBAAAJLKFDA_BGCAJLLEIPM_o *__this,DMKKAPNMDKJ_o *response,MethodInfo *method)

{
  ushort uVar1;
  undefined8 uVar2;
  bool bVar3;
  GBAAAJLKFDA_BGCAJLLEIPM_o *__this_00;
  VirtualInvokeData *pVVar4;
  long *plVar5;
  undefined8 *puVar6;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  GBAAAJLKFDA_NPHBGNFGBKL_o *pGVar7;
  GBAAAJLKFDA_o *pGVar8;
  CJLNLIOJFLM_c *pCVar9;
  long lVar10;
  BKMILGLGFCM_o *pBVar11;
  System_Action_DMKKAPNMDKJ__o *pSVar12;
  ulong uVar13;
  int32_t *piVar14;
  int *piVar15;
  CJLNLIOJFLM_o *pCVar16;
  undefined8 local_28;
  
  __this_00 = __this;
  if ((DAT_04566d4d & 1) == 0) {
    FUN_01bab630(&CJLNLIOJFLM_TypeInfo);
    FUN_01bab630(&UniRx_IReactiveProperty<Nullable<int>>_TypeInfo);
    __this_00 = (GBAAAJLKFDA_BGCAJLLEIPM_o *)FUN_01bab630(&Method_System_Nullable<int>__ctor__);
    DAT_04566d4d = 1;
  }
  if (response != (DMKKAPNMDKJ_o *)0x0) {
    if ((response->fields).PEKGJKIHHKJ == false) {
      if ((__this->fields).isLastAttempt == false) {
        pGVar7 = (__this->fields).CS___8__locals1;
        if ((pGVar7 == (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) ||
           ((pGVar7->fields).__4__this == (GBAAAJLKFDA_o *)0x0)) goto LAB_032e2954;
        method_00 = (MethodInfo *)(response->fields).MNPPNIGBPBD;
        bVar3 = GBAAAJLKFDA__AEBJBGAOPJP
                          ((GBAAAJLKFDA_o *)__this_00,(response->fields).BEIPGOKBAEI,
                           (int64_t)method_00,in_x3);
        if (bVar3) {
          pGVar7 = (__this->fields).CS___8__locals1;
          if (pGVar7 != (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) {
            GBAAAJLKFDA_NPHBGNFGBKL__CFKEANHONJK(pGVar7,(__this->fields).attempt + 1,method_00);
            return;
          }
          goto LAB_032e2954;
        }
      }
      pGVar7 = (__this->fields).CS___8__locals1;
      if ((pGVar7 != (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) &&
         (pBVar11 = (pGVar7->fields).parameters, pBVar11 != (BKMILGLGFCM_o *)0x0)) {
        pSVar12 = (pBVar11->fields).MIMKJIKCPGP;
        if (pSVar12 == (System_Action_DMKKAPNMDKJ__o *)0x0) {
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x032e2874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,response,
                   (pSVar12->fields).super.super.method);
        return;
      }
    }
    else {
      pGVar7 = (__this->fields).CS___8__locals1;
      if (((pGVar7 != (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) &&
          (pGVar8 = (pGVar7->fields).__4__this, pGVar8 != (GBAAAJLKFDA_o *)0x0)) &&
         (pCVar16 = (pGVar8->fields).CMJNDHHGCBI, pCVar16 != (CJLNLIOJFLM_o *)0x0)) {
        pCVar9 = pCVar16->klass;
        uVar1._0_1_ = (pCVar9->_2).rank;
        uVar1._1_1_ = (pCVar9->_2).minimumAlignment;
        uVar13 = (ulong)uVar1;
        if (uVar13 != 0) {
          piVar14 = &((pCVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)CJLNLIOJFLM_TypeInfo) {
              pVVar4 = pCVar9->vtable + *piVar14;
              goto LAB_032e2884;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
        pVVar4 = (VirtualInvokeData *)FUN_01b81914(pCVar16,CJLNLIOJFLM_TypeInfo,0);
LAB_032e2884:
        plVar5 = (long *)(*pVVar4->methodPtr)(pCVar16,pVVar4->method);
        local_28 = 0;
        System_Nullable<int>___ctor
                  ((System_Nullable_int__o)&local_28,(__this->fields).zone.fields.Item1,
                   Method_System_Nullable<int>__ctor__);
        uVar2 = local_28;
        if (plVar5 != (long *)0x0) {
          lVar10 = *plVar5;
          uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar13 != 0) {
            piVar15 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(UniRx_IReactiveProperty_Nullable_int___c **)(piVar15 + -2) ==
                  UniRx_IReactiveProperty<Nullable<int>>_TypeInfo) {
                puVar6 = (undefined8 *)(lVar10 + (long)(*piVar15 + 1) * 0x10 + 0x138);
                goto LAB_032e2908;
              }
              uVar13 = uVar13 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar13 != 0);
          }
          puVar6 = (undefined8 *)
                   FUN_01b81914(plVar5,UniRx_IReactiveProperty<Nullable<int>>_TypeInfo,1);
LAB_032e2908:
          (*(code *)*puVar6)(plVar5,uVar2,puVar6[1]);
          pGVar7 = (__this->fields).CS___8__locals1;
          if ((pGVar7 != (GBAAAJLKFDA_NPHBGNFGBKL_o *)0x0) &&
             (pBVar11 = (pGVar7->fields).parameters, pBVar11 != (BKMILGLGFCM_o *)0x0)) {
            pSVar12 = (pBVar11->fields).MIMKJIKCPGP;
            if (pSVar12 == (System_Action_DMKKAPNMDKJ__o *)0x0) {
              return;
            }
            (*(code *)(pSVar12->fields).super.super.invoke_impl)
                      ((pSVar12->fields).super.super.method_code,response,
                       (pSVar12->fields).super.super.method);
            return;
          }
        }
      }
    }
  }
LAB_032e2954:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

