// EINKKMIHCHI$$EBHHFBBIJEK @ RVA 0x34C76C0

void EINKKMIHCHI__EBHHFBBIJEK
               (EINKKMIHCHI_o *__this,int32_t MNPKIDDPNBM,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *NDLNFCBLAPK,
               System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int32_t iVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  VirtualInvokeData *pVVar6;
  System_String_o *__this_00;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_c *pGVar7;
  System_Action_string__byte____o *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  System_Enum_o local_58;
  int32_t local_48;
  
  if ((DAT_04568647 & 1) == 0) {
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_5498);
    FUN_01bab630(&StringLiteral_5916);
    FUN_01bab630(&StringLiteral_1377);
    FUN_01bab630(&StringLiteral_21950);
    FUN_01bab630(&StringLiteral_1381);
    DAT_04568647 = 1;
  }
  if (MNPKIDDPNBM != 1) {
    local_58.klass =
         (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = MNPKIDDPNBM;
    pSVar5 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(StringLiteral_5916,pSVar5,(MethodInfo *)0x0);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar5,(MethodInfo *)0x0);
    return;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values == (System_String_array *)0x0) goto LAB_035c7a80;
  if ((int)values->max_length != 0) {
    values->m_Items[0] = StringLiteral_5498;
    thunk_FUN_01c20e04(values->m_Items);
    local_58.klass =
         (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_58.monitor = (void *)0xffffffffffffffff;
    local_48 = 1;
    pSVar5 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = pSVar5;
      thunk_FUN_01c20e04(values->m_Items + 1,pSVar5);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = StringLiteral_1381;
        thunk_FUN_01c20e04();
        if (NDLNFCBLAPK == (GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *)0x0) {
LAB_035c7a80:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar7 = NDLNFCBLAPK->klass;
        uVar1._0_1_ = (pGVar7->_2).rank;
        uVar1._1_1_ = (pGVar7->_2).minimumAlignment;
        uVar9 = (ulong)uVar1;
        if (uVar9 != 0) {
          piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
              pVVar6 = pGVar7->vtable + (*piVar10 + 2);
              goto LAB_035c78c0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        pVVar6 = (VirtualInvokeData *)
                 FUN_01b81914(NDLNFCBLAPK,
                              GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,2);
LAB_035c78c0:
        pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(NDLNFCBLAPK,pVVar6->method);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = pSVar5;
          thunk_FUN_01c20e04(values->m_Items + 3,pSVar5);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = StringLiteral_1377;
            thunk_FUN_01c20e04();
            pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
            NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar5,(MethodInfo *)0x0);
            pGVar7 = NDLNFCBLAPK->klass;
            uVar2._0_1_ = (pGVar7->_2).rank;
            uVar2._1_1_ = (pGVar7->_2).minimumAlignment;
            uVar9 = (ulong)uVar2;
            if (uVar9 != 0) {
              piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
                  pVVar6 = pGVar7->vtable + (*piVar10 + 2);
                  goto LAB_035c797c;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            pVVar6 = (VirtualInvokeData *)
                     FUN_01b81914(NDLNFCBLAPK,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,2);
LAB_035c797c:
            pSVar5 = (System_String_o *)(*pVVar6->methodPtr)(NDLNFCBLAPK,pVVar6->method);
            pGVar7 = NDLNFCBLAPK->klass;
            uVar3._0_1_ = (pGVar7->_2).rank;
            uVar3._1_1_ = (pGVar7->_2).minimumAlignment;
            uVar9 = (ulong)uVar3;
            if (uVar9 != 0) {
              piVar10 = &((pGVar7->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
                  pVVar6 = pGVar7->vtable + (*piVar10 + 2);
                  goto LAB_035c79dc;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            pVVar6 = (VirtualInvokeData *)
                     FUN_01b81914(NDLNFCBLAPK,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,2);
LAB_035c79dc:
            __this_00 = (System_String_o *)(*pVVar6->methodPtr)(NDLNFCBLAPK,pVVar6->method);
            if (((__this_00 != (System_String_o *)0x0) &&
                (iVar4 = System_String__IndexOf(__this_00,StringLiteral_21950,(MethodInfo *)0x0),
                StringLiteral_21950 != (System_String_o *)0x0)) &&
               (pSVar5 != (System_String_o *)0x0)) {
              pSVar5 = System_String__Substring
                                 (pSVar5,(StringLiteral_21950->fields)._stringLength + iVar4,
                                  (MethodInfo *)0x0);
              if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(NHJCFGACFDF_TypeInfo);
              }
              pSVar8 = NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
              if (pSVar8 != (System_Action_string__byte____o *)0x0) {
                (*(code *)(pSVar8->fields).super.super.invoke_impl)
                          ((pSVar8->fields).super.super.method_code,pSVar5,IMMNELPBGIF,
                           (pSVar8->fields).super.super.method);
                return;
              }
            }
            goto LAB_035c7a80;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

