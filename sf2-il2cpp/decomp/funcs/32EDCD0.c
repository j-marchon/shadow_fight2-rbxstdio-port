// OANGEOLKMJG$$DGCODECJJCC @ RVA 0x32EDCD0

bool OANGEOLKMJG__DGCODECJJCC(OANGEOLKMJG_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  byte bVar3;
  System_Collections_Generic_List_EAAHMDAMHNI__o *__this_00;
  MethodInfo *extraout_x1;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033edce0 to 034edce7 has its CatchHandler @ 033ee00c */
  if ((DAT_04567659 & 1) == 0) {
                    /* try { // try from 033edcf0 to 034edcf7 has its CatchHandler @ 033edff0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
                    /* try { // try from 033edcf8 to 034edcff has its CatchHandler @ 033ee008 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
                    /* try { // try from 033edd04 to 034edd17 has its CatchHandler @ 033edfc8 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
    DAT_04567659 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
                    /* try { // try from 033edd28 to 034edd2f has its CatchHandler @ 033edfcc */
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).KDIMDBHMBEM;
  if (__this_00 == (System_Collections_Generic_List_EAAHMDAMHNI__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
                    /* try { // try from 033edd38 to 034edd3f has its CatchHandler @ 033edfc0 */
                    /* try { // try from 033edd40 to 034edd4f has its CatchHandler @ 033edfbc */
                    /* try { // try from 033edd50 to 034edd57 has its CatchHandler @ 033edfd0 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EAAHMDAMHNI>_GetEnumerator__);
  do {
                    /* try { // try from 033edd60 to 034edd6f has its CatchHandler @ 033edfb8 */
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_MoveNext__);
    pIVar1 = local_38.fields._current;
    if (!bVar2) {
      iVar4 = 7;
      goto LAB_033edda0;
    }
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 033edd74 to 034edd87 has its CatchHandler @ 033edfb4 */
    bVar3 = (*(local_38.fields._current)->klass->vtable[4].methodPtr)
                      (local_38.fields._current,(local_38.fields._current)->klass->vtable[4].method)
    ;
  } while (((bVar3 ^ *(char *)&pIVar1[1].monitor != '\0') & 1) != 0);
  iVar4 = 6;
                    /* try { // try from 033edd98 to 034edd9f has its CatchHandler @ 033edff8 */
LAB_033edda0:
                    /* try { // try from 033edda8 to 034eddaf has its CatchHandler @ 033ee004 */
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<EAAHMDAMHNI>_Dispose__);
                    /* try { // try from 033eddb0 to 034eddcf has its CatchHandler @ 033ee018 */
  return iVar4 != 6;
}

