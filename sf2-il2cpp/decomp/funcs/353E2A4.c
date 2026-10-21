// Nekki.SF2.GUI.DebugModules.ConsoleUI$$KBBCEDMNICL @ RVA 0x353E2A4

void Nekki_SF2_GUI_DebugModules_ConsoleUI__KBBCEDMNICL
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_Text__o *pSVar4;
  MIJPCDHFBPA_o *pMVar5;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar6;
  int index;
  
  if ((DAT_04568adb & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Item__);
    DAT_04568adb = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields)._tabButtonNames;
  if (pSVar4 != (System_Collections_Generic_List_Text__o *)0x0) {
    index = 0;
    do {
      if ((pSVar4->fields)._size <= index) {
        Nekki_SF2_GUI_DebugModules_ConsoleUI__AGLPNKBMLCP(__this,method);
        return;
      }
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
      if ((pMVar5 == (MIJPCDHFBPA_o *)0x0) ||
         (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
         pSVar6 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) break;
      if (index + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB <
          (pSVar6->fields)._size) {
        pSVar4 = (__this->fields)._tabButtonNames;
        if (pSVar4 == (System_Collections_Generic_List_Text__o *)0x0) break;
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar4,index,
                            Method_System_Collections_Generic_List<Text>_get_Item__);
        pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
        if (pMVar5 == (MIJPCDHFBPA_o *)0x0) break;
        pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField;
        if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (((pSVar6 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) ||
            (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar6,
                                 index + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->
                                         static_fields->CAHAKKCIBIB,
                                 Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__),
            pIVar2 == (Il2CppObject *)0x0)) || (pIVar1 == (Il2CppObject *)0x0)) break;
        (*pIVar1->klass->vtable[0x4b].methodPtr)
                  (pIVar1,pIVar2[1].klass,pIVar1->klass->vtable[0x4b].method);
      }
      pSVar4 = (__this->fields)._tabButtonNames;
      if (((pSVar4 == (System_Collections_Generic_List_Text__o *)0x0) ||
          (__this_00 = (UnityEngine_Component_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar4,index,
                                  Method_System_Collections_Generic_List<Text>_get_Item__),
          __this_00 == (UnityEngine_Component_o *)0x0)) ||
         ((pUVar3 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0 ||
          (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0)))) break;
      __this_01 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
      }
      pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
      if (((pMVar5 == (MIJPCDHFBPA_o *)0x0) ||
          (pSVar6 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
          pSVar6 == (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) ||
         (__this_01 == (UnityEngine_GameObject_o *)0x0)) break;
      UnityEngine_GameObject__SetActive
                (__this_01,
                 index + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB <
                 (pSVar6->fields)._size,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._tabButtonNames;
      index = index + 1;
      method = extraout_x1_00;
      if (pSVar4 == (System_Collections_Generic_List_Text__o *)0x0) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

