// Nekki.SF2.GUI.Profile.TrickSubItem$$IEFEHKIGBFG @ RVA 0x31A59C0

void Nekki_SF2_GUI_Profile_TrickSubItem__IEFEHKIGBFG
               (Nekki_SF2_GUI_Profile_TrickSubItem_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_KeyIcon__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04566b0b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KeyIcon>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyIcon>_GetEnumerator__);
    DAT_04566b0b = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).CHKIKLICNBL;
  if (pSVar2 != (System_Collections_Generic_List_KeyIcon__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<KeyIcon>_GetEnumerator__);
                    /* try { // try from 032a5a5c to 033a5a63 has its CatchHandler @ 032a5cf0 */
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<KeyIcon>_MoveNext__)
          , bVar1) {
      if ((UnityEngine_Component_o *)local_38.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)local_38.fields._current,(MethodInfo *)0x0
                              );
                    /* try { // try from 032a5a78 to 033a5a7b has its CatchHandler @ 032a5cec */
      Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    }
                    /* try { // try from 032a5a8c to 033a5a97 has its CatchHandler @ 032a5c7c */
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<KeyIcon>_Dispose__);
    pSVar2 = (__this->fields).CHKIKLICNBL;
    if (pSVar2 != (System_Collections_Generic_List_KeyIcon__o *)0x0) {
                    /* try { // try from 032a5a98 to 033a5b37 has its CatchHandler @ 032a4ea8 */
      length = (pSVar2->fields)._size;
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

