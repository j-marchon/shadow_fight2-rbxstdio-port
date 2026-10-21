// Nekki.Utils.RaidBetaLogger$$GIENGNEGHPJ @ RVA 0x359F620

void Nekki_Utils_RaidBetaLogger__GIENGNEGHPJ
               (Nekki_Utils_RaidBetaLogger_o *__this,MethodInfo *method)

{
  System_DateTime_o SVar1;
  UnityEngine_Object_o *pUVar2;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *value;
  UnityEngine_Application_LogCallback_o *CJNHFNHJHPE;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE_00;
  GCIFMNHADDF_o *__this_01;
  System_Action_BaseDialog__o *CJNHFNHJHPE_01;
  System_Action_o *CJNHFNHJHPE_02;
  System_Text_StringBuilder_o *__this_02;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_03;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_UI_Text_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_Events_UnityEvent_o *__this_04;
  System_Text_StringBuilder_o **ppSVar6;
  
  if ((DAT_04568dfe & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&System_Action<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1524);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1525);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&KOKJOMBFNCD_TypeInfo);
    FUN_01bab630(&UnityEngine_Application_LogCallback_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_EEHHDNEENIJ__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_FAENACIILOH__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_JAACKPFKECL__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_JKKLLBNOIAH__);
    FUN_01bab630(&Method_Nekki_Utils_RaidBetaLogger_LAAOAHEGCEJ__);
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568dfe = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0369f740 to 0379f7fb has its CatchHandler @ 0369f740
                       catch() { ... } // from try @ 0369f740 with catch @ 0369f740
                       catch() { ... } // from try @ 0369f81c with catch @ 0369f740
                       catch() { ... } // from try @ 0369f840 with catch @ 0369f740
                       catch() { ... } // from try @ 0369f868 with catch @ 0369f740
                       catch() { ... } // from try @ 0369f8a8 with catch @ 0369f740 */
  Nekki_Utils_RaidBetaLogger__IEDFJEDPMJJ(__this,method);
  LONJOMIDKLC__OOHGBBAKBFD
            ((System_Xml_XmlNode_o *)0x0,(__this->fields).LMDCMDDCBKA,(MethodInfo *)0x0);
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  SVar1 = System_DateTime__get_UtcNow((MethodInfo *)0x0);
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_Utils_RaidBetaLogger_TypeInfo);
  }
  (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->GameStartTime).fields._dateData =
       (uint64_t)SVar1.fields._dateData;
  pUVar2 = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1524,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 0369f7fc to 0379f803 has its CatchHandler @ 0369f84c */
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1525,(MethodInfo *)0x0);
  value = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
                    /* try { // try from 0369f810 to 0379f81b has its CatchHandler @ 0369f848 */
  if (pUVar2 != (UnityEngine_Object_o *)0x0) {
                    /* try { // try from 0369f81c to 0379f83b has its CatchHandler @ 0369f740 */
                    /* try { // try from 0369f83c to 0379f83f has its CatchHandler @ 0369f844 */
                    /* try { // try from 0369f840 to 0379f863 has its CatchHandler @ 0369f740 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f83c with catch @ 0369f844
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f810 with catch @ 0369f848
                        */
    UnityEngine_Object__set_name(pUVar2,value,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0369f7fc with catch @ 0369f84c
                        */
    CJNHFNHJHPE = (UnityEngine_Application_LogCallback_o *)
                  thunk_FUN_01bda818(UnityEngine_Application_LogCallback_TypeInfo);
                    /* try { // try from 0369f864 to 0379f867 has its CatchHandler @ 0369f890 */
    UnityEngine_Application_LogCallback___ctor();
                    /* try { // try from 0369f868 to 0379f89f has its CatchHandler @ 0369f740 */
    if ((KOKJOMBFNCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    KOKJOMBFNCD__HBLDNIKHJAB(CJNHFNHJHPE,(MethodInfo *)0x0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0369f864 with catch @ 0369f890 */
    CJNHFNHJHPE_00 =
         (System_Action_DBMPKPJGIPI__o *)thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
                    /* try { // try from 0369f8a0 to 0379f8a7 has its CatchHandler @ 0369f8bc */
                    /* try { // try from 0369f8a8 to 0379f8b3 has its CatchHandler @ 0369f740 */
    System_Action<Int32Enum>___ctor();
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
                    /* try { // try from 0369f8b4 to 0379f8bb has its CatchHandler @ 0369f8bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0369f8a0 with catch @ 0369f8bc
                       catch(type#2 @ 00000000) { ... } // from try @ 0369f8b4 with catch @ 0369f8bc
                        */
      NDPMLPGANCI__EAPNEKLDLLM(__this_00,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      __this_01 = GCIFMNHADDF__AIHNLLGNBLC((MethodInfo *)0x0);
      CJNHFNHJHPE_01 =
           (System_Action_BaseDialog__o *)thunk_FUN_01bda818(System_Action<BaseDialog>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_01 != (GCIFMNHADDF_o *)0x0) {
        GCIFMNHADDF__EOAPHMAFKKP(__this_01,CJNHFNHJHPE_01,(MethodInfo *)0x0);
        CJNHFNHJHPE_02 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__MBDLAPMPMBC(CJNHFNHJHPE_02,(MethodInfo *)0x0);
        __this_02 = (System_Text_StringBuilder_o *)
                    thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
        System_Text_StringBuilder___ctor(__this_02,0x100000,(MethodInfo *)0x0);
        ppSVar6 = &(__this->fields).LJLADKMLDEF;
        *ppSVar6 = __this_02;
        thunk_FUN_01c20e04(ppSVar6,__this_02);
        pUVar5 = (__this->fields)._userReportButton;
        if ((pUVar5 != (UnityEngine_UI_Button_o *)0x0) &&
           (__this_03 = (pUVar5->fields).m_OnClick,
           __this_03 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
          UnityEngine_Events_UnityEventBase__RemoveAllListeners
                    ((UnityEngine_Events_UnityEventBase_o *)__this_03,(MethodInfo *)0x0);
          pUVar5 = (__this->fields)._userReportButton;
          if (pUVar5 != (UnityEngine_UI_Button_o *)0x0) {
            __this_04 = (UnityEngine_Events_UnityEvent_o *)(pUVar5->fields).m_OnClick;
            call = (UnityEngine_Events_UnityAction_o *)
                   thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
            method_00 = (MethodInfo *)0x0;
            UnityEngine_Events_UnityAction___ctor();
            if (__this_04 != (UnityEngine_Events_UnityEvent_o *)0x0) {
              UnityEngine_Events_UnityEvent__AddListener(__this_04,call,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._feedback;
              if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
                (*(pUVar3->klass->vtable)._75_set_text.methodPtr)
                          (pUVar3,StringLiteral_1,(pUVar3->klass->vtable)._75_set_text.method);
                pUVar4 = (__this->fields)._feedbackRoot;
                if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                  UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._exceptionDetectedRoot;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                    pUVar2 = (UnityEngine_Object_o *)
                             UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__DontDestroyOnLoad(pUVar2,(MethodInfo *)0x0);
                    Nekki_Utils_RaidBetaLogger__ShowSendButton(__this,false,false,method_00);
                    pUVar4 = (__this->fields)._rootUI;
                    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
                      pUVar4 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                        UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

