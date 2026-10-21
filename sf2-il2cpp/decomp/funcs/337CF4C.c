// IDDIABHBDEE$$.ctor @ RVA 0x337CF4C

void IDDIABHBDEE___ctor(IDDIABHBDEE_o *__this,CFOCLEDKNKL_o *GNEFPHEIHEP,KOOGFNAPCGG_o *JJCCMFALAMF,
                       HGAPAPKMHCF_RevenueMultiplierConfig__o *CLELNJCKCGI,
                       HGAPAPKMHCF_ServiceZonesConfig__o *CAHIJFJKLLO,
                       HGAPAPKMHCF_CdnZoneMappingConfig__o *FMNOILGIJKB,MethodInfo *method)

{
  int32_t iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined2 uVar4;
  int32_t iVar5;
  int32_t iVar6;
  UniRx_CompositeDisposable_o *__this_00;
  UniRx_CompositeDisposable_o **ppUVar7;
  HALBNMOPGKD_o *__this_01;
  HALBNMOPGKD_o **ppHVar8;
  FJAFBCCNPIK_o *__this_02;
  FJAFBCCNPIK_o **ppFVar9;
  ENNNLJEAPOG_o *__this_03;
  JBGPNJEDALF_o *__this_04;
  JBGPNJEDALF_o **ppJVar10;
  IPABNCIICPB_o *__this_05;
  IPABNCIICPB_o **ppIVar11;
  BCHFHHHGEIP_o *__this_06;
  BCHFHHHGEIP_o **ppBVar12;
  NOAPKJBLPND_o *__this_07;
  NOAPKJBLPND_o **ppNVar13;
  LCNHDNHFMED_o *__this_08;
  LCNHDNHFMED_o **ppLVar14;
  System_Collections_Generic_List_string__o *__this_09;
  System_Collections_Generic_List_string__o **ppSVar15;
  BGPFALGFJIL_StaticFields *pBVar16;
  KOOGFNAPCGG_o **ppKVar17;
  ENNNLJEAPOG_o **ppEVar18;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar19;
  
                    /* catch() { ... } // from try @ 0347cce8 with catch @ 0347cf4c
                       try { // try from 0347cf4c to 0357cf6f has its CatchHandler @ 0347c694 */
                    /* catch() { ... } // from try @ 0347ccd0 with catch @ 0347cf50 */
                    /* catch() { ... } // from try @ 0347ce58 with catch @ 0347cf54 */
                    /* catch() { ... } // from try @ 0347cc9c with catch @ 0347cf58 */
                    /* try { // try from 0347cf70 to 0357cf73 has its CatchHandler @ 0347d204 */
                    /* try { // try from 0347cf74 to 0357d03f has its CatchHandler @ 0347c694 */
  if ((DAT_04567b92 & 1) == 0) {
    FUN_01bab630(&BCHFHHHGEIP_TypeInfo);
    FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    FUN_01bab630(&UniRx_CompositeDisposable_TypeInfo);
    FUN_01bab630(&ENNNLJEAPOG_TypeInfo);
    FUN_01bab630(&FJAFBCCNPIK_TypeInfo);
    FUN_01bab630(&HALBNMOPGKD_TypeInfo);
    FUN_01bab630(&IPABNCIICPB_TypeInfo);
    FUN_01bab630(&JBGPNJEDALF_TypeInfo);
    FUN_01bab630(&LCNHDNHFMED_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&NOAPKJBLPND_TypeInfo);
    DAT_04567b92 = 1;
  }
                    /* try { // try from 0347d040 to 0357d047 has its CatchHandler @ 0347d238 */
  __this_00 = (UniRx_CompositeDisposable_o *)thunk_FUN_01bda818(UniRx_CompositeDisposable_TypeInfo);
                    /* try { // try from 0347d054 to 0357d05f has its CatchHandler @ 0347d234 */
  UniRx_CompositeDisposable___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar7 = &(__this->fields).BNAIPPCOGPE;
                    /* try { // try from 0347d060 to 0357d06b has its CatchHandler @ 0347d230 */
  *ppUVar7 = __this_00;
  thunk_FUN_01c20e04(ppUVar7,__this_00);
                    /* try { // try from 0347d06c to 0357d213 has its CatchHandler @ 0347c694 */
  __this_01 = (HALBNMOPGKD_o *)thunk_FUN_01bda818(HALBNMOPGKD_TypeInfo);
  HALBNMOPGKD___ctor(__this_01,(MethodInfo *)0x0);
  ppHVar8 = &(__this->fields)._OCKMBJKKCJL_k__BackingField;
  *ppHVar8 = __this_01;
  thunk_FUN_01c20e04(ppHVar8,__this_01);
  __this_02 = (FJAFBCCNPIK_o *)thunk_FUN_01bda818(FJAFBCCNPIK_TypeInfo);
  FJAFBCCNPIK___ctor(__this_02,(MethodInfo *)0x0);
  ppFVar9 = &(__this->fields)._LKIDNNOFFON_k__BackingField;
  *ppFVar9 = __this_02;
  thunk_FUN_01c20e04(ppFVar9,__this_02);
  __this_03 = (ENNNLJEAPOG_o *)thunk_FUN_01bda818(ENNNLJEAPOG_TypeInfo);
  ENNNLJEAPOG___ctor(__this_03,(MethodInfo *)0x0);
  ppEVar18 = &(__this->fields)._JOFOHDAGJIN_k__BackingField;
  *ppEVar18 = __this_03;
  thunk_FUN_01c20e04(ppEVar18,__this_03);
  CVar19 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
           CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._NOMCFJNMBHE_k__BackingField.fields = CVar19;
  if ((BGPFALGFJIL_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pBVar16 = BGPFALGFJIL_TypeInfo->static_fields;
  iVar1 = (pBVar16->JBGPHLKPICA).fields.fakeValue;
  bVar2 = (pBVar16->JBGPHLKPICA).fields.fakeValueActive;
  bVar3 = (pBVar16->JBGPHLKPICA).fields.inited;
  uVar4 = *(undefined2 *)&(pBVar16->JBGPHLKPICA).fields.field_0xe;
  iVar5 = (pBVar16->JBGPHLKPICA).fields.currentCryptoKey;
  iVar6 = (pBVar16->JBGPHLKPICA).fields.hiddenValue;
  (__this->fields)._PFHAOFALPJP_k__BackingField = true;
  (__this->fields)._LEBBILLPLPO_k__BackingField.fields.fakeValue = iVar1;
  (__this->fields)._LEBBILLPLPO_k__BackingField.fields.fakeValueActive = bVar2;
  (__this->fields)._LEBBILLPLPO_k__BackingField.fields.inited = bVar3;
  *(undefined2 *)&(__this->fields)._LEBBILLPLPO_k__BackingField.fields.field_0xe = uVar4;
  (__this->fields)._LEBBILLPLPO_k__BackingField.fields.currentCryptoKey = iVar5;
  (__this->fields)._LEBBILLPLPO_k__BackingField.fields.hiddenValue = iVar6;
  __this_04 = (JBGPNJEDALF_o *)thunk_FUN_01bda818(JBGPNJEDALF_TypeInfo);
  JBGPNJEDALF___ctor(__this_04,(MethodInfo *)0x0);
  ppJVar10 = &(__this->fields)._MOAJPECDFIF_k__BackingField;
  *ppJVar10 = __this_04;
  thunk_FUN_01c20e04(ppJVar10,__this_04);
  __this_05 = (IPABNCIICPB_o *)thunk_FUN_01bda818(IPABNCIICPB_TypeInfo);
  IPABNCIICPB___ctor(__this_05,(MethodInfo *)0x0);
  ppIVar11 = &(__this->fields)._GIOCOOPLCKH_k__BackingField;
  *ppIVar11 = __this_05;
  thunk_FUN_01c20e04(ppIVar11,__this_05);
  __this_06 = (BCHFHHHGEIP_o *)thunk_FUN_01bda818(BCHFHHHGEIP_TypeInfo);
  BCHFHHHGEIP___ctor(__this_06,(MethodInfo *)0x0);
  ppBVar12 = &(__this->fields)._NHNEHOBGJBE_k__BackingField;
  *ppBVar12 = __this_06;
  thunk_FUN_01c20e04(ppBVar12,__this_06);
  __this_07 = (NOAPKJBLPND_o *)thunk_FUN_01bda818(NOAPKJBLPND_TypeInfo);
  NOAPKJBLPND___ctor(__this_07,(MethodInfo *)0x0);
  ppNVar13 = &(__this->fields)._EFAMKGBLDND_k__BackingField;
  *ppNVar13 = __this_07;
  thunk_FUN_01c20e04(ppNVar13,__this_07);
  __this_08 = (LCNHDNHFMED_o *)thunk_FUN_01bda818(LCNHDNHFMED_TypeInfo);
  LCNHDNHFMED___ctor(__this_08,(MethodInfo *)0x0);
  ppLVar14 = &(__this->fields)._ILDEILPNLKK_k__BackingField;
  *ppLVar14 = __this_08;
  thunk_FUN_01c20e04(ppLVar14,__this_08);
  (__this->fields)._DGFBKJBNLJJ_k__BackingField = true;
  __this_09 = (System_Collections_Generic_List_string__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
                    /* catch() { ... } // from try @ 0347cf70 with catch @ 0347d204 */
                    /* try { // try from 0347d214 to 0357d21b has its CatchHandler @ 0347d2a0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_09,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar15 = &(__this->fields).BAFGDPDFPLK;
                    /* try { // try from 0347d21c to 0357d227 has its CatchHandler @ 0347c694 */
  *ppSVar15 = __this_09;
  thunk_FUN_01c20e04(ppSVar15,__this_09);
                    /* try { // try from 0347d228 to 0357d22f has its CatchHandler @ 0347d2a0 */
                    /* catch() { ... } // from try @ 0347d060 with catch @ 0347d230
                       try { // try from 0347d230 to 0357d24f has its CatchHandler @ 0347c694 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0347d054 with catch @ 0347d234 */
                    /* catch() { ... } // from try @ 0347d040 with catch @ 0347d238 */
  (__this->fields).MBJJLPCEBFE = GNEFPHEIHEP;
  thunk_FUN_01c20e04(&__this->fields,GNEFPHEIHEP);
  ppKVar17 = &(__this->fields).DKNHMJIANAB;
  *ppKVar17 = JJCCMFALAMF;
                    /* try { // try from 0347d250 to 0357d253 has its CatchHandler @ 0347d27c */
  thunk_FUN_01c20e04(ppKVar17,JJCCMFALAMF);
                    /* try { // try from 0347d254 to 0357d28b has its CatchHandler @ 0347c694 */
  (__this->fields).JAIOBOBBDAA = CLELNJCKCGI;
  thunk_FUN_01c20e04(&(__this->fields).JAIOBOBBDAA,CLELNJCKCGI);
  (__this->fields).GLLKLDGOGEE = CAHIJFJKLLO;
  thunk_FUN_01c20e04(&(__this->fields).GLLKLDGOGEE,CAHIJFJKLLO);
  (__this->fields).IGELMIJGOKD = FMNOILGIJKB;
                    /* catch() { ... } // from try @ 0347d250 with catch @ 0347d27c */
                    /* try { // try from 0347d28c to 0357d29f has its CatchHandler @ 0347d2a0 */
  thunk_FUN_01c20e04(&(__this->fields).IGELMIJGOKD,FMNOILGIJKB);
  return;
}

