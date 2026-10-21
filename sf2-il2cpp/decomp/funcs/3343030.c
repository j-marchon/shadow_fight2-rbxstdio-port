// AFFHKININGD$$HBJFJLBICEI @ RVA 0x3343030

System_String_o *
AFFHKININGD__HBJFJLBICEI(AFFHKININGD_o *__this,System_String_o *EBOHIPKPFDJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_JCHNBADDBGO__o *__this_00;
  char *pcVar3;
  System_String_o *pSVar4;
  AJNNHGGLGIF_c *pAVar5;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
                    /* try { // try from 03443038 to 03543043 has its CatchHandler @ 034430dc */
                    /* try { // try from 03443044 to 035430bf has its CatchHandler @ 03442e60 */
  if ((DAT_045679a5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045679a5 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).MIHBDEKEPEB;
  if (__this_00 == (System_Collections_Generic_List_JCHNBADDBGO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 034430c0 to 035430c3 has its CatchHandler @ 034430e4 */
                    /* try { // try from 034430c4 to 035430c7 has its CatchHandler @ 034430e0 */
                    /* try { // try from 034430c8 to 035430cb has its CatchHandler @ 03442e60 */
                    /* try { // try from 034430cc to 035430cf has its CatchHandler @ 034430d8 */
                    /* try { // try from 034430d0 to 03543107 has its CatchHandler @ 03442e60 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<JCHNBADDBGO>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034430cc with catch @ 034430d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443038 with catch @ 034430dc
                        */
  local_50.fields._list = local_68.fields._list;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034430c4 with catch @ 034430e0
                        */
  local_50.fields._current = local_68.fields._current;
  while( true ) {
    do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034430c0 with catch @ 034430e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03443028 with catch @ 034430e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03442ff0 with catch @ 034430ec
                        */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_MoveNext__);
      pIVar1 = local_50.fields._current;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03442f94 with catch @ 034430f0
                        */
      if (!bVar2) {
                    /* try { // try from 03443150 to 03543177 has its CatchHandler @ 0344318c */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__);
        return StringLiteral_1;
      }
      if ((AJNNHGGLGIF_o *)local_50.fields._current == (AJNNHGGLGIF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = AJNNHGGLGIF__BNNIDPDMOIL((AJNNHGGLGIF_o *)local_50.fields._current,(MethodInfo *)0x0);
                    /* try { // try from 03443108 to 0354310b has its CatchHandler @ 03443118 */
    } while ((!bVar2) || (*(char *)&((AJNNHGGLGIF_o *)((long)pIVar1 + 0x58))->monitor != '\0'));
    pAVar5 = ((AJNNHGGLGIF_o *)((long)pIVar1 + 0x58))->klass;
                    /* catch() { ... } // from try @ 03443108 with catch @ 03443118 */
    if (pAVar5 == (AJNNHGGLGIF_c *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pcVar3 = (pAVar5->_1).namespaze;
    if (pcVar3 == (char *)0x0) break;
    bVar2 = System_String__op_Equality
                      (*(System_String_o **)(pcVar3 + 0x30),EBOHIPKPFDJ,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar4 = (System_String_o *)(pAVar5->_1).name;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<JCHNBADDBGO>_Dispose__)
      ;
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03443178 to 03543183 has its CatchHandler @ 03442e60 */
  FUN_01bab8c8();
}

