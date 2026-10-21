// HintButton$$get_IsHintsPressed @ RVA 0x2FF1184

bool HintButton__get_IsHintsPressed(HintButton_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  Nekki_SF2_GUI_Common_MenuControls_o *pNVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  System_Collections_Generic_List_Enumerator_T__o local_40;
  
                    /* catch() { ... } // from try @ 030f0ff4 with catch @ 030f1198 */
                    /* catch() { ... } // from try @ 030f1090 with catch @ 030f119c */
  if ((DAT_04565a70 & 1) == 0) {
                    /* catch() { ... } // from try @ 030f108c with catch @ 030f11a0 */
                    /* catch() { ... } // from try @ 030f1088 with catch @ 030f11a4 */
                    /* catch() { ... } // from try @ 030f1038 with catch @ 030f11a8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
                    /* try { // try from 030f11c0 to 031f11d7 has its CatchHandler @ 030f1200 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    DAT_04565a70 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 030f11d8 to 031f11eb has its CatchHandler @ 030f0e34 */
  local_40.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_40.fields._index = 0;
  local_40.fields._version = 0;
  local_40.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).EKJNLACDGKC;
  if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 030f11ec to 031f11fb has its CatchHandler @ 030f1200 */
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
      if (!bVar2) goto LAB_030f1250;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
                    /* try { // try from 030f12a4 to 031f12b3 has its CatchHandler @ 030f12b4 */
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* catch() { ... } // from try @ 030f1224 with catch @ 030f12b4
                       catch() { ... } // from try @ 030f12a4 with catch @ 030f12b4 */
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
                    /* try { // try from 030f12b8 to 031f12bb has its CatchHandler @ 030f12c4 */
    } while (!bVar2);
LAB_030f12bc:
                    /* try { // try from 030f12bc to 031f12c7 has its CatchHandler @ 030f0e34 */
                    /* catch() { ... } // from try @ 030f1204 with catch @ 030f12c4
                       catch() { ... } // from try @ 030f12b8 with catch @ 030f12c4 */
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = true;
  }
  else {
                    /* catch() { ... } // from try @ 030f11c0 with catch @ 030f1200
                       catch() { ... } // from try @ 030f11ec with catch @ 030f1200 */
                    /* try { // try from 030f1204 to 031f1207 has its CatchHandler @ 030f12c4 */
                    /* try { // try from 030f1208 to 031f1223 has its CatchHandler @ 030f0e34 */
    System_Collections_Generic_List<Int32Enum>__GetEnumerator
              (&local_58,__this_00,
               Method_System_Collections_Generic_List<FBBNEILNOKK>_GetEnumerator__);
    local_40.fields._index = local_58.fields._index;
    local_40.fields._version = local_58.fields._version;
                    /* catch() { ... } // from try @ 030f0f70 with catch @ 030f120c */
    local_40.fields._list = local_58.fields._list;
    local_40.fields._current = local_58.fields._current;
    do {
                    /* try { // try from 030f1224 to 031f123b has its CatchHandler @ 030f12b4 */
      bVar2 = System_Collections_Generic_List_Enumerator<Int32Enum>__MoveNext
                        (&local_40,
                         Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_MoveNext__);
      if (!bVar2) goto LAB_030f12bc;
      iVar1 = (int32_t)local_40.fields._current;
      pNVar3 = Nekki_SF2_GUI_Common_MenuControls__get_Current((MethodInfo *)0x0);
      if (pNVar3 == (Nekki_SF2_GUI_Common_MenuControls_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 030f123c to 031f12a3 has its CatchHandler @ 030f0e34 */
      bVar2 = Nekki_SF2_GUI_Common_MenuControls__IsKeyDown
                        (pNVar3,iVar1,(__this->fields)._TrackingDeviceID,(MethodInfo *)0x0);
    } while (bVar2);
LAB_030f1250:
    System_Collections_Generic_List_Enumerator<Int32Enum>__Dispose
              (&local_40,Method_System_Collections_Generic_List_Enumerator<FBBNEILNOKK>_Dispose__);
    bVar2 = false;
  }
  return bVar2;
}

