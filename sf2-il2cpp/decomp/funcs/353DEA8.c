// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnTabButtonSelect @ RVA 0x353DEA8

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnTabButtonSelect
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,int32_t AFLLGJHOHHL,
               MethodInfo *method)

{
  System_Collections_Generic_List_ANMHMMJOHJG__o *__this_00;
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_Text__o *__this_01;
  Il2CppObject *pIVar2;
  UnityEngine_Component_o *__this_02;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_03;
  Nekki_SF2_GUI_DebugModules_ConsoleUI_StaticFields *pNVar4;
  MIJPCDHFBPA_o *pMVar5;
  int index;
  System_Collections_Generic_List_object__o *__this_04;
  
  if ((DAT_04568ad6 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Text>_get_Item__);
    DAT_04568ad6 = 1;
  }
  if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pNVar4 = Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields;
  pNVar4->BBGKBAMBOGA = AFLLGJHOHHL;
  pMVar5 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
  if ((((pMVar5 != (MIJPCDHFBPA_o *)0x0) &&
       (__this_00 = (pMVar5->fields)._HFKPAOAKEHD_k__BackingField,
       __this_00 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0)) &&
      (pIVar1 = System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           pNVar4->CAHAKKCIBIB + AFLLGJHOHHL,
                           Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__),
      pIVar1 != (Il2CppObject *)0x0)) &&
     (__this_01 = (__this->fields)._buttonNames,
     __this_01 != (System_Collections_Generic_List_Text__o *)0x0)) {
    __this_04 = pIVar1[1].monitor;
    index = 0;
    do {
      if ((__this_01->fields)._size <= index) {
        return;
      }
      if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (index < (__this_04->fields)._size) {
        pIVar1 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_01,index,
                            Method_System_Collections_Generic_List<Text>_get_Item__);
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           (__this_04,index,
                            Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
        if ((pIVar2 == (Il2CppObject *)0x0) || (pIVar1 == (Il2CppObject *)0x0)) break;
                    /* try { // try from 0363dff4 to 0373e10b has its CatchHandler @ 0363dff4
                       catch() { ... } // from try @ 0363dff4 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e130 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e1b4 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e1e0 with catch @ 0363dff4
                       catch() { ... } // from try @ 0363e210 with catch @ 0363dff4 */
        (*pIVar1->klass->vtable[0x4b].methodPtr)
                  (pIVar1,pIVar2[1].klass,pIVar1->klass->vtable[0x4b].method);
        __this_01 = (__this->fields)._buttonNames;
        if (__this_01 == (System_Collections_Generic_List_Text__o *)0x0) break;
      }
      __this_02 = (UnityEngine_Component_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_01,index,
                             Method_System_Collections_Generic_List<Text>_get_Item__);
      if (((__this_02 == (UnityEngine_Component_o *)0x0) ||
          (pUVar3 = UnityEngine_Component__get_transform(__this_02,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0)) ||
         ((pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
          pUVar3 == (UnityEngine_Transform_o *)0x0 ||
          (__this_03 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
          __this_03 == (UnityEngine_GameObject_o *)0x0)))) break;
      UnityEngine_GameObject__SetActive
                (__this_03,index < (__this_04->fields)._size,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._buttonNames;
      index = index + 1;
      if (__this_01 == (System_Collections_Generic_List_Text__o *)0x0) break;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

