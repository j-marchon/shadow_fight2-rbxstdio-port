// BHHOLHDJKLE$$EPBENPDCBFE @ RVA 0x34CF4F4

bool BHHOLHDJKLE__EPBENPDCBFE
               (BHHOLHDJKLE_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               System_Collections_Generic_List_string__o *FPEHEJBLCAO,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  PICIKPNGDBE_o *__this_00;
  PJKHAJKEHEL_o *pPVar3;
  float CJNHFNHJHPE;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
                    /* try { // try from 035cf4fc to 036cf523 has its CatchHandler @ 035cf678 */
  if ((DAT_045686a6 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 035cf528 to 036cf52f has its CatchHandler @ 035cf638 */
    FUN_01bab630(&StringLiteral_10218);
    DAT_045686a6 = 1;
  }
                    /* try { // try from 035cf538 to 036cf53f has its CatchHandler @ 035cf628 */
  pOVar2 = ILGLOCBJFEG__EMHAFDFJFIA((ILGLOCBJFEG_o *)__this,BCKBBGCOMJD,(MethodInfo *)0x0);
                    /* try { // try from 035cf544 to 036cf54b has its CatchHandler @ 035cf640 */
  if (BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
                    /* try { // try from 035cf59c to 036cf5a7 has its CatchHandler @ 035cf624 */
                    /* try { // try from 035cf5a8 to 036cf5f3 has its CatchHandler @ 035cf1a0 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10218,(MethodInfo *)0x0);
    bVar1 = false;
  }
  else {
    __this_00 = (__this->fields).super.DKGMKMJDMPC;
                    /* try { // try from 035cf554 to 036cf55b has its CatchHandler @ 035cf62c */
                    /* try { // try from 035cf55c to 036cf587 has its CatchHandler @ 035cf67c */
    if (((__this_00 == (PICIKPNGDBE_o *)0x0) ||
        (PICIKPNGDBE__CHKGAHCDFJF(__this_00,(MethodInfo *)0x0), pOVar2 == (OLKKAIFGGAK_o *)0x0)) ||
       (pPVar3 = (pOVar2->fields).FAPMJJBOFEF, pPVar3 == (PJKHAJKEHEL_o *)0x0)) {
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

