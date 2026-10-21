// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$MLBNBCLLKEL @ RVA 0x3525AC4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__MLBNBCLLKEL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,int64_t OILECKFDMDB,
               MethodInfo *method)

{
  System_Action_long__o *pSVar1;
  NLFLMJPNOLF_o *pNVar2;
  CJFBGEEIPBA_o *pCVar3;
  
  if ((DAT_045689f9 & 1) == 0) {
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_GHOCNBJIEEN__);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17851);
    FUN_01bab630(&StringLiteral_17850);
    FUN_01bab630(&StringLiteral_1);
    DAT_045689f9 = 1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  pNVar2 = (__this->fields).PMHMLJDMHFP;
  if (pNVar2 != (NLFLMJPNOLF_o *)0x0) {
    if (((pNVar2->fields).OHMDCKEDOGH == OILECKFDMDB) && ((pNVar2->fields).BHAOPCFDKCG == false)) {
      JJPNLEPEAFM__JNDPLPKDPCP
                (StringLiteral_17850,StringLiteral_17851,StringLiteral_9679,StringLiteral_1,
                 (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,true,true,
                 (MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x03625c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._20_Close.methodPtr)
                (__this,(__this->klass->vtable)._20_Close.method);
      return;
    }
    pCVar3 = (__this->fields).ECLPCNFNJCP;
    pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
    System_Action<long>___ctor();
    if (pCVar3 != (CJFBGEEIPBA_o *)0x0) {
      CJFBGEEIPBA__OONONOKDLGD(pCVar3,pSVar1,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).ECLPCNFNJCP;
      pSVar1 = (System_Action_long__o *)thunk_FUN_01bda818(System_Action<long>_TypeInfo);
      System_Action<long>___ctor();
      if (pCVar3 != (CJFBGEEIPBA_o *)0x0) {
        CJFBGEEIPBA__EHJDAGPJFAB(pCVar3,pSVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

