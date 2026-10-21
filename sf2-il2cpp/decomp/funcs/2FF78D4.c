// JMDPBFOCHHP$$KJJAGIJIFOL @ RVA 0x2FF78D4

void JMDPBFOCHHP__KJJAGIJIFOL
               (JMDPBFOCHHP_o *__this,System_Byte_array *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  AFDHGAMMHEC_o *__this_00;
  MethodInfo *extraout_x0;
  System_Collections_Generic_List_NEFKBLNBOAB__o *__this_01;
  ulong uVar2;
  MethodInfo *method_00;
  System_String_o *AAIHDEKMIJG;
  System_Byte_array *extraout_x1;
  System_Byte_array *method_01;
  MethodInfo *method_02;
  System_Action_o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  method_01 = IMMNELPBGIF;
  if ((DAT_04565ab9 & 1) == 0) {
    FUN_01bab630(&AFDHGAMMHEC_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_Dispose__);
                    /* try { // try from 030f7920 to 031f793b has its CatchHandler @ 030f7eb4 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NEFKBLNBOAB>_GetEnumerator__);
    DAT_04565ab9 = 1;
    method_01 = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  JMDPBFOCHHP__CECFFDLGAOH(__this,(MethodInfo *)method_01);
  __this_00 = (AFDHGAMMHEC_o *)thunk_FUN_01bda818(AFDHGAMMHEC_TypeInfo);
                    /* try { // try from 030f7960 to 031f7963 has its CatchHandler @ 030f7e8c */
  AFDHGAMMHEC___ctor(__this_00,IMMNELPBGIF,(MethodInfo *)0x0);
  method_00 = extraout_x0;
  if (__this_00 != (AFDHGAMMHEC_o *)0x0) {
    __this_01 = (__this->fields).NDPALCPICPD;
    if (__this_01 == (System_Collections_Generic_List_NEFKBLNBOAB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 030f7a48 to 031f7a5b has its CatchHandler @ 030f7de8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 030f7978 to 031f7983 has its CatchHandler @ 030f7e88 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<NEFKBLNBOAB>_GetEnumerator__);
    do {
                    /* try { // try from 030f79a4 to 031f79cb has its CatchHandler @ 030f7e00 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_MoveNext__);
      if (!bVar1) {
        bVar1 = true;
        goto LAB_030f79d8;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      uVar2 = (*(local_48.fields._current)->klass->vtable[4].methodPtr)
                        (local_48.fields._current,__this,__this_00,
                         (local_48.fields._current)->klass->vtable[4].method);
    } while ((uVar2 & 1) != 0);
    bVar1 = false;
                    /* try { // try from 030f79d0 to 031f79df has its CatchHandler @ 030f7e84 */
LAB_030f79d8:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<NEFKBLNBOAB>_Dispose__);
    method_00 = (MethodInfo *)
                (*(__this_00->klass->vtable)._6_Dispose.methodPtr)
                          (__this_00,(__this_00->klass->vtable)._6_Dispose.method);
                    /* try { // try from 030f79f4 to 031f79fb has its CatchHandler @ 030f7ea8 */
    if (bVar1) {
      pSVar3 = (__this->fields).MPJHFDGCCKC;
      goto joined_r0x030f7a08;
    }
  }
  pSVar3 = (__this->fields).FHJBJEIIMOB;
joined_r0x030f7a08:
  if (pSVar3 != (System_Action_o *)0x0) {
    method_00 = (MethodInfo *)
                (*(code *)(pSVar3->fields).super.super.invoke_impl)
                          ((pSVar3->fields).super.super.method_code,
                           (pSVar3->fields).super.super.method);
  }
  AAIHDEKMIJG = JMDPBFOCHHP__EMHGIBKDBOG(method_00);
  NEHNBJKKABI__MGLIGNDGBCN(AAIHDEKMIJG,(MethodInfo *)0x0);
  JMDPBFOCHHP__OPKHHDFGOAB(__this,method_02);
  return;
}

