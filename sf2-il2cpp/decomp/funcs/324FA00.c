// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$ShowCredits @ RVA 0x324FA00

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__ShowCredits
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD;
  System_Action_o *CONGNMGDFPP;
  OCOAGJDCJPL_o *__this_00;
  
                    /* try { // try from 0334fa00 to 0344fa0b has its CatchHandler @ 0334fa20 */
                    /* try { // try from 0334fa10 to 0344fa13 has its CatchHandler @ 0334fa28 */
                    /* try { // try from 0334fa18 to 0344fa1b has its CatchHandler @ 0334fa24 */
  if ((DAT_0456711c & 1) == 0) {
                    /* try { // try from 0334fa1c to 0344fa43 has its CatchHandler @ 0334f534 */
                    /* catch() { ... } // from try @ 0334fa00 with catch @ 0334fa20 */
                    /* catch() { ... } // from try @ 0334fa18 with catch @ 0334fa24 */
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* catch() { ... } // from try @ 0334fa10 with catch @ 0334fa28 */
                    /* catch() { ... } // from try @ 0334f9ec with catch @ 0334fa2c */
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
                    /* try { // try from 0334fa44 to 0344fa5f has its CatchHandler @ 0334fd0c */
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_GBJHCGNMCGE__);
    DAT_0456711c = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
                    /* try { // try from 0334fa78 to 0344fa7b has its CatchHandler @ 0334fd84 */
                    /* try { // try from 0334fa7c to 0344fa8f has its CatchHandler @ 0334fd08 */
    PKKMGBOIDJD = (System_Action_T0__T1__T2__o *)
                  thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 0334fa98 to 0344fabb has its CatchHandler @ 0334fd78 */
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,PKKMGBOIDJD,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      CONGNMGDFPP = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0334fad8 to 0344fadf has its CatchHandler @ 0334fd74 */
                    /* try { // try from 0334fae0 to 0344fb07 has its CatchHandler @ 0334fd70 */
      System_Action___ctor();
      Nekki_SF2_GUI_Common_Credits_CreditsScreen__Create(CONGNMGDFPP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

