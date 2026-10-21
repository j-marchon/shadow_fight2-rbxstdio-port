// Nekki.SF2.GUI.Shop.PerkProgressBar$$PIJGHADPLNK @ RVA 0x3118248

float Nekki_SF2_GUI_Shop_PerkProgressBar__PIJGHADPLNK
                (Nekki_SF2_GUI_Shop_PerkProgressBar_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  int iVar1;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_StaticFields *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_50;
  
  if ((DAT_045665ca & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_045665ca = 1;
    method = extraout_x1;
  }
  fVar3 = Nekki_SF2_GUI_Shop_PerkProgressBar__HJDCCABBLKF(__this,method);
  iVar1 = (__this->fields).JBNGADJBDHB;
                    /* try { // try from 03218290 to 03318297 has its CatchHandler @ 03218344 */
  if (iVar1 == 1) {
    fVar5 = (__this->fields).CNDEOMLMFDC;
                    /* try { // try from 032182d0 to 033182d7 has its CatchHandler @ 03218334 */
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032182d8 to 03318327 has its CatchHandler @ 032181c4 */
      thunk_FUN_01ba7564();
    }
    pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields;
    local_50.fakeValueActive = (pMVar2->EEBCCADECEJ).fields.fakeValueActive;
    local_50.inited = (pMVar2->EEBCCADECEJ).fields.inited;
    local_50._18_2_ = *(undefined2 *)&(pMVar2->EEBCCADECEJ).fields.field_0x12;
    local_50.hiddenValueOldByte4.fields = (pMVar2->EEBCCADECEJ).fields.hiddenValueOldByte4.fields;
    local_50.fakeValue = (pMVar2->EEBCCADECEJ).fields.fakeValue;
    local_50.currentCryptoKey = (pMVar2->EEBCCADECEJ).fields.currentCryptoKey;
    local_50.hiddenValue = (pMVar2->EEBCCADECEJ).fields.hiddenValue;
    fVar4 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                      ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_50,
                       (MethodInfo *)0x0);
    OOGPLJBADCD = exp2f(((OOGPLJBADCD - fVar3) * fVar5) / fVar4);
  }
  else if (iVar1 == 0) {
                    /* try { // try from 032182ac to 033182b3 has its CatchHandler @ 03218340 */
                    /* try { // try from 032182bc to 033182c3 has its CatchHandler @ 03218338 */
    fVar3 = powf(OOGPLJBADCD / fVar3,(__this->fields).CNDEOMLMFDC);
    return fVar3;
  }
                    /* try { // try from 03218328 to 0331832f has its CatchHandler @ 0321833c */
  return OOGPLJBADCD;
}

