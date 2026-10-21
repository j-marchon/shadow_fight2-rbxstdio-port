// TypeDefIndex 1360
// Namespace: 
// public class INPPNIKCPJG : BOFEMGGNODC
// Fields:
//   private string LGPLIIOJODH; // 0x68

// ===== private void BPDOIDBNPAD()  [RVA 0x3167C3C]
// INPPNIKCPJG$$BPDOIDBNPAD @ RVA 0x3167C3C

void INPPNIKCPJG__BPDOIDBNPAD(INPPNIKCPJG_o *__this,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar2;
  
  if (DAT_04566913 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566913 = '\x01';
    method = extraout_x1;
  }
  pNVar2 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
  if (pNVar2 == (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar1 = (pNVar2->fields).IAAABJBDEMK;
  if (uVar1 < 2) {
    INPPNIKCPJG__OAAPILFNIPL(__this,method);
    return;
  }
  if ((uVar1 & 0xfffffffe) == 2) {
    INPPNIKCPJG__JMAEAOIJMGM(__this,method);
    return;
  }
  return;
}


// ===== private void OAAPILFNIPL()  [RVA 0x3167F78]
// INPPNIKCPJG$$OAAPILFNIPL @ RVA 0x3167F78

void INPPNIKCPJG__OAAPILFNIPL(INPPNIKCPJG_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *pNVar1;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar3;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *pNVar4;
  
  if ((DAT_045668cc & 1) == 0) {
    FUN_01bab630(&Method_INPPNIKCPJG_NOEBNFFAHEC__);
    FUN_01bab630(&Method_INPPNIKCPJG_OIFGJJACPOB__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_AddListener__);
    DAT_045668cc = 1;
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
      if (pNVar1 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) goto LAB_03268220;
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(pNVar1,true,(MethodInfo *)0x0);
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
        DAT_04566913 = '\x01';
      }
      pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar3 == (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) goto LAB_03268220;
      pNVar4 = (pNVar3->fields)._OnStateChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(
                                 UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo
                                 );
      break;
    case 1:
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
              Nekki_SF2_GUI_Common_SceneMenuScroll__Close(pNVar3,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      goto LAB_03268220;
    case 2:
      pNVar1 = Nekki_SF2_GUI_Tutorial_TutorialCanvas__get_Instance((MethodInfo *)0x0);
      if (pNVar1 == (Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *)0x0) goto LAB_03268220;
      Nekki_SF2_GUI_Tutorial_TutorialCanvas__set_BlockOn(pNVar1,true,(MethodInfo *)0x0);
      if (DAT_04566913 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
        DAT_04566913 = '\x01';
      }
      pNVar3 = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
      if (pNVar3 == (Nekki_SF2_GUI_Common_SceneMenuScroll_o *)0x0) goto LAB_03268220;
      pNVar4 = (pNVar3->fields)._OnStateChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(
                                 UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo
                                 );
      break;
    case 3:
      BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
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
LAB_03268220:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void MAHFCKJGBPP(PKHMIGFEJCL MNBMHEAHIIA)  [RVA 0x3168224]
// INPPNIKCPJG$$MAHFCKJGBPP @ RVA 0x3168224

void INPPNIKCPJG__MAHFCKJGBPP(INPPNIKCPJG_o *__this,PKHMIGFEJCL_o *MNBMHEAHIIA,MethodInfo *method)

{
  bool bVar1;
  System_Object_array *args;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *x;
  System_String_o *pSVar4;
  
  if ((DAT_045668cd & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10614/*"QASceneMenuScroll: unknown action - '{0}'!"*/);
    FUN_01bab630(&StringLiteral_9941/*"Open"*/);
    FUN_01bab630(&StringLiteral_10613/*"QASceneMenuScroll: SceneMenuScroll is null!"*/);
    FUN_01bab630(&StringLiteral_4436/*"Close"*/);
    FUN_01bab630(&StringLiteral_12544/*"Switch"*/);
    DAT_045668cd = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,MNBMHEAHIIA,(MethodInfo *)0x0);
  if (DAT_04566913 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo);
    DAT_04566913 = '\x01';
  }
  x = Nekki_SF2_GUI_Common_SceneMenuScroll_TypeInfo->static_fields->CNMHHKAMGPI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogError(StringLiteral_10613/*"QASceneMenuScroll: SceneMenuScroll is null!"*/,(MethodInfo *)0x0);
  }
  else {
    pSVar4 = (__this->fields).LGPLIIOJODH;
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = MFBNFJGBPBB__ACJKLBMNMEJ(MNBMHEAHIIA,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_9941/*"Open"*/,(MethodInfo *)0x0);
    if (bVar1) {
      INPPNIKCPJG__JMAEAOIJMGM(__this,method_00);
      return;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_4436/*"Close"*/,(MethodInfo *)0x0);
    if (bVar1) {
      INPPNIKCPJG__OAAPILFNIPL(__this,method_01);
      return;
    }
    bVar1 = System_String__op_Equality(pSVar4,StringLiteral_12544/*"Switch"*/,(MethodInfo *)0x0);
    if (bVar1) {
      INPPNIKCPJG__BPDOIDBNPAD(__this,method_02);
      return;
    }
    args = (System_Object_array *)FUN_01bab718(object___TypeInfo,1);
    if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((pSVar4 != (System_String_o *)0x0) &&
       (lVar2 = thunk_FUN_01bda71c(pSVar4,(((args->obj).klass)->_1).element_class), lVar2 == 0)) {
      uVar3 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar3,0);
    }
    if ((int)args->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    args->m_Items[0] = (Il2CppObject *)pSVar4;
    thunk_FUN_01c20e04(args->m_Items,pSVar4);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    UnityEngine_Debug__LogErrorFormat(StringLiteral_10614/*"QASceneMenuScroll: unknown action - '{0}'!"*/,args,(MethodInfo *)0x0);
  }
  BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void ANKANGFFJCJ(SceneMenuScroll.LJJIFKBBPFG ICJLHMDFMKG)  [RVA 0x31684BC]
// INPPNIKCPJG$$ANKANGFFJCJ @ RVA 0x31684BC

void INPPNIKCPJG__ANKANGFFJCJ(INPPNIKCPJG_o *__this,int32_t ICJLHMDFMKG,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_T0__o *call;
  Nekki_SF2_GUI_Tutorial_TutorialCanvas_o *__this_00;
  Nekki_SF2_GUI_Common_SceneMenuScroll_o *pNVar1;
  Nekki_SF2_GUI_Common_SceneMenuScroll_ENOALDKHIOF_o *__this_01;
  
  if ((DAT_045668ce & 1) == 0) {
    FUN_01bab630(&Method_INPPNIKCPJG_ANKANGFFJCJ__);
    FUN_01bab630(&UnityEngine_Events_UnityAction<SceneMenuScroll_LJJIFKBBPFG>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SceneMenuScroll_LJJIFKBBPFG>_RemoveListener__
                );
    DAT_045668ce = 1;
  }
  if (ICJLHMDFMKG == 1) {
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


// ===== public override void HNIHOIAMDPC(XmlNode JHMENEKPIBO)  [RVA 0x31685CC]
// INPPNIKCPJG$$HNIHOIAMDPC @ RVA 0x31685CC

void INPPNIKCPJG__HNIHOIAMDPC
               (INPPNIKCPJG_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_045668cf & 1) == 0) {
    FUN_01bab630(&StringLiteral_9941/*"Open"*/);
    FUN_01bab630(&StringLiteral_2725/*"Action"*/);
    DAT_045668cf = 1;
  }
  BOFEMGGNODC__HNIHOIAMDPC((BOFEMGGNODC_o *)__this,JHMENEKPIBO,(MethodInfo *)0x0);
  if (JHMENEKPIBO != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(JHMENEKPIBO->klass->vtable)._16_get_Attributes.methodPtr)
                          (JHMENEKPIBO,(JHMENEKPIBO->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_2725/*"Action"*/,(MethodInfo *)0x0);
      pSVar1 = EIABCPKDEBD__JPKEHIBGOEM(LBJNDMNEJJB,StringLiteral_9941/*"Open"*/,(MethodInfo *)0x0);
      ppSVar2 = &(__this->fields).LGPLIIOJODH;
      *ppSVar2 = pSVar1;
      thunk_FUN_01c20e04(ppSVar2,pSVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3168678]
// INPPNIKCPJG$$.ctor @ RVA 0x3168678

void INPPNIKCPJG___ctor(INPPNIKCPJG_o *__this,MethodInfo *method)

{
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void NOEBNFFAHEC(SceneMenuScroll.LJJIFKBBPFG ICJLHMDFMKG)  [RVA 0x3168680]
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


// ===== private void PIICPFGGAHN(SceneMenuScroll.LJJIFKBBPFG ICJLHMDFMKG)  [RVA 0x31687AC]
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


// ===== private void JMAEAOIJMGM()  [RVA 0x3167CC8]
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


// ===== private void OIFGJJACPOB(SceneMenuScroll.LJJIFKBBPFG ICJLHMDFMKG)  [RVA 0x31688DC]
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

