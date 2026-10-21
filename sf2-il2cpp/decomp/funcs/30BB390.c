// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$Init @ RVA 0x30BB390

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,Il2CppObject *IMMNELPBGIF
               ,MethodInfo *method)

{
  LabelButton_o *pLVar1;
  BKKENCMPLLF_o *pBVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar3;
  MethodInfo *method_00;
  
  if ((DAT_04566240 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
    FUN_01bab630(&StringLiteral_5630);
    FUN_01bab630(&StringLiteral_11694);
    DAT_04566240 = 1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__Init
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)__this,IMMNELPBGIF,
             (MethodInfo *)0x0);
  if ((IMMNELPBGIF != (Il2CppObject *)0x0) &&
     (IMMNELPBGIF->klass != (Il2CppClass *)OJEHKJHEBID_TypeInfo)) {
    IMMNELPBGIF = (Il2CppObject *)0x0;
  }
  pLVar1 = (__this->fields).super.super.super.super._btnOK;
  if (pLVar1 != (LabelButton_o *)0x0) {
    LabelButton__set_Alias(pLVar1,StringLiteral_11694,(MethodInfo *)0x0);
    pLVar1 = (__this->fields).super.super.super.super._btnOK;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (((pLVar1 != (LabelButton_o *)0x0) &&
        (LabelButton__set_Color
                   (pLVar1,(UnityEngine_Color_o)
                           (BHEDGAKGKPO_TypeInfo->static_fields->FHIAKPJBBCB).fields,
                    (MethodInfo *)0x0), (OJEHKJHEBID_o *)IMMNELPBGIF != (OJEHKJHEBID_o *)0x0)) &&
       (pBVar2 = (__this->fields).super.FLLHHEODKPH, pBVar2 != (BKKENCMPLLF_o *)0x0)) {
      (pBVar2->fields)._OGOHLLOEANF_k__BackingField =
           (((OJEHKJHEBID_o *)IMMNELPBGIF)->fields).MMIHELOLFPP;
      thunk_FUN_01c20e04();
      pBVar2 = (__this->fields).super.FLLHHEODKPH;
      if (pBVar2 != (BKKENCMPLLF_o *)0x0) {
        BKKENCMPLLF__BOENJKAFOEC
                  (pBVar2,(((OJEHKJHEBID_o *)IMMNELPBGIF)->fields).GJNOEAKNMOG,(MethodInfo *)0x0);
        pNVar3 = (__this->fields).super.BBKLDPELJHI;
        if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__UpdateContent
                    (pNVar3,(MethodInfo *)0x0);
          pNVar3 = (__this->fields).super.BBKLDPELJHI;
          if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetTitleAlias
                      (pNVar3,StringLiteral_5630,(MethodInfo *)0x0);
            pNVar3 = (__this->fields).super.BBKLDPELJHI;
            if (pNVar3 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              method_00 = (MethodInfo *)0x0;
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetVisibleJoinTypePanel
                        (pNVar3,true,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__AFGELGGIGKK
                        (__this,(OJEHKJHEBID_o *)IMMNELPBGIF,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

