// Original name: Nekki.SF2.Core.Utils.Perks.PerkConditionHealth  (obfuscated BHHOLHDJKLE)
// TypeDefIndex 3122
// Namespace: 
// public class PerkConditionHealth : IALJKCECCLB
// Fields:

// ===== public override bool EPBENPDCBFE(Model BCKBBGCOMJD, List<string> FPEHEJBLCAO)  [RVA 0x34CF4F4]
// PerkConditionHealth$$EPBENPDCBFE @ RVA 0x34CF4F4

bool PerkConditionHealth__EPBENPDCBFE
               (PerkConditionHealth_o *__this,Model_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  Model_o *pOVar2;
  PICIKPNGDBE_o *__this_00;
  ModelParameters_o *pPVar3;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
                    /* try { // try from 035cf4fc to 036cf523 has its CatchHandler @ 035cf678 */
  if ((DAT_045686a6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 035cf528 to 036cf52f has its CatchHandler @ 035cf638 */
    FUN_01bab630(&StringLiteral_10218/*"PerkConditionHealth::isEqual - model is null"*/);
    DAT_045686a6 = 1;
  }
                    /* try { // try from 035cf538 to 036cf53f has its CatchHandler @ 035cf628 */
  pOVar2 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 035cf544 to 036cf54b has its CatchHandler @ 035cf640 */
  if (BCKBBGCOMJD == (Model_o *)0x0) {
                    /* try { // try from 035cf59c to 036cf5a7 has its CatchHandler @ 035cf624 */
                    /* try { // try from 035cf5a8 to 036cf5f3 has its CatchHandler @ 035cf1a0 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10218/*"PerkConditionHealth::isEqual - model is null"*/,(MethodInfo *)0x0);
    bVar1 = false;
  }
  else {
    __this_00 = (__this->fields).super.DKGMKMJDMPC;
                    /* try { // try from 035cf554 to 036cf55b has its CatchHandler @ 035cf62c */
                    /* try { // try from 035cf55c to 036cf587 has its CatchHandler @ 035cf67c */
    if (((__this_00 == (PICIKPNGDBE_o *)0x0) ||
        (PICIKPNGDBE__CHKGAHCDFJF(__this_00,(MethodInfo *)0x0), pOVar2 == (Model_o *)0x0)) ||
       (pPVar3 = (pOVar2->fields).FAPMJJBOFEF, pPVar3 == (ModelParameters_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    local_40.fakeValueActive = (pPVar3->fields).JNFNFEJAGGN.fields.fakeValueActive;
    local_40.inited = (pPVar3->fields).JNFNFEJAGGN.fields.inited;
    local_40._18_2_ = *(undefined2 *)&(pPVar3->fields).JNFNFEJAGGN.fields.field_0x12;
    local_40.hiddenValueOldByte4.fields =
         (pPVar3->fields).JNFNFEJAGGN.fields.hiddenValueOldByte4.fields;
    local_40.fakeValue = (pPVar3->fields).JNFNFEJAGGN.fields.fakeValue;
    local_40.currentCryptoKey = (pPVar3->fields).JNFNFEJAGGN.fields.currentCryptoKey;
    local_40.hiddenValue = (pPVar3->fields).JNFNFEJAGGN.fields.hiddenValue;
    CJNHFNHJHPE = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                            ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_40,
                             (MethodInfo *)0x0);
                    /* try { // try from 035cf588 to 036cf597 has its CatchHandler @ 035cf63c */
    bVar1 = IALJKCECCLB__KPIJNMIFOGC((IALJKCECCLB_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  }
  return bVar1;
}


// ===== public override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x34CF5E0]
// PerkConditionHealth$$HNIHOIAMDPC @ RVA 0x34CF5E0

void PerkConditionHealth__HNIHOIAMDPC
               (PerkConditionHealth_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  PICIKPNGDBE_o *__this_00;
  
                    /* try { // try from 035cf5f4 to 036cf5f7 has its CatchHandler @ 035cf670 */
  HDBNGIBFEBA__HNIHOIAMDPC((HDBNGIBFEBA_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
                    /* try { // try from 035cf5f8 to 036cf5fb has its CatchHandler @ 035cf68c */
  __this_00 = (__this->fields).super.DKGMKMJDMPC;
                    /* try { // try from 035cf5fc to 036cf5ff has its CatchHandler @ 035cf660 */
  if (__this_00 != (PICIKPNGDBE_o *)0x0) {
                    /* try { // try from 035cf600 to 036cf603 has its CatchHandler @ 035cf68c */
                    /* try { // try from 035cf604 to 036cf607 has its CatchHandler @ 035cf654 */
                    /* try { // try from 035cf608 to 036cf60b has its CatchHandler @ 035cf650 */
                    /* try { // try from 035cf60c to 036cf60f has its CatchHandler @ 035cf648 */
                    /* try { // try from 035cf610 to 036cf613 has its CatchHandler @ 035cf634 */
                    /* try { // try from 035cf614 to 036cf617 has its CatchHandler @ 035cf620 */
                    /* try { // try from 035cf618 to 036cf6a7 has its CatchHandler @ 035cf1a0 */
    PICIKPNGDBE__HNIHOIAMDPC
              (__this_00,AHDGNOJPPIB,(ILGLOCBJFEG_o *)__this,
               (__this->fields).super.super.super._MEFGNAIILBJ_k__BackingField,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035cf4a4 with catch @ 035cf61c */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34CF620]
// PerkConditionHealth$$.ctor @ RVA 0x34CF620

void PerkConditionHealth___ctor(PerkConditionHealth_o *__this,MethodInfo *method)

{
                    /* catch() { ... } // from try @ 035cf614 with catch @ 035cf620 */
                    /* catch() { ... } // from try @ 035cf59c with catch @ 035cf624 */
                    /* catch() { ... } // from try @ 035cf538 with catch @ 035cf628 */
                    /* catch() { ... } // from try @ 035cf554 with catch @ 035cf62c */
  IALJKCECCLB___ctor((IALJKCECCLB_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035cf498 with catch @ 035cf630 */
                    /* catch() { ... } // from try @ 035cf610 with catch @ 035cf634 */
                    /* catch() { ... } // from try @ 035cf528 with catch @ 035cf638 */
                    /* catch() { ... } // from try @ 035cf588 with catch @ 035cf63c */
                    /* catch() { ... } // from try @ 035cf544 with catch @ 035cf640 */
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,7,(MethodInfo *)0x0);
  return;
}

