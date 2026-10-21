// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanRaidPartyDialog$$LAGJPPHNDBL @ RVA 0x3525908

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog__LAGJPPHNDBL
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_o *__this,
               NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  System_Action_object__o *IELDNEAAPBE;
  NLFLMJPNOLF_o *extraout_x1;
  NLFLMJPNOLF_o *extraout_x1_00;
  NLFLMJPNOLF_o *extraout_x1_01;
  ACHLOMELAJE_o *pAVar1;
  
  if ((DAT_045689f8 & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanRaidPartyDialog_JFKBMLONHON__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_17756);
    FUN_01bab630(&StringLiteral_17779);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_4405);
    DAT_045689f8 = 1;
    AOMBONOOJFP = extraout_x1;
  }
  if ((__this->fields).super.super.super._BOGAKJOFOEK_k__BackingField != false) {
    return;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,AOMBONOOJFP);
    AOMBONOOJFP = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    AOMBONOOJFP = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,AOMBONOOJFP);
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (ACHLOMELAJE_o *)0x0) {
    if ((pAVar1->fields).DHPLHAKNGOI != false) {
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
      System_Action<object>___ctor();
      JJPNLEPEAFM__JNDPLPKDPCP
                (StringLiteral_17756,StringLiteral_4405,StringLiteral_9679,StringLiteral_3640,
                 IELDNEAAPBE,1,0,true,false,StringLiteral_17779,true,true,true,true,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Could not recover jumptable at 0x03625abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(__this->klass->vtable)._20_Close.methodPtr)(__this,(__this->klass->vtable)._20_Close.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

