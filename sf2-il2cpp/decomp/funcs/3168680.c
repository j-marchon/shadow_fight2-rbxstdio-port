// INPPNIKCPJG$$NOEBNFFAHEC @ RVA 0x3168680

void INPPNIKCPJG__NOEBNFFAHEC(INPPNIKCPJG_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_00;
  
  if ((DAT_045668d0 & 1) == 0) {
    FUN_01bab630(&Method_INPPNIKCPJG_OIFGJJACPOB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__);
    DAT_045668d0 = 1;
  }
  if (ICJLHMDFMKG != 1) {
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
        Nekki_SF2_GUI_Common_SceneMenuScroll__Close(pNVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

