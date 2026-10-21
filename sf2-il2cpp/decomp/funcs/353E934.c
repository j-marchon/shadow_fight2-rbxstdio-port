// Nekki.SF2.GUI.DebugModules.ConsoleUI$$OnButtonClick @ RVA 0x353E934

void Nekki_SF2_GUI_DebugModules_ConsoleUI__OnButtonClick
               (Nekki_SF2_GUI_DebugModules_ConsoleUI_o *__this,int32_t DPJIDNBJIBG,
               MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  System_String_array *pSVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MIJPCDHFBPA_o *pMVar4;
  ulong uVar5;
  System_Collections_Generic_List_ANMHMMJOHJG__o *pSVar6;
  ulong uVar7;
  
  if ((DAT_04568adf & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo);
    FUN_01bab630(&IGNCJNPCAEN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
    DAT_04568adf = 1;
  }
  pMVar4 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
  if (pMVar4 != (MIJPCDHFBPA_o *)0x0) {
    pSVar6 = (pMVar4->fields)._HFKPAOAKEHD_k__BackingField;
    if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) {
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar6,
                          Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->CAHAKKCIBIB
                          + Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields->
                            BBGKBAMBOGA,
                          Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar2[1].monitor != (System_Collections_Generic_List_object__o *)0x0)) {
        pIVar2 = System_Collections_Generic_List<object>__get_Item
                           (pIVar2[1].monitor,DPJIDNBJIBG,
                            Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__);
        if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[1].monitor != (System_String_o *)0x0)) {
          method_01 = (MethodInfo *)0x0;
          pSVar3 = System_String__Split(pIVar2[1].monitor,0x3b,0,(MethodInfo *)0x0);
          if (pSVar3 != (System_String_array *)0x0) {
            if (0 < (int)pSVar3->max_length) {
              uVar7 = 0;
              uVar5 = pSVar3->max_length & 0xffffffff;
              do {
                if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_01bab8d0();
                }
                Nekki_SF2_GUI_DebugModules_ConsoleUI__FIKOIBAMMEO
                          (__this,pSVar3->m_Items[uVar7],method_01);
                uVar1 = (uint)pSVar3->max_length;
                uVar5 = (ulong)uVar1;
                uVar7 = uVar7 + 1;
              } while ((long)uVar7 < (long)(int)uVar1);
            }
            pMVar4 = IGNCJNPCAEN_TypeInfo->static_fields->PDMKGCMHBJF;
            if (pMVar4 != (MIJPCDHFBPA_o *)0x0) {
              pSVar6 = (pMVar4->fields)._HFKPAOAKEHD_k__BackingField;
              if ((Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
                    /* try { // try from 0363eac0 to 0373ec53 has its CatchHandler @ 0363eac0
                       catch() { ... } // from try @ 0363eac0 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363eee4 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363efa8 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363efb0 with catch @ 0363eac0
                       catch() { ... } // from try @ 0363f0d8 with catch @ 0363eac0 */
              if ((((pSVar6 != (System_Collections_Generic_List_ANMHMMJOHJG__o *)0x0) &&
                   (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                       ((System_Collections_Generic_List_object__o *)pSVar6,
                                        Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields
                                        ->CAHAKKCIBIB +
                                        Nekki_SF2_GUI_DebugModules_ConsoleUI_TypeInfo->static_fields
                                        ->BBGKBAMBOGA,
                                        Method_System_Collections_Generic_List<ANMHMMJOHJG>_get_Item__
                                       ), pIVar2 != (Il2CppObject *)0x0)) &&
                  (pIVar2[1].monitor != (System_Collections_Generic_List_object__o *)0x0)) &&
                 (pIVar2 = System_Collections_Generic_List<object>__get_Item
                                     (pIVar2[1].monitor,DPJIDNBJIBG,
                                      Method_System_Collections_Generic_List<MFELPDAPJGO>_get_Item__
                                     ), pIVar2 != (Il2CppObject *)0x0)) {
                if (*(char *)&pIVar2[2].klass != '\0') {
                  Nekki_SF2_GUI_DebugModules_ConsoleUI__OnShowLogClick(__this,method_00);
                  return;
                }
                return;
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

