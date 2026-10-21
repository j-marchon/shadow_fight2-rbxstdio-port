// FIKENOMMMBH$$PKMMPNIBFOI @ RVA 0x34E3274

bool FIKENOMMMBH__PKMMPNIBFOI(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  bool bVar3;
  PJKHAJKEHEL_o *pPVar4;
  System_Collections_Generic_List_object__o *__this;
  JMDPBFOCHHP_o *pJVar5;
  JMDPBFOCHHP_EJICJNOEGGE_o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456874c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
                    /* try { // try from 035e32a4 to 036e32ab has its CatchHandler @ 035e3310 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
                    /* try { // try from 035e32b4 to 036e32bb has its CatchHandler @ 035e330c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
                    /* try { // try from 035e32bc to 036e3327 has its CatchHandler @ 035e320c */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456874c = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pPVar4 = MGNPHCAAEIO__MGLPJIGMCHH((MethodInfo *)0x0);
  if (pPVar4 != (PJKHAJKEHEL_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e32b4 with catch @ 035e330c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035e32a4 with catch @ 035e3310
                        */
    __this = (System_Collections_Generic_List_object__o *)
             (*(pPVar4->klass->vtable)._5_ACBMLHJIFMD.methodPtr)
                       (pPVar4,(pPVar4->klass->vtable)._5_ACBMLHJIFMD.method);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 035e3328 to 036e332b has its CatchHandler @ 035e3354 */
                    /* try { // try from 035e332c to 036e3363 has its CatchHandler @ 035e320c */
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_68,__this,
                 Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
      local_50.fields._index = local_68.fields._index;
      local_50.fields._version = local_68.fields._version;
      local_50.fields._list = local_68.fields._list;
                    /* catch() { ... } // from try @ 035e3328 with catch @ 035e3354 */
      local_50.fields._current = local_68.fields._current;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__
                          );
        pIVar1 = local_50.fields._current;
                    /* try { // try from 035e3364 to 036e336b has its CatchHandler @ 035e3380 */
        if (!bVar2) break;
                    /* try { // try from 035e336c to 036e3377 has its CatchHandler @ 035e320c */
                    /* try { // try from 035e3378 to 036e337f has its CatchHandler @ 035e3380 */
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035e3364 with catch @ 035e3380
                       catch(type#2 @ 00000000) { ... } // from try @ 035e3378 with catch @ 035e3380
                        */
                    /* try { // try from 035e3384 to 036e348f has its CatchHandler @ 035e3384
                       catch() { ... } // from try @ 035e3384 with catch @ 035e3384
                       catch() { ... } // from try @ 035e34cc with catch @ 035e3384
                       catch() { ... } // from try @ 035e35f4 with catch @ 035e3384
                       catch() { ... } // from try @ 035e3624 with catch @ 035e3384 */
        pJVar5 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
        if (pJVar5 == (JMDPBFOCHHP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        __this_00 = (pJVar5->fields)._LEIIIBPIJGJ_k__BackingField;
        if (__this_00 == (JMDPBFOCHHP_EJICJNOEGGE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar3 = JMDPBFOCHHP_EJICJNOEGGE__LLDDCNHNPIA(__this_00,pIVar1[1].monitor,(MethodInfo *)0x0);
      } while (bVar3);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__)
      ;
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

