// AFFHKININGD$$IBMKPOJFGCD @ RVA 0x3340AAC

System_String_o * AFFHKININGD__IBMKPOJFGCD(AFFHKININGD_o *__this,MethodInfo *method)

{
  Il2CppObject *GOAHBPBJCKC;
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_String_o *CJNHFNHJHPE;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03440a84 with catch @ 03440aac
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034409a0 with catch @ 03440ab0
                        */
                    /* try { // try from 03440acc to 03540acf has its CatchHandler @ 03440b00 */
                    /* try { // try from 03440ad0 to 03540b0f has its CatchHandler @ 03440868 */
  if ((DAT_0456799e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
                    /* catch() { ... } // from try @ 03440acc with catch @ 03440b00 */
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_15810);
                    /* try { // try from 03440b10 to 03540b17 has its CatchHandler @ 03440b2c */
                    /* try { // try from 03440b18 to 03540b23 has its CatchHandler @ 03440868 */
    FUN_01bab630(&StringLiteral_22469);
    DAT_0456799e = 1;
    method = extraout_x1;
  }
                    /* try { // try from 03440b24 to 03540b2b has its CatchHandler @ 03440b2c */
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03440b10 with catch @ 03440b2c
                       catch(type#2 @ 00000000) { ... } // from try @ 03440b24 with catch @ 03440b2c
                        */
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = AFFHKININGD__HKNMJCKPHHC(__this,method);
  if (__this_00 == (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
  CJNHFNHJHPE = (System_String_o *)0x0;
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    GOAHBPBJCKC = local_70.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__)
      ;
      return CJNHFNHJHPE;
    }
    if ((AJNNHGGLGIF_o *)local_70.fields._current == (AJNNHGGLGIF_o *)0x0) break;
    bVar1 = AJNNHGGLGIF__BNNIDPDMOIL((AJNNHGGLGIF_o *)local_70.fields._current,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = AFFHKININGD__OKMNIODKDBA(__this,(AJNNHGGLGIF_o *)GOAHBPBJCKC,in_x2);
      bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(pSVar2,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = System_String__Concat
                           (StringLiteral_15810,pSVar2,StringLiteral_15810,(MethodInfo *)0x0);
        bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(CJNHFNHJHPE,(MethodInfo *)0x0);
        if (!bVar1) {
          CJNHFNHJHPE = System_String__Concat(CJNHFNHJHPE,StringLiteral_22469,(MethodInfo *)0x0);
        }
        in_x2 = (MethodInfo *)0x0;
        CJNHFNHJHPE = System_String__Concat(CJNHFNHJHPE,pSVar2,(MethodInfo *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

