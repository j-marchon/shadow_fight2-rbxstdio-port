// TypeDefIndex 3085
// Namespace: 
// [CompilerGenerated]
// private sealed class EINKKMIHCHI.KHJPDKHEBNN
// Fields:
//   public EINKKMIHCHI <>4__this; // 0x10
//   public bool isAutoSave; // 0x18
//   public int level; // 0x1C
//   public byte[] data; // 0x20

// ===== internal void MDBLGJAGJKE(SavedGameRequestStatus status, ISavedGameMetadata metadata)  [RVA 0x34C8800]
// EINKKMIHCHI.KHJPDKHEBNN$$MDBLGJAGJKE @ RVA 0x34C8800

void EINKKMIHCHI_KHJPDKHEBNN__MDBLGJAGJKE
               (EINKKMIHCHI_KHJPDKHEBNN_o *__this,int32_t status,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *metadata,MethodInfo *method)

{
  undefined8 *puVar1;
  ushort uVar2;
  Il2CppObject *arg1;
  CFGLKHFFEKA_o *arg2;
  System_String_o *pSVar3;
  GooglePlayGames_PlayGamesPlatform_o *__this_00;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *pGVar4;
  undefined8 uVar5;
  VirtualInvokeData *pVVar6;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_c *pGVar7;
  ulong uVar8;
  int32_t *piVar9;
  EINKKMIHCHI_o *pEVar10;
  Il2CppObject *arg0;
  System_Byte_array *pSVar11;
  GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder_Fields local_d0;
  System_Enum_c *local_a0;
  System_String_o *pSStack_98;
  undefined8 local_90;
  System_Byte_array *pSStack_88;
  System_Nullable_TimeSpan__Fields local_80;
  GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder_o local_70;
  int32_t local_34;
  
  if ((DAT_04568652 & 1) == 0) {
    FUN_01bab630(&System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo);
    FUN_01bab630(&Method_EINKKMIHCHI_LHNMAENAOIF__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo);
    FUN_01bab630(&StringLiteral_20663/*"save"*/);
    FUN_01bab630(&StringLiteral_11701/*"SaveDump - error open|create dump file: "*/);
    FUN_01bab630(&StringLiteral_16565/*"autosave"*/);
    FUN_01bab630(&StringLiteral_11699/*"SaveDump - commiting dump"*/);
    FUN_01bab630(&StringLiteral_22320/*"{0} level: {1} version: {2}"*/);
    DAT_04568652 = 1;
  }
  pSStack_88 = (System_Byte_array *)0x0;
  local_90._0_1_ = false;
  local_90._1_7_ = 0;
  local_80.value.fields._ticks = (System_TimeSpan_Fields)0;
  local_80.hasValue = false;
  local_80._1_7_ = 0;
  local_d0.mNewPlayedTime.fields.value.fields._ticks = (System_TimeSpan_Fields)0;
  local_d0.mNewPlayedTime.fields.hasValue = false;
  local_d0.mNewPlayedTime.fields._1_7_ = 0;
  pSStack_98 = (System_String_o *)0x0;
  local_a0 = (System_Enum_c *)0x0;
  local_d0.mNewDescription = (System_String_o *)0x0;
  local_d0.mDescriptionUpdated = false;
  local_d0._1_7_ = 0;
  local_d0.mNewPngCoverImage = (System_Byte_array *)0x0;
  local_d0.mCoverImageUpdated = false;
  local_d0._17_7_ = 0;
  pEVar10 = (__this->fields).__4__this;
  if (status == 1) {
    if (pEVar10 != (EINKKMIHCHI_o *)0x0) {
      NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)pEVar10,StringLiteral_11699/*"SaveDump - commiting dump"*/,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_22320/*"{0} level: {1} version: {2}"*/;
      local_d0.mNewPngCoverImage = (System_Byte_array *)0x0;
      local_d0.mCoverImageUpdated = false;
      local_d0._17_7_ = 0;
      local_d0.mNewPlayedTime.fields.value.fields._ticks = (System_TimeSpan_Fields)0;
      local_d0.mNewPlayedTime.fields.hasValue = false;
      local_d0.mNewPlayedTime.fields._1_7_ = 0;
      local_d0.mNewDescription = (System_String_o *)0x0;
      local_d0.mDescriptionUpdated = false;
      local_d0._1_7_ = 0;
      puVar1 = &StringLiteral_20663/*"save"*/;
      if ((__this->fields).isAutoSave != false) {
        puVar1 = &StringLiteral_16565/*"autosave"*/;
      }
      local_34 = (__this->fields).level;
      arg0 = (Il2CppObject *)*puVar1;
      arg1 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_34);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      arg2 = EOAOCPLIKOI__PNENLJCMECN((MethodInfo *)0x0);
      pSVar3 = System_String__Format(pSVar3,arg0,arg1,(Il2CppObject *)arg2,(MethodInfo *)0x0);
      GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder__WithUpdatedDescription
                (&local_70,
                 (GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder_o *)&local_d0,
                 pSVar3,(MethodInfo *)0x0);
      pSStack_98 = local_70.fields.mNewDescription;
      local_a0 = (System_Enum_c *)local_70.fields._0_8_;
      pSStack_88 = local_70.fields.mNewPngCoverImage;
      local_90._0_1_ = local_70.fields.mCoverImageUpdated;
      local_90._1_7_ = local_70.fields._17_7_;
      local_80.value.fields._ticks = local_70.fields.mNewPlayedTime.fields.value.fields._ticks;
      local_80.hasValue = local_70.fields.mNewPlayedTime.fields.hasValue;
      local_80._1_7_ = local_70.fields.mNewPlayedTime.fields._1_7_;
      pEVar10 = (__this->fields).__4__this;
      if ((pEVar10 != (EINKKMIHCHI_o *)0x0) &&
         (__this_00 = (pEVar10->fields).GJOCPBIBFCD,
         __this_00 != (GooglePlayGames_PlayGamesPlatform_o *)0x0)) {
        pGVar4 = GooglePlayGames_PlayGamesPlatform__get_SavedGame(__this_00,(MethodInfo *)0x0);
        GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder__Build
                  ((GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_o *)&local_70,
                   (GooglePlayGames_BasicApi_SavedGame_SavedGameMetadataUpdate_Builder_o *)&local_a0
                   ,(MethodInfo *)0x0);
        pSVar11 = (__this->fields).data;
        uVar5 = thunk_FUN_01bda818(
                                  System_Action<SavedGameRequestStatus,_ISavedGameMetadata>_TypeInfo
                                  );
        System_Action<Int32Enum,_object>___ctor();
        if (pGVar4 != (GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_o *)0x0) {
          pGVar7 = pGVar4->klass;
          uVar2._0_1_ = (pGVar7->_2).rank;
          uVar2._1_1_ = (pGVar7->_2).minimumAlignment;
          uVar8 = (ulong)uVar2;
          if (uVar8 != 0) {
            piVar9 = &((pGVar7->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
                  (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo) {
                pVVar6 = pGVar7->vtable + (*piVar9 + 4);
                goto LAB_035c8adc;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          pVVar6 = (VirtualInvokeData *)
                   FUN_01b81914(pGVar4,GooglePlayGames_BasicApi_SavedGame_ISavedGameClient_TypeInfo,
                                4);
LAB_035c8adc:
          (*pVVar6->methodPtr)(pGVar4,metadata,&local_70,pSVar11,uVar5,pVVar6->method);
          return;
        }
      }
    }
  }
  else {
    local_70.fields._0_8_ = GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_70.fields._16_4_ = status;
    local_70.fields.mNewDescription = (System_String_o *)0xffffffffffffffff;
    pSVar3 = System_Enum__ToString((System_Enum_o *)&local_70,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(StringLiteral_11701/*"SaveDump - error open|create dump file: "*/,pSVar3,(MethodInfo *)0x0);
    if (pEVar10 != (EINKKMIHCHI_o *)0x0) {
      NHJCFGACFDF__ONCJPMNKDIM((NHJCFGACFDF_o *)pEVar10,pSVar3,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34C7FFC]
// EINKKMIHCHI.KHJPDKHEBNN$$.ctor @ RVA 0x34C7FFC

void EINKKMIHCHI_KHJPDKHEBNN___ctor(EINKKMIHCHI_KHJPDKHEBNN_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

