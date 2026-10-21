// EINKKMIHCHI$$LHNMAENAOIF @ RVA 0x34C72D4

void EINKKMIHCHI__LHNMAENAOIF
               (EINKKMIHCHI_o *__this,int32_t MNPKIDDPNBM,
               GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *NDLNFCBLAPK,
               MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  VirtualInvokeData *pVVar3;
  System_String_o *pSVar4;
  Nekki_Utils_GlobalTimer_o *__this_00;
  System_DateTime_o DHCOILBOGHE;
  Il2CppObject *arg0;
  GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_c *pGVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Action_string__o *pSVar8;
  System_Enum_o local_48;
  int32_t local_38;
  
  if ((DAT_04568645 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Nekki_Utils_GlobalTimer_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo);
    FUN_01bab630(&StringLiteral_5497);
    FUN_01bab630(&StringLiteral_513);
    FUN_01bab630(&StringLiteral_22271);
    FUN_01bab630(&StringLiteral_5927);
    DAT_04568645 = 1;
  }
  if (MNPKIDDPNBM != 1) {
    local_48.klass =
         (System_Enum_c *)GooglePlayGames_BasicApi_SavedGame_SavedGameRequestStatus_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = MNPKIDDPNBM;
    pSVar4 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_5927,pSVar4,(MethodInfo *)0x0);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar4,(MethodInfo *)0x0);
    return;
  }
  if (NDLNFCBLAPK != (GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_o *)0x0) {
    pGVar5 = NDLNFCBLAPK->klass;
    uVar1._0_1_ = (pGVar5->_2).rank;
    uVar1._1_1_ = (pGVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pGVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
          pVVar3 = pGVar5->vtable + (*piVar7 + 2);
          goto LAB_035c7428;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(NDLNFCBLAPK,GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo
                          ,2);
LAB_035c7428:
    pSVar4 = (System_String_o *)(*pVVar3->methodPtr)(NDLNFCBLAPK,pVVar3->method);
    pSVar4 = System_String__Concat(StringLiteral_5497,pSVar4,StringLiteral_513,(MethodInfo *)0x0);
    NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar4,(MethodInfo *)0x0);
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
    if ((Nekki_Utils_GlobalTimer_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Utils_GlobalTimer_TypeInfo);
    }
    __this_00 = Nekki_Utils_GlobalTimer__get_Instance((MethodInfo *)0x0);
    pGVar5 = NDLNFCBLAPK->klass;
    uVar2._0_1_ = (pGVar5->_2).rank;
    uVar2._1_1_ = (pGVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar2;
    if (uVar6 != 0) {
      piVar7 = &((pGVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo) {
          pVVar3 = pGVar5->vtable + (*piVar7 + 5);
          goto LAB_035c7508;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar3 = (VirtualInvokeData *)
             FUN_01b81914(NDLNFCBLAPK,GooglePlayGames_BasicApi_SavedGame_ISavedGameMetadata_TypeInfo
                          ,5);
LAB_035c7508:
    DHCOILBOGHE.fields._dateData =
         (System_DateTime_Fields)(*pVVar3->methodPtr)(NDLNFCBLAPK,pVVar3->method);
    if (__this_00 != (Nekki_Utils_GlobalTimer_o *)0x0) {
      local_48.klass =
           (System_Enum_c *)
           Nekki_Utils_GlobalTimer__AddDeltaToDateTime(__this_00,DHCOILBOGHE,(MethodInfo *)0x0);
      arg0 = (Il2CppObject *)thunk_FUN_01bda448(System_DateTime_TypeInfo,&local_48);
      pSVar4 = System_String__Format(StringLiteral_22271,arg0,(MethodInfo *)0x0);
      if (pSVar8 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar8->fields).super.super.invoke_impl)
                  ((pSVar8->fields).super.super.method_code,pSVar4,
                   (pSVar8->fields).super.super.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

