// KEIAEKNFNNA$$JEAINNIBMLG @ RVA 0x3507E04

int64_t KEIAEKNFNNA__JEAINNIBMLG
                  (KEIAEKNFNNA_o *__this,Core_Configs_Models_LocalDailyQuestInfo_o *GJDCFLEEBLM,
                  MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ACHLOMELAJE_o *__this_00;
  VirtualInvokeData *pVVar4;
  long lVar5;
  int64_t iVar6;
  Core_Configs_Models_LocalDailyConfig_o *pCVar7;
  System_Collections_Generic_IReadOnlyDictionary_int__long__c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Collections_Generic_IReadOnlyDictionary_int__long__o *pSVar11;
  float fVar12;
  
  if ((DAT_045688a5 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IReadOnlyDictionary<int,_long>_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045688a5 = 1;
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
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    uVar2 = ACHLOMELAJE__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo);
    }
    uVar3 = MGNPHCAAEIO__DGJACOJNPBB((MethodInfo *)0x0);
    pCVar7 = (__this->fields).DCAEFFHDMGE;
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    if ((int)uVar2 < 2) {
      uVar2 = 1;
    }
    if ((pCVar7 != (Core_Configs_Models_LocalDailyConfig_o *)0x0) &&
       (pSVar11 = (pCVar7->fields)._MoneyRewardByLevel_k__BackingField,
       pSVar11 != (System_Collections_Generic_IReadOnlyDictionary_int__long__o *)0x0)) {
      pSVar8 = pSVar11->klass;
      uVar1._0_1_ = (pSVar8->_2).rank;
      uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
        piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyDictionary<int,_long>_TypeInfo) {
            pVVar4 = pSVar8->vtable + (*piVar10 + 2);
            goto LAB_03607f54;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(pSVar11,
                            System_Collections_Generic_IReadOnlyDictionary<int,_long>_TypeInfo,2);
LAB_03607f54:
      lVar5 = (*pVVar4->methodPtr)(pSVar11,(ulong)uVar2,pVVar4->method);
      if (GJDCFLEEBLM != (Core_Configs_Models_LocalDailyQuestInfo_o *)0x0) {
        fVar12 = (GJDCFLEEBLM->fields)._MoneyMultiplier_k__BackingField;
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        fVar12 = fVar12 * (float)lVar5;
        iVar6 = -0x8000000000000000;
        if (fVar12 != INFINITY) {
          iVar6 = (long)fVar12;
        }
        iVar6 = MGNPHCAAEIO__ADEEECDDBPN(iVar6,0,(MethodInfo *)0x0);
        return iVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

