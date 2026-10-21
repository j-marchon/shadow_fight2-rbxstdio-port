// TypeDefIndex 989
// Namespace: Nekki.SF2.GUI.Dialogs.Raids.Clans
// public class ClanEditDialog : CreateClanDialog
// Fields:

// ===== protected override void EAIIDFHIBHB()  [RVA 0x30BAFD0]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$EAIIDFHIBHB @ RVA 0x30BAFD0

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__EAIIDFHIBHB
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,MethodInfo *method)

{
  ulong uVar1;
  System_Action_KEFHDOHHHML__o *CPECAEHDDDB;
  undefined8 uVar2;
  BKKENCMPLLF_o *__this_00;
  undefined4 local_24;
  
  if ((DAT_0456623c & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    DAT_0456623c = 1;
  }
  uVar1 = (*(__this->klass->vtable)._39_LLKLEHBDELH.methodPtr)
                    (__this,(__this->klass->vtable)._39_LLKLEHBDELH.method);
  if ((uVar1 & 1) != 0) {
    __this_00 = (__this->fields).super.FLLHHEODKPH;
    CPECAEHDDDB = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 == (BKKENCMPLLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    BKKENCMPLLF__AEBIEHGBGCL(__this_00,CPECAEHDDDB,(MethodInfo *)0x0);
    local_24 = 1;
    uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_24);
    (*(__this->klass->vtable)._13_OnClose.methodPtr)
              (__this,uVar2,(__this->klass->vtable)._13_OnClose.method);
  }
  return;
}


// ===== private void AFGELGGIGKK(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x30BB0AC]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$AFGELGGIGKK @ RVA 0x30BB0AC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__AFGELGGIGKK
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  bool CJNHFNHJHPE_00;
  bool CJNHFNHJHPE_01;
  bool CJNHFNHJHPE_02;
  EEGDOGKBLNG_o *__this_00;
  int64_t FKIGDGJPIAC;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar1;
  
  if ((DAT_0456623d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_5633/*"EditJoinType"*/);
    FUN_01bab630(&StringLiteral_5632/*"EditIcon"*/);
    FUN_01bab630(&StringLiteral_5635/*"EditRequirements"*/);
    FUN_01bab630(&StringLiteral_5631/*"EditDescription"*/);
    DAT_0456623d = 1;
  }
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    FKIGDGJPIAC = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).super.BBKLDPELJHI;
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditNameEnabled
                (pNVar1,false,(MethodInfo *)0x0);
      CJNHFNHJHPE = DOCPIHOLNOA__BJBGLBAEIJB
                              (PBNPKBJKFHE,StringLiteral_5631/*"EditDescription"*/,FKIGDGJPIAC,(MethodInfo *)0x0);
      pNVar1 = (__this->fields).super.BBKLDPELJHI;
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditDescriptionEnabled
                  (pNVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        CJNHFNHJHPE_00 =
             DOCPIHOLNOA__BJBGLBAEIJB(PBNPKBJKFHE,StringLiteral_5632/*"EditIcon"*/,FKIGDGJPIAC,(MethodInfo *)0x0);
        pNVar1 = (__this->fields).super.BBKLDPELJHI;
        if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditIconEnabled
                    (pNVar1,CJNHFNHJHPE_00,(MethodInfo *)0x0);
          CJNHFNHJHPE_01 =
               DOCPIHOLNOA__BJBGLBAEIJB
                         (PBNPKBJKFHE,StringLiteral_5633/*"EditJoinType"*/,FKIGDGJPIAC,(MethodInfo *)0x0);
          pNVar1 = (__this->fields).super.BBKLDPELJHI;
          if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
            Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditJoinTypeEnabled
                      (pNVar1,CJNHFNHJHPE_01,(MethodInfo *)0x0);
            CJNHFNHJHPE_02 =
                 DOCPIHOLNOA__BJBGLBAEIJB
                           (PBNPKBJKFHE,StringLiteral_5635/*"EditRequirements"*/,FKIGDGJPIAC,(MethodInfo *)0x0);
            pNVar1 = (__this->fields).super.BBKLDPELJHI;
            if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEditRequirementsEnabled
                        (pNVar1,CJNHFNHJHPE_02,(MethodInfo *)0x0);
              if (((CJNHFNHJHPE || CJNHFNHJHPE_00) || CJNHFNHJHPE_01) || CJNHFNHJHPE_02) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x031bb284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(__this->klass->vtable)._42_FKEGLMMHKEO.methodPtr)
                        (__this,(__this->klass->vtable)._42_FKEGLMMHKEO.method);
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


// ===== public void .ctor()  [RVA 0x30BB28C]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$.ctor @ RVA 0x30BB28C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
  if ((DAT_0456623e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo);
    DAT_0456623e = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_TypeInfo,method);
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void DLOKPLFDEJA(MGDJPGGPDJI KGCNBJOCNHC)  [RVA 0x30BB2E4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$DLOKPLFDEJA @ RVA 0x30BB2E4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__DLOKPLFDEJA
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,
               MGDJPGGPDJI_o *KGCNBJOCNHC,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t iVar1;
  EEOMEMBBGNA_o *pEVar2;
  long lVar3;
  
  if ((DAT_0456623f & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456623f = 1;
  }
  if (KGCNBJOCNHC != (MGDJPGGPDJI_o *)0x0) {
    lVar3 = (KGCNBJOCNHC->fields).ANAJGHJEEOC;
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
      iVar1 = EEGDOGKBLNG__APCMGOCHMGC(__this_00,(MethodInfo *)0x0);
      if (lVar3 != iVar1) {
        return;
      }
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pEVar2 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (pEVar2 != (EEOMEMBBGNA_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__AFGELGGIGKK
                  (__this,(pEVar2->fields).MICFEIBNOLM,method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x30BB390]
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
    FUN_01bab630(&StringLiteral_5630/*"EditClanInfo"*/);
    FUN_01bab630(&StringLiteral_11694/*"SaveBtn"*/);
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
    LabelButton__set_Alias(pLVar1,StringLiteral_11694/*"SaveBtn"*/,(MethodInfo *)0x0);
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
                      (pNVar3,StringLiteral_5630/*"EditClanInfo"*/,(MethodInfo *)0x0);
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


// ===== protected override bool PADBDIONJAJ()  [RVA 0x30BB4F4]
// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanEditDialog$$PADBDIONJAJ @ RVA 0x30BB4F4

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog__PADBDIONJAJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanEditDialog_o *__this,MethodInfo *method)

{
  return false;
}

