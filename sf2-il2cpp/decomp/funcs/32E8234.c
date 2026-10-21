// MEJIKMPNBNL$$KKPHCCBPIMN @ RVA 0x32E8234

OOMHDDBCBJP_o *
MEJIKMPNBNL__KKPHCCBPIMN(MEJIKMPNBNL_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_00;
  System_String_o *message;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_04567621 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_492);
    FUN_01bab630(&StringLiteral_5959);
    DAT_04567621 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).BDCBJJGNPMC;
  if (__this_00 != (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      pIVar1 = local_58.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 033e835c to 034e8363 has its CatchHandler @ 033e84a0 */
        message = System_String__Concat
                            (StringLiteral_5959,KGLJICLJHEL,StringLiteral_492,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
                    /* try { // try from 033e8378 to 034e837f has its CatchHandler @ 033e848c */
        UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
        return (OOMHDDBCBJP_o *)0x0;
      }
      if ((OOMHDDBCBJP_o *)local_58.fields._current == (OOMHDDBCBJP_o *)0x0) break;
      bVar2 = System_String__op_Equality
                        (((OOMHDDBCBJP_Fields *)((long)local_58.fields._current + 0x10))->
                         DEKCPPOJFEH,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 033e838c to 034e83ab has its CatchHandler @ 033e84a4 */
        return (OOMHDDBCBJP_o *)pIVar1;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

