// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$DAGDLFPMAIA @ RVA 0x33B0DDC

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__DAGDLFPMAIA
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__T3__o *PKKMGBOIDJD;
  System_Enum_o *pSVar3;
  System_Action_T0__T1__T2__o *PKKMGBOIDJD_00;
  EECMMJDOPDJ_o *__this_01;
  CEAGEFMDAAN_o *__this_02;
  int32_t local_28;
  int32_t local_24;
  
                    /* try { // try from 034b0df4 to 035b0dff has its CatchHandler @ 034b1d54 */
  if ((DAT_04567d4a & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
                    /* try { // try from 034b0e08 to 035b0e17 has its CatchHandler @ 034b1d58 */
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_BNBFMIDBJNC__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
                    /* try { // try from 034b0e28 to 035b0e2f has its CatchHandler @ 034b1b44 */
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_BNBFMIDBJNC__);
                    /* try { // try from 034b0e38 to 035b0e3f has its CatchHandler @ 034b1b48 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_BEBGOPNMHON__);
                    /* try { // try from 034b0e40 to 035b0e5f has its CatchHandler @ 034b1d50 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_GKHAKLDEIJI__);
    DAT_04567d4a = 1;
  }
  bVar1 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
                    /* try { // try from 034b0e6c to 035b0e73 has its CatchHandler @ 034b1b20 */
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
                    /* try { // try from 034b0e7c to 035b0e83 has its CatchHandler @ 034b1b38 */
    if (!bVar1) {
      return;
    }
                    /* try { // try from 034b0e84 to 035b0e8f has its CatchHandler @ 034b1b24 */
    pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
    if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
      __this_01 = (pNVar2->fields).ALALIGAEHDK;
      PKKMGBOIDJD = (System_Action_T0__T1__T2__T3__o *)
                    thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo)
      ;
                    /* try { // try from 034b0ea4 to 035b0eab has its CatchHandler @ 034b1b28 */
                    /* try { // try from 034b0eac to 035b0ff3 has its CatchHandler @ 034afe4c */
      System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
      local_24 = (__this->fields)._ControlPriority;
      pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_24);
      if (__this_01 != (EECMMJDOPDJ_o *)0x0) {
        KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__BNBFMIDBJNC
                  ((KAMIOIFKHJP_T0__T1__T2__T3__o *)__this_01,PKKMGBOIDJD,pSVar3,
                   Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_BNBFMIDBJNC__);
        pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
        if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
          __this_02 = (pNVar2->fields).MODIIOJEMLE;
          PKKMGBOIDJD_00 =
               (System_Action_T0__T1__T2__o *)
               thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
          System_Action<Int32Enum,_int,_Int32Enum>___ctor();
          local_28 = (__this->fields)._ControlPriority;
          pSVar3 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_28);
          if (__this_02 != (CEAGEFMDAAN_o *)0x0) {
            FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__BNBFMIDBJNC
                      ((FMKGOOONJKB_T0__T1__T2__o *)__this_02,PKKMGBOIDJD_00,pSVar3,
                       Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_BNBFMIDBJNC__);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

