// MMDDDDFHOLG$$IKDPMKOIDMP @ RVA 0x3360B20

void MMDDDDFHOLG__IKDPMKOIDMP
               (MMDDDDFHOLG_o *__this,OLKKAIFGGAK_o *IGMNBGIAGGK,NJPBBPOABKP_o *AEDJMMHJIEH,
               bool JDALPBMBDDO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  MethodInfo *in_x5;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567a83 & 1) == 0) {
                    /* try { // try from 03460b50 to 03560b77 has its CatchHandler @ 03460e34 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    DAT_04567a83 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03460bac to 03560bd7 has its CatchHandler @ 03460e30 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_58,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) goto LAB_03460bf8;
    if ((EHCCNKFIPPA_o *)local_58.fields._current == (EHCCNKFIPPA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((EHCCNKFIPPA_Fields *)((long)local_58.fields._current + 0x10))->
           _HKPEJNKNEGG_k__BackingField != IGMNBGIAGGK);
  MMDDDDFHOLG__IKDPMKOIDMP
            (__this,(EHCCNKFIPPA_o *)local_58.fields._current,IGMNBGIAGGK,AEDJMMHJIEH,JDALPBMBDDO,
             in_x5);
LAB_03460bf8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_58,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
                    /* try { // try from 03460c08 to 03560c13 has its CatchHandler @ 03460e24 */
  return;
}

