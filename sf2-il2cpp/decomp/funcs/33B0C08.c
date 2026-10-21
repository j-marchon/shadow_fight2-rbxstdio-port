// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$OnDisable @ RVA 0x33B0C08

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__OnDisable
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar1;
  System_Action_T0__T1__T2__T3__o *PKKMGBOIDJD;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD_00;
  EECMMJDOPDJ_o *__this_00;
  CEAGEFMDAAN_o *__this_01;
  
                    /* try { // try from 034b0c0c to 035b0d37 has its CatchHandler @ 034afe4c */
  if ((DAT_04567d48 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_GKHAKLDEIJI__);
    DAT_04567d48 = 1;
  }
  pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar1->fields).ALALIGAEHDK;
    PKKMGBOIDJD = (System_Action_T0__T1__T2__T3__o *)
                  thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
    if (__this_00 != (EECMMJDOPDJ_o *)0x0) {
      KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__KMAMCKGFKLF
                ((KAMIOIFKHJP_T0__T1__T2__T3__o *)__this_00,PKKMGBOIDJD,
                 Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
      pNVar1 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar1->fields).MODIIOJEMLE;
        PKKMGBOIDJD_00 =
             (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
        if (__this_01 != (CEAGEFMDAAN_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,PKKMGBOIDJD_00,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

