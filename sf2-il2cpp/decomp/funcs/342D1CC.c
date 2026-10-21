// MatchingDialog$$FJDBDGPPHNO @ RVA 0x342D1CC

void MatchingDialog__FJDBDGPPHNO(MatchingDialog_o *__this,MethodInfo *method)

{
  uint32_t *puVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint32_t uVar5;
  CBOEGGBIJMD_o *pCVar6;
  Il2CppObject *pIVar7;
  long lVar8;
  System_String_o *pSVar9;
  VirtualInvokeData *pVVar10;
  undefined8 uVar11;
  MethodInfo *extraout_x1;
  Il2CppClass *pIVar12;
  ulong uVar13;
  int32_t *piVar14;
  Nekki_SF2_GUI_LabelAlias_o *pNVar15;
  
  if ((DAT_0456814d & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&MatchingDialog_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_10917);
    DAT_0456814d = 1;
    method = extraout_x1;
  }
  uVar5 = (__this->fields).BEKILJPCMCH;
  if (uVar5 != 0) {
    (__this->fields).BEKILJPCMCH = uVar5 - 1;
    return;
  }
  if ((MatchingDialog_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MatchingDialog_TypeInfo,method);
  }
  pCVar6 = MatchingDialog_TypeInfo->static_fields->OCDOOJLNNAL;
  if (pCVar6 != (CBOEGGBIJMD_o *)0x0) {
    uVar5 = CBOEGGBIJMD__HLMBDJOGONJ(pCVar6,2,8,(MethodInfo *)0x0);
    (__this->fields).BEKILJPCMCH = uVar5;
    if ((MatchingDialog_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pCVar6 = MatchingDialog_TypeInfo->static_fields->OCDOOJLNNAL;
    if (pCVar6 != (CBOEGGBIJMD_o *)0x0) {
      uVar5 = CBOEGGBIJMD__HLMBDJOGONJ(pCVar6,0,4,(MethodInfo *)0x0);
      if (uVar5 - 1 == 0) {
        return;
      }
      uVar3 = (__this->fields).JBMHJLNACKE;
      puVar1 = &(__this->fields).NDOHFCNNKFA;
      uVar2 = (__this->fields).NDOHFCNNKFA + (uVar5 - 1);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      (__this->fields).NDOHFCNNKFA = uVar2;
      if (uVar3 <= uVar2) {
        *puVar1 = uVar3 - 1;
      }
      pNVar15 = (__this->fields)._matchingLabel;
      pIVar7 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      lVar8 = FUN_01bab718(string___TypeInfo,2);
      pSVar9 = System_UInt32__ToString((uint32_t)puVar1,(MethodInfo *)0x0);
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x18) != 0) {
          *(undefined8 *)(lVar8 + 0x20) = pSVar9;
          thunk_FUN_01c20e04((undefined8 *)(lVar8 + 0x20),pSVar9);
          pSVar9 = System_UInt32__ToString((int)__this + 0x114,(MethodInfo *)0x0);
          if (1 < *(uint *)(lVar8 + 0x18)) {
            *(System_String_o **)(lVar8 + 0x28) = pSVar9;
            thunk_FUN_01c20e04();
            uVar11 = StringLiteral_10917;
            if (pIVar7 != (Il2CppObject *)0x0) {
              pIVar12 = pIVar7->klass;
              uVar4._0_1_ = (pIVar12->_2).rank;
              uVar4._1_1_ = (pIVar12->_2).minimumAlignment;
              uVar13 = (ulong)uVar4;
              if (uVar13 != 0) {
                piVar14 = &((pIVar12->_1).interfaceOffsets)->offset;
                do {
                  if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                      (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
                    pVVar10 = pIVar12->vtable + (*piVar14 + 0xc);
                    goto LAB_0352d3dc;
                  }
                  uVar13 = uVar13 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar13 != 0);
              }
              pVVar10 = (VirtualInvokeData *)FUN_01b81914(pIVar7,BLEFOFGCKEF_TypeInfo,0xc);
LAB_0352d3dc:
              uVar11 = (*pVVar10->methodPtr)(pIVar7,uVar11,lVar8,pVVar10->method);
              if (pNVar15 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0352d414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(pNVar15->klass->vtable)._75_set_text.methodPtr)
                          (pNVar15,uVar11,(pNVar15->klass->vtable)._75_set_text.method);
                return;
              }
            }
            goto LAB_0352d418;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_0352d418:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

