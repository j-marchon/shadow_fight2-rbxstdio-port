// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$.ctor @ RVA 0x33B158C

void Nekki_SF2_GUI_Common_TwoAxisControlHandler___ctor
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_List_CPABDNGPCHO__o **ppSVar1;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_o *__this_01;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_o **ppNVar2;
  MethodInfo *extraout_x1;
  undefined1 auVar3 [16];
  
  if ((DAT_04567d4d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CPABDNGPCHO>__ctor__);
                    /* try { // try from 034b15dc to 035b1603 has its CatchHandler @ 034b1b7c */
    FUN_01bab630(&System_Collections_Generic_List<CPABDNGPCHO>_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_04567d4d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CPABDNGPCHO>_TypeInfo,method);
  System_Collections_Generic_List<Int32Enum>___ctor
            (__this_00,Method_System_Collections_Generic_List<CPABDNGPCHO>__ctor__);
  ppSVar1 = &(__this->fields)._Controls;
  *ppSVar1 = (System_Collections_Generic_List_CPABDNGPCHO__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  auVar3 = thunk_FUN_01bda818(
                             Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent_TypeInfo
                             );
  __this_01 = auVar3._0_8_;
  Nekki_SF2_GUI_Common_TwoAxisControlHandler_ControlAcceptedEvent___ctor(__this_01,auVar3._8_8_);
  ppNVar2 = &(__this->fields)._OnControlAccepted;
                    /* try { // try from 034b1638 to 035b1663 has its CatchHandler @ 034b1adc */
  *ppNVar2 = __this_01;
  thunk_FUN_01c20e04(ppNVar2,__this_01);
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).MHEMJOAINGI.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 034b1698 to 035b16a3 has its CatchHandler @ 034b1aa8 */
  Nekki_SF2_GUI_UIModule___ctor((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}

