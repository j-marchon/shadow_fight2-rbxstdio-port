// RaidPlayerEquipmentImage$$AMKNLFPFLPK @ RVA 0x33B043C

void RaidPlayerEquipmentImage__AMKNLFPFLPK
               (RaidPlayerEquipmentImage_o *__this,Nekki_SF2_GUI_Common_PerkUI_o *KNLOLPGHDEG,
               MethodInfo *method)

{
  bool bVar1;
  KBCOFHAJOCK_o *__this_00;
  PLCCJCFAFKA_o *__this_01;
  UnityEngine_Transform_o *HOKHHGFLMNA;
  UnityEngine_Transform_o *__this_02;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_03;
  HHKELHDGPDO_o *IMMNELPBGIF;
  DOPEEDABNEK_o *pDVar2;
  Nekki_SF2_GUI_Shop_PerksPanel_o *pNVar3;
  HEFOANCOHDC_o *pHVar4;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o HHPABFGHALF;
  
                    /* try { // try from 034b0448 to 035b044f has its CatchHandler @ 034b1c7c */
                    /* try { // try from 034b0458 to 035b045f has its CatchHandler @ 034b1c64 */
                    /* try { // try from 034b0460 to 035b046b has its CatchHandler @ 034b1c78 */
  if ((DAT_04567d45 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567d45 = 1;
  }
                    /* try { // try from 034b0480 to 035b0487 has its CatchHandler @ 034b1c4c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034b0490 to 035b0497 has its CatchHandler @ 034b1c70 */
  if (DAT_04563eaa == '\0') {
                    /* try { // try from 034b0498 to 035b04a3 has its CatchHandler @ 034b1c74 */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04563eaa = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034b04b4 to 035b04bb has its CatchHandler @ 034b1c48 */
    thunk_FUN_01ba7564();
  }
  pDVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_IDHKFPFDECA_k__BackingField;
                    /* try { // try from 034b04c4 to 035b04cb has its CatchHandler @ 034b1c6c */
                    /* try { // try from 034b04cc to 035b04d7 has its CatchHandler @ 034b1c44 */
  if ((((pDVar2 != (DOPEEDABNEK_o *)0x0) && (KNLOLPGHDEG != (Nekki_SF2_GUI_Common_PerkUI_o *)0x0))
      && (pHVar4 = (KNLOLPGHDEG->fields).OFLJEENFLDG, pHVar4 != (HEFOANCOHDC_o *)0x0)) &&
     (__this_00 = (pDVar2->fields)._GMODBKFPHPN_k__BackingField, __this_00 != (KBCOFHAJOCK_o *)0x0))
  {
    __this_01 = KBCOFHAJOCK__JHDDCDEENAK(__this_00,(pHVar4->fields).AKBDHOEGNNG,(MethodInfo *)0x0);
    if ((__this_01 == (PLCCJCFAFKA_o *)0x0) ||
       (bVar1 = PLCCJCFAFKA__PKMBANJNKBC(__this_01,(MethodInfo *)0x0), bVar1)) {
      DKIDCBPNMPD = (__this->fields)._hintPrefab;
      HOKHHGFLMNA = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)KNLOLPGHDEG,(MethodInfo *)0x0);
      __this_02 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)KNLOLPGHDEG,(MethodInfo *)0x0);
                    /* try { // try from 034b051c to 035b053f has its CatchHandler @ 034b1c5c */
      if (__this_02 != (UnityEngine_Transform_o *)0x0) {
        UVar5 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._perks;
        if (pNVar3 != (Nekki_SF2_GUI_Shop_PerksPanel_o *)0x0) {
          HHPABFGHALF.fields.z = UVar5.fields.z + 0.0;
                    /* try { // try from 034b0540 to 035b067b has its CatchHandler @ 034afe4c */
          HHPABFGHALF.fields.x = UVar5.fields.x + (pNVar3->fields)._HintOffset.fields.x;
          HHPABFGHALF.fields.y = UVar5.fields.y + (pNVar3->fields)._HintOffset.fields.y;
          __this_03 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                                (DKIDCBPNMPD,HOKHHGFLMNA,HHPABFGHALF,10.0,-1.0,-1.0,
                                 (MethodInfo *)0x0);
          pHVar4 = (KNLOLPGHDEG->fields).OFLJEENFLDG;
          if ((pHVar4 != (HEFOANCOHDC_o *)0x0) &&
             (__this_03 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0)) {
            Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
                      (__this_03,(pHVar4->fields).JMGIACHBIKG,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      IMMNELPBGIF = JJPNLEPEAFM__IIAPLAPOCGL
                              ((PLCCJCFAFKA_o *)0x0,(KNLOLPGHDEG->fields).OFLJEENFLDG,
                               (MethodInfo *)0x0);
      if (IMMNELPBGIF != (HHKELHDGPDO_o *)0x0) {
        (IMMNELPBGIF->fields).BPCADJLKKGA = (__this_01->fields).PEKGAFPPFLP;
        thunk_FUN_01c20e04();
        GCIFMNHADDF__ACDDKABEBAP(0x50,(Il2CppObject *)IMMNELPBGIF,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

