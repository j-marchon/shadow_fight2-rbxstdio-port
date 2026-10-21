// OGHIOMKFPLH$$DGCEOJNFICD @ RVA 0x345F630

bool OGHIOMKFPLH__DGCEOJNFICD(MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  byte bVar3;
  ACHLOMELAJE_o *__this;
  GCPFDLNAFDF_o *pGVar4;
  VirtualInvokeData *pVVar5;
  GCPFDLNAFDF_c *pGVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o *pSVar9;
  
  if ((DAT_045682e0 & 1) == 0) {
    FUN_01bab630(&HFHIKPAKJFG_TypeInfo);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
    FUN_01bab630(&POHNPIMJDOI_TypeInfo);
    DAT_045682e0 = 1;
  }
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
  bVar3 = 0;
  if (NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField != (ACHLOMELAJE_o *)0x0) {
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
    __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (__this == (ACHLOMELAJE_o *)0x0) {
LAB_0355f8b8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = ACHLOMELAJE__MFDMDBEKDAD(__this,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_04567a78 == '\0') {
        FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
        DAT_04567a78 = '\x01';
      }
      if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                        (OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pGVar4 = IFAMAAGNCBJ__AEJPBJCBICK((MethodInfo *)0x0);
        if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(OGHIOMKFPLH_TypeInfo);
        }
        if (DAT_04567a78 == '\0') {
          FUN_01bab630(&OGHIOMKFPLH_TypeInfo);
          DAT_04567a78 = '\x01';
        }
        if ((OGHIOMKFPLH_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pSVar9 = OGHIOMKFPLH_TypeInfo->static_fields->_ADLDJLCDIMD_k__BackingField;
        if ((POHNPIMJDOI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(POHNPIMJDOI_TypeInfo);
        }
        pSVar9 = POHNPIMJDOI__CLACEPEKAIM(pSVar9,(MethodInfo *)0x0);
        if (pGVar4 != (GCPFDLNAFDF_o *)0x0) {
          pGVar6 = pGVar4->klass;
          uVar1._0_1_ = (pGVar6->_2).rank;
          uVar1._1_1_ = (pGVar6->_2).minimumAlignment;
          uVar7 = (ulong)uVar1;
          if (uVar7 != 0) {
            piVar8 = &((pGVar6->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
                  (Il2CppClass *)HFHIKPAKJFG_TypeInfo) {
                pVVar5 = pGVar6->vtable + (*piVar8 + 9);
                goto LAB_0355f894;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          pVVar5 = (VirtualInvokeData *)FUN_01b81914(pGVar4,HFHIKPAKJFG_TypeInfo,9);
LAB_0355f894:
          bVar3 = (*pVVar5->methodPtr)(pGVar4,pSVar9,pVVar5->method);
          bVar3 = bVar3 ^ 1;
          goto LAB_0355f8a8;
        }
        goto LAB_0355f8b8;
      }
    }
    bVar3 = 0;
  }
LAB_0355f8a8:
  return (bool)(bVar3 & 1);
}

