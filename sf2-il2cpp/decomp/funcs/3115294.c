// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanTable$$SetChangableRole @ RVA 0x3115294

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable__SetChangableRole
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanTable_o *__this,bool IFHOOJNDIKL,
               int32_t BGAKDPJEAIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_IDGOGBNEGAM__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045665a7 & 1) == 0) {
                    /* try { // try from 032152c0 to 033152c7 has its CatchHandler @ 03215368 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
                    /* try { // try from 032152dc to 033152e7 has its CatchHandler @ 03215360 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
                    /* try { // try from 032152f0 to 033152f7 has its CatchHandler @ 0321535c */
    DAT_045665a7 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NMNKHAIGHDG;
                    /* try { // try from 03215304 to 0331530b has its CatchHandler @ 03215358 */
  if (__this_00 == (System_Collections_Generic_List_IDGOGBNEGAM__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0321530c to 0331534f has its CatchHandler @ 0321521c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IDGOGBNEGAM>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_MoveNext__);
                    /* try { // try from 03215350 to 03315353 has its CatchHandler @ 03215364 */
    if (!bVar2) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032153b8 with catch @ 032153d4
                       catch(type#2 @ 00000000) { ... } // from try @ 032153cc with catch @ 032153d4
                        */
                    /* try { // try from 032153d8 to 03315483 has its CatchHandler @ 032153d8
                       catch() { ... } // from try @ 032153d8 with catch @ 032153d8
                       catch() { ... } // from try @ 032154b4 with catch @ 032153d8
                       catch() { ... } // from try @ 032154fc with catch @ 032153d8
                       catch() { ... } // from try @ 03215524 with catch @ 032153d8
                       catch() { ... } // from try @ 03215564 with catch @ 032153d8 */
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IDGOGBNEGAM>_Dispose__)
      ;
      return;
    }
                    /* try { // try from 03215354 to 0331537f has its CatchHandler @ 0321521c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215304 with catch @ 03215358
                        */
    if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032152f0 with catch @ 0321535c
                        */
    iVar1 = *(int *)&local_60.fields._current[3].klass;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032152dc with catch @ 03215360
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03215350 with catch @ 03215364
                        */
    if (IFHOOJNDIKL) {
      if (local_60.fields._current == (Il2CppObject *)0x0) {
LAB_032153fc:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 03215380 to 03315383 has its CatchHandler @ 032153b0 */
                    /* try { // try from 03215384 to 033153b7 has its CatchHandler @ 0321521c */
      *(bool *)((long)&local_60.fields._current[4].klass + 1) =
           iVar1 != 4 && 0 < iVar1 - BGAKDPJEAIB;
      if (iVar1 - BGAKDPJEAIB < 2) goto LAB_032153b4;
      bVar2 = true;
    }
    else {
      if (local_60.fields._current == (Il2CppObject *)0x0) goto LAB_032153fc;
                    /* catch() { ... } // from try @ 03215380 with catch @ 032153b0 */
      *(undefined1 *)((long)&local_60.fields._current[4].klass + 1) = 0;
LAB_032153b4:
                    /* try { // try from 032153b8 to 033153bf has its CatchHandler @ 032153d4 */
      if (BGAKDPJEAIB == 1) {
        bVar2 = iVar1 != 1;
                    /* try { // try from 032153c0 to 033153cb has its CatchHandler @ 0321521c */
      }
      else {
        bVar2 = false;
      }
    }
                    /* try { // try from 032153cc to 033153d3 has its CatchHandler @ 032153d4 */
    *(bool *)&local_60.fields._current[4].klass = bVar2;
  } while( true );
}

