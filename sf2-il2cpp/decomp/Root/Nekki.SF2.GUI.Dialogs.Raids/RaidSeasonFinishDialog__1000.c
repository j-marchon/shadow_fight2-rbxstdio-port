// TypeDefIndex 1000
// Namespace: Nekki.SF2.GUI.Dialogs.Raids
// public class RaidSeasonFinishDialog : RaidBaseDialog
// Fields:
//   private SeasFinMessageContent _seasFinMessageContent; // 0xC8
//   private SeasFinOldLeaderBoard _seasFinOldLeaderBoard; // 0xD0
//   private SeasFinChestContent _seasFinChestContent; // 0xD8
//   private SeasFinRewardContent _seasFinRewardContent; // 0xE0
//   private SeasFinNewDanContent _seasFinNewDanContent; // 0xE8
//   private SeasFinTop100Message _seasFinTop100Message; // 0xF0
//   private GameObject _debugBanner; // 0xF8
//   private RaidSeasonFinishDialog.GLOANFBHEHD DFCJLLMHKLE; // 0x100
//   private SeasFinBaseContent GHNIJFGJPKJ; // 0x108
//   private NLBPJNEGNNM KDDIPMKKLIN; // 0x110
//   public bool FakeChest; // 0x118
//   public bool FakeNewDan; // 0x119
//   public bool FakeTop100; // 0x11A

// ===== public override void OnBackKeyClicked(object IMMNELPBGIF)  [RVA 0x30BD6F4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$OnBackKeyClicked @ RVA 0x30BD6F4

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__OnBackKeyClicked
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  (__this->fields).DFCJLLMHKLE = (__this->fields).DFCJLLMHKLE + 1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__POIOFMEMHBP(__this,(MethodInfo *)IMMNELPBGIF);
  return;
}


