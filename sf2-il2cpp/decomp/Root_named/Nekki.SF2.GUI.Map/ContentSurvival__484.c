// TypeDefIndex 484
// Namespace: Nekki.SF2.GUI.Map
// public class ContentSurvival : ContentBase
// Fields:
//   private LabelAlias _minLabel; // 0x28
//   private LabelAlias _maxLabel; // 0x30
//   private BattlePrize _survivalPrizeMin; // 0x38
//   private BattlePrize _survivalPrizeMax; // 0x40
//   private LabelAlias _lblDescription; // 0x48
//   public const float PRIZE_CONTAINER_HEIGHT = 100;
//   public const int MONEY_LABEL_SIZE = 105;
//   public const int SURVIVAL_LABEL_INTERMISSION_SIZE = 80;

// ===== public void Init(OOMHDDBCBJP BANHBMINMMP)  [RVA 0x3582BC8]
// Nekki.SF2.GUI.Map.ContentSurvival$$Init @ RVA 0x3582BC8

void Nekki_SF2_GUI_Map_ContentSurvival__Init
               (Nekki_SF2_GUI_Map_ContentSurvival_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_Map_BattlePrize_o *pNVar5;
  Il2CppObject *pIVar6;
  Roster_o *__this_00;
  JBCGDIEHOHH_o *pJVar7;
  JHBHHHKEFOO_o *NNHNNAKKKPL;
  JHBHHHKEFOO_o *NNHNNAKKKPL_00;
  int64_t IPGOFHMGFOI;
  int64_t IPGOFHMGFOI_00;
  int64_t iVar8;
  int64_t iVar9;
  Nekki_SF2_GUI_LabelAlias_o *pNVar10;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
                    /* try { // try from 03682bdc to 03782be3 has its CatchHandler @ 03682ca0 */
  if ((DAT_04568cdf & 1) == 0) {
                    /* try { // try from 03682bf4 to 03782c67 has its CatchHandler @ 03682ca8 */
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FightList>_get_Item__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_12537/*"Survival has no rewards"*/);
    DAT_04568cdf = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
                    /* try { // try from 03682c68 to 03782c93 has its CatchHandler @ 0368296c */
    pSVar3 = (System_Collections_Generic_List_object__o *)
             (*(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                       (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._10_DHBIECBOKMB.method);
    pNVar10 = (__this->fields)._minLabel;
    if (((pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
        (pUVar4 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
        pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) &&
       (pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03682c94 to 03782c9b has its CatchHandler @ 03682ca4 */
                    /* try { // try from 03682c9c to 03782cbf has its CatchHandler @ 0368296c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682bdc with catch @ 03682ca0
                        */
      UnityEngine_GameObject__SetActive(pUVar4,0 < (pSVar3->fields)._size,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682c94 with catch @ 03682ca4
                        */
      pNVar10 = (__this->fields)._maxLabel;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682bf4 with catch @ 03682ca8
                        */
      if ((pNVar10 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar10,(MethodInfo *)0x0),
         pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 03682cc0 to 03782cc3 has its CatchHandler @ 03682ce4 */
                    /* try { // try from 03682cc4 to 03782ceb has its CatchHandler @ 0368296c */
        UnityEngine_GameObject__SetActive(pUVar4,0 < (pSVar3->fields)._size,(MethodInfo *)0x0);
        pNVar5 = (__this->fields)._survivalPrizeMin;
        if ((pNVar5 != (Nekki_SF2_GUI_Map_BattlePrize_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch() { ... } // from try @ 03682cc0 with catch @ 03682ce4 */
                    /* try { // try from 03682cec to 03782cf3 has its CatchHandler @ 03682d08 */
          UnityEngine_GameObject__SetActive(pUVar4,0 < (pSVar3->fields)._size,(MethodInfo *)0x0);
                    /* try { // try from 03682cf4 to 03782cff has its CatchHandler @ 0368296c */
          pNVar5 = (__this->fields)._survivalPrizeMax;
                    /* try { // try from 03682d00 to 03782d07 has its CatchHandler @ 03682d08 */
          if ((pNVar5 != (Nekki_SF2_GUI_Map_BattlePrize_o *)0x0) &&
             (pUVar4 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pNVar5,(MethodInfo *)0x0),
             pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03682cec with catch @ 03682d08
                       catch(type#2 @ 00000000) { ... } // from try @ 03682d00 with catch @ 03682d08
                        */
                    /* try { // try from 03682d14 to 03782da7 has its CatchHandler @ 03682d14
                       catch() { ... } // from try @ 03682d14 with catch @ 03682d14
                       catch() { ... } // from try @ 03682de0 with catch @ 03682d14
                       catch() { ... } // from try @ 03682e20 with catch @ 03682d14
                       catch() { ... } // from try @ 03682e4c with catch @ 03682d14
                       catch() { ... } // from try @ 03682e84 with catch @ 03682d14 */
            UnityEngine_GameObject__SetActive(pUVar4,0 < (pSVar3->fields)._size,(MethodInfo *)0x0);
            if ((pSVar3->fields)._size == 0) {
              return;
            }
            pIVar6 = System_Collections_Generic_List<object>__get_Item
                               (pSVar3,0,
                                Method_System_Collections_Generic_List<FightList>_get_Item__);
            if ((pIVar6 != (Il2CppObject *)0x0) &&
               (pSVar3 = pIVar6[0x13].monitor,
               pSVar3 != (System_Collections_Generic_List_object__o *)0x0)) {
              if ((pSVar3->fields)._size < 2) {
                if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                UnityEngine_Debug__LogError(StringLiteral_12537/*"Survival has no rewards"*/,(MethodInfo *)0x0);
                return;
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              if (DAT_04565b7d == '\0') {
                FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                DAT_04565b7d = '\x01';
              }
              if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 03682da8 to 03782daf has its CatchHandler @ 03682e30 */
              if (__this_00 != (Roster_o *)0x0) {
                iVar1 = Roster__EOEAKGGDBFH(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 03682dc4 to 03782dcb has its CatchHandler @ 03682e28 */
                pJVar7 = (JBCGDIEHOHH_o *)
                         System_Collections_Generic_List<object>__get_Item
                                   (pSVar3,1,
                                    Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
                if (pJVar7 != (JBCGDIEHOHH_o *)0x0) {
                    /* try { // try from 03682dd4 to 03782ddf has its CatchHandler @ 03682e24 */
                  NNHNNAKKKPL = JBCGDIEHOHH__ALLFNDNBMCO(pJVar7,iVar1,(MethodInfo *)0x0);
                    /* try { // try from 03682de0 to 03782e1b has its CatchHandler @ 03682d14 */
                  pJVar7 = (JBCGDIEHOHH_o *)
                           System_Collections_Generic_List<object>__get_Item
                                     (pSVar3,(pSVar3->fields)._size + -1,
                                      Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__
                                     );
                  if ((pJVar7 != (JBCGDIEHOHH_o *)0x0) &&
                     (NNHNNAKKKPL_00 = JBCGDIEHOHH__ALLFNDNBMCO(pJVar7,iVar1,(MethodInfo *)0x0),
                     NNHNNAKKKPL != (JHBHHHKEFOO_o *)0x0)) {
                    local_70.fields.fakeValueActive =
                         (NNHNNAKKKPL->fields).DJHKCMKJEFP.fields.fakeValueActive;
                    local_70.fields.inited = (NNHNNAKKKPL->fields).DJHKCMKJEFP.fields.inited;
                    local_70.fields._26_6_ =
                         *(undefined6 *)&(NNHNNAKKKPL->fields).DJHKCMKJEFP.fields.field_0x1a;
                    local_70.fields.fakeValue = (NNHNNAKKKPL->fields).DJHKCMKJEFP.fields.fakeValue;
                    local_70.fields.hiddenValue =
                         (NNHNNAKKKPL->fields).DJHKCMKJEFP.fields.hiddenValue;
                    local_70.fields.currentCryptoKey =
                         (NNHNNAKKKPL->fields).DJHKCMKJEFP.fields.currentCryptoKey;
                    /* try { // try from 03682e1c to 03782e1f has its CatchHandler @ 03682e2c */
                    /* try { // try from 03682e20 to 03782e47 has its CatchHandler @ 03682d14 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682dd4 with catch @ 03682e24
                        */
                    IPGOFHMGFOI = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                            (&local_70,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682dc4 with catch @ 03682e28
                        */
                    if (NNHNNAKKKPL_00 != (JHBHHHKEFOO_o *)0x0) {
                      local_90.fields.fakeValueActive =
                           (NNHNNAKKKPL_00->fields).DJHKCMKJEFP.fields.fakeValueActive;
                      local_90.fields.inited = (NNHNNAKKKPL_00->fields).DJHKCMKJEFP.fields.inited;
                      local_90.fields._26_6_ =
                           *(undefined6 *)&(NNHNNAKKKPL_00->fields).DJHKCMKJEFP.fields.field_0x1a;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682e1c with catch @ 03682e2c
                        */
                      local_90.fields.fakeValue =
                           (NNHNNAKKKPL_00->fields).DJHKCMKJEFP.fields.fakeValue;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03682da8 with catch @ 03682e30
                        */
                      local_90.fields.hiddenValue =
                           (NNHNNAKKKPL_00->fields).DJHKCMKJEFP.fields.hiddenValue;
                      local_90.fields.currentCryptoKey =
                           (NNHNNAKKKPL_00->fields).DJHKCMKJEFP.fields.currentCryptoKey;
                      IPGOFHMGFOI_00 =
                           CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                     (&local_90,(MethodInfo *)0x0);
                    /* try { // try from 03682e48 to 03782e4b has its CatchHandler @ 03682e74 */
                      local_b0.fields.hiddenValue =
                           (NNHNNAKKKPL->fields).DCDLMCEEOCC.fields.hiddenValue;
                      local_b0.fields.currentCryptoKey =
                           (NNHNNAKKKPL->fields).DCDLMCEEOCC.fields.currentCryptoKey;
                      local_b0.fields.fakeValueActive =
                           (NNHNNAKKKPL->fields).DCDLMCEEOCC.fields.fakeValueActive;
                      local_b0.fields.inited = (NNHNNAKKKPL->fields).DCDLMCEEOCC.fields.inited;
                      local_b0.fields._26_6_ =
                           *(undefined6 *)&(NNHNNAKKKPL->fields).DCDLMCEEOCC.fields.field_0x1a;
                    /* try { // try from 03682e4c to 03782e7b has its CatchHandler @ 03682d14 */
                      local_b0.fields.fakeValue = (NNHNNAKKKPL->fields).DCDLMCEEOCC.fields.fakeValue
                      ;
                      iVar8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                        (&local_b0,(MethodInfo *)0x0);
                      local_d0.fields.hiddenValue =
                           (NNHNNAKKKPL_00->fields).DCDLMCEEOCC.fields.hiddenValue;
                      local_d0.fields.currentCryptoKey =
                           (NNHNNAKKKPL_00->fields).DCDLMCEEOCC.fields.currentCryptoKey;
                      local_d0.fields.fakeValueActive =
                           (NNHNNAKKKPL_00->fields).DCDLMCEEOCC.fields.fakeValueActive;
                      local_d0.fields.inited = (NNHNNAKKKPL_00->fields).DCDLMCEEOCC.fields.inited;
                      local_d0.fields._26_6_ =
                           *(undefined6 *)&(NNHNNAKKKPL_00->fields).DCDLMCEEOCC.fields.field_0x1a;
                      local_d0.fields.fakeValue =
                           (NNHNNAKKKPL_00->fields).DCDLMCEEOCC.fields.fakeValue;
                    /* catch() { ... } // from try @ 03682e48 with catch @ 03682e74 */
                    /* try { // try from 03682e7c to 03782e83 has its CatchHandler @ 03682e98 */
                      iVar9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                        (&local_d0,(MethodInfo *)0x0);
                    /* try { // try from 03682e84 to 03782e8f has its CatchHandler @ 03682d14 */
                    /* try { // try from 03682e90 to 03782e97 has its CatchHandler @ 03682e98 */
                      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03682e7c with catch @ 03682e98
                       catch(type#2 @ 00000000) { ... } // from try @ 03682e90 with catch @ 03682e98
                        */
                        thunk_FUN_01ba7564(GameUtils_TypeInfo);
                      }
                      iVar8 = GameUtils__ADEEECDDBPN(iVar8,0,(MethodInfo *)0x0);
                      iVar9 = GameUtils__ADEEECDDBPN(iVar9,0,(MethodInfo *)0x0);
                      iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
                      pNVar5 = (__this->fields)._survivalPrizeMin;
                      iVar1 = 0x50;
                      if (iVar2 != 8) {
                        iVar1 = 0x69;
                      }
                      if (pNVar5 != (Nekki_SF2_GUI_Map_BattlePrize_o *)0x0) {
                        Nekki_SF2_GUI_Map_BattlePrize__Init
                                  (pNVar5,iVar8,IPGOFHMGFOI,NNHNNAKKKPL,0.0,100.0,iVar1,
                                   (MethodInfo *)0x0);
                        pNVar5 = (__this->fields)._survivalPrizeMax;
                        if (pNVar5 != (Nekki_SF2_GUI_Map_BattlePrize_o *)0x0) {
                          Nekki_SF2_GUI_Map_BattlePrize__Init
                                    (pNVar5,iVar9,IPGOFHMGFOI_00,NNHNNAKKKPL_00,0.0,100.0,iVar1,
                                     (MethodInfo *)0x0);
                          iVar1 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
                          if (iVar1 == 8) {
                            pNVar10 = (__this->fields)._lblDescription;
                            if (pNVar10 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_03682fc8;
                            Nekki_SF2_GUI_LabelAlias__set_Alias
                                      (pNVar10,(BANHBMINMMP->fields).BJMHBMDFFPA,(MethodInfo *)0x0);
                          }
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03682fc8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3582FCC]
// Nekki.SF2.GUI.Map.ContentSurvival$$.ctor @ RVA 0x3582FCC

void Nekki_SF2_GUI_Map_ContentSurvival___ctor
               (Nekki_SF2_GUI_Map_ContentSurvival_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_ContentBase___ctor((Nekki_SF2_GUI_Map_ContentBase_o *)__this,(MethodInfo *)0x0);
  return;
}

