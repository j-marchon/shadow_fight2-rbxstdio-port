// Nekki.SF2.GUI.Common.Hints.HintGroup$$Awake @ RVA 0x34FC384

void Nekki_SF2_GUI_Common_Hints_HintGroup__Awake
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar2;
  System_Action_T0__T1__T2__o *pSVar3;
  System_Enum_o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  OCOAGJDCJPL_o *__this_00;
  JPGJLKENNCC_o *__this_01;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_04568829 & 1) == 0) {
    FUN_01bab630(&System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    FUN_01bab630(&Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
    FUN_01bab630(&HHNIGLIDHLK_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintGroup_BEBGOPNMHON__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Common_Hints_HintGroup_GKHAKLDEIJI__);
    DAT_04568829 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Common_Hints_HintGroup__GMGNDMJDBAL(__this,method);
  Nekki_SF2_GUI_Common_Hints_HintGroup__ADOIJKNGHON(__this,method_00);
  Nekki_SF2_GUI_Common_Hints_HintGroup__AIJOGDFDDPB(__this,method_01);
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
                    /* try { // try from 035fc4ec to 036fc4f3 has its CatchHandler @ 035fc680 */
    return;
  }
  pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
    __this_00 = (pNVar2->fields).KIHMKIEFOEI;
    pSVar3 = (System_Action_T0__T1__T2__o *)
             thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
    System_Action<Int32Enum,_int,_Int32Enum>___ctor();
    local_34 = 0;
    pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_34);
    if (__this_00 != (OCOAGJDCJPL_o *)0x0) {
      FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                ((FMKGOOONJKB_T0__T1__T2__o *)__this_00,pSVar3,pSVar4,
                 Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
      pNVar2 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar2 != (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
        __this_01 = (pNVar2->fields).GMLEPHMBMPD;
        pSVar3 = (System_Action_T0__T1__T2__o *)
                 thunk_FUN_01bda818(System_Action<ADINBPPGIOA,_int,_FBBNEILNOKK>_TypeInfo);
                    /* try { // try from 035fc4a4 to 036fc4ab has its CatchHandler @ 035fc684 */
        System_Action<Int32Enum,_int,_Int32Enum>___ctor();
                    /* try { // try from 035fc4c0 to 036fc4c3 has its CatchHandler @ 035fc660 */
        local_38 = 0;
                    /* try { // try from 035fc4c4 to 036fc4cb has its CatchHandler @ 035fc66c */
        pSVar4 = (System_Enum_o *)thunk_FUN_01bda448(HHNIGLIDHLK_TypeInfo,&local_38);
        if (__this_01 != (JPGJLKENNCC_o *)0x0) {
                    /* try { // try from 035fc4d8 to 036fc4e3 has its CatchHandler @ 035fc670 */
          FMKGOOONJKB<Int32Enum,_int,_Int32Enum>__MDDFPBJBKPM
                    ((FMKGOOONJKB_T0__T1__T2__o *)__this_01,pSVar3,pSVar4,
                     Method_FMKGOOONJKB<ADINBPPGIOA,_int,_FBBNEILNOKK>_MDDFPBJBKPM__);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

