// Nekki.SF2.GUI.GeneralMenu.GeneralMenuScene$$DADMLBCLHBI @ RVA 0x324E02C

void Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene__DADMLBCLHBI
               (Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__o *pSVar2;
  System_Enum_o *pSVar3;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_0456710f & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_GeneralMenu_GeneralMenuScene_GKHAKLDEIJI__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    DAT_0456710f = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).KIHMKIEFOEI;
    pSVar2 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 0334e0c4 to 0344e0cb has its CatchHandler @ 0334e1bc */
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 0334e0d4 to 0344e0f3 has its CatchHandler @ 0334e218 */
    local_34 = 0;
    pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
                    /* try { // try from 0334e0f4 to 0344e107 has its CatchHandler @ 0334e1b4 */
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar2,pSVar3,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                    /* try { // try from 0334e108 to 0344e13f has its CatchHandler @ 0334e00c */
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).GMLEPHMBMPD;
        pSVar2 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 0334e140 to 0344e147 has its CatchHandler @ 0334e1b8 */
        local_38 = 0;
        pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 0334e150 to 0344e16f has its CatchHandler @ 0334e1c0 */
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar2,pSVar3,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
                    /* try { // try from 0334e170 to 0344e183 has its CatchHandler @ 0334e1b0 */
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

