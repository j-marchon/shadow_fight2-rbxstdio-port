// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnToggleConsoleMode @ RVA 0x353CE40

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnToggleConsoleMode
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  System_Collections_Generic_List_Toggle__o *__this_00;
  UnityEngine_UI_Toggle_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo *pMVar4;
  MethodInfo *method_00;
  MIJPCDHFBPA_o *pMVar5;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar6;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar7;
  System_Collections_Generic_List_Text__o *pSVar8;
  
  if ((DAT_04568ade & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Toggle>_get_Item__);
    DAT_04568ade = 1;
    method = extraout_x1;
  }
  bVar2 = Nekki_SF2_GUI_DebugModules_ConsoleUI__get_IsWindowActive(__this,method);
  if (!bVar2) {
    return;
  }
  pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
  if ((pMVar5 != (MIJPCDHFBPA_o *)0x0) &&
     (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
     pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) {
    if ((pSVar6->fields)._size < 1) {
      return;
    }
    pUVar3 = (__this->fields)._buttonsContent;
    if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
      bVar2 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        pUVar3 = (__this->fields)._buttonsContent;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363d014;
        UnityEngine_GameObject__SetActive(pUVar3,true,(MethodInfo *)0x0);
        pUVar3 = (__this->fields)._logContent;
        if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto LAB_0363d014;
        UnityEngine_GameObject__SetActive(pUVar3,false,(MethodInfo *)0x0);
        pMVar4 = extraout_x1_00;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_01;
        }
        pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
        pNVar7->JODCCEKGOGE = true;
        if (-1 < pNVar7->CAHAKKCIBIB) {
          Nekki_SF2_GUI_DebugModules_ConsoleUI__AGLPNKBMLCP(__this,pMVar4);
          return;
        }
      }
      __this_00 = (__this->fields)._tabButtons;
      if ((__this_00 != (System_Collections_Generic_List_Toggle__o *)0x0) &&
         (__this_01 = (UnityEngine_UI_Toggle_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_00,0,
                                 Method_System_Collections_Generic_List<Toggle>_get_Item__),
         __this_01 != (UnityEngine_UI_Toggle_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_UI_Toggle__set_isOn(__this_01,true,(MethodInfo *)0x0);
        pMVar4 = extraout_x1_02;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
          pMVar4 = extraout_x1_03;
        }
        pSVar8 = (__this->fields)._tabButtonNames;
        if (((pSVar8 != (System_Collections_Generic_List_Text__o *)0x0) &&
            (pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF,
            pMVar5 != (MIJPCDHFBPA_o *)0x0)) &&
           (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
           pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) {
          pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
          iVar1 = (pSVar8->fields)._size + pNVar7->CAHAKKCIBIB;
          if ((pSVar6->fields)._size <= iVar1) {
            iVar1 = 0;
          }
          if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pNVar7 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
            pMVar4 = extraout_x1_04;
          }
          pNVar7->CAHAKKCIBIB = iVar1;
          Nekki_SF2_GUI_DebugModules_ConsoleUI__KBBCEDMNICL(__this,pMVar4);
          Nekki_SF2_GUI_DebugModules_ConsoleUI__OnTabButtonSelect(__this,0,method_00);
          return;
        }
      }
    }
  }
LAB_0363d014:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

