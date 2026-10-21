// EINKKMIHCHI$$HEHBOCDCKEN @ RVA 0x34C63D0

void EINKKMIHCHI__HEHBOCDCKEN(EINKKMIHCHI_o *__this,MethodInfo *method)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulong uVar4;
  GooglePlayGames_PlayGamesPlatform_o *pGVar5;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  VirtualInvokeData *pVVar9;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar10;
  undefined8 *puVar11;
  int32_t *piVar12;
  
  if ((DAT_0456863b & 1) == 0) {
    FUN_01bab630(&System_Action<SelectUIStatus,_ISavedGameMetadata>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_BHBIGEDOOKD__);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&StringLiteral_11788);
    FUN_01bab630(&StringLiteral_4443);
    FUN_01bab630(&StringLiteral_5883);
    FUN_01bab630(&StringLiteral_8575);
    DAT_0456863b = 1;
  }
  uVar4 = (*(__this->klass->vtable)._21_HCDIBNJMKLH.methodPtr)
                    (__this,(__this->klass->vtable)._21_HCDIBNJMKLH.method);
  if ((uVar4 & 1) != 0) {
    pGVar5 = (__this->fields).GJOCPBIBFCD;
    if (pGVar5 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
      pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(pGVar5,(MethodInfo *)0x0);
      if (pGVar6 == (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
        puVar11 = &StringLiteral_4443;
        goto LAB_035c658c;
      }
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,StringLiteral_8575,(MethodInfo *)0x0);
      pGVar5 = (__this->fields).GJOCPBIBFCD;
      if (pGVar5 != (GooglePlayGames_PlayGamesPlatform_o *)0x0) {
        pGVar6 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(pGVar5,(MethodInfo *)0x0);
        if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IFAMAAGNCBJ_TypeInfo);
        }
        pIVar7 = IFAMAAGNCBJ__GPBMELHDADN<object>
                           (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
        if ((pIVar7 != (Il2CppObject *)0x0) && (pIVar7[10].klass != (Il2CppClass *)0x0)) {
          uVar1 = *(uint *)&((pIVar7[10].klass)->_1).name;
          uVar8 = thunk_FUN_01bda818(System_Action<SelectUIStatus,_ISavedGameMetadata>_TypeInfo);
          System_Action<Int32Enum,_object>___ctor();
          uVar3 = StringLiteral_11788;
          if (pGVar6 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
            pGVar10 = pGVar6->klass;
            uVar2._0_1_ = (pGVar10->_2).rank;
            uVar2._1_1_ = (pGVar10->_2).minimumAlignment;
            uVar4 = (ulong)uVar2;
            if (uVar4 != 0) {
              piVar12 = &((pGVar10->_1).interfaceOffsets)->offset;
              do {
                if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                    (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                  pVVar9 = pGVar10->vtable + (*piVar12 + 3);
                  goto LAB_035c65b8;
                }
                uVar4 = uVar4 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar4 != 0);
            }
            pVVar9 = (VirtualInvokeData *)
                     FUN_01b81914(pGVar6,
                                  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,3);
LAB_035c65b8:
                    /* WARNING: Could not recover jumptable at 0x035c65e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pVVar9->methodPtr)(pGVar6,uVar3,(ulong)uVar1,0,0,uVar8,pVVar9->method);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  puVar11 = &StringLiteral_5883;
LAB_035c658c:
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,(System_String_o *)*puVar11,(MethodInfo *)0x0);
  return;
}

