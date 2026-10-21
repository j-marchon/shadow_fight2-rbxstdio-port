// Nekki.SF2.GUI.Dialogs.Raids.Clans.BattleRaidSlider$$SetItems @ RVA 0x31C730C

void Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider__SetItems
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidSlider_o *__this,
               System_Collections_Generic_List_GEKCMGLDMEE__o *GHAAKPDHIJJ,MethodInfo *method)

{
  Il2CppObject *DKMMBMBMJBO;
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *__this_00;
  System_Collections_Generic_List_GEKCMGLDMEE__o **ppSVar3;
  UnityEngine_GameObject_o *pUVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* catch() { ... } // from try @ 032c72e8 with catch @ 032c7314 */
                    /* try { // try from 032c7324 to 033c732b has its CatchHandler @ 032c7340 */
                    /* try { // try from 032c732c to 033c7337 has its CatchHandler @ 032c68a4 */
  if ((DAT_04566c3c & 1) == 0) {
                    /* try { // try from 032c7338 to 033c733f has its CatchHandler @ 032c7340 */
                    /* catch() { ... } // from try @ 032c7324 with catch @ 032c7340
                       catch() { ... } // from try @ 032c7338 with catch @ 032c7340 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_Dispose__);
                    /* try { // try from 032c7344 to 033c76c7 has its CatchHandler @ 032c7344
                       catch() { ... } // from try @ 032c7344 with catch @ 032c7344
                       catch() { ... } // from try @ 032c78ec with catch @ 032c7344
                       catch() { ... } // from try @ 032c7ad4 with catch @ 032c7344
                       catch() { ... } // from try @ 032c7b68 with catch @ 032c7344
                       catch() { ... } // from try @ 032c7ba8 with catch @ 032c7344 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_get_Current__);
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<BattleRaidCell>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GEKCMGLDMEE>_GetEnumerator__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566c3c = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  ppSVar3 = &(__this->fields).KNPKLNHJLEN;
  *ppSVar3 = GHAAKPDHIJJ;
  thunk_FUN_01c20e04(ppSVar3,GHAAKPDHIJJ);
  pNVar2 = (__this->fields)._scroll;
  if ((pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) &&
     (Nekki_SF2_GUI_SimpleScroll__ClearData(pNVar2,(MethodInfo *)0x0),
     GHAAKPDHIJJ != (System_Collections_Generic_List_GEKCMGLDMEE__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,
               Method_System_Collections_Generic_List<GEKCMGLDMEE>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_MoveNext__
                             ), DKMMBMBMJBO = local_70.fields._current, bVar1) {
      pUVar4 = (__this->fields)._sliderItemPrefab;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pUVar4 = (UnityEngine_GameObject_o *)
               UnityEngine_Object__Instantiate<object>
                         ((Il2CppObject *)pUVar4,Method_UnityEngine_Object_Instantiate<GameObject>__
                         );
      if (pUVar4 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (pUVar4,Method_UnityEngine_GameObject_GetComponent<BattleRaidCell>__);
      if (__this_00 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Dialogs_Raids_Clans_BattleRaidCell__Init
                (__this_00,(GEKCMGLDMEE_o *)DKMMBMBMJBO,(__this->fields)._scroll,(MethodInfo *)0x0);
      pNVar2 = (__this->fields)._scroll;
      if (pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_SimpleScroll__AddItem
                (pNVar2,(Nekki_SF2_GUI_BaseScrollItem_o *)__this_00,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,Method_System_Collections_Generic_List_Enumerator<GEKCMGLDMEE>_Dispose__);
    pNVar2 = (__this->fields)._scroll;
    if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
      Nekki_SF2_GUI_SimpleScroll__RollItemsSiblingOrder(pNVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

