// MKFPGMBBGIA$$ALMOJIILOBH @ RVA 0x31D7128

void MKFPGMBBGIA__ALMOJIILOBH
               (MKFPGMBBGIA_o *__this,System_String_o *KGLJICLJHEL,
               System_Text_RegularExpressions_Regex_o *OIEBACABHKK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_string__o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  System_String_o *pSVar2;
  System_Text_RegularExpressions_Regex_o *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  int32_t local_54;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  method_00 = OIEBACABHKK;
  if ((DAT_04566cf0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_197);
    DAT_04566cf0 = 1;
  }
                    /* try { // try from 032d7198 to 033d719f has its CatchHandler @ 032d71c0 */
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
                    /* try { // try from 032d71a0 to 033d71a7 has its CatchHandler @ 032d71cc */
  local_50.fields._current = (Il2CppObject *)0x0;
  local_54 = 0;
                    /* try { // try from 032d71a8 to 033d71ab has its CatchHandler @ 032d6e9c */
  MKFPGMBBGIA__KLOKPLHMGMC(__this,KGLJICLJHEL,(MethodInfo *)method_00);
                    /* try { // try from 032d71ac to 033d71af has its CatchHandler @ 032d71b8 */
  __this_00 = (__this->fields).PLACDMCGLHA;
                    /* try { // try from 032d71b0 to 033d71df has its CatchHandler @ 032d6e9c */
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d71ac with catch @ 032d71b8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d70e0 with catch @ 032d71bc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d7198 with catch @ 032d71c0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d7028 with catch @ 032d71c4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d6fcc with catch @ 032d71c8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d71a0 with catch @ 032d71cc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032d705c with catch @ 032d71d0
                        */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_70,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_50.fields._index = local_70.fields._index;
    local_50.fields._version = local_70.fields._version;
                    /* try { // try from 032d71e0 to 033d71e3 has its CatchHandler @ 032d71f4 */
    local_50.fields._list = local_70.fields._list;
    local_50.fields._current = local_70.fields._current;
    while( true ) {
                    /* catch() { ... } // from try @ 032d71e0 with catch @ 032d71f4 */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
                    /* try { // try from 032d71fc to 033d7263 has its CatchHandler @ 032d7278 */
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
                    /* try { // try from 032d7264 to 033d726f has its CatchHandler @ 032d6e9c */
        return;
      }
      if (OIEBACABHKK == (System_Text_RegularExpressions_Regex_o *)0x0) break;
      __this_01 = System_Text_RegularExpressions_Regex__Matches
                            (OIEBACABHKK,(System_String_o *)local_50.fields._current,
                             (MethodInfo *)0x0);
      if (__this_01 == (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      local_54 = System_Text_RegularExpressions_MatchCollection__get_Count
                           (__this_01,(MethodInfo *)0x0);
      pSVar2 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)0x0;
      pSVar2 = System_String__Concat(StringLiteral_197,pSVar2,(MethodInfo *)0x0);
      MKFPGMBBGIA__GMBNKPEIIEC(__this,pSVar2,method_01);
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 032d7270 to 033d7277 has its CatchHandler @ 032d7278 */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032d71fc with catch @ 032d7278
                       catch(type#2 @ 00000000) { ... } // from try @ 032d7270 with catch @ 032d7278
                        */
  FUN_01bab8c8();
}

