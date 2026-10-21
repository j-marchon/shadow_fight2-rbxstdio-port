// ECENNHNBAME$$FINLPLHJDHN @ RVA 0x3014DE4

/* WARNING: Removing unreachable block (ram,0x03114f80) */

bool ECENNHNBAME__FINLPLHJDHN
               (ECENNHNBAME_o *__this,System_Collections_Generic_List_string__o *EOLHDEHOFHL,
               MethodInfo *method)

{
  Il2CppObject *a;
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  byte bVar2;
  uint uVar3;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 03114dfc to 03214dff has its CatchHandler @ 03114edc */
  if ((DAT_04565bcc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    DAT_04565bcc = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
                    /* try { // try from 03114e50 to 03214e77 has its CatchHandler @ 03114efc */
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._AHFPJJKEANI_k__BackingField;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03114e78 to 03214e8f has its CatchHandler @ 03114a8c */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_98,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<string>_GetEnumerator__);
  bVar2 = 0;
  local_60.fields._index = local_98.fields._index;
  local_60.fields._version = local_98.fields._version;
  local_60.fields._list = local_98.fields._list;
                    /* try { // try from 03114e90 to 03214ea7 has its CatchHandler @ 03114eec */
  local_60.fields._current = local_98.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    a = local_60.fields._current;
    if (!bVar1) {
      uVar3 = 7;
      break;
    }
    if (EOLHDEHOFHL == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03114ea8 to 03214ec3 has its CatchHandler @ 03114a8c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)EOLHDEHOFHL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
                    /* try { // try from 03114ec4 to 03214ed3 has its CatchHandler @ 03114eec */
    local_80.fields._list = local_98.fields._list;
    local_80.fields._current = local_98.fields._current;
    do {
                    /* try { // try from 03114ed4 to 03214ef3 has its CatchHandler @ 03114efc */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
      if (!bVar1) {
        uVar3 = 2;
        goto LAB_03114f08;
      }
                    /* catch() { ... } // from try @ 03114dfc with catch @ 03114edc */
      bVar1 = System_String__op_Equality
                        ((System_String_o *)a,(System_String_o *)local_80.fields._current,
                         (MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03114e90 with catch @ 03114eec
                       catch() { ... } // from try @ 03114ec4 with catch @ 03114eec */
    } while (!bVar1);
                    /* try { // try from 03114ef4 to 03214eff has its CatchHandler @ 03114a8c */
    bVar2 = 1;
    uVar3 = 6;
                    /* catch() { ... } // from try @ 03114e50 with catch @ 03114efc
                       catch() { ... } // from try @ 03114ed4 with catch @ 03114efc */
LAB_03114f08:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  } while ((uVar3 | 2) == 2);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_60,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
  return (bool)(bVar2 & uVar3 == 6);
}

