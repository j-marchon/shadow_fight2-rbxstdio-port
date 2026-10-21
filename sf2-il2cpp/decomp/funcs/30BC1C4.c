// Nekki.SF2.GUI.Common.SceneMenuScroll$$CMAEBFBFONH @ RVA 0x30BC1C4

void Nekki_SF2_GUI_Common_SceneMenuScroll__CMAEBFBFONH
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566248 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    DAT_04566248 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._OnStateChanged;
  (__this->fields).IAAABJBDEMK = 2;
  if (__this_00 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,2,
               Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_Invoke__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

