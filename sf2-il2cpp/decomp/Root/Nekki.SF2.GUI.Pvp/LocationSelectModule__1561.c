// TypeDefIndex 1561
// Namespace: Nekki.SF2.GUI.Pvp
// public class LocationSelectModule : SelectModule
// Fields:
//   private LabelAlias _playerOneLocName; // 0x88
//   private LabelAlias _playerTwoLocName; // 0x90
//   private JFMLOEMEKLI[] DLCCJFCKAJL; // 0x98

// ===== protected override void FDDCDDKINHH()  [RVA 0x31AC874]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$FDDCDDKINHH @ RVA 0x31AC874

void Nekki_SF2_GUI_Pvp_LocationSelectModule__FDDCDDKINHH
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  IFKFDFGNMMN_o *__this_00;
  
  if ((DAT_04566b50 & 1) == 0) {
                    /* try { // try from 032ac89c to 033ac8c3 has its CatchHandler @ 032acb90 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b50 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__FDDCDDKINHH
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar1 != (NLPJLHOEAOE_o *)0x0) &&
     (__this_00 = (pNVar1->fields).OMDCNDHOACL, __this_00 != (IFKFDFGNMMN_o *)0x0)) {
    IFKFDFGNMMN__HIBPHKLFJML
              (__this_00,&(__this->fields).super.LDJBDDJCPBO,&(__this->fields).super.HKGKJIAPLPO,
               &(__this->fields).super.PCNNFNFPJNH,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string GetRandomItem()  [RVA 0x31AC8F8]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$GetRandomItem @ RVA 0x31AC8F8

System_String_o *
Nekki_SF2_GUI_Pvp_LocationSelectModule__GetRandomItem
          (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  JFMLOEMEKLI_array *pJVar2;
  
                    /* try { // try from 032ac8f8 to 033ac91f has its CatchHandler @ 032acb8c */
  pJVar2 = (__this->fields).DLCCJFCKAJL;
  if (pJVar2 != (JFMLOEMEKLI_array *)0x0) {
    uVar1 = UnityEngine_Random__Range(0,(int32_t)pJVar2->max_length,(MethodInfo *)0x0);
    if ((uint)pJVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    if (pJVar2->m_Items[(int)uVar1] != (JFMLOEMEKLI_o *)0x0) {
                    /* try { // try from 032ac934 to 033ac93b has its CatchHandler @ 032acb64 */
      return (pJVar2->m_Items[(int)uVar1]->fields).PKJEMIDJPAG;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override string ItemTemplate(AMJPDLOCCNP OGPGLGPMEPD)  [RVA 0x31AC940]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$ItemTemplate @ RVA 0x31AC940

System_String_o *
Nekki_SF2_GUI_Pvp_LocationSelectModule__ItemTemplate
          (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,int32_t OGPGLGPMEPD,MethodInfo *method)

{
  uint uVar1;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  JFMLOEMEKLI_array *pJVar2;
  
                    /* try { // try from 032ac944 to 033ac94b has its CatchHandler @ 032acb78 */
  __this_00 = (__this->fields).super._selectTable;
                    /* try { // try from 032ac94c to 033ac957 has its CatchHandler @ 032acb84 */
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pJVar2 = (__this->fields).DLCCJFCKAJL;
    uVar1 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,OGPGLGPMEPD,(MethodInfo *)0x0);
    if (pJVar2 != (JFMLOEMEKLI_array *)0x0) {
                    /* try { // try from 032ac968 to 033ac96f has its CatchHandler @ 032acb68 */
      if ((uint)pJVar2->max_length <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      if (pJVar2->m_Items[(int)uVar1] != (JFMLOEMEKLI_o *)0x0) {
                    /* try { // try from 032ac978 to 033ac97f has its CatchHandler @ 032acb80 */
        return (pJVar2->m_Items[(int)uVar1]->fields).PKJEMIDJPAG;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31AC98C]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$.ctor @ RVA 0x31AC98C

void Nekki_SF2_GUI_Pvp_LocationSelectModule___ctor
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
                    /* try { // try from 032ac98c to 033ac993 has its CatchHandler @ 032acb7c */
  Nekki_SF2_GUI_Pvp_SelectModule___ctor
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override void BJBEBBGINAH()  [RVA 0x31AC994]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$BJBEBBGINAH @ RVA 0x31AC994

void Nekki_SF2_GUI_Pvp_LocationSelectModule__BJBEBBGINAH
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  NLPJLHOEAOE_o *pNVar1;
  MethodInfo *extraout_x1;
  IFKFDFGNMMN_o *pIVar2;
  
                    /* try { // try from 032ac9a0 to 033ac9ab has its CatchHandler @ 032acb5c */
  if ((DAT_04566b51 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566b51 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 032ac9c8 to 033ac9d3 has its CatchHandler @ 032acb60 */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pNVar1 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 032ac9e8 to 033aca07 has its CatchHandler @ 032acb88 */
  if ((pNVar1 != (NLPJLHOEAOE_o *)0x0) &&
     (pIVar2 = (pNVar1->fields).OMDCNDHOACL, pIVar2 != (IFKFDFGNMMN_o *)0x0)) {
    (__this->fields).DLCCJFCKAJL = (pIVar2->fields).DFIBPGKOKEG;
    thunk_FUN_01c20e04();
    Nekki_SF2_GUI_Pvp_SelectModule__BJBEBBGINAH
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HCKMKFBGPIM()  [RVA 0x31ACA14]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$HCKMKFBGPIM @ RVA 0x31ACA14

void Nekki_SF2_GUI_Pvp_LocationSelectModule__HCKMKFBGPIM
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,MethodInfo *method)

{
  uint uVar1;
  undefined4 uVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_01;
  UnityEngine_GameObject_o *pUVar3;
  JFMLOEMEKLI_array *pJVar4;
  uint uVar5;
  JFMLOEMEKLI_o *pJVar6;
  
                    /* try { // try from 032aca20 to 033aca2b has its CatchHandler @ 032acb50 */
  if ((DAT_04566b52 & 1) == 0) {
                    /* try { // try from 032aca40 to 033aca4b has its CatchHandler @ 032acb54 */
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponentInChildren<ResolutionImage>__);
                    /* try { // try from 032aca4c to 033acb23 has its CatchHandler @ 032ac58c */
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_14114/*"UI/battles/"*/);
    DAT_04566b52 = 1;
  }
  if ((__this->fields).super.NKIKDJEPECM != false) {
    return;
  }
  pJVar4 = (__this->fields).DLCCJFCKAJL;
  if (pJVar4 != (JFMLOEMEKLI_array *)0x0) {
    uVar1 = (uint)pJVar4->max_length;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032ac9e8 with catch @ 032acb88 */
          FUN_01bab8d0();
        }
        pJVar6 = pJVar4->m_Items[(int)uVar5];
        pUVar3 = (__this->fields).super.selectCellPrefab;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pUVar3 = (UnityEngine_GameObject_o *)
                 UnityEngine_Object__Instantiate<object>
                           ((Il2CppObject *)pUVar3,
                            Method_UnityEngine_Object_Instantiate<GameObject>__);
        if ((pUVar3 == (UnityEngine_GameObject_o *)0x0) ||
           (__this_00 = (Nekki_SF2_GUI_ResolutionImage_o *)
                        UnityEngine_GameObject__GetComponentInChildren<object>
                                  (pUVar3,
                                   Method_UnityEngine_GameObject_GetComponentInChildren<ResolutionImage>__
                                  ), __this_00 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
        goto LAB_032acb84;
        uVar2 = StringLiteral_14114/*"UI/battles/"*/._4_4_;
        (__this_00->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14114/*"UI/battles/"*/
        ;
        (__this_00->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar2;
                    /* try { // try from 032acb24 to 033acb27 has its CatchHandler @ 032acb74 */
        thunk_FUN_01c20e04(&(__this_00->fields).super.m_PixelsPerUnitMultiplier);
                    /* try { // try from 032acb28 to 033acb2b has its CatchHandler @ 032acb70 */
        if (pJVar6 == (JFMLOEMEKLI_o *)0x0) goto LAB_032acb84;
                    /* try { // try from 032acb2c to 033acb2f has its CatchHandler @ 032acb6c */
                    /* try { // try from 032acb30 to 033acb33 has its CatchHandler @ 032acb58 */
                    /* try { // try from 032acb34 to 033acb37 has its CatchHandler @ 032acb4c */
                    /* try { // try from 032acb38 to 033acb3b has its CatchHandler @ 032ac58c */
        Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                  (__this_00,(pJVar6->fields).DGGHNFBCNGI,(MethodInfo *)0x0);
                    /* try { // try from 032acb3c to 033acb3f has its CatchHandler @ 032acb48 */
        __this_01 = (__this->fields).super._selectTable;
                    /* try { // try from 032acb40 to 033acbab has its CatchHandler @ 032ac58c */
        if (__this_01 == (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) goto LAB_032acb84;
                    /* catch() { ... } // from try @ 032acb3c with catch @ 032acb48 */
                    /* catch() { ... } // from try @ 032acb34 with catch @ 032acb4c */
        Nekki_SF2_GUI_Pvp_PlayersSelectTable__SetItem(__this_01,pUVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 032aca20 with catch @ 032acb50 */
        uVar1 = (uint)pJVar4->max_length;
                    /* catch() { ... } // from try @ 032aca40 with catch @ 032acb54 */
        uVar5 = uVar5 + 1;
                    /* catch() { ... } // from try @ 032acb30 with catch @ 032acb58 */
                    /* catch() { ... } // from try @ 032ac9a0 with catch @ 032acb5c */
      } while ((int)uVar5 < (int)uVar1);
    }
                    /* catch() { ... } // from try @ 032ac9c8 with catch @ 032acb60 */
                    /* catch() { ... } // from try @ 032ac934 with catch @ 032acb64 */
                    /* catch() { ... } // from try @ 032ac968 with catch @ 032acb68 */
                    /* catch() { ... } // from try @ 032acb2c with catch @ 032acb6c */
                    /* catch() { ... } // from try @ 032acb28 with catch @ 032acb70 */
                    /* catch() { ... } // from try @ 032acb24 with catch @ 032acb74 */
                    /* catch() { ... } // from try @ 032ac944 with catch @ 032acb78 */
                    /* catch() { ... } // from try @ 032ac98c with catch @ 032acb7c */
                    /* catch() { ... } // from try @ 032ac978 with catch @ 032acb80 */
    Nekki_SF2_GUI_Pvp_SelectModule__HCKMKFBGPIM
              ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_032acb84:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 032ac94c with catch @ 032acb84 */
  FUN_01bab8c8();
}


// ===== public string GetSprite(string HHBMLOFBDLF)  [RVA 0x31ACB8C]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$GetSprite @ RVA 0x31ACB8C

System_String_o *
Nekki_SF2_GUI_Pvp_LocationSelectModule__GetSprite
          (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,System_String_o *HHBMLOFBDLF,
          MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_o *__this_00;
  JFMLOEMEKLI_array *pJVar3;
  uint uVar4;
  JFMLOEMEKLI_o *pJVar5;
  
                    /* catch() { ... } // from try @ 032ac8f8 with catch @ 032acb8c */
                    /* catch() { ... } // from try @ 032ac89c with catch @ 032acb90 */
                    /* try { // try from 032acbac to 033acbaf has its CatchHandler @ 032acbbc */
  while( true ) {
    __this_00 = HHBMLOFBDLF;
                    /* catch() { ... } // from try @ 032acbac with catch @ 032acbbc */
    if ((DAT_04566b53 & 1) == 0) {
      FUN_01bab630(&StringLiteral_20433/*"random"*/);
      DAT_04566b53 = 1;
    }
    pJVar3 = (__this->fields).DLCCJFCKAJL;
    if (pJVar3 == (JFMLOEMEKLI_array *)0x0) break;
    uVar1 = (uint)pJVar3->max_length;
    HHBMLOFBDLF = StringLiteral_20433/*"random"*/;
    if (0 < (int)uVar1) {
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pJVar5 = pJVar3->m_Items[(int)uVar4];
        if ((pJVar5 == (JFMLOEMEKLI_o *)0x0) || (__this_00 == (System_String_o *)0x0))
        goto LAB_032acc44;
                    /* try { // try from 032acbfc to 033acc23 has its CatchHandler @ 032acc38 */
        bVar2 = System_String__Equals(__this_00,(pJVar5->fields).PKJEMIDJPAG,(MethodInfo *)0x0);
        if (bVar2) {
                    /* try { // try from 032acc30 to 033acc37 has its CatchHandler @ 032acc38 */
                    /* catch() { ... } // from try @ 032acbfc with catch @ 032acc38
                       catch() { ... } // from try @ 032acc30 with catch @ 032acc38 */
          return (pJVar5->fields).DGGHNFBCNGI;
        }
        uVar1 = (uint)pJVar3->max_length;
        uVar4 = uVar4 + 1;
        HHBMLOFBDLF = StringLiteral_20433/*"random"*/;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
LAB_032acc44:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void SetSecondPlayerAvailable(bool EHJMCCFLOLK)  [RVA 0x31ACC4C]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$SetSecondPlayerAvailable @ RVA 0x31ACC4C

void Nekki_SF2_GUI_Pvp_LocationSelectModule__SetSecondPlayerAvailable
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,bool EHJMCCFLOLK,MethodInfo *method
               )

{
  bool bVar1;
  long lVar2;
  Nekki_SF2_GUI_Pvp_PlayerMenu_o *__this_00;
  Nekki_SF2_GUI_Pvp_PvPHintController_o *__this_01;
  
  if ((DAT_04566b54 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__);
    FUN_01bab630(&StringLiteral_10598/*"PvP_ChooseLocation"*/);
    DAT_04566b54 = 1;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__SetSecondPlayerAvailable
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,EHJMCCFLOLK,(MethodInfo *)0x0);
  bVar1 = Nekki_SF2_GUI_UIModule__get_IsActive((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0)
  ;
  if (!bVar1) {
    return;
  }
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  if ((**(long **)(lVar2 + 0xb8) != 0) &&
     (__this_00 = *(Nekki_SF2_GUI_Pvp_PlayerMenu_o **)(**(long **)(lVar2 + 0xb8) + 0x90),
     __this_00 != (Nekki_SF2_GUI_Pvp_PlayerMenu_o *)0x0)) {
    Nekki_SF2_GUI_Pvp_PlayerMenu__SetHeader(__this_00,StringLiteral_10598/*"PvP_ChooseLocation"*/,(MethodInfo *)0x0);
    lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<PvpScene>_get_Current__ + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01b81620();
    }
    if ((**(long **)(lVar2 + 0xb8) != 0) &&
       (__this_01 = *(Nekki_SF2_GUI_Pvp_PvPHintController_o **)(**(long **)(lVar2 + 0xb8) + 200),
       __this_01 != (Nekki_SF2_GUI_Pvp_PvPHintController_o *)0x0)) {
      Nekki_SF2_GUI_Pvp_PvPHintController__set_IsSinglePlayer
                (__this_01,(bool)(~EHJMCCFLOLK & 1),(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void BHOPECNMJAC(AMJPDLOCCNP HEHMPFLAEGE, int MKACJBMOMHC, int JJBKAMIAMNE, bool OFKBEIFPFMN)  [RVA 0x31ACD64]
// Nekki.SF2.GUI.Pvp.LocationSelectModule$$BHOPECNMJAC @ RVA 0x31ACD64

void Nekki_SF2_GUI_Pvp_LocationSelectModule__BHOPECNMJAC
               (Nekki_SF2_GUI_Pvp_LocationSelectModule_o *__this,int32_t HEHMPFLAEGE,
               int32_t MKACJBMOMHC,int32_t JJBKAMIAMNE,bool OFKBEIFPFMN,MethodInfo *method)

{
  bool bVar1;
  uint uVar2;
  Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *method_00;
  JFMLOEMEKLI_o *pJVar3;
  JFMLOEMEKLI_array *pJVar4;
  
  bVar1 = Nekki_SF2_GUI_Pvp_SelectModule__ONKNKLHEGGN
                    ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Nekki_SF2_GUI_Pvp_SelectModule__BHOPECNMJAC
            ((Nekki_SF2_GUI_Pvp_SelectModule_o *)__this,HEHMPFLAEGE,MKACJBMOMHC,JJBKAMIAMNE,
             OFKBEIFPFMN,(MethodInfo *)0x0);
  __this_00 = (__this->fields).super._selectTable;
  if (__this_00 != (Nekki_SF2_GUI_Pvp_PlayersSelectTable_o *)0x0) {
    pJVar4 = (__this->fields).DLCCJFCKAJL;
    method_00 = (MethodInfo *)0x0;
    uVar2 = Nekki_SF2_GUI_Pvp_PlayersSelectTable__GetSelectionID
                      (__this_00,HEHMPFLAEGE,(MethodInfo *)0x0);
    if (pJVar4 != (JFMLOEMEKLI_array *)0x0) {
      if ((uint)pJVar4->max_length <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      pJVar3 = pJVar4->m_Items[(int)uVar2];
      if (HEHMPFLAEGE == 1) {
        if (pJVar3 == (JFMLOEMEKLI_o *)0x0) goto LAB_032ace28;
        __this_01 = (__this->fields)._playerTwoLocName;
      }
      else {
        if (HEHMPFLAEGE != 0) {
          return;
        }
        if (pJVar3 == (JFMLOEMEKLI_o *)0x0) goto LAB_032ace28;
        __this_01 = (__this->fields)._playerOneLocName;
      }
      if (__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,(pJVar3->fields).KGLJICLJHEL,method_00);
        return;
      }
    }
  }
LAB_032ace28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

