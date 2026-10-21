// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$IBFINJEFBBJ @ RVA 0x324FBEC

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__IBFINJEFBBJ
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,int32_t DDFFFGBFMDM,
               MethodInfo *method)

{
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_String_o *pSVar1;
  int32_t local_24;
  
  local_24 = DDFFFGBFMDM;
  if ((DAT_0456711e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_14782);
    DAT_0456711e = 1;
  }
  EDFDANKEBGF__JGKCFCJLDKJ((MethodInfo *)0x0);
  HFNDCHDFFKO__HOEAAIJMFEC((uint8_t)DDFFFGBFMDM,(MethodInfo *)0x0);
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (DAT_04567181 == '\0') {
    FUN_01bab630(&MEFNOMDAJBF_TypeInfo);
                    /* try { // try from 0334fc68 to 0344fc6b has its CatchHandler @ 0334fdc4 */
    DAT_04567181 = '\x01';
  }
                    /* try { // try from 0334fc6c to 0344fc73 has its CatchHandler @ 0334fe48 */
  if (__this_00 != (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
                    /* try { // try from 0334fc74 to 0344fc77 has its CatchHandler @ 0334fdc0 */
                    /* try { // try from 0334fc78 to 0344fc7b has its CatchHandler @ 0334fdac */
                    /* try { // try from 0334fc7c to 0344fc7f has its CatchHandler @ 0334fda8 */
                    /* try { // try from 0334fc80 to 0344fc8b has its CatchHandler @ 0334f534 */
                    /* try { // try from 0334fc8c to 0344fc8f has its CatchHandler @ 0334fd9c */
                    /* try { // try from 0334fc90 to 0344fcaf has its CatchHandler @ 0334f534 */
    Nekki_SF2_Core_InputControllers_GamePadController__VibrateAllDevices
              (__this_00,
               (GCAKLDNBADP_o)
               (MEFNOMDAJBF_TypeInfo->static_fields->_PPNPLFEPMNM_k__BackingField).fields,
               (MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
                    /* try { // try from 0334fcb0 to 0344fcbf has its CatchHandler @ 0334fd38 */
    pSVar1 = System_String__Concat(StringLiteral_14782,pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0334fcc4 to 0344fccf has its CatchHandler @ 0334fd90 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0334fcd4 to 0344fcd7 has its CatchHandler @ 0334fd34 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 0334fcdc to 0344fcdf has its CatchHandler @ 0334fd30 */
                    /* try { // try from 0334fce4 to 0344fce7 has its CatchHandler @ 0334fd2c */
    UnityEngine_Debug__Log((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
                    /* try { // try from 0334fcec to 0344fcef has its CatchHandler @ 0334fd24 */
                    /* try { // try from 0334fcf4 to 0344fcf7 has its CatchHandler @ 0334fd20 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