// ===== private void JMPLJLIDLEG()  [RVA 0x30BD714]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$JMPLJLIDLEG @ RVA 0x30BD714

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__JMPLJLIDLEG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  int32_t LDIJJJNLEII;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  
  if ((DAT_0456625b & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_0456625b = 1;
  }
  pNVar1 = (__this->fields)._seasFinNewDanContent;
  if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields)._seasFinNewDanContent;
    if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    LDIJJJNLEII = LIIFLGALGNK__HLMBDJOGONJ(2,7,(MethodInfo *)0x0);
    if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__Init(pNVar1,LDIJJJNLEII,(MethodInfo *)0x0);
      (__this->fields).GHNIJFGJPKJ =
           (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)
           (__this->fields)._seasFinNewDanContent;
      thunk_FUN_01c20e04(&(__this->fields).GHNIJFGJPKJ);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30BD7BC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$.ctor @ RVA 0x30BD7BC

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x30BD7C4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$GLANJNFACKI @ RVA 0x30BD7C4

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void GIKEAMOJDEE()  [RVA 0x30BD7C8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$GIKEAMOJDEE @ RVA 0x30BD7C8

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__GIKEAMOJDEE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  JMDPBFOCHHP_FNILDHLJBBJ_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *pNVar1;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456625c & 1) == 0) {
    FUN_01bab630(&JMDPBFOCHHP_FNILDHLJBBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_10855/*"RaidGiantChests.chest_gold"*/);
    FUN_01bab630(&StringLiteral_10924/*"RaidMisc.chest_gold"*/);
    FUN_01bab630(&StringLiteral_18661/*"gold"*/);
    FUN_01bab630(&StringLiteral_16989/*"chest_gold"*/);
    DAT_0456625c = 1;
    method = extraout_x1;
  }
  __this_00 = (JMDPBFOCHHP_FNILDHLJBBJ_o *)
              thunk_FUN_01bda818(JMDPBFOCHHP_FNILDHLJBBJ_TypeInfo,method);
  JMDPBFOCHHP_FNILDHLJBBJ___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (JMDPBFOCHHP_FNILDHLJBBJ_o *)0x0) {
    (__this_00->fields).ICGHMKGHKEH = StringLiteral_18661/*"gold"*/;
    thunk_FUN_01c20e04();
    (__this_00->fields).HILNENCJHMI = StringLiteral_16989/*"chest_gold"*/;
    thunk_FUN_01c20e04();
    (__this_00->fields).KDHKFELBFJN = StringLiteral_10855/*"RaidGiantChests.chest_gold"*/;
    thunk_FUN_01c20e04();
    (__this_00->fields).MOPLJNDDFGC = StringLiteral_10924/*"RaidMisc.chest_gold"*/;
    thunk_FUN_01c20e04();
    pNVar1 = (__this->fields)._seasFinChestContent;
    if ((pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) &&
       (__this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
      pNVar1 = (__this->fields)._seasFinChestContent;
      if (pNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) {
        Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Init(pNVar1,__this_00,(MethodInfo *)0x0);
        (__this->fields).GHNIJFGJPKJ =
             (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)
             (__this->fields)._seasFinChestContent;
        thunk_FUN_01c20e04(&(__this->fields).GHNIJFGJPKJ);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void AJDNKJBOHAJ()  [RVA 0x30BD704]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$AJDNKJBOHAJ @ RVA 0x30BD704

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__AJDNKJBOHAJ
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  (__this->fields).DFCJLLMHKLE = (__this->fields).DFCJLLMHKLE + 1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__POIOFMEMHBP(__this,method);
  return;
}


// ===== public void Init(NLBPJNEGNNM BLLGOMMBCPF)  [RVA 0x30BDF70]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$Init @ RVA 0x30BDF70

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,
               NLBPJNEGNNM_o *BLLGOMMBCPF,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *__this_03;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *__this_04;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *__this_05;
  MethodInfo *method_00;
  
  if ((DAT_0456625d & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679/*"OK"*/);
    FUN_01bab630(&StringLiteral_3640/*"CANCEL"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_0456625d = 1;
  }
  (__this->fields).DFCJLLMHKLE = 0;
  (__this->fields).KDDIPMKKLIN = BLLGOMMBCPF;
  thunk_FUN_01c20e04(&(__this->fields).KDDIPMKKLIN,BLLGOMMBCPF);
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,StringLiteral_1/*""*/,
             StringLiteral_9679/*"OK"*/,StringLiteral_3640/*"CANCEL"*/,0,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._seasFinMessageContent;
  if ((__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)0x0) &&
     (pUVar1 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._seasFinOldLeaderBoard;
    if ((__this_01 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *)0x0) &&
       (pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      __this_02 = (__this->fields)._seasFinChestContent;
      if ((__this_02 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
        __this_03 = (__this->fields)._seasFinRewardContent;
        if ((__this_03 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          __this_04 = (__this->fields)._seasFinNewDanContent;
          if ((__this_04 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) &&
             (pUVar1 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
            __this_05 = (__this->fields)._seasFinTop100Message;
            if ((__this_05 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *)0x0) &&
               (pUVar1 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0),
               pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
              Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__POIOFMEMHBP(__this,method_00);
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


// ===== protected override void GKPJMHOFIOO()  [RVA 0x30BE0E4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$GKPJMHOFIOO @ RVA 0x30BE0E4

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x30BE0E8]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$UpdateHeaderPosition @ RVA 0x30BE0E8

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x30BE0EC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$IGDDKJJMDLP @ RVA 0x30BE0EC

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x30BE0F0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$OnDestroy @ RVA 0x30BE0F0

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar2;
  
  if ((DAT_0456625e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456625e = 1;
    method = extraout_x1;
  }
  if (DAT_04565b84 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo,method);
    DAT_04565b84 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (DAT_04565b84 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
      DAT_04565b84 = '\x01';
    }
    pNVar2 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->_JPDNDPEAJAL_k__BackingField;
    if (pNVar2 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    Nekki_SF2_GUI_Menu_MainMenu__UpdateMenu(pNVar2,(MethodInfo *)0x0);
  }
  Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_Raids_RaidBaseDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void EJHAPHAHMHG(string EHNFGMGKCHO)  [RVA 0x30BE1D0]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$EJHAPHAHMHG @ RVA 0x30BE1D0

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__EJHAPHAHMHG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,
               System_String_o *EHNFGMGKCHO,MethodInfo *method)

{
  return;
}


// ===== private void POIOFMEMHBP()  [RVA 0x30BD8FC]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$POIOFMEMHBP @ RVA 0x30BD8FC

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__POIOFMEMHBP
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o **ppNVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Action_o *pSVar4;
  NFFDIPBFJHP_o *__this_00;
  KGBIBHEFBHA_o *HEHMPFLAEGE;
  undefined8 uVar5;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *pNVar6;
  ADJEBFOPFFF_o *__this_01;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *pNVar7;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *pNVar8;
  PLIIGOCLJDL_o *__this_02;
  EEGDOGKBLNG_o *__this_03;
  int64_t iVar9;
  JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *OJDBABKBAFA;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *pNVar10;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *pNVar11;
  JMDPBFOCHHP_o *__this_04;
  JMDPBFOCHHP_FNILDHLJBBJ_o *GDGBNEPJEOO;
  undefined8 extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *pNVar12;
  MethodInfo *method_01;
  int iVar13;
  NLBPJNEGNNM_o *pNVar14;
  HCFOFHGNBKP_o *pHVar15;
  KAMBBJFPLGM_o *pKVar16;
  EOLFEKNCPLM_o *pEVar17;
  GKLPDMLELJF_o *pGVar18;
  Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *pNVar19;
  GLPEFEEGCPM_o *BFFBKNCLLML;
  BECIPDJBAOG_o *pBVar20;
  Nekki_SF2_GUI_Menu_MainMenu_o *pNVar21;
  undefined1 auVar22 [16];
  undefined4 local_34 [13];
  
  do {
    if ((DAT_0456625f & 1) == 0) {
      FUN_01bab630(&System_Action_TypeInfo);
      FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
      FUN_01bab630(&int_TypeInfo);
      FUN_01bab630(&UnityEngine_Object_TypeInfo);
      FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_FBADHJLMHPG__);
      DAT_0456625f = 1;
    }
    pUVar3 = (__this->fields)._debugBanner;
    if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_031bdf6c;
    UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
    pNVar19 = (__this->fields).GHNIJFGJPKJ;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppNVar1 = &(__this->fields).GHNIJFGJPKJ;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    auVar22._1_7_ = 0;
    auVar22[0] = bVar2;
    auVar22._8_8_ = extraout_x1;
    if (bVar2) {
      pNVar19 = (__this->fields).GHNIJFGJPKJ;
      pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
      System_Action___ctor();
      if (pNVar19 == (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)0x0) goto LAB_031bdf6c;
      Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__remove_OnClose
                (pNVar19,pSVar4,(MethodInfo *)0x0);
      if ((*ppNVar1 == (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)*ppNVar1,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_031bdf6c;
      UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
      *ppNVar1 = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)0x0;
      auVar22 = thunk_FUN_01c20e04(ppNVar1,0);
    }
    switch((__this->fields).DFCJLLMHKLE) {
    case 0:
      pNVar14 = (__this->fields).KDDIPMKKLIN;
      if ((((pNVar14 != (NLBPJNEGNNM_o *)0x0) &&
           (BFFBKNCLLML = (pNVar14->fields).IIIJBPAFNNF, BFFBKNCLLML != (GLPEFEEGCPM_o *)0x0)) &&
          (pKVar16 = (pNVar14->fields).OPHCNELIOLD, pKVar16 != (KAMBBJFPLGM_o *)0x0)) &&
         ((pEVar17 = (pKVar16->fields).FLAFELDNABC, pEVar17 != (EOLFEKNCPLM_o *)0x0 &&
          (pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 != (GKLPDMLELJF_o *)0x0)))) {
        pNVar12 = (__this->fields)._seasFinMessageContent;
        if (pNVar12 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)0x0) {
          iVar9 = (pGVar18->fields).ANAJGHJEEOC;
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar12,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            __this_00 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
            if (__this_00 != (NFFDIPBFJHP_o *)0x0) {
              HEHMPFLAEGE = NFFDIPBFJHP__FPGJHEJJCNH(__this_00,BFFBKNCLLML,iVar9,(MethodInfo *)0x0);
              pNVar12 = (__this->fields)._seasFinMessageContent;
              if (pNVar12 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)0x0) {
                Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent__Init
                          (pNVar12,HEHMPFLAEGE,(MethodInfo *)0x0);
                pNVar12 = (__this->fields)._seasFinMessageContent;
                goto LAB_031bddf8;
              }
            }
          }
        }
        goto LAB_031bdf6c;
      }
      iVar13 = 1;
      break;
    case 1:
      pNVar6 = (__this->fields)._seasFinOldLeaderBoard;
      if ((pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar6,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pNVar6 = (__this->fields)._seasFinOldLeaderBoard;
        if (pNVar6 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinOldLeaderBoard__Init(pNVar6,(MethodInfo *)0x0);
          pNVar12 = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)
                    (__this->fields)._seasFinOldLeaderBoard;
LAB_031bddf8:
          (__this->fields).GHNIJFGJPKJ = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)pNVar12
          ;
          thunk_FUN_01c20e04(ppNVar1);
          goto LAB_031bde04;
        }
      }
      goto LAB_031bdf6c;
    case 2:
      pNVar14 = (__this->fields).KDDIPMKKLIN;
      if ((((pNVar14 != (NLBPJNEGNNM_o *)0x0) &&
           (pHVar15 = (pNVar14->fields).PMMFPJJOPKE, pHVar15 != (HCFOFHGNBKP_o *)0x0)) &&
          (pBVar20 = (pHVar15->fields).MJIIHOLHNCK, pBVar20 != (BECIPDJBAOG_o *)0x0)) &&
         (bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((pBVar20->fields).JPHFGCIDDHE,(MethodInfo *)0x0), !bVar2)
         ) {
        pNVar11 = (__this->fields)._seasFinChestContent;
        if ((pNVar11 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar11,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_04 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
          pNVar14 = (__this->fields).KDDIPMKKLIN;
          if (((pNVar14 != (NLBPJNEGNNM_o *)0x0) &&
              (pHVar15 = (pNVar14->fields).PMMFPJJOPKE, pHVar15 != (HCFOFHGNBKP_o *)0x0)) &&
             ((pBVar20 = (pHVar15->fields).MJIIHOLHNCK, pBVar20 != (BECIPDJBAOG_o *)0x0 &&
              (__this_04 != (JMDPBFOCHHP_o *)0x0)))) {
            GDGBNEPJEOO = JMDPBFOCHHP__OJOIAONADNG
                                    (__this_04,(pBVar20->fields).JPHFGCIDDHE,(MethodInfo *)0x0);
            pNVar11 = (__this->fields)._seasFinChestContent;
            if (pNVar11 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_SeasFinChestContent__Init
                        (pNVar11,GDGBNEPJEOO,(MethodInfo *)0x0);
              pNVar12 = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)
                        (__this->fields)._seasFinChestContent;
              goto LAB_031bddf8;
            }
          }
        }
        goto LAB_031bdf6c;
      }
      if ((__this->fields).FakeChest == false) goto LAB_031bde80;
      pUVar3 = (__this->fields)._debugBanner;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_031bdf6c;
      UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__GIKEAMOJDEE(__this,method_00);
LAB_031bde04:
      pNVar19 = *ppNVar1;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar19,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        pNVar19 = (__this->fields).GHNIJFGJPKJ;
        pSVar4 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pNVar19 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_SeasFinBaseContent__add_OnClose
                    (pNVar19,pSVar4,(MethodInfo *)0x0);
          return;
        }
LAB_031bdf6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
LAB_031bde80:
      iVar13 = (__this->fields).DFCJLLMHKLE + 1;
      break;
    case 3:
      pNVar14 = (__this->fields).KDDIPMKKLIN;
      if (((pNVar14 != (NLBPJNEGNNM_o *)0x0) &&
          (pHVar15 = (pNVar14->fields).PMMFPJJOPKE, pHVar15 != (HCFOFHGNBKP_o *)0x0)) &&
         (pBVar20 = (pHVar15->fields).MJIIHOLHNCK, pBVar20 != (BECIPDJBAOG_o *)0x0)) {
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        __this_01 = HJPEKDOPBHN__EKIJCGJLILF((MethodInfo *)0x0);
        if (__this_01 != (ADJEBFOPFFF_o *)0x0) {
          ADJEBFOPFFF__AEADCLCKCEL(__this_01,pBVar20,false,(MethodInfo *)0x0);
          pNVar7 = (__this->fields)._seasFinRewardContent;
          if ((pNVar7 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._seasFinRewardContent;
            if (pNVar7 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_SeasFinRewardContent__Init
                        (pNVar7,pBVar20,(MethodInfo *)0x0);
              pNVar12 = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)
                        (__this->fields)._seasFinRewardContent;
              goto LAB_031bddf8;
            }
          }
        }
        goto LAB_031bdf6c;
      }
      iVar13 = 4;
      break;
    case 4:
      pNVar14 = (__this->fields).KDDIPMKKLIN;
      if (pNVar14 != (NLBPJNEGNNM_o *)0x0) {
        pHVar15 = (pNVar14->fields).PMMFPJJOPKE;
        if (pHVar15 == (HCFOFHGNBKP_o *)0x0) goto LAB_031bdf6c;
        if ((pHVar15->fields).MKEPFPAHEFK != false) {
          if (DAT_04565b84 == '\0') {
            FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
            DAT_04565b84 = '\x01';
          }
          pNVar21 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                    _JPDNDPEAJAL_k__BackingField;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pNVar21,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if (bVar2) {
            if (DAT_04565b84 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Menu_MainMenu_TypeInfo);
              DAT_04565b84 = '\x01';
            }
            pNVar21 = Nekki_SF2_GUI_Menu_MainMenu_TypeInfo->static_fields->
                      _JPDNDPEAJAL_k__BackingField;
            if (pNVar21 == (Nekki_SF2_GUI_Menu_MainMenu_o *)0x0) goto LAB_031bdf6c;
            Nekki_SF2_GUI_Menu_MainMenu__UpdateRaidRating(pNVar21,(MethodInfo *)0x0);
          }
          pNVar8 = (__this->fields)._seasFinNewDanContent;
          if ((pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar8,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar14 = (__this->fields).KDDIPMKKLIN;
            if (((pNVar14 != (NLBPJNEGNNM_o *)0x0) &&
                (((pKVar16 = (pNVar14->fields).OPHCNELIOLD, pKVar16 != (KAMBBJFPLGM_o *)0x0 &&
                  (pEVar17 = (pKVar16->fields).FLAFELDNABC, pEVar17 != (EOLFEKNCPLM_o *)0x0)) &&
                 (pGVar18 = (pEVar17->fields).MCOPPCNPAHF, pGVar18 != (GKLPDMLELJF_o *)0x0)))) &&
               (pNVar8 = (__this->fields)._seasFinNewDanContent,
               pNVar8 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent_o *)0x0)) {
              Nekki_SF2_GUI_Dialogs_Raids_SeasFinNewDanContent__Init
                        (pNVar8,(pGVar18->fields).PEBHLKLGDBM,(MethodInfo *)0x0);
              pNVar12 = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)
                        (__this->fields)._seasFinNewDanContent;
              goto LAB_031bddf8;
            }
          }
          goto LAB_031bdf6c;
        }
      }
      if ((__this->fields).FakeNewDan != false) {
        pUVar3 = (__this->fields)._debugBanner;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
          Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__JMPLJLIDLEG(__this,method_01);
          goto LAB_031bde04;
        }
        goto LAB_031bdf6c;
      }
      iVar13 = 5;
      break;
    case 5:
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_02 = HJPEKDOPBHN__NKPPBANIAFK((MethodInfo *)0x0);
      __this_03 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
      if ((__this_03 != (EEGDOGKBLNG_o *)0x0) &&
         (iVar9 = EEGDOGKBLNG__APCMGOCHMGC(__this_03,(MethodInfo *)0x0),
         __this_02 != (PLIIGOCLJDL_o *)0x0)) {
        OJDBABKBAFA = PLIIGOCLJDL__PDEBCPPCEJP(__this_02,iVar9,(MethodInfo *)0x0);
        if ((OJDBABKBAFA == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0) &&
           ((__this->fields).FakeTop100 == false)) goto LAB_031bde80;
        pUVar3 = (__this->fields)._debugBanner;
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive
                    (pUVar3,OJDBABKBAFA == (JMDPBFOCHHP_AEJBILHMFDB_DFCNIHGANOH_o *)0x0 &&
                            (__this->fields).FakeTop100 != false,(MethodInfo *)0x0);
          pNVar10 = (__this->fields)._seasFinTop100Message;
          if ((pNVar10 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *)0x0) &&
             (pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
            UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
            pNVar10 = (__this->fields)._seasFinTop100Message;
            if (pNVar10 != (Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_SeasFinTop100Message__Init
                        (pNVar10,(__this->fields).FakeTop100,OJDBABKBAFA,(MethodInfo *)0x0);
              pNVar12 = (Nekki_SF2_GUI_Dialogs_Raids_SeasFinMessageContent_o *)
                        (__this->fields)._seasFinTop100Message;
              goto LAB_031bddf8;
            }
          }
        }
      }
      goto LAB_031bdf6c;
    default:
      Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__LHOKAHCKHND(auVar22._0_8_,auVar22._8_8_);
      local_34[0] = 0;
      uVar5 = thunk_FUN_01bda448(int_TypeInfo,local_34);
      (*(__this->klass->vtable)._13_OnClose.methodPtr)
                (__this,uVar5,(__this->klass->vtable)._13_OnClose.method);
      return;
    }
    (__this->fields).DFCJLLMHKLE = iVar13;
  } while( true );
}


// ===== private void FBADHJLMHPG()  [RVA 0x30BE284]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$FBADHJLMHPG @ RVA 0x30BE284

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__FBADHJLMHPG
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  (__this->fields).DFCJLLMHKLE = (__this->fields).DFCJLLMHKLE + 1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__POIOFMEMHBP(__this,method);
  return;
}


// ===== private void LHOKAHCKHND()  [RVA 0x30BE1D4]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$LHOKAHCKHND @ RVA 0x30BE1D4

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__LHOKAHCKHND
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *__this_00;
  
  if ((DAT_04566260 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566260 = 1;
    method = extraout_x1;
  }
  if (DAT_045660f3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo,method);
    DAT_045660f3 = '\x01';
  }
  __this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_TypeInfo->static_fields->FFOLFLCMFCH;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if (bVar1) {
    if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_RaidViewContainer__UpdatePlayersDan(__this_00,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== protected override void LCGFJKFJKJK(BaseDialog.OFBBBIDKKOD DNBBBGEENMM)  [RVA 0x30BE294]
// Nekki.SF2.GUI.Dialogs.Raids.RaidSeasonFinishDialog$$LCGFJKFJKJK @ RVA 0x30BE294

void Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidSeasonFinishDialog_o *__this,int32_t DNBBBGEENMM,
               MethodInfo *method)

{
  return;
}

