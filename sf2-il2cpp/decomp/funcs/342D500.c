// MatchingDialog$$DCNEAIGAIME @ RVA 0x342D500

void MatchingDialog__DCNEAIGAIME
               (MatchingDialog_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  KKLJIDJBFEI_o *pKVar4;
  System_Action_KEFHDOHHHML__o *EKDIECDFOIO;
  PBAKFOBIHEG_o *pPVar5;
  System_Collections_IEnumerator_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_String_o *pSVar8;
  System_String_o *str3;
  CPNHNIKFGFB_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  PBAKFOBIHEG_c *pPVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Collections_IEnumerator_o **ppSVar12;
  DCHAJIMIFHP_o *__this_01;
  int32_t local_24;
  
  if ((DAT_0456814f & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_MatchingDialog_OMECKMHLPPP__);
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_20405);
    FUN_01bab630(&StringLiteral_8861);
    DAT_0456814f = 1;
  }
  local_24 = 0;
  if (IDCGLBOIAFJ == (KEFHDOHHHML_o *)0x0) {
LAB_0352d790:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0);
  if (bVar3) {
    if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField == false) {
      pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
        __this_01 = (pKVar4->fields).super.FNHOHLGNHGN;
        EKDIECDFOIO = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_01 != (DCHAJIMIFHP_o *)0x0) {
          DCHAJIMIFHP__MPFFOIIBAKO(__this_01,StringLiteral_20405,EKDIECDFOIO,(MethodInfo *)0x0);
          MatchingDialog__DAKEBOMPALG(__this,method_00);
          pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
          pSVar6 = MatchingDialog__HBJFPCAIHGO(__this,method_01);
          if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
            pPVar9 = pPVar5->klass;
            uVar2._0_1_ = (pPVar9->_2).rank;
            uVar2._1_1_ = (pPVar9->_2).minimumAlignment;
            uVar10 = (ulong)uVar2;
            if (uVar10 != 0) {
              piVar11 = &((pPVar9->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                    (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
                  pVVar7 = pPVar9->vtable + *piVar11;
                  goto LAB_0352d750;
                }
                uVar10 = uVar10 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar10 != 0);
            }
            pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,0);
LAB_0352d750:
            pSVar6 = (System_Collections_IEnumerator_o *)
                     (*pVVar7->methodPtr)(pPVar5,pSVar6,1,pVVar7->method);
            ppSVar12 = &(__this->fields).PHELMNCGAKF;
            *ppSVar12 = pSVar6;
            thunk_FUN_01c20e04(ppSVar12,pSVar6);
            return;
          }
        }
      }
      goto LAB_0352d790;
    }
  }
  else {
    local_24 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
    pSVar8 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
    str3 = KEFHDOHHHML__MMKHHPBIDDN(IDCGLBOIAFJ,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat
                       (StringLiteral_8861,pSVar8,StringLiteral_167,str3,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    if ((__this->fields).super.super._BOGAKJOFOEK_k__BackingField == false) {
      iVar1 = (IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField;
      __this_00 = CPNHNIKFGFB__AIHNLLGNBLC((MethodInfo *)0x0);
      if (__this_00 == (CPNHNIKFGFB_o *)0x0) goto LAB_0352d790;
      if (iVar1 == 0x2716) {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,0x2716,(MethodInfo *)0x0);
      }
      else {
        CPNHNIKFGFB__DIGPCFKCCBK(__this_00,0x29c3,(MethodInfo *)0x0);
        if ((IDCGLBOIAFJ->fields)._JOCIAOOICNM_k__BackingField != 1) {
          MatchingDialog__LGMIPDOLEBO(__this,method_02);
          return;
        }
      }
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
    }
  }
  return;
}

