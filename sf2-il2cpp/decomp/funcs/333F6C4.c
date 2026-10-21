// AFFHKININGD$$DGDKAHOOFNK @ RVA 0x333F6C4

int32_t AFFHKININGD__DGDKAHOOFNK
                  (AFFHKININGD_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  AJNNHGGLGIF_c *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567989 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
    DAT_04567989 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 0343f728 to 0353f85b has its CatchHandler @ 0343f728
                       catch() { ... } // from try @ 0343f728 with catch @ 0343f728
                       catch() { ... } // from try @ 0343f908 with catch @ 0343f728
                       catch() { ... } // from try @ 0343f98c with catch @ 0343f728
                       catch() { ... } // from try @ 0343f994 with catch @ 0343f728
                       catch() { ... } // from try @ 0343fa34 with catch @ 0343f728 */
  __this_00 = (__this->fields).MIHBDEKEPEB;
  if (__this_00 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
      pIVar1 = local_50.fields._current;
      if (!bVar2) {
        iVar3 = 0;
        goto LAB_0343f7d0;
      }
      if ((AJNNHGGLGIF_o *)local_50.fields._current == (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = AJNNHGGLGIF__BNNIDPDMOIL((AJNNHGGLGIF_o *)local_50.fields._current,(MethodInfo *)0x0);
    } while ((!bVar2) || (*(char *)&((AJNNHGGLGIF_o *)((long)pIVar1 + 0x58))->monitor != '\0'));
    __this_01 = ((AJNNHGGLGIF_o *)((long)pIVar1 + 0x58))->klass;
    if (__this_01 == (AJNNHGGLGIF_c *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar4 = (HOOAAGABMBL_o *)(__this_01->_1).namespaze;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((pHVar4->fields)._GMPAEDFIIHF_k__BackingField,EBOHIPKPFDJ,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = IGFGDDANEPE__LGIMDOAMCNG((IGFGDDANEPE_o *)__this_01,(MethodInfo *)0x0);
LAB_0343f7d0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
  return iVar3;
}

