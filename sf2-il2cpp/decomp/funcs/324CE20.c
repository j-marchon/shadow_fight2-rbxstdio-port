// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$PKBPIMABPCB @ RVA 0x324CE20

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__PKBPIMABPCB
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  
  if ((DAT_04567106 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_GKHAKLDEIJI__);
    DAT_04567106 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
                    /* try { // try from 0334ce8c to 0344ce8f has its CatchHandler @ 0334cea8 */
                    /* try { // try from 0334ce90 to 0344ce93 has its CatchHandler @ 0334cc80 */
                    /* try { // try from 0334ce94 to 0344ce97 has its CatchHandler @ 0334cea4 */
                    /* try { // try from 0334ce98 to 0344cec7 has its CatchHandler @ 0334cc80 */
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ce0c with catch @ 0334cea0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ce94 with catch @ 0334cea4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334ce8c with catch @ 0334cea8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334cdd0 with catch @ 0334ceac
                        */
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334cd74 with catch @ 0334ceb0
                        */
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
                    /* try { // try from 0334cec8 to 0344cecb has its CatchHandler @ 0334ced8 */
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* catch() { ... } // from try @ 0334cec8 with catch @ 0334ced8 */
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 0334cf10 to 0344cf37 has its CatchHandler @ 0334cf4c */
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_KMAMCKGFKLF__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

