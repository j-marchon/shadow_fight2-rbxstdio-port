// KCJBHAFMPDP$$DHAAGKPHJLA @ RVA 0x31AAE6C

void KCJBHAFMPDP__DHAAGKPHJLA(MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  
                    /* try { // try from 032aae70 to 033aae73 has its CatchHandler @ 032aafc0 */
                    /* try { // try from 032aae80 to 033aae83 has its CatchHandler @ 032aafbc */
  if ((DAT_04566b35 & 1) == 0) {
                    /* try { // try from 032aae90 to 033aae93 has its CatchHandler @ 032ab0ec */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 032aae98 to 033aae9b has its CatchHandler @ 032aafb4 */
    DAT_04566b35 = 1;
  }
                    /* try { // try from 032aaea0 to 033aaea3 has its CatchHandler @ 032aafac */
  pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
                    /* try { // try from 032aaea4 to 033aaeb7 has its CatchHandler @ 032aa15c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 032aaeb8 to 033aaec7 has its CatchHandler @ 032aaf90 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 032aaecc to 033aaecf has its CatchHandler @ 032ab0ec */
  if (bVar1) {
                    /* try { // try from 032aaed4 to 033aaed7 has its CatchHandler @ 032aaf7c */
    pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* try { // try from 032aaedc to 033aaedf has its CatchHandler @ 032aaf78 */
                    /* try { // try from 032aaee4 to 033aaee7 has its CatchHandler @ 032aaf74 */
      Nekki_SF2_Core_Quests_QuestsManager__LogQuestsEnded(pNVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 032aaeec to 033aaeef has its CatchHandler @ 032aaf70 */
                    /* try { // try from 032aaef4 to 033aaef7 has its CatchHandler @ 032aaf6c */
  return;
}

