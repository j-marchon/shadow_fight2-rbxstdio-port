// Nekki.SF2.GUI.Fight.PreFight$$NJPEJIFFNHN @ RVA 0x2FFEE88

void Nekki_SF2_GUI_Fight_PreFight__NJPEJIFFNHN
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565b16 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    DAT_04565b16 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).OnButtonClick;
  if (__this_00 != (Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,2,
               Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

