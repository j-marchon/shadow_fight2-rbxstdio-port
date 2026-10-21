// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoScroll$$FBFDADNNGKI @ RVA 0x3235268

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll__FBFDADNNGKI
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_ControlsInfoCategoryTab__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456701d & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_GetEnumerator__);
    DAT_0456701d = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).HCJLLBHBLBE;
  if (pSVar2 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
                    /* try { // try from 033352f0 to 03435317 has its CatchHandler @ 033354c4 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ControlsInfoCategoryTab>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<ControlsInfoCategoryTab>_Dispose__)
    ;
    pSVar2 = (__this->fields).HCJLLBHBLBE;
    if (pSVar2 != (System_Collections_Generic_List_ControlsInfoCategoryTab__o *)0x0) {
      length = (pSVar2->fields)._size;
                    /* try { // try from 0333534c to 03435377 has its CatchHandler @ 033354c0 */
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

