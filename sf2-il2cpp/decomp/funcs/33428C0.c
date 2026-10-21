// AFFHKININGD$$PBKNABJGEEK @ RVA 0x33428C0

void AFFHKININGD__PBKNABJGEEK(AFFHKININGD_o *__this,MethodInfo *method)

{
  int32_t length;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  
                    /* try { // try from 034428c8 to 035428ef has its CatchHandler @ 03442b58 */
  if ((DAT_0456799a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Clear__);
    DAT_0456799a = 1;
  }
  __this_00 = (__this->fields).KFHLHCHCMPM;
  if (__this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
    length = (__this_00->fields)._size;
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(__this_00->fields)._items,0,length,(MethodInfo *)0x0);
                    /* try { // try from 03442924 to 0354294b has its CatchHandler @ 03442b54 */
      __this_00 = (__this->fields).KFHLHCHCMPM;
      if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) goto LAB_03442948;
    }
    System_Collections_Generic_List<object>__AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).LJNCACBBIBD,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_AddRange__);
    return;
  }
LAB_03442948:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

