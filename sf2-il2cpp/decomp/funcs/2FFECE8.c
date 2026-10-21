// Nekki.SF2.GUI.Fight.PreFight$$LOPCEFIAKHF @ RVA 0x2FFECE8

void Nekki_SF2_GUI_Fight_PreFight__LOPCEFIAKHF
               (Nekki_SF2_GUI_Fight_PreFight_o *__this,Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int32_t *piVar1;
  Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *__this_00;
  
  if ((DAT_04565b13 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
    DAT_04565b13 = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class !=
        (Nekki_SF2_GUI_Fight_ViewerFight_GHOHIFCGFBO_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    piVar1 = (int32_t *)thunk_FUN_01bda96c();
    __this_00 = (__this->fields).OnButtonClick;
    if (__this_00 != (Nekki_SF2_GUI_Fight_PreFight_JNJIBDGLBPC_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,*piVar1,
                 Method_UnityEngine_Events_UnityEvent<ViewerFight_GHOHIFCGFBO>_Invoke__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

