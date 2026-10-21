// TypeDefIndex 3254
// Namespace: Nekki.SF2.GUI.Dialogs.ShowLoot
// public class ShowLootDialog : SimpleDialog
// Fields:
//   private GameObject _lootCellPrefab; // 0x110
//   private ScrollRect _scroll; // 0x118
//   private string ECIBAPAHFLM; // 0x120
//   private readonly List<LootCell> ONENMEPPGMD; // 0x128
//   private IEnumerable<HOOAAGABMBL> FCKCGNHILFE; // 0x130

// ===== public void .ctor()  [RVA 0x3512468]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$.ctor @ RVA 0x3512468

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog___ctor
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_LootCell__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045688ff & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>__ctor__);
                    /* try { // try from 036124a4 to 037124ab has its CatchHandler @ 0361259c */
    FUN_01bab630(&System_Collections_Generic_List<LootCell>_TypeInfo);
    DAT_045688ff = 1;
    method = extraout_x1;
  }
                    /* try { // try from 036124b4 to 037124b7 has its CatchHandler @ 036124d0 */
  __this_00 = (System_Collections_Generic_List_LootCell__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<LootCell>_TypeInfo,method);
                    /* try { // try from 036124bc to 037124c7 has its CatchHandler @ 036124d8 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LootCell>__ctor__);
                    /* try { // try from 036124c8 to 037124ef has its CatchHandler @ 03612174 */
                    /* catch() { ... } // from try @ 036123f8 with catch @ 036124cc */
                    /* catch() { ... } // from try @ 036124b4 with catch @ 036124d0 */
  (__this->fields).ONENMEPPGMD = __this_00;
                    /* catch() { ... } // from try @ 036123fc with catch @ 036124d4 */
  thunk_FUN_01c20e04(&(__this->fields).ONENMEPPGMD,__this_00);
                    /* catch() { ... } // from try @ 036124bc with catch @ 036124d8 */
                    /* catch() { ... } // from try @ 036123d4 with catch @ 036124dc */
                    /* catch() { ... } // from try @ 03612410 with catch @ 036124e0 */
  Nekki_SF2_GUI_Dialogs_SimpleDialog___ctor
            ((Nekki_SF2_GUI_Dialogs_SimpleDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public override void UpdateHeaderPosition()  [RVA 0x35124F0]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$UpdateHeaderPosition @ RVA 0x35124F0

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__UpdateHeaderPosition
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
                    /* try { // try from 036124f0 to 037124f3 has its CatchHandler @ 03612580 */
  return;
}


// ===== private void KMGNKMDLKDL()  [RVA 0x35124F4]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$KMGNKMDLKDL @ RVA 0x35124F4

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__KMGNKMDLKDL
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *ALMGONACBKC;
  bool bVar1;
  System_Collections_Generic_List_LootCell__o *pSVar2;
  OGNCMFBMBMB_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* try { // try from 036124f4 to 03712547 has its CatchHandler @ 03612174 */
  if ((DAT_04568900 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LootCell>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LootCell>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LootCell>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_Clear__);
                    /* try { // try from 03612548 to 03712563 has its CatchHandler @ 03612624 */
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_get_Count__);
                    /* try { // try from 03612564 to 03712567 has its CatchHandler @ 036125b0 */
    FUN_01bab630(&Method_OGNCMFBMBMB_LEAPFADCELA<LootCell>__);
                    /* try { // try from 03612568 to 0371256b has its CatchHandler @ 036125ac */
                    /* try { // try from 0361256c to 0371256f has its CatchHandler @ 036125a8 */
    DAT_04568900 = 1;
  }
                    /* try { // try from 03612570 to 03712577 has its CatchHandler @ 03612598 */
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 03612578 to 0371257b has its CatchHandler @ 03612590 */
  pSVar2 = (__this->fields).ONENMEPPGMD;
                    /* try { // try from 0361257c to 037125c7 has its CatchHandler @ 03612174 */
  if (pSVar2 != (System_Collections_Generic_List_LootCell__o *)0x0) {
                    /* catch() { ... } // from try @ 036124f0 with catch @ 03612580 */
    if ((pSVar2->fields)._size != 0) {
                    /* catch() { ... } // from try @ 03612318 with catch @ 0361258c */
                    /* catch() { ... } // from try @ 03612578 with catch @ 03612590 */
                    /* catch() { ... } // from try @ 036123b4 with catch @ 03612594 */
                    /* catch() { ... } // from try @ 03612570 with catch @ 03612598 */
                    /* catch() { ... } // from try @ 036124a4 with catch @ 0361259c */
                    /* catch() { ... } // from try @ 03612350 with catch @ 036125a0 */
                    /* catch() { ... } // from try @ 03612388 with catch @ 036125a4 */
                    /* catch() { ... } // from try @ 0361256c with catch @ 036125a8 */
                    /* catch() { ... } // from try @ 03612568 with catch @ 036125ac */
                    /* catch() { ... } // from try @ 03612564 with catch @ 036125b0 */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<LootCell>_GetEnumerator__);
                    /* catch() { ... } // from try @ 036122fc with catch @ 036125b4 */
                    /* catch() { ... } // from try @ 0361232c with catch @ 036125b8 */
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_List_Enumerator<LootCell>_MoveNext__
                               ), ALMGONACBKC = local_48.fields._current, bVar1) {
                    /* try { // try from 036125c8 to 037125cb has its CatchHandler @ 036125f8 */
                    /* try { // try from 036125cc to 03712607 has its CatchHandler @ 03612174 */
        __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
        if (__this_00 == (OGNCMFBMBMB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        OGNCMFBMBMB__LEAPFADCELA<object>
                  (__this_00,ALMGONACBKC,Method_OGNCMFBMBMB_LEAPFADCELA<LootCell>__);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<LootCell>_Dispose__);
      pSVar2 = (__this->fields).ONENMEPPGMD;
      if (pSVar2 == (System_Collections_Generic_List_LootCell__o *)0x0) goto LAB_03612634;
                    /* catch() { ... } // from try @ 036125c8 with catch @ 036125f8 */
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
                    /* try { // try from 03612608 to 0371260f has its CatchHandler @ 03612624 */
      if (0 < length) {
                    /* try { // try from 03612610 to 0371261b has its CatchHandler @ 03612174 */
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
    }
                    /* try { // try from 0361261c to 03712623 has its CatchHandler @ 03612624 */
                    /* catch() { ... } // from try @ 03612548 with catch @ 03612624
                       catch() { ... } // from try @ 03612608 with catch @ 03612624
                       catch() { ... } // from try @ 0361261c with catch @ 03612624 */
    return;
  }
LAB_03612634:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MFHDALKEKDL(HOOAAGABMBL IKKAMAMLIKA, IEnumerable<PerkInfoItem> GMCPJIFJKJJ)  [RVA 0x35126B8]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$MFHDALKEKDL @ RVA 0x35126B8

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__MFHDALKEKDL
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,
               System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *GMCPJIFJKJJ,MethodInfo *method
               )

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *__this_00;
  System_Collections_Generic_IEnumerable_HEFOANCOHDC__o **ppSVar4;
  int64_t iVar5;
  System_Action_LootCell__o *pSVar6;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_o *__this_01;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o **ppNVar7;
  GameUtils_HLAKGGFFNAO_o *pMVar8;
  HBNENINHPGF_o *pHVar9;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_o *__this_02;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_o *__this_03;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_o *__this_04;
  System_Collections_Generic_List_POGBKGFBOLC__o *__this_05;
  Item_o *__this_06;
  MethodInfo *pMVar10;
  HOOAAGABMBL_o *pHVar11;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_Fields *pNVar12;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_Fields *pNVar13;
  System_Collections_Generic_List_Enumerator_T__o local_128;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_110;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_f0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_d0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_b0;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04568901 & 1) == 0) {
    FUN_01bab630(&System_Action<LootCell>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<POGBKGFBOLC>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<POGBKGFBOLC>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<POGBKGFBOLC>_get_Current__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_DPKFGLJCONG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_KBJHDLLJJHK__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_EOFOPIKGJNI__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_GFGILABFAKH__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_GADMIFDEHMB__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_JCIIOOPHOFP__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_LBBFPJGDBFG__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<POGBKGFBOLC>_GetEnumerator__);
    FUN_01bab630(&GameUtils_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_6546/*"ForgeMaterial1"*/);
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
    FUN_01bab630(&StringLiteral_6548/*"ForgeMaterial3"*/);
    FUN_01bab630(&StringLiteral_6547/*"ForgeMaterial2"*/);
    DAT_04568901 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_TypeInfo)
  ;
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *)0x0)
  goto LAB_03612db0;
  pNVar12 = &__this_00->fields;
  pNVar12->item = IKKAMAMLIKA;
  thunk_FUN_01c20e04(pNVar12,IKKAMAMLIKA);
  ppSVar4 = &(__this_00->fields).itemPerks;
  *ppSVar4 = GMCPJIFJKJJ;
  thunk_FUN_01c20e04(ppSVar4,GMCPJIFJKJJ);
  if (pNVar12->item != (HOOAAGABMBL_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((pNVar12->item->fields)._GMPAEDFIIHF_k__BackingField,StringLiteral_11073/*"RealMoneyItem"*/,
                       (MethodInfo *)0x0);
    if (bVar2) {
      pHVar11 = pNVar12->item;
      if (pHVar11 != (HOOAAGABMBL_o *)0x0) {
        local_90.fields.hiddenValue =
             (pHVar11->fields)._DILLJMLCPON_k__BackingField.fields.hiddenValue;
        local_90.fields.currentCryptoKey =
             (pHVar11->fields)._DILLJMLCPON_k__BackingField.fields.currentCryptoKey;
        local_90.fields.fakeValueActive =
             (pHVar11->fields)._DILLJMLCPON_k__BackingField.fields.fakeValueActive;
        local_90.fields.inited = (pHVar11->fields)._DILLJMLCPON_k__BackingField.fields.inited;
        local_90.fields._26_6_ =
             *(undefined6 *)&(pHVar11->fields)._DILLJMLCPON_k__BackingField.fields.field_0x1a;
        local_90.fields.fakeValue = (pHVar11->fields)._DILLJMLCPON_k__BackingField.fields.fakeValue;
        iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                          (&local_90,(MethodInfo *)0x0);
        if (0 < iVar5) {
          pSVar6 = (System_Action_LootCell__o *)thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo)
          ;
          method = (MethodInfo *)0x0;
          pMVar10 = Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_LBBFPJGDBFG__;
          System_Action<object>___ctor();
          Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD(__this,pSVar6,pMVar10);
        }
        pHVar11 = pNVar12->item;
        if (pHVar11 != (HOOAAGABMBL_o *)0x0) {
          local_b0.fields.hiddenValue =
               (pHVar11->fields)._OFDIEEPACGC_k__BackingField.fields.hiddenValue;
          local_b0.fields.currentCryptoKey =
               (pHVar11->fields)._OFDIEEPACGC_k__BackingField.fields.currentCryptoKey;
          local_b0.fields.fakeValueActive =
               (pHVar11->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValueActive;
          local_b0.fields.inited = (pHVar11->fields)._OFDIEEPACGC_k__BackingField.fields.inited;
          local_b0.fields._26_6_ =
               *(undefined6 *)&(pHVar11->fields)._OFDIEEPACGC_k__BackingField.fields.field_0x1a;
          local_b0.fields.fakeValue =
               (pHVar11->fields)._OFDIEEPACGC_k__BackingField.fields.fakeValue;
          iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                            (&local_b0,(MethodInfo *)0x0);
          if (0 < iVar5) {
            pSVar6 = (System_Action_LootCell__o *)
                     thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo);
            method = (MethodInfo *)0x0;
            pMVar10 = Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_JCIIOOPHOFP__
            ;
            System_Action<object>___ctor();
            Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD(__this,pSVar6,pMVar10);
          }
          pHVar11 = pNVar12->item;
          if (pHVar11 != (HOOAAGABMBL_o *)0x0) {
            local_d0.fields.hiddenValue =
                 (pHVar11->fields)._EAOJFBDIFLL_k__BackingField.fields.hiddenValue;
            local_d0.fields.currentCryptoKey =
                 (pHVar11->fields)._EAOJFBDIFLL_k__BackingField.fields.currentCryptoKey;
            local_d0.fields.fakeValueActive =
                 (pHVar11->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValueActive;
            local_d0.fields.inited = (pHVar11->fields)._EAOJFBDIFLL_k__BackingField.fields.inited;
            local_d0.fields._26_6_ =
                 *(undefined6 *)&(pHVar11->fields)._EAOJFBDIFLL_k__BackingField.fields.field_0x1a;
            local_d0.fields.fakeValue =
                 (pHVar11->fields)._EAOJFBDIFLL_k__BackingField.fields.fakeValue;
            iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                              (&local_d0,(MethodInfo *)0x0);
            if (0 < iVar5) {
              __this_01 = (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_o *)
                          thunk_FUN_01bda818(
                                            Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_TypeInfo
                                            );
              Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF___ctor
                        (__this_01,(MethodInfo *)0x0);
              if (__this_01 == (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_o *)0x0)
              goto LAB_03612db0;
              ppNVar7 = &(__this_01->fields).CS___8__locals1;
              *ppNVar7 = __this_00;
              thunk_FUN_01c20e04(ppNVar7,__this_00);
              if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pMVar8 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
              if (pMVar8 == (GameUtils_HLAKGGFFNAO_o *)0x0) goto LAB_03612db0;
              pHVar9 = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                                 (pMVar8,StringLiteral_6546/*"ForgeMaterial1"*/,(MethodInfo *)0x0);
              (__this_01->fields).currency = pHVar9;
              thunk_FUN_01c20e04();
              pSVar6 = (System_Action_LootCell__o *)
                       thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo);
              method = (MethodInfo *)0x0;
              pMVar10 = 
              Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HDHDOIGPHNF_KBJHDLLJJHK__;
              System_Action<object>___ctor();
              Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD(__this,pSVar6,pMVar10);
            }
            pHVar11 = pNVar12->item;
            if (pHVar11 != (HOOAAGABMBL_o *)0x0) {
              local_f0.fields.hiddenValue =
                   (pHVar11->fields)._GNFNOKJDGFH_k__BackingField.fields.hiddenValue;
              local_f0.fields.currentCryptoKey =
                   (pHVar11->fields)._GNFNOKJDGFH_k__BackingField.fields.currentCryptoKey;
              local_f0.fields.fakeValueActive =
                   (pHVar11->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValueActive;
              local_f0.fields.inited = (pHVar11->fields)._GNFNOKJDGFH_k__BackingField.fields.inited;
              local_f0.fields._26_6_ =
                   *(undefined6 *)&(pHVar11->fields)._GNFNOKJDGFH_k__BackingField.fields.field_0x1a;
              local_f0.fields.fakeValue =
                   (pHVar11->fields)._GNFNOKJDGFH_k__BackingField.fields.fakeValue;
              iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                (&local_f0,(MethodInfo *)0x0);
              if (0 < iVar5) {
                __this_02 = (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_o *)
                            thunk_FUN_01bda818(
                                              Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_TypeInfo
                                              );
                Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD___ctor
                          (__this_02,(MethodInfo *)0x0);
                if (__this_02 == (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_o *)0x0)
                goto LAB_03612db0;
                ppNVar7 = &(__this_02->fields).CS___8__locals2;
                    /* try { // try from 03612a50 to 03712d7b has its CatchHandler @ 03612a50
                       catch() { ... } // from try @ 03612a50 with catch @ 03612a50
                       catch() { ... } // from try @ 03612eec with catch @ 03612a50
                       catch() { ... } // from try @ 03612f98 with catch @ 03612a50
                       catch() { ... } // from try @ 03612fa0 with catch @ 03612a50
                       catch() { ... } // from try @ 03613068 with catch @ 03612a50 */
                *ppNVar7 = __this_00;
                thunk_FUN_01c20e04(ppNVar7,__this_00);
                if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pMVar8 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
                if (pMVar8 == (GameUtils_HLAKGGFFNAO_o *)0x0) goto LAB_03612db0;
                pHVar9 = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                                   (pMVar8,StringLiteral_6547/*"ForgeMaterial2"*/,(MethodInfo *)0x0);
                (__this_02->fields).currency = pHVar9;
                thunk_FUN_01c20e04();
                pSVar6 = (System_Action_LootCell__o *)
                         thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo);
                method = (MethodInfo *)0x0;
                pMVar10 = 
                Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_HONDNMINDCD_EOFOPIKGJNI__;
                System_Action<object>___ctor();
                Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD(__this,pSVar6,pMVar10);
              }
              pHVar11 = pNVar12->item;
              if (pHVar11 != (HOOAAGABMBL_o *)0x0) {
                local_110.fields.hiddenValue =
                     (pHVar11->fields)._JMHDOFLEICP_k__BackingField.fields.hiddenValue;
                local_110.fields.currentCryptoKey =
                     (pHVar11->fields)._JMHDOFLEICP_k__BackingField.fields.currentCryptoKey;
                local_110.fields.fakeValueActive =
                     (pHVar11->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValueActive;
                local_110.fields.inited =
                     (pHVar11->fields)._JMHDOFLEICP_k__BackingField.fields.inited;
                local_110.fields._26_6_ =
                     *(undefined6 *)
                      &(pHVar11->fields)._JMHDOFLEICP_k__BackingField.fields.field_0x1a;
                local_110.fields.fakeValue =
                     (pHVar11->fields)._JMHDOFLEICP_k__BackingField.fields.fakeValue;
                iVar5 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO
                                  (&local_110,(MethodInfo *)0x0);
                if (0 < iVar5) {
                  __this_03 = (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_o *)
                              thunk_FUN_01bda818(
                                                Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_TypeInfo
                                                );
                  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI___ctor
                            (__this_03,(MethodInfo *)0x0);
                  if (__this_03 ==
                      (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_o *)0x0)
                  goto LAB_03612db0;
                  ppNVar7 = &(__this_03->fields).CS___8__locals3;
                  *ppNVar7 = __this_00;
                  thunk_FUN_01c20e04(ppNVar7,__this_00);
                  if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pMVar8 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC;
                  if (pMVar8 == (GameUtils_HLAKGGFFNAO_o *)0x0) goto LAB_03612db0;
                  pHVar9 = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                                     (pMVar8,StringLiteral_6548/*"ForgeMaterial3"*/,(MethodInfo *)0x0);
                  (__this_03->fields).currency = pHVar9;
                  thunk_FUN_01c20e04();
                  pSVar6 = (System_Action_LootCell__o *)
                           thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo);
                  method = (MethodInfo *)0x0;
                  pMVar10 = 
                  Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_ICNOOPEFEGI_GFGILABFAKH__;
                  System_Action<object>___ctor();
                  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD(__this,pSVar6,pMVar10);
                }
                if (pNVar12->item != (HOOAAGABMBL_o *)0x0) {
                  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD
                                    ((pNVar12->item->fields)._PGINAEHGANC_k__BackingField,
                                     (MethodInfo *)0x0);
                  if (bVar2) {
                    if (pNVar12->item == (HOOAAGABMBL_o *)0x0) goto LAB_03612db0;
                    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                                       (pNVar12->item->fields)._OJGPBEFJPKN_k__BackingField.fields,
                                       (MethodInfo *)0x0);
                    if (0 < iVar3) {
                      __this_04 = (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_o *)
                                  thunk_FUN_01bda818(
                                                  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_TypeInfo
                                                  );
                      Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC___ctor
                                (__this_04,(MethodInfo *)0x0);
                      if (__this_04 ==
                          (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_o *)0x0)
                      goto LAB_03612db0;
                      ppNVar7 = &(__this_04->fields).CS___8__locals4;
                      *ppNVar7 = __this_00;
                      thunk_FUN_01c20e04(ppNVar7,__this_00);
                      if ((GameUtils_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (((*ppNVar7 ==
                            (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_o *)0x0) ||
                          (pHVar11 = ((*ppNVar7)->fields).item, pHVar11 == (HOOAAGABMBL_o *)0x0)) ||
                         (pMVar8 = GameUtils_TypeInfo->static_fields->BHAAICEFMBC,
                         pMVar8 == (GameUtils_HLAKGGFFNAO_o *)0x0)) goto LAB_03612db0;
                      pHVar9 = GameUtils_HLAKGGFFNAO__BHJOLIJDBLO
                                         (pMVar8,(pHVar11->fields)._PGINAEHGANC_k__BackingField,
                                          (MethodInfo *)0x0);
                      pNVar13 = &__this_04->fields;
                      pNVar13->currency = pHVar9;
                      thunk_FUN_01c20e04(pNVar13,pHVar9);
                      if (pNVar13->currency != (HBNENINHPGF_o *)0x0) {
                        pSVar6 = (System_Action_LootCell__o *)
                                 thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo);
                        method = (MethodInfo *)0x0;
                        pMVar10 = 
                        Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_GINONNFIHBC_DPKFGLJCONG__
                        ;
                        System_Action<object>___ctor();
                        Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD
                                  (__this,pSVar6,pMVar10);
                      }
                    }
                  }
                  bVar2 = JOOGMNNBBHI__DFOPHIKFMHM(pNVar12->item,(MethodInfo *)0x0);
                  if (!bVar2) {
                    return;
                  }
                  if ((pNVar12->item != (HOOAAGABMBL_o *)0x0) &&
                     (__this_05 = (pNVar12->item->fields)._NBNMKKDFHLJ_k__BackingField,
                     __this_05 != (System_Collections_Generic_List_POGBKGFBOLC__o *)0x0)) {
                    System_Collections_Generic_List<object>__GetEnumerator
                              (&local_128,(System_Collections_Generic_List_object__o *)__this_05,
                               Method_System_Collections_Generic_List<POGBKGFBOLC>_GetEnumerator__);
                    local_70.fields._index = local_128.fields._index;
                    local_70.fields._version = local_128.fields._version;
                    local_70.fields._list = local_128.fields._list;
                    local_70.fields._current = local_128.fields._current;
                    while( true ) {
                      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                        (&local_70,
                                         Method_System_Collections_Generic_List_Enumerator<POGBKGFBOLC>_MoveNext__
                                        );
                      pIVar1 = local_70.fields._current;
                      if (!bVar2) {
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (&local_70,
                                   Method_System_Collections_Generic_List_Enumerator<POGBKGFBOLC>_Dispose__
                                  );
                        return;
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (DAT_04563eaa == '\0') {
                        FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                        DAT_04563eaa = '\x01';
                      }
                      if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      if (pIVar1 == (Il2CppObject *)0x0) break;
                      __this_06 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                      if (__this_06 == (Item_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_01bab8c8();
                      }
                    /* try { // try from 03612d7c to 03712da3 has its CatchHandler @ 03612fd0 */
                      pHVar11 = Item__CKKIPBAIEMN
                                          (__this_06,(System_String_o *)pIVar1[1].klass,
                                           (MethodInfo *)0x0);
                      Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__MFHDALKEKDL
                                (__this,pHVar11,
                                 (System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *)
                                 pIVar1[2].klass,method);
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_01bab8c8();
                  }
                }
              }
            }
          }
        }
      }
LAB_03612db0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = (System_Action_LootCell__o *)thunk_FUN_01bda818(System_Action<LootCell>_TypeInfo);
    pMVar10 = Method_Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_KEBHMEFAFEG_GADMIFDEHMB__;
    System_Action<object>___ctor();
    Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD(__this,pSVar6,pMVar10);
  }
                    /* try { // try from 03612e40 to 03712e4b has its CatchHandler @ 03612fc0 */
                    /* try { // try from 03612e50 to 03712e57 has its CatchHandler @ 03612fc4 */
  return;
}


// ===== protected override void OnDestroy()  [RVA 0x3513004]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$OnDestroy @ RVA 0x3513004

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__OnDestroy
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  
  Nekki_SF2_GUI_Dialogs_BaseDialog__OnDestroy
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__KMGNKMDLKDL(__this,method_00);
  return;
}


// ===== private void OHIFMDPOBHO(IEnumerable<HOOAAGABMBL> KJADEEFANAL)  [RVA 0x3513020]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$OHIFMDPOBHO @ RVA 0x3513020

/* WARNING: Removing unreachable block (ram,0x03613264) */

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__OHIFMDPOBHO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,
               System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *KJADEEFANAL,MethodInfo *method
               )

{
  ushort uVar1;
  VirtualInvokeData *pVVar2;
  long *plVar3;
  undefined8 *puVar4;
  HOOAAGABMBL_o *IKKAMAMLIKA;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  System_Collections_Generic_IEnumerable_HOOAAGABMBL__c *pSVar5;
  long lVar6;
  ulong uVar7;
  int32_t *piVar8;
  int *piVar9;
  System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *pSVar10;
  
  if ((DAT_04568902 & 1) == 0) {
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo);
                    /* try { // try from 03613068 to 03713073 has its CatchHandler @ 03612a50 */
    FUN_01bab630(&System_Collections_IEnumerator_TypeInfo);
                    /* try { // try from 03613074 to 0371307b has its CatchHandler @ 0361307c */
    DAT_04568902 = 1;
  }
                    /* catch() { ... } // from try @ 03613000 with catch @ 0361307c
                       catch() { ... } // from try @ 03613074 with catch @ 0361307c */
                    /* try { // try from 03613080 to 0371318b has its CatchHandler @ 03613080
                       catch() { ... } // from try @ 03613080 with catch @ 03613080
                       catch() { ... } // from try @ 036132f4 with catch @ 03613080
                       catch() { ... } // from try @ 036133a0 with catch @ 03613080
                       catch() { ... } // from try @ 036133a8 with catch @ 03613080
                       catch() { ... } // from try @ 03613470 with catch @ 03613080 */
  (__this->fields).FCKCGNHILFE = KJADEEFANAL;
  thunk_FUN_01c20e04(&(__this->fields).FCKCGNHILFE,KJADEEFANAL);
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__KMGNKMDLKDL(__this,method_00);
  pSVar10 = (__this->fields).FCKCGNHILFE;
  if (pSVar10 == (System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0361325c to 03713263 has its CatchHandler @ 036133cc */
    FUN_01bab8c8();
  }
  pSVar5 = pSVar10->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo) {
        pVVar2 = pSVar5->vtable + *piVar8;
        goto LAB_036130f0;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar2 = (VirtualInvokeData *)
           FUN_01b81914(pSVar10,System_Collections_Generic_IEnumerable<HOOAAGABMBL>_TypeInfo,0);
LAB_036130f0:
  plVar3 = (long *)(*pVVar2->methodPtr)(pSVar10,pVVar2->method);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  do {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_IEnumerator_c **)(piVar9 + -2) ==
            System_Collections_IEnumerator_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03613168;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_Collections_IEnumerator_TypeInfo,0);
LAB_03613168:
    uVar7 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar7 & 1) == 0) break;
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
                    /* try { // try from 0361318c to 037131b3 has its CatchHandler @ 036133d8 */
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_Collections_Generic_IEnumerator_HOOAAGABMBL__c **)(piVar9 + -2) ==
            System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_036131c4;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)
             FUN_01b81914(plVar3,System_Collections_Generic_IEnumerator<HOOAAGABMBL>_TypeInfo,0);
