// FGKGKDEJCOG$$MBANNEKMPCD @ RVA 0x3333C60

void FGKGKDEJCOG__MBANNEKMPCD
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Il2CppType *handle;
  undefined8 uVar3;
  bool bVar4;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *CJNHFNHJHPE;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  System_Type_o *BKFOLMBMFNP;
  ACHLOMELAJE_o *pAVar7;
  Il2CppClass *pIVar8;
  ulong uVar9;
  int32_t *piVar10;
  undefined8 local_28;
  
  if ((DAT_04567934 & 1) == 0) {
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&FGKGKDEJCOG_var);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    FUN_01bab630(&StringLiteral_8320);
    FUN_01bab630(&StringLiteral_10148);
    DAT_04567934 = 1;
  }
  local_28 = 0;
  LBJNDMNEJJB = EIABCPKDEBD__NHPDFFAIJMF(AHDGNOJPPIB,StringLiteral_8320,(MethodInfo *)0x0);
  CJNHFNHJHPE = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,(System_String_o *)0x0,(MethodInfo *)0x0);
  bVar4 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar4) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar7 == (ACHLOMELAJE_o *)0x0) goto LAB_03433ec8;
    CJNHFNHJHPE = (pAVar7->fields).KKPKGEFBCGA;
  }
  pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar5->klass;
    uVar1._0_1_ = (pIVar8->_2).rank;
    uVar1._1_1_ = (pIVar8->_2).minimumAlignment;
    uVar9 = (ulong)uVar1;
    if (uVar9 != 0) {
      piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar6 = pIVar8->vtable + (*piVar10 + 0xf);
          goto LAB_03433ddc;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,0xf);
LAB_03433ddc:
    uVar9 = (*pVVar6->methodPtr)(pIVar5,CJNHFNHJHPE,&local_28,pVVar6->method);
    handle = FGKGKDEJCOG_var;
    if ((uVar9 & 1) == 0) {
      if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      BKFOLMBMFNP = System_Type__GetTypeFromHandle
                              ((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      KFJJHMDIFIG__DHAAGKPHJLA(BKFOLMBMFNP,StringLiteral_10148,(MethodInfo *)0x0);
    }
    else {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      uVar3 = local_28;
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_03433ec8;
      pIVar8 = pIVar5->klass;
      uVar2._0_1_ = (pIVar8->_2).rank;
      uVar2._1_1_ = (pIVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pIVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
            pVVar6 = pIVar8->vtable + (*piVar10 + 7);
            goto LAB_03433ea0;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,BLEFOFGCKEF_TypeInfo,7);
LAB_03433ea0:
      (*pVVar6->methodPtr)(pIVar5,uVar3,1,1,pVVar6->method);
    }
    return;
  }
LAB_03433ec8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

