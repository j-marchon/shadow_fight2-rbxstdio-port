// AFFHKININGD$$MMIMAJHGCFC @ RVA 0x334294C

bool AFFHKININGD__MMIMAJHGCFC(AFFHKININGD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEJGMGHPING__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 03442964 to 0354296f has its CatchHandler @ 03442a84 */
  if ((DAT_0456799b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_Dispose__);
                    /* try { // try from 03442974 to 0354297f has its CatchHandler @ 03442a6c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_MoveNext__);
                    /* try { // try from 03442980 to 03542a07 has its CatchHandler @ 03441efc */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEJGMGHPING>_GetEnumerator__);
    DAT_0456799b = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KPFGHBEKJIM;
  if (__this_00 == (System_Collections_Generic_List_IEJGMGHPING__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03442a24 to 03542a27 has its CatchHandler @ 03442b44 */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IEJGMGHPING>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_MoveNext__);
    if (!bVar1) {
      iVar2 = 5;
      goto LAB_03442a00;
    }
    bVar1 = AFFHKININGD__JOLFKDDINGF(__this,(IEJGMGHPING_o *)local_38.fields._current,in_x2);
  } while (bVar1);
  iVar2 = 4;
LAB_03442a00:
                    /* try { // try from 03442a08 to 03542a0b has its CatchHandler @ 03442c1c */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<IEJGMGHPING>_Dispose__);
                    /* try { // try from 03442a0c to 03542a0f has its CatchHandler @ 03442c18 */
                    /* try { // try from 03442a10 to 03542a13 has its CatchHandler @ 03442c14 */
                    /* try { // try from 03442a14 to 03542a17 has its CatchHandler @ 03442c0c */
                    /* try { // try from 03442a18 to 03542a1b has its CatchHandler @ 03442c08 */
                    /* try { // try from 03442a1c to 03542a1f has its CatchHandler @ 03442b50 */
                    /* try { // try from 03442a20 to 03542a23 has its CatchHandler @ 03442b4c */
  return iVar2 != 4;
}

