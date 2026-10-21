// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$DLOKPLFDEJA @ RVA 0x3525FC0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar2;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_01;
  EEOMEMBBGNA_o *pEVar3;
  System_Action_long__o *pSVar4;
  NLFLMJPNOLF_o *pNVar5;
  CJFBGEEIPBA_o *pCVar6;
  long lVar7;
  
  if ((DAT_045689fe & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_MLBNBCLLKEL__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<long>__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    FUN_01bab630(&StringLiteral_4855);
    DAT_045689fe = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  pNVar5 = (__this->fields).PMHMLJDMHFP;
  if (pNVar5 != (NLFLMJPNOLF_o *)0x0) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<long>
                      ((System_Collections_Generic_IList_T__o *)(pNVar5->fields).MABPCBMOECE,
                       Method_DJNBJHPDKDP_OBECCOPBADO<long>__);
    if (bVar1) {
      return;
    }
    if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
      lVar7 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
        iVar2 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
        if (lVar7 != iVar2) {
          return;
        }
        pNVar5 = (__this->fields).PMHMLJDMHFP;
        if ((pNVar5 != (NLFLMJPNOLF_o *)0x0) &&
           (__this_01 = (pNVar5->fields).MABPCBMOECE,
           __this_01 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0)) {
          lVar7 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
          iVar2 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                            (__this_01,0,
                             Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
          if (lVar7 != iVar2) {
            return;
          }
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pEVar3 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
          if (pEVar3 != (EEOMEMBBGNA_o *)0x0) {
            bVar1 = DOCPIHOLNOA__BJBGLBAEIJB
                              ((pEVar3->fields).MICFEIBNOLM,StringLiteral_4855,
                               (KGCNBJOCNHC->fields).ANAJGHJEEOC,(MethodInfo *)0x0);
            if (bVar1) {
              return;
            }
            pCVar6 = (__this->fields).ECLPCNFNJCP;
            pSVar4 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
            System_Action<long>___ctor();
            if (pCVar6 != (CJFBGEEIPBA_o *)0x0) {
              CJFBGEEIPBA__OONONOKDLGD(pCVar6,pSVar4,(MethodInfo *)0x0);
              pCVar6 = (__this->fields).ECLPCNFNJCP;
              pSVar4 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
              System_Action<long>___ctor();
              if (pCVar6 != (CJFBGEEIPBA_o *)0x0) {
                CJFBGEEIPBA__FHIDNNFNFMP(pCVar6,pSVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

