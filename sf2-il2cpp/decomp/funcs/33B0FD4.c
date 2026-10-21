// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$FIAHBLBGOEP @ RVA 0x33B0FD4

void Nekki_SF2_GUI_Common_TwoAxisControlHandler__FIAHBLBGOEP
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__T3__o *pSVar3;
  System_Action_T0__T1__T2__o *pSVar4;
  UnityEngine_GameObject_o *__this_00;
  System_Enum_o *pSVar5;
  EECMMJDOPDJ_o *pEVar6;
  CEAGEFMDAAN_o *pCVar7;
  int32_t local_48;
  int32_t local_44;
  
                    /* try { // try from 034b0ff4 to 035b101b has its CatchHandler @ 034b1d68 */
  if ((DAT_04567d4c & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
    FUN_01bab630(&Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_MDDFPBJBKPM__);
                    /* try { // try from 034b1050 to 035b107b has its CatchHandler @ 034b1d64 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_TwoAxisControlHandler_GKHAKLDEIJI__);
    DAT_04567d4c = 1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    pEVar6 = (pNVar2->fields).ALALIGAEHDK;
    pSVar3 = (System_Action_T0__T1__T2__T3__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
    if (pEVar6 != (EECMMJDOPDJ_o *)0x0) {
                    /* try { // try from 034b10b0 to 035b10bb has its CatchHandler @ 034b1c34 */
      KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__KMAMCKGFKLF
                ((KAMIOIFKHJP_T0__T1__T2__T3__o *)pEVar6,pSVar3,
                 Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_KMAMCKGFKLF__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        pCVar7 = (pNVar2->fields).MODIIOJEMLE;
                    /* try { // try from 034b10dc to 035b10e3 has its CatchHandler @ 034b1ac0 */
        pSVar4 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo);
                    /* try { // try from 034b10ec to 035b10f3 has its CatchHandler @ 034b1ab4 */
                    /* try { // try from 034b10f4 to 035b10ff has its CatchHandler @ 034b1abc */
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 034b1100 to 035b1163 has its CatchHandler @ 034b1c3c */
        if (pCVar7 != (CEAGEFMDAAN_o *)0x0) {
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__KMAMCKGFKLF
                    ((FMKGOOONJKB_T0__T1__T2__o *)pCVar7,pSVar4,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_KMAMCKGFKLF__);
          bVar1 = UnityEngine_Behaviour__get_enabled
                            ((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          __this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
            if (!bVar1) {
              return;
            }
            pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
            if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
              pEVar6 = (pNVar2->fields).ALALIGAEHDK;
              pSVar3 = (System_Action_T0__T1__T2__T3__o *)
                       thunk_FUN_01bda818(
                                         System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_TypeInfo
                                         );
                    /* try { // try from 034b1164 to 035b128f has its CatchHandler @ 034afe4c */
              System_Action<Int32Enum,_int,_Int32Enum,_float>___ctor();
              local_44 = (__this->fields)._ControlPriority;
              pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_44);
              if (pEVar6 != (EECMMJDOPDJ_o *)0x0) {
                KAMIOIFKHJP<Int32Enum,_int,_Int32Enum,_float>__MDDFPBJBKPM
                          ((KAMIOIFKHJP_T0__T1__T2__T3__o *)pEVar6,pSVar3,pSVar5,
                           Method_KAMIOIFKHJP<ADINBPPGIOA,_int,_JCLBGAAFKGE,_float>_MDDFPBJBKPM__);
                pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                  pCVar7 = (pNVar2->fields).MODIIOJEMLE;
                  pSVar4 = (System_Action_T0__T1__T2__o *)
                           thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_JCLBGAAFKGE>_TypeInfo)
                  ;
                  System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                  local_48 = (__this->fields)._ControlPriority;
                  pSVar5 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_48);
                  if (pCVar7 != (CEAGEFMDAAN_o *)0x0) {
                    FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                              ((FMKGOOONJKB_T0__T1__T2__o *)pCVar7,pSVar4,pSVar5,
                               Method_FMKGOOONJKB<ADINBPPGIOA,_int,_JCLBGAAFKGE>_MDDFPBJBKPM__);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

