// INPPNIKCPJG$$JMAEAOIJMGM @ RVA 0x3167CC8

void INPPNIKCPJG__JMAEAOIJMGM(INPPNIKCPJG_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar3;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *pNVar4;
  
  if ((DAT_045668d2 & 1) == 0) {
    FUN_01bab630(&Method_INPPNIKCPJG_ANKANGFFJCJ__);
    FUN_01bab630(&Method_INPPNIKCPJG_PIICPFGGAHN__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__);
    DAT_045668d2 = 1;
    method = extraout_x1;
  }
  if (DAT_04566913 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo,method);
    DAT_04566913 = '\x01';
  }
  pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar3 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
    switch((pNVar3->fields).IAAABJBDEMK) {
    case 0:
      pNVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) goto LAB_03267f74;
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(pNVar1,true,(MethodInfo *)0x0);
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
        DAT_04566913 = '\x01';
      }
      pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar3 == (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) goto LAB_03267f74;
      pNVar4 = (pNVar3->fields)._OnStateChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(
                                 UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo
                                 );
      break;
    case 1:
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    case 2:
      pNVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) goto LAB_03267f74;
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(pNVar1,true,(MethodInfo *)0x0);
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
        DAT_04566913 = '\x01';
      }
      pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar3 == (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) goto LAB_03267f74;
      pNVar4 = (pNVar3->fields)._OnStateChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(
                                 UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo
                                 );
      break;
    case 3:
      pNVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (pNVar1 != (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) {
        Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(pNVar1,true,(MethodInfo *)0x0);
        if (DAT_04566913 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
          DAT_04566913 = '\x01';
        }
        pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
        if (pNVar3 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
          pNVar4 = (pNVar3->fields)._OnStateChanged;
          pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
                   thunk_FUN_01bda818(
                                     UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo
                                     );
          UnityEngine_Events_UnityAction<Int32Enum>___ctor();
          if (pNVar4 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
            UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                      ((UnityEngine_Events_UnityEvent_T0__o *)pNVar4,pUVar2,
                       Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__
                      );
            if (DAT_04566913 == '\0') {
              FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
              DAT_04566913 = '\x01';
            }
            pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
            if (pNVar3 != (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
              Nekki_SF2_GUI_Common_SceneMenuScroll__Open(pNVar3,0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto LAB_03267f74;
    default:
      return;
    }
    UnityEngine_Events_UnityAction<Int32Enum>___ctor();
    if (pNVar4 != (Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *)0x0) {
      UnityEngine_Events_UnityEvent<Int32Enum>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pNVar4,pUVar2,
                 Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__);
      return;
    }
  }
LAB_03267f74:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

