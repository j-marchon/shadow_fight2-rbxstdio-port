// HintButton$$get_IsHintsReleased @ RVA 0x2FF2B40

bool HintButton__get_IsHintsReleased(HintButton_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
  if ((DAT_04565a7b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    DAT_04565a7b = 1;
    method = extraout_x1;
  }
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  if ((__this->fields)._IsShortcut == false) {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f2c0c;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
    } while (bVar2);
LAB_030f2c78:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = false;
  }
  else {
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f2c78;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyUp
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
    } while (!bVar2);
LAB_030f2c0c:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = true;
  }
  return bVar2;
}

