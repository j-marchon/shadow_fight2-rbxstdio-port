// INPPNIKCPJG$$OIFGJJACPOB @ RVA 0x31688DC

void INPPNIKCPJG__OIFGJJACPOB(INPPNIKCPJG_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_01;
  
  if ((DAT_045668d3 & 1) == 0) {
    FUN_01bab630(&Method_INPPNIKCPJG_OIFGJJACPOB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_RemoveListener__
                );
    DAT_045668d3 = 1;
  }
  if (ICJLHMDFMKG == 3) {
    if (DAT_04566913 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
      DAT_04566913 = '\x01';
    }
    pNVar1 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
    if (pNVar1 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
      __this_01 = (pNVar1->fields)._OnStateChanged;
      call = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo
                               );
      UnityEngine_Events_UnityAction<Int32Enum>___ctor();
      if (__this_01 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
        UnityEngine_Events_UnityEvent<Int32Enum>__RemoveListener
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,call,
                   Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_RemoveListener__
                  );
        __this_00 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
        if (__this_00 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
          Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(__this_00,false,(MethodInfo *)0x0);
          BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

