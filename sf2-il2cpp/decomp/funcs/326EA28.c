// Nekki.SF2.GUI.Map.PrizePanel$$Init @ RVA 0x326EA28

void Nekki_SF2_GUI_Map_PrizePanel__Init
               (Nekki_SF2_GUI_Map_PrizePanel_o *__this,int32_t DFIBGGDJPLM,bool LGGMCHGBLAN,
               AFFHKININGD_o *AGONJKOMAAA,MethodInfo *method)

{
  int iVar1;
  int32_t JLAFGLDIFOC;
  int64_t iVar2;
  int64_t iVar3;
  System_Collections_Generic_List_JBCGDIEHOHH__o *__this_00;
  JBCGDIEHOHH_o *__this_01;
  ACHLOMELAJE_o *__this_02;
  JHBHHHKEFOO_o *NNHNNAKKKPL;
  Nekki_SF2_GUI_Map_BattlePrize_o *__this_03;
  float MECEHFOLHIG;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o local_70;
  
                    /* try { // try from 0336ea34 to 0346ea43 has its CatchHandler @ 0336ec98 */
                    /* try { // try from 0336ea54 to 0346ea5f has its CatchHandler @ 0336ec60 */
  if ((DAT_0456720f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Count__);
                    /* try { // try from 0336ea70 to 0346ea77 has its CatchHandler @ 0336ec50 */
    FUN_01bab630(&Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
                    /* try { // try from 0336ea84 to 0346ea93 has its CatchHandler @ 0336ec5c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456720f = 1;
  }
  if (AGONJKOMAAA == (AFFHKININGD_o *)0x0) {
    return;
  }
  if (LGGMCHGBLAN) {
    local_70.fields.hiddenValue = (AGONJKOMAAA->fields).JHCMAOFOCPH.fields.hiddenValue;
    local_70.fields.currentCryptoKey = (AGONJKOMAAA->fields).JHCMAOFOCPH.fields.currentCryptoKey;
    local_70.fields.fakeValueActive = (AGONJKOMAAA->fields).JHCMAOFOCPH.fields.fakeValueActive;
    local_70.fields.inited = (AGONJKOMAAA->fields).JHCMAOFOCPH.fields.inited;
    local_70.fields._26_6_ = *(undefined6 *)&(AGONJKOMAAA->fields).JHCMAOFOCPH.fields.field_0x1a;
                    /* try { // try from 0336eaa4 to 0346eaaf has its CatchHandler @ 0336ec88 */
    local_70.fields.fakeValue = (AGONJKOMAAA->fields).JHCMAOFOCPH.fields.fakeValue;
    iVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_70,(MethodInfo *)0x0)
    ;
    local_90.fields.hiddenValue = (AGONJKOMAAA->fields).LGLKMANDGPD.fields.hiddenValue;
    local_90.fields.currentCryptoKey = (AGONJKOMAAA->fields).LGLKMANDGPD.fields.currentCryptoKey;
    local_90.fields.fakeValueActive = (AGONJKOMAAA->fields).LGLKMANDGPD.fields.fakeValueActive;
    local_90.fields.inited = (AGONJKOMAAA->fields).LGLKMANDGPD.fields.inited;
    local_90.fields._26_6_ = *(undefined6 *)&(AGONJKOMAAA->fields).LGLKMANDGPD.fields.field_0x1a;
    local_90.fields.fakeValue = (AGONJKOMAAA->fields).LGLKMANDGPD.fields.fakeValue;
                    /* try { // try from 0336eac0 to 0346eac7 has its CatchHandler @ 0336ec78 */
    iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__ALBJPLAPOBO(&local_90,(MethodInfo *)0x0)
    ;
                    /* try { // try from 0336ead4 to 0346eae3 has its CatchHandler @ 0336ec94 */
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 0336eaf4 to 0346eaff has its CatchHandler @ 0336ec80 */
  iVar2 = MGNPHCAAEIO__ADEEECDDBPN(iVar2,0,(MethodInfo *)0x0);
  __this_00 = (AGONJKOMAAA->fields).FGAENDJJOGN;
                    /* try { // try from 0336eb0c to 0346eb13 has its CatchHandler @ 0336ec7c */
  if (DFIBGGDJPLM < 2) {
    DFIBGGDJPLM = 1;
  }
  if (__this_00 != (System_Collections_Generic_List_JBCGDIEHOHH__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      __this_01 = (JBCGDIEHOHH_o *)0x0;
    }
    else {
                    /* try { // try from 0336eb20 to 0346eb27 has its CatchHandler @ 0336ec6c */
      __this_01 = (JBCGDIEHOHH_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                             Method_System_Collections_Generic_List<JBCGDIEHOHH>_get_Item__);
    }
    iVar1 = (AGONJKOMAAA->fields).JDNKKGPNHPB;
                    /* try { // try from 0336eb40 to 0346eb4b has its CatchHandler @ 0336ec74 */
    MECEHFOLHIG = 300.0;
                    /* try { // try from 0336eb5c to 0346eb63 has its CatchHandler @ 0336ec48 */
    if ((iVar1 != 2) && (MECEHFOLHIG = 300.0, iVar1 != 0x15)) {
                    /* try { // try from 0336eb64 to 0346ec1b has its CatchHandler @ 0336e61c */
      MECEHFOLHIG = 200.0;
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
    __this_02 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if ((__this_02 != (ACHLOMELAJE_o *)0x0) &&
       (JLAFGLDIFOC = ACHLOMELAJE__EOEAKGGDBFH(__this_02,(MethodInfo *)0x0),
       __this_01 != (JBCGDIEHOHH_o *)0x0)) {
      NNHNNAKKKPL = JBCGDIEHOHH__ALLFNDNBMCO(__this_01,JLAFGLDIFOC,(MethodInfo *)0x0);
      __this_03 = (__this->fields)._prize;
      if (__this_03 != (Nekki_SF2_GUI_Map_BattlePrize_o *)0x0) {
        Nekki_SF2_GUI_Map_BattlePrize__Init
                  (__this_03,iVar2 * (ulong)(uint)DFIBGGDJPLM,iVar3 * (ulong)(uint)DFIBGGDJPLM,
                   NNHNNAKKKPL,0.0,MECEHFOLHIG,0x69,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0336ec1c to 0346ec23 has its CatchHandler @ 0336ecc0 */
  FUN_01bab8c8();
}

