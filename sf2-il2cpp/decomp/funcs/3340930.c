// AFFHKININGD$$OKMNIODKDBA @ RVA 0x3340930

System_String_o * AFFHKININGD__OKMNIODKDBA(AFFHKININGD_o *__this,MethodInfo *method)

{
  Il2CppObject *GOAHBPBJCKC;
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567999 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    DAT_04567999 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = AFFHKININGD__HKNMJCKPHHC(__this,method);
  if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034409a0 to 035409a7 has its CatchHandler @ 03440ab0 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
  do {
    do {
                    /* try { // try from 034409c4 to 035409cb has its CatchHandler @ 03440aa0 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
      GOAHBPBJCKC = local_48.fields._current;
      if (!bVar1) {
        CJNHFNHJHPE = (System_String_o *)0x0;
        goto LAB_03440a0c;
      }
      if ((AJNNHGGLGIF_o *)local_48.fields._current == (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
                    /* try { // try from 034409d8 to 035409e7 has its CatchHandler @ 03440a9c */
      bVar1 = AJNNHGGLGIF__BNNIDPDMOIL((AJNNHGGLGIF_o *)local_48.fields._current,(MethodInfo *)0x0);
    } while (!bVar1);
                    /* try { // try from 034409f0 to 035409fb has its CatchHandler @ 03440a98 */
    CJNHFNHJHPE = AFFHKININGD__OKMNIODKDBA(__this,(AJNNHGGLGIF_o *)GOAHBPBJCKC,in_x2);
                    /* try { // try from 034409fc to 03540a83 has its CatchHandler @ 03440868 */
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
  } while (bVar1);
LAB_03440a0c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
  return CJNHFNHJHPE;
}

