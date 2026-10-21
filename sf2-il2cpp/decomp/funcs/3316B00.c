// MKFAKELPPAC$$NMMOMDNDAAD @ RVA 0x3316B00

bool MKFAKELPPAC__NMMOMDNDAAD(MKFAKELPPAC_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar3;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar4;
  NDPMLPGANCI_o *__this_00;
  int64_t iVar5;
  GCPFDLNAFDF_o *pGVar6;
  VirtualInvokeData *pVVar7;
  long lVar8;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  GCPFDLNAFDF_c *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  ACHLOMELAJE_o *__this_01;
  long lVar12;
  
  if ((DAT_045677e0 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6547);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6548);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&GLOBPAMKCCE_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045677e0 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  __this_01 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6547,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6548,(MethodInfo *)0x0);
  pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (__this_01 != (ACHLOMELAJE_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pMVar4 = ACHLOMELAJE__HKIEGNBOFCD(__this_01,pSVar3,0,(MethodInfo *)0x0);
    if (pMVar4 == (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0) {
      pSVar3 = (System_String_o *)0x0;
    }
    else {
      pSVar3 = (pMVar4->fields).JAICMIMBIOA;
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      bVar2 = NDPMLPGANCI__CDFDLPCIFCC(__this_00,(MethodInfo *)0x0);
      if ((bVar2) || (bVar2 = MKFAKELPPAC__HCPKDCBMMBA(__this,7,method_00), !bVar2)) {
        return false;
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04565b87 == '\0') {
        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
        DAT_04565b87 = '\x01';
      }
      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      lVar12 = NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM;
      iVar5 = PCOEHCPGBBG__NEDKJCKICNF(pSVar3,0,(MethodInfo *)0x0);
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
      }
      pGVar6 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
      if (pGVar6 != (GCPFDLNAFDF_o *)0x0) {
        pGVar9 = pGVar6->klass;
        uVar1._0_1_ = (pGVar9->_2).rank;
        uVar1._1_1_ = (pGVar9->_2).minimumAlignment;
        uVar10 = (ulong)uVar1;
        if (uVar10 != 0) {
          piVar11 = &((pGVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                (Il2CppClass *)GLOBPAMKCCE_TypeInfo) {
              pVVar7 = pGVar9->vtable + (*piVar11 + 1);
              goto LAB_03416d60;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        pVVar7 = (VirtualInvokeData *)FUN_01b81914(pGVar6,GLOBPAMKCCE_TypeInfo,1);
LAB_03416d60:
        lVar8 = (*pVVar7->methodPtr)(pGVar6,pVVar7->method);
        if (lVar8 != 0) {
          return (long)*(int *)(lVar8 + 0x18) <= lVar12 - iVar5;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

