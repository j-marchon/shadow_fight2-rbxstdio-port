// Nekki.SF2.GUI.Dialogs.Raids.RaidLeaguesDialog$$IKJKPJABNMD @ RVA 0x31000D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__IKJKPJABNMD
               (Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  EEGDOGKBLNG_o *pEVar2;
  int64_t iVar3;
  NDPMLPGANCI_o *__this_00;
  Google_Protobuf_WellKnownTypes_Int64Value_o *__this_01;
  KKLJIDJBFEI_o *__this_02;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  GLPEFEEGCPM_o *pGVar4;
  long lVar5;
  
  if ((DAT_045664c9 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog_EIPMJGAAKFP__);
    FUN_01bab630(&StringLiteral_18642);
    DAT_045664c9 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 != (NFFDIPBFJHP_o *)0x0) {
    pGVar4 = (pNVar1->fields).DFGECIPDPCD;
    if (pGVar4 != (GLPEFEEGCPM_o *)0x0) {
      lVar5 = (pGVar4->fields).LAEGCKIFDOC;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (pEVar2 == (EEGDOGKBLNG_o *)0x0) goto LAB_03200288;
      iVar3 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar2,(MethodInfo *)0x0);
      if (lVar5 == iVar3) {
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__AKOPPOBKDCA(__this,method_00);
        Nekki_SF2_GUI_Dialogs_Raids_RaidLeaguesDialog__JBEGLHIMFPE(__this,method_01);
        goto LAB_03200270;
      }
    }
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,true,true,(MethodInfo *)0x0);
      __this_01 = (Google_Protobuf_WellKnownTypes_Int64Value_o *)
                  thunk_FUN_01bda818(Google_Protobuf_WellKnownTypes_Int64Value_TypeInfo);
      Google_Protobuf_WellKnownTypes_Int64Value___ctor(__this_01,(MethodInfo *)0x0);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((pEVar2 != (EEGDOGKBLNG_o *)0x0) &&
         (iVar3 = EEGDOGKBLNG__HIPOGPBBJNJ(pEVar2,(MethodInfo *)0x0),
         __this_01 != (Google_Protobuf_WellKnownTypes_Int64Value_o *)0x0)) {
        (__this_01->fields).value_ = iVar3;
        __this_02 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        if (__this_02 != (KKLJIDJBFEI_o *)0x0) {
          KDPDBGNOFEN__KLNMLOOCAAO
                    ((KDPDBGNOFEN_o *)__this_02,StringLiteral_18642,
                     (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,0.0,(Il2CppObject *)0x0,
                     (MethodInfo *)0x0);
LAB_03200270:
          EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03200288:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