LAB_036131c4:
    IKKAMAMLIKA = (HOOAAGABMBL_o *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__MFHDALKEKDL
              (__this,IKKAMAMLIKA,(System_Collections_Generic_IEnumerable_HEFOANCOHDC__o *)0x0,in_x3
              );
  } while( true );
                    /* try { // try from 036131e8 to 03713213 has its CatchHandler @ 036133d4 */
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(System_IDisposable_c **)(piVar9 + -2) == System_IDisposable_TypeInfo) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_03613238;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_01b81914(plVar3,System_IDisposable_TypeInfo,0);
LAB_03613238:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
                    /* try { // try from 03613250 to 03713257 has its CatchHandler @ 036133c4 */
  return;
}


// ===== protected override void FMJHHEJDAKI()  [RVA 0x3513314]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$FMJHHEJDAKI @ RVA 0x3513314

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__FMJHHEJDAKI
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  if ((DAT_04568903 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568903 = 1;
  }
  pUVar3 = (__this->fields)._scroll;
  if ((pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
     (pUVar2 = (pUVar3->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
  goto LAB_03613410;
  iVar1 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0)
  ;
  if (iVar1 < 1) {
                    /* catch() { ... } // from try @ 0361325c with catch @ 036133cc */
    fVar4 = 0.0;
  }
  else {
    pUVar3 = (__this->fields)._scroll;
                    /* try { // try from 03613388 to 0371338f has its CatchHandler @ 036133dc */
                    /* try { // try from 03613390 to 03713393 has its CatchHandler @ 036133d0 */
                    /* try { // try from 03613394 to 03713397 has its CatchHandler @ 036133c8 */
                    /* try { // try from 03613398 to 0371339b has its CatchHandler @ 036133b4 */
    if ((((pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (pUVar2 = (pUVar3->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0)) ||
        (pUVar2 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Transform__GetChild
                            ((UnityEngine_Transform_o *)pUVar2,0,(MethodInfo *)0x0),
        pUVar2 == (UnityEngine_RectTransform_o *)0x0)) ||
       (pUVar2->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_03613410;
                    /* try { // try from 0361339c to 0371339f has its CatchHandler @ 036133c8 */
                    /* try { // try from 036133a0 to 037133a3 has its CatchHandler @ 03613080 */
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 036133a4 to 037133a7 has its CatchHandler @ 036133b0 */
    pUVar3 = (__this->fields)._scroll;
                    /* try { // try from 036133a8 to 037133eb has its CatchHandler @ 03613080 */
                    /* catch() { ... } // from try @ 036133a4 with catch @ 036133b0 */
    if ((pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_03613410;
                    /* catch() { ... } // from try @ 03613398 with catch @ 036133b4 */
                    /* catch() { ... } // from try @ 03613278 with catch @ 036133b8 */
                    /* catch() { ... } // from try @ 03613288 with catch @ 036133bc */
    iVar1 = UnityEngine_Transform__get_childCount
                      ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03613290 with catch @ 036133c0 */
                    /* catch() { ... } // from try @ 03613250 with catch @ 036133c4 */
    fVar4 = UVar5.fields.y * (float)iVar1;
                    /* catch() { ... } // from try @ 03613394 with catch @ 036133c8
                       catch() { ... } // from try @ 0361339c with catch @ 036133c8 */
  }
                    /* catch() { ... } // from try @ 03613390 with catch @ 036133d0 */
  pUVar3 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 036131e8 with catch @ 036133d4 */
                    /* catch() { ... } // from try @ 0361318c with catch @ 036133d8 */
                    /* catch() { ... } // from try @ 03613388 with catch @ 036133dc */
  if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar3->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 036133ec to 037133ef has its CatchHandler @ 03613400 */
                    /* catch() { ... } // from try @ 036133ec with catch @ 03613400 */
    (pUVar3->fields).m_Vertical = UVar6.fields.m_Height + 0.01 <= fVar4;
                    /* try { // try from 03613408 to 0371346f has its CatchHandler @ 03613484 */
    return;
  }
LAB_03613410:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void IGDDKJJMDLP()  [RVA 0x3513414]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$IGDDKJJMDLP @ RVA 0x3513414

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__IGDDKJJMDLP
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== protected override void KHKLLNFCMME()  [RVA 0x3513418]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$KHKLLNFCMME @ RVA 0x3513418

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__KHKLLNFCMME
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== public override void Init(object IMMNELPBGIF)  [RVA 0x351341C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$Init @ RVA 0x351341C

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__Init
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t DNBBBGEENMM;
  System_String_o *GKLEODLEPMA;
  System_String_o **ppSVar3;
  System_String_o *DOEJEADIJEJ;
  System_String_o *CJNHFNHJHPE;
  
  if ((DAT_04568904 & 1) == 0) {
    FUN_01bab630(&JDCLNBHKHJC_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
    DAT_04568904 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
                    /* try { // try from 03613470 to 0371347b has its CatchHandler @ 03613080 */
    bVar1 = (JDCLNBHKHJC_TypeInfo->_2).naturalAligment;
                    /* try { // try from 0361347c to 03713483 has its CatchHandler @ 03613484 */
                    /* catch() { ... } // from try @ 03613408 with catch @ 03613484
                       catch() { ... } // from try @ 0361347c with catch @ 03613484 */
    if ((bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) &&
       ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)JDCLNBHKHJC_TypeInfo)) {
      (__this->fields).ECIBAPAHFLM = IMMNELPBGIF[1].monitor;
      thunk_FUN_01c20e04(&(__this->fields).ECIBAPAHFLM);
      (__this->fields).super.super.NIEHEOKFPAN = (System_String_o *)IMMNELPBGIF[2].klass;
      thunk_FUN_01c20e04();
      (__this->fields).super.super.FKKACPDDADI = *(int32_t *)&IMMNELPBGIF[2].monitor;
      ppSVar3 = &(__this->fields).super.super.LLBBHINDIDB;
      *ppSVar3 = (System_String_o *)IMMNELPBGIF[3].klass;
      thunk_FUN_01c20e04(ppSVar3);
      (__this->fields).super.super.FHLAKGNIFAF = *(int32_t *)&IMMNELPBGIF[3].monitor;
      if (IMMNELPBGIF[4].klass != (Il2CppClass *)0x0) {
        Nekki_SF2_GUI_SFMonoBehaviour<object>__AddEventListener
                  ((Nekki_SF2_GUI_SFMonoBehaviour_object__o *)__this,0,
                   (System_Action_T__o *)IMMNELPBGIF[4].klass,
                   Method_Nekki_SF2_GUI_SFMonoBehaviour<object>_AddEventListener__);
      }
      (__this->fields).FCKCGNHILFE =
           (System_Collections_Generic_IEnumerable_HOOAAGABMBL__o *)IMMNELPBGIF[1].klass;
      thunk_FUN_01c20e04(&(__this->fields).FCKCGNHILFE);
    }
  }
  CJNHFNHJHPE = (__this->fields).super.super.LLBBHINDIDB;
  GKLEODLEPMA = (__this->fields).ECIBAPAHFLM;
  DOEJEADIJEJ = (__this->fields).super.super.NIEHEOKFPAN;
  bVar2 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
  DNBBBGEENMM = 3;
  if (bVar2) {
    DNBBBGEENMM = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,GKLEODLEPMA,DOEJEADIJEJ,CJNHFNHJHPE,
             DNBBBGEENMM,(MethodInfo *)0x0);
  return;
}


// ===== protected override void GKPJMHOFIOO()  [RVA 0x3513550]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$GKPJMHOFIOO @ RVA 0x3513550

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__GKPJMHOFIOO
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  MethodInfo *in_x2;
  
  Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__OHIFMDPOBHO
            (__this,(__this->fields).FCKCGNHILFE,in_x2);
                    /* WARNING: Could not recover jumptable at 0x03613574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._36_FMJHHEJDAKI.methodPtr)
            (__this,(__this->klass->vtable)._36_FMJHHEJDAKI.method);
  return;
}


// ===== protected override void GLANJNFACKI()  [RVA 0x3513578]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$GLANJNFACKI @ RVA 0x3513578

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__GLANJNFACKI
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  return;
}


// ===== private void DGBOGOINJHD(Action<LootCell> PIKFKFFINHC)  [RVA 0x3512E9C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$DGBOGOINJHD @ RVA 0x3512E9C

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__DGBOGOINJHD
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,
               System_Action_LootCell__o *PIKFKFFINHC,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  OGNCMFBMBMB_o *__this_00;
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *x;
  UnityEngine_Transform_o *__this_01;
  System_Collections_Generic_List_LootCell__o *__this_02;
  UnityEngine_UI_ScrollRect_o *pUVar4;
  Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_array *pNVar5;
  
  if ((DAT_04568905 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<LootCell>_Add__);
    FUN_01bab630(&Method_OGNCMFBMBMB_KNMENIBLFGF<LootCell>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568905 = 1;
  }
  __this_00 = OGNCMFBMBMB__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* try { // try from 03612eec to 03712f7f has its CatchHandler @ 03612a50 */
  if (__this_00 != (OGNCMFBMBMB_o *)0x0) {
    x = (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)
        OGNCMFBMBMB__KNMENIBLFGF<object>
                  (__this_00,(__this->fields)._lootCellPrefab,
                   Method_OGNCMFBMBMB_KNMENIBLFGF<LootCell>__);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    if (x != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_o *)0x0) {
      __this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._scroll;
      if ((pUVar4 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
         (__this_01 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent
                  (__this_01,(UnityEngine_Transform_o *)(pUVar4->fields).m_Content,false,
                   (MethodInfo *)0x0);
        if (PIKFKFFINHC != (System_Action_LootCell__o *)0x0) {
                    /* try { // try from 03612f80 to 03712f87 has its CatchHandler @ 03612fd4 */
          (*(code *)(PIKFKFFINHC->fields).super.super.invoke_impl)
                    ((PIKFKFFINHC->fields).super.super.method_code,x,
                     (PIKFKFFINHC->fields).super.super.method);
        }
        lVar2 = Method_System_Collections_Generic_List<LootCell>_Add__;
                    /* try { // try from 03612f88 to 03712f8b has its CatchHandler @ 03612fc8 */
        __this_02 = (__this->fields).ONENMEPPGMD;
                    /* try { // try from 03612f8c to 03712f8f has its CatchHandler @ 03612fbc */
        if (__this_02 != (System_Collections_Generic_List_LootCell__o *)0x0) {
                    /* try { // try from 03612f90 to 03712f93 has its CatchHandler @ 03612fac */
                    /* try { // try from 03612f94 to 03712f97 has its CatchHandler @ 03612fbc */
                    /* try { // try from 03612f98 to 03712f9b has its CatchHandler @ 03612a50 */
                    /* try { // try from 03612f9c to 03712f9f has its CatchHandler @ 03612fa8 */
          pNVar5 = (__this_02->fields)._items;
                    /* try { // try from 03612fa0 to 03712fe3 has its CatchHandler @ 03612a50 */
                    /* catch() { ... } // from try @ 03612f9c with catch @ 03612fa8 */
          (__this_02->fields)._version = (__this_02->fields)._version + 1;
                    /* catch() { ... } // from try @ 03612f90 with catch @ 03612fac */
          if (pNVar5 != (Nekki_SF2_GUI_Dialogs_ShowLoot_LootCell_array *)0x0) {
                    /* catch() { ... } // from try @ 03612e6c with catch @ 03612fb0 */
            uVar1 = (__this_02->fields)._size;
                    /* catch() { ... } // from try @ 03612e7c with catch @ 03612fb4 */
                    /* catch() { ... } // from try @ 03612e84 with catch @ 03612fb8 */
                    /* catch() { ... } // from try @ 03612f8c with catch @ 03612fbc
                       catch() { ... } // from try @ 03612f94 with catch @ 03612fbc */
            if (uVar1 < (uint)pNVar5->max_length) {
                    /* catch() { ... } // from try @ 03612e40 with catch @ 03612fc0 */
                    /* catch() { ... } // from try @ 03612e50 with catch @ 03612fc4 */
                    /* catch() { ... } // from try @ 03612f88 with catch @ 03612fc8 */
                    /* catch() { ... } // from try @ 03612dd8 with catch @ 03612fcc */
              (__this_02->fields)._size = uVar1 + 1;
                    /* catch() { ... } // from try @ 03612d7c with catch @ 03612fd0 */
              pNVar5->m_Items[(int)uVar1] = x;
                    /* catch() { ... } // from try @ 03612f80 with catch @ 03612fd4 */
              thunk_FUN_01c20e04(pNVar5->m_Items + (int)uVar1,x);
              return;
            }
                    /* try { // try from 03612fe4 to 03712fe7 has its CatchHandler @ 03612ff8 */
                    /* catch() { ... } // from try @ 03612fe4 with catch @ 03612ff8 */
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)x,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03613000 to 03713067 has its CatchHandler @ 0361307c */
  FUN_01bab8c8();
}


// ===== protected override void GLJGIJNALCA()  [RVA 0x351357C]
// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$GLJGIJNALCA @ RVA 0x351357C

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__GLJGIJNALCA
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  return;
}

