// PJKHAJKEHEL$$LEEIMGDJDAG @ RVA 0x3042C20

bool PJKHAJKEHEL__LEEIMGDJDAG(PJKHAJKEHEL_o *__this,System_String_o *CNIELFLIKJB,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_00;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565dcd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_04565dcd = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)
              (*(__this->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                        (__this,(__this->klass->vtable)._5_ACBMLHJIFMD.method);
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,__this_00,Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__
            );
  do {
                    /* try { // try from 03142cc0 to 03242ccf has its CatchHandler @ 03142cd0 */
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_03142cf8;
    }
                    /* catch() { ... } // from try @ 03142ba8 with catch @ 03142cd0
                       catch() { ... } // from try @ 03142cc0 with catch @ 03142cd0 */
                    /* try { // try from 03142cd4 to 03242cd7 has its CatchHandler @ 03142ce0 */
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03142cd8 to 03242ce3 has its CatchHandler @ 03142a10 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03142cd4 with catch @ 03142ce0
                        */
    bVar2 = System_String__op_Equality
                      (local_48.fields._current[1].monitor,CNIELFLIKJB,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_03142cf8:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
  return bVar1 && iVar3 == 4;
}

