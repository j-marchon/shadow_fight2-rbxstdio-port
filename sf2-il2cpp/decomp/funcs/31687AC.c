// INPPNIKCPJG$$PIICPFGGAHN @ RVA 0x31687AC

void INPPNIKCPJG__PIICPFGGAHN(INPPNIKCPJG_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  
  if ((DAT_045668d1 & 1) == 0) {
    FUN_01bab630(&Method_INPPNIKCPJG_ANKANGFFJCJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__);
    DAT_045668d1 = 1;
  }
  if (ICJLHMDFMKG != 3) {
    return;
  }
  if (DAT_04566913 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566913 = '\x01';
  }
  pNVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar1 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
    __this_00 = (pNVar1->fields)._OnStateChanged;
    call = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (__this_00 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,call,
                 Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__);
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
        DAT_04566913 = '\x01';
      }
      pNVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar1 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
        Nekki_SF2_GUI_Common_SceneMenuScroll__Open(pNVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

