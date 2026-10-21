// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$LJKNOEMABCJ @ RVA 0x344F748

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__LJKNOEMABCJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,int32_t FBCOOGOEFGC,
               Nekki_SF2_GUI_Scripts_EditBox_o *FCPEECECKJC,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  UnityEngine_Events_UnityAction_T0__o *pUVar2;
  JMDPBFOCHHP_o *pJVar3;
  System_Action_EditBox__o *CJNHFNHJHPE;
  int32_t value;
  JMDPBFOCHHP_DBNJFPILODG_o *pJVar4;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_01;
  UnityEngine_UI_InputField_OnChangeEvent_o *pUVar5;
  UnityEngine_Color_o CJNHFNHJHPE_00;
  
  if ((DAT_0456829a & 1) == 0) {
    FUN_01bab630(&System_Action<EditBox>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_BLOIEOMIJCF__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_EMIKPPHJBHM__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_HHHKCKLPENH__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_MFIOONIHDLJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_MKHMLDCDJPC__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_Add__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&UnityEngine_Events_UnityAction<string>_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    DAT_0456829a = 1;
  }
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)FCPEECECKJC,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 == (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0)
  goto LAB_0354faac;
  System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,FBCOOGOEFGC,
             (Il2CppObject *)FCPEECECKJC,
             Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_Add__);
  CJNHFNHJHPE_00 = CFBGPBCDAGA__NFFPCFGDOKG(0xa6,0x83,0x58,0xff,(MethodInfo *)0x0);
  if (FCPEECECKJC == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0354faac;
  Nekki_SF2_GUI_Scripts_EditBox__set_BGColor(FCPEECECKJC,CJNHFNHJHPE_00,(MethodInfo *)0x0);
  if (FBCOOGOEFGC == 3) {
    UnityEngine_UI_InputField__set_contentType
              ((UnityEngine_UI_InputField_o *)FCPEECECKJC,2,(MethodInfo *)0x0);
    pUVar5 = (FCPEECECKJC->fields).super.m_OnValueChanged;
    pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
    UnityEngine_Events_UnityAction<object>___ctor();
    if (pUVar5 == (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) goto LAB_0354faac;
    UnityEngine_Events_UnityEvent<object>__AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)pUVar5,pUVar2,
               Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
  }
  else {
    if (FBCOOGOEFGC == 2) {
      UnityEngine_UI_InputField__set_lineType
                ((UnityEngine_UI_InputField_o *)FCPEECECKJC,2,(MethodInfo *)0x0);
      pUVar5 = (FCPEECECKJC->fields).super.m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (pUVar5 == (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) goto LAB_0354faac;
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pUVar5,pUVar2,
                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar3 == (JMDPBFOCHHP_o *)0x0) ||
         (pJVar4 = (pJVar3->fields)._LGFNDLOCGPB_k__BackingField,
         pJVar4 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) goto LAB_0354faac;
      value = (pJVar4->fields).IAEGKJLKABO;
    }
    else {
      if (FBCOOGOEFGC != 1) goto LAB_0354fa18;
      UnityEngine_UI_InputField__set_lineType
                ((UnityEngine_UI_InputField_o *)FCPEECECKJC,0,(MethodInfo *)0x0);
      pUVar5 = (FCPEECECKJC->fields).super.m_OnValueChanged;
      pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
      UnityEngine_Events_UnityAction<object>___ctor();
      if (pUVar5 == (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) goto LAB_0354faac;
      UnityEngine_Events_UnityEvent<object>__AddListener
                ((UnityEngine_Events_UnityEvent_T0__o *)pUVar5,pUVar2,
                 Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
      if ((pJVar3 == (JMDPBFOCHHP_o *)0x0) ||
         (pJVar4 = (pJVar3->fields)._LGFNDLOCGPB_k__BackingField,
         pJVar4 == (JMDPBFOCHHP_DBNJFPILODG_o *)0x0)) goto LAB_0354faac;
      value = (pJVar4->fields).NLAKJEHAALI;
    }
    UnityEngine_UI_InputField__set_characterLimit
              ((UnityEngine_UI_InputField_o *)FCPEECECKJC,value,(MethodInfo *)0x0);
  }
LAB_0354fa18:
  CJNHFNHJHPE = (System_Action_EditBox__o *)thunk_FUN_01bda818(System_Action<EditBox>_TypeInfo);
  System_Action<object>___ctor();
  Nekki_SF2_GUI_Scripts_EditBox__add_OnShowKeyboard(FCPEECECKJC,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_01 = (FCPEECECKJC->fields).super.m_OnDidEndEdit;
  pUVar2 = (UnityEngine_Events_UnityAction_T0__o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction<string>_TypeInfo);
  UnityEngine_Events_UnityAction<object>___ctor();
  if (__this_01 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__AddListener
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,pUVar2,
               Method_UnityEngine_Events_UnityEvent<string>_AddListener__);
    return;
  }
LAB_0354faac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

