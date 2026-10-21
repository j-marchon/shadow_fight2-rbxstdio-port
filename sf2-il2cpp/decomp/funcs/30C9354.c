// JIBAEMHNBOF$$MEMCFFLLBMA @ RVA 0x30C9354

void JIBAEMHNBOF__MEMCFFLLBMA(JIBAEMHNBOF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  VirtualInvokeData *pVVar3;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *JENJDCENCHA;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *method_00;
  KCJCIJHMEJF_c *pKVar4;
  ulong uVar5;
  int32_t *piVar6;
  KCJCIJHMEJF_o *pKVar7;
  
  if ((DAT_045662cd & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5201);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5202);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&KCJCIJHMEJF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662cd = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_045662dd == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045662dd = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pKVar7 = NLPJLHOEAOE_TypeInfo->static_fields->_CODLGIOEMPL_k__BackingField;
  if (pKVar7 != (KCJCIJHMEJF_o *)0x0) {
    pKVar4 = pKVar7->klass;
    uVar1._0_1_ = (pKVar4->_2).rank;
    uVar1._1_1_ = (pKVar4->_2).minimumAlignment;
    uVar5 = (ulong)uVar1;
    if (uVar5 != 0) {
      piVar6 = &((pKVar4->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar6 + -2))->interfaceType ==
            (Il2CppClass *)KCJCIJHMEJF_TypeInfo) {
          pVVar3 = pKVar4->vtable + (*piVar6 + 4);
          goto LAB_031c947c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    pVVar3 = (VirtualInvokeData *)FUN_01b81914(pKVar7,KCJCIJHMEJF_TypeInfo,4);
LAB_031c947c:
    (*pVVar3->methodPtr)(pKVar7,pVVar3->method);
    MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)MOPNMEHIMFJ,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5201,(MethodInfo *)0x0)
    ;
    LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)LFINFBNOLFG,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_5202,(MethodInfo *)0x0)
    ;
    JENJDCENCHA = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
    bVar2 = PHLKGOCKIGP__COOGOEJJHMK(JENJDCENCHA,(MethodInfo *)0x0);
    method_00 = extraout_x1_02;
    if (bVar2) {
      __this_00 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (__this_00 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_031c9504;
      Nekki_SF2_Core_Quests_QuestsManager__RunQuests(__this_00,(MethodInfo *)0x0);
      method_00 = extraout_x1_03;
    }
    JIBAEMHNBOF__MJLBCAGDDFG(__this,method_00);
    return;
  }
LAB_031c9504:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

