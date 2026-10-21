// EINKKMIHCHI$$BHBIGEDOOKD @ RVA 0x34C6B40

void EINKKMIHCHI__BHBIGEDOOKD
               (EINKKMIHCHI_o *__this,int32_t MNPKIDDPNBM,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *FFBGEAILDNO,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  System_String_o *message;
  GooglePlayGames_PlayGamesPlatform_o *__this_01;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar6;
  undefined8 uVar7;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_c *pGVar8;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar9;
  ulong uVar10;
  int32_t *piVar11;
  System_Enum_o local_58;
  int32_t local_48;
  int64_t local_40;
  System_DateTime_Fields local_38;
  
  if ((DAT_0456863f & 1) == 0) {
    FUN_01bab630(&System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_IDCCBIDEPFC_EHMAAPAFAOF__);
    FUN_01bab630(&EINKKMIHCHI_IDCCBIDEPFC_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SelectUIStatus_TypeInfo);
    FUN_01bab630(&StringLiteral_15469);
    FUN_01bab630(&StringLiteral_15470);
    FUN_01bab630(&StringLiteral_17894);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_5928);
    DAT_0456863f = 1;
  }
  local_40 = 0;
  local_38._dateData = 0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(EINKKMIHCHI_IDCCBIDEPFC_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    *(int32_t *)&__this_00[1].monitor = MNPKIDDPNBM;
    if (MNPKIDDPNBM != 1) {
      local_58.klass = (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SelectUIStatus_TypeInfo;
      local_58.monitor = (void *)0xffffffffffffffff;
      local_48 = MNPKIDDPNBM;
      pSVar5 = System_Enum__ToString(&local_58,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat(StringLiteral_5928,pSVar5,(MethodInfo *)0x0);
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar5,(MethodInfo *)0x0);
      return;
    }
    if (FFBGEAILDNO != (GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *)0x0) {
      pGVar8 = FFBGEAILDNO->klass;
      uVar1._0_1_ = (pGVar8->_2).rank;
      uVar1._1_1_ = (pGVar8->_2).minimumAlignment;
      uVar10 = (ulong)uVar1;
      if (uVar10 != 0) {
        piVar11 = &((pGVar8->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
              (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
            pVVar4 = pGVar8->vtable + (*piVar11 + 1);
            goto LAB_035c6d0c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      pVVar4 = (VirtualInvokeData *)
               FUN_01b81914(FFBGEAILDNO,
                            GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo,1);
LAB_035c6d0c:
      pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(FFBGEAILDNO,pVVar4->method);
      bVar3 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
      if (bVar3) {
        if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_15470,StringLiteral_1,(MethodInfo *)0x0);
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        local_38._dateData = (uint64_t)System_DateTime__get_Now((MethodInfo *)0x0);
        local_40 = System_DateTime__ToBinary((System_DateTime_o)&local_38,(MethodInfo *)0x0);
        pSVar5 = System_Int64__ToString((int64_t)&local_40,(MethodInfo *)0x0);
        pSVar5 = System_String__Concat(StringLiteral_17894,pSVar5,(MethodInfo *)0x0);
      }
      message = System_String__Concat(StringLiteral_15469,pSVar5,(MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
      __this_01 = (__this->fields).GJOCPBIBFCD;
      if (__this_01 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
        pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(__this_01,(MethodInfo *)0x0);
        uVar7 = thunk_FUN_01bda818(
                                  System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo
                                  );
        System_Action<Int32Enum,_object>___ctor();
        if (pGVar6 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
          pGVar9 = pGVar6->klass;
          uVar2._0_1_ = (pGVar9->_2).rank;
          uVar2._1_1_ = (pGVar9->_2).minimumAlignment;
          uVar10 = (ulong)uVar2;
          if (uVar10 != 0) {
            piVar11 = &((pGVar9->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar11 + -2))->interfaceType ==
                  (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                pVVar4 = pGVar9->vtable + *piVar11;
                goto LAB_035c6ea0;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          pVVar4 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar6,GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,
                                0);
LAB_035c6ea0:
          (*pVVar4->methodPtr)(pGVar6,pSVar5,0,0,uVar7,pVVar4->method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

