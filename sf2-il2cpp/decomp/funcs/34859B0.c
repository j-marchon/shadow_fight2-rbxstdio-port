// Nekki.SF2.GUI.Dialogs.SettingsDialog.<>c$$IBILPEPHMDK @ RVA 0x34859B0

void Nekki_SF2_GUI_Dialogs_SettingsDialog_<>c__IBILPEPHMDK
               (Nekki_SF2_GUI_Dialogs_SettingsDialog___c_o *__this,System_Action_bool__o *h,
               MethodInfo *method)

{
  System_Action_bool__c *pSVar1;
  System_Delegate_o *pSVar2;
  System_Action_bool__o *pSVar3;
  long lVar4;
  NHJCFGACFDF_StaticFields *pNVar5;
  
                    /* try { // try from 035859b4 to 036859bb has its CatchHandler @ 03585b78 */
                    /* try { // try from 035859cc to 036859d3 has its CatchHandler @ 03585ba8 */
  if ((DAT_045683a8 & 1) == 0) {
                    /* try { // try from 035859d4 to 036859e7 has its CatchHandler @ 03585bb4 */
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
                    /* try { // try from 035859ec to 036859f7 has its CatchHandler @ 03585b9c */
    DAT_045683a8 = 1;
  }
                    /* try { // try from 035859f8 to 03685a03 has its CatchHandler @ 03585b84 */
  if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03585a14 to 03685a1b has its CatchHandler @ 03585b98 */
  pSVar2 = System_Delegate__Combine
                     ((System_Delegate_o *)NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI,
                      (System_Delegate_o *)h,(MethodInfo *)0x0);
  pSVar1 = System_Action<bool>_TypeInfo;
                    /* try { // try from 03585a24 to 03685a2b has its CatchHandler @ 03585ba0 */
  pSVar3 = (System_Action_bool__o *)0x0;
  if (pSVar2 != (System_Delegate_o *)0x0) {
    pSVar3 = (System_Action_bool__o *)thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
                    /* try { // try from 03585a3c to 03685a43 has its CatchHandler @ 03585b7c */
    if (pSVar3 == (System_Action_bool__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
                    /* try { // try from 03585a48 to 03685a4f has its CatchHandler @ 03585bb0 */
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar3;
  pSVar1 = System_Action<bool>_TypeInfo;
  pNVar5 = NHJCFGACFDF_TypeInfo->static_fields;
  if (pSVar2 == (System_Delegate_o *)0x0) {
    lVar4 = 0;
  }
  else {
                    /* try { // try from 03585a58 to 03685a5f has its CatchHandler @ 03585b80 */
                    /* try { // try from 03585a60 to 03685a73 has its CatchHandler @ 03585bac */
    lVar4 = thunk_FUN_01bda71c(pSVar2,System_Action<bool>_TypeInfo);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03585a78 to 03685a83 has its CatchHandler @ 03585ba4 */
      FUN_01babc64(pSVar2,pSVar1);
    }
  }
                    /* try { // try from 03585a84 to 03685aab has its CatchHandler @ 03585bf0 */
  thunk_FUN_01c20e04(pNVar5,lVar4);
  return;
}

