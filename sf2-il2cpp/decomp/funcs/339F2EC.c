// GPKCJIOFDBN$$JGLJPMHMNGP @ RVA 0x339F2EC

bool GPKCJIOFDBN__JGLJPMHMNGP(GPKCJIOFDBN_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  MethodInfo *method_00;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  System_String_o *pSVar3;
  
  if ((DAT_04567c9e & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
                    /* try { // try from 0349f310 to 0359f317 has its CatchHandler @ 0349f3dc */
    DAT_04567c9e = 1;
  }
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    HLAGOHADLKH = (pNVar2->fields).QuestParameters;
    pSVar3 = (__this->fields).DEKCPPOJFEH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0349f340 to 0359f35b has its CatchHandler @ 0349f3d8 */
      thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
    }
    method_00 = (MethodInfo *)0x0;
    pSVar3 = MFBNFJGBPBB__HAKLDDOPIAF(HLAGOHADLKH,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 0349f35c to 0359f38b has its CatchHandler @ 0349f0a0 */
    bVar1 = GPKCJIOFDBN__JGLJPMHMNGP(__this,pSVar3,method_00);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

