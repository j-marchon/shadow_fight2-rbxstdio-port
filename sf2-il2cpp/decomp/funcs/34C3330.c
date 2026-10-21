// KAHMAJKJMBK$$LDAMCMHMNOA @ RVA 0x34C3330

void KAHMAJKJMBK__LDAMCMHMNOA
               (KAHMAJKJMBK_o *__this,System_Collections_Generic_List_JCHNBADDBGO__o *FAAMECCDGJM,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456861a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
    __this = (KAHMAJKJMBK_o *)FUN_01bab630(&MJACKBKADMN_TypeInfo);
    DAT_0456861a = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (FAAMECCDGJM != (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)FAAMECCDGJM,
               Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
                    /* try { // try from 035c33d4 to 036c33fb has its CatchHandler @ 035c3574 */
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__
                          );
        __this_00 = local_50.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
          return;
        }
      } while (((MJACKBKADMN_o *)local_50.fields._current == (MJACKBKADMN_o *)0x0) ||
              (iVar3 = AJNNHGGLGIF__NHGGBEACKBD
                                 ((AJNNHGGLGIF_o *)local_50.fields._current,(MethodInfo *)0x0),
              iVar3 != 2));
      bVar1 = (MJACKBKADMN_TypeInfo->_2).naturalAligment;
                    /* try { // try from 035c3430 to 036c345b has its CatchHandler @ 035c3570 */
      if (((((MJACKBKADMN_c *)__this_00->klass)->_2).naturalAligment < bVar1) ||
         ((((MJACKBKADMN_c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)MJACKBKADMN_TypeInfo)) break;
      MJACKBKADMN__KFPIKBGFKBC((MJACKBKADMN_o *)__this_00,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01babc64(__this_00);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

