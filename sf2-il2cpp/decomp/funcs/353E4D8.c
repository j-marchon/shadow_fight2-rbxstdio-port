// Nekki.SF2.GUI.DebugModules.ConsoleUI$$GIENGNEGHPJ @ RVA 0x353E4D8

void Nekki_SF2_GUI_DebugModules_ConsoleUI__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_c *pNVar4;
  System_Text_StringBuilder_o *pSVar5;
  System_String_o *__this_00;
  System_String_o *separator;
  System_String_array *NMMKGIMBHFF;
  System_Action_T__o *CPECAEHDDDB;
  System_Collections_Generic_List_Toggle__o *__this_01;
  UnityEngine_UI_Toggle_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_GridLayoutGroup_o *pUVar6;
  MIJPCDHFBPA_o *pMVar7;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar8;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar9;
  System_Action_o *pSVar10;
  System_Collections_Generic_List_Text__o *pSVar11;
  UnityEngine_Vector2_o UVar12;
  
  if ((DAT_04568adc & 1) == 0) {
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_DebugModules_ConsoleUI_AINKNNKAGCI__);
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&Method_DFPABHGJPJJ_NHDPECDJBGO<string>__);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Toggle>_get_Item__);
    DAT_04568adc = 1;
  }
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04568b3f == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    DAT_04568b3f = '\x01';
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->_JPNBHEPPPNP_k__BackingField =
       __this;
  thunk_FUN_01c20e04(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields,__this);
  pUVar2 = (__this->fields)._tabButtonsRect;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._buttonsGroup;
    (__this->fields).LOFKFMGMPJJ = UVar12.fields.x;
    if (pUVar6 != (UnityEngine_UI_GridLayoutGroup_o *)0x0) {
      (__this->fields).OPAAJPDHLOM = (pUVar6->fields).m_Spacing.fields.x;
      (__this->fields).GEPICMKIDJP = (float)(pUVar6->fields).m_Constraint;
      pMVar7 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
      if (((pMVar7 != (MIJPCDHFBPA_o *)0x0) &&
          (pSVar8 = (pMVar7->fields)._HFKPAOAKEHD_k__BackingField,
          pSVar8 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
         (pUVar3 = (__this->fields)._logButton, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(pUVar3,0 < (pSVar8->fields)._size,(MethodInfo *)0x0);
        pMVar7 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
        if (((pMVar7 != (MIJPCDHFBPA_o *)0x0) &&
            (pSVar8 = (pMVar7->fields)._HFKPAOAKEHD_k__BackingField,
            pSVar8 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
           (pUVar3 = (__this->fields)._tabButton, pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar3,0 < (pSVar8->fields)._size,(MethodInfo *)0x0);
          pNVar9 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
          pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
          if (pNVar9->CAHAKKCIBIB < 0) {
            pSVar11 = (__this->fields)._tabButtonNames;
            if (pSVar11 == (System_Collections_Generic_List_Text__o *)0x0) goto LAB_0363e854;
            iVar1 = (pSVar11->fields)._size;
            if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
              pNVar9 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
            }
            pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
            pNVar9->CAHAKKCIBIB = -iVar1;
          }
          if ((pNVar4->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo;
          }
          pSVar5 = pNVar4->static_fields->BFKHNDJDKCA;
          if (pSVar5 != (System_Text_StringBuilder_o *)0x0) {
            __this_00 = (System_String_o *)
                        (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                  (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
            separator = System_Environment__get_NewLine((MethodInfo *)0x0);
            if (__this_00 != (System_String_o *)0x0) {
              NMMKGIMBHFF = System_String__Split(__this_00,separator,0,(MethodInfo *)0x0);
              CPECAEHDDDB = (System_Action_T__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo)
              ;
              System_Action<object>___ctor();
              DFPABHGJPJJ__NHDPECDJBGO<object>
                        ((System_Collections_Generic_IEnumerable_T__o *)NMMKGIMBHFF,CPECAEHDDDB,
                         Method_DFPABHGJPJJ_NHDPECDJBGO<string>__);
              Nekki_SF2_GUI_DebugModules_ConsoleUI__GNKEIGHLPEE(__this,method_00);
              pUVar2 = (__this->fields)._Window;
              if ((pUVar2 != (UnityEngine_RectTransform_o *)0x0) &&
                 (pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
                 pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
                if (-1 < Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB)
                {
                  pUVar3 = (__this->fields)._buttonsContent;
                  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363e854;
                  UnityEngine_GameObject__SetActive
                            (pUVar3,Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                                    JODCCEKGOGE,(MethodInfo *)0x0);
                  pUVar3 = (__this->fields)._logContent;
                  if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363e854;
                  UnityEngine_GameObject__SetActive
                            (pUVar3,Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                                    JODCCEKGOGE == false,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_DebugModules_ConsoleUI__KBBCEDMNICL(__this,method_01);
                  __this_01 = (__this->fields)._tabButtons;
                  if ((__this_01 == (System_Collections_Generic_List_Toggle__o *)0x0) ||
                     (__this_02 = (UnityEngine_UI_Toggle_o *)
                                  System_Collections_Generic_List<object>__get_Item
                                            ((System_Collections_Generic_List_object__o *)__this_01,
                                             Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->
                                             static_fields->BBGKBAMBOGA,
                                             Method_System_Collections_Generic_List<Toggle>_get_Item__
                                            ), __this_02 == (UnityEngine_UI_Toggle_o *)0x0))
                  goto LAB_0363e854;
                  method_02 = (MethodInfo *)0x0;
                  UnityEngine_UI_Toggle__set_isOn(__this_02,true,(MethodInfo *)0x0);
                  Nekki_SF2_GUI_DebugModules_ConsoleUI__OnTabButtonSelect
                            (__this,Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                                    BBGKBAMBOGA,method_02);
                }
                if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                pSVar10 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->PJEACOOPNDB;
                if (pSVar10 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0363e850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(pSVar10->fields).super.super.invoke_impl)
                            ((pSVar10->fields).super.super.method_code,
                             (pSVar10->fields).super.super.method);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0363e854:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

