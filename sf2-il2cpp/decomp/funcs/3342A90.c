// AFFHKININGD$$CGEOMKBMHCF @ RVA 0x3342A90

void AFFHKININGD__CGEOMKBMHCF(AFFHKININGD_o *__this,PNEKMHMACLG_o *JMADECMMMIE,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *JMADECMMMIE_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_AJNNHGGLGIF__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
                    /* try { // try from 03442aa4 to 03542aa7 has its CatchHandler @ 03442ac8 */
  if ((DAT_0456799c & 1) == 0) {
    FUN_01bab630(&AGCDKMOOJGI_TypeInfo);
                    /* catch() { ... } // from try @ 03442aa4 with catch @ 03442ac8 */
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<AGCDKMOOJGI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
                    /* try { // try from 03442b08 to 03542b3b has its CatchHandler @ 03442e14 */
    FUN_01bab630(&PNEKMHMACLG_TypeInfo);
    DAT_0456799c = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((JMADECMMMIE != (PNEKMHMACLG_o *)0x0) &&
     (__this_00 = (JMADECMMMIE->fields).LJNCACBBIBD,
     __this_00 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0)) {
                    /* catch() { ... } // from try @ 03442a28 with catch @ 03442b3c
                       try { // try from 03442b3c to 03542b6f has its CatchHandler @ 03441efc */
                    /* catch() { ... } // from try @ 0344253c with catch @ 03442b40 */
                    /* catch() { ... } // from try @ 03442a24 with catch @ 03442b44 */
                    /* catch() { ... } // from try @ 034424e4 with catch @ 03442b48 */
                    /* catch() { ... } // from try @ 03442a20 with catch @ 03442b4c */
                    /* catch() { ... } // from try @ 03442a1c with catch @ 03442b50 */
                    /* catch() { ... } // from try @ 03442924 with catch @ 03442b54 */
                    /* catch() { ... } // from try @ 034428c8 with catch @ 03442b58 */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
                    /* try { // try from 03442b70 to 03542b73 has its CatchHandler @ 03442b8c */
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
      JMADECMMMIE_00 = local_60.fields._current;
      if (!bVar2) {
                    /* try { // try from 03442c40 to 03542c43 has its CatchHandler @ 03442c58 */
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
                    /* catch() { ... } // from try @ 03442c40 with catch @ 03442c58 */
        return;
      }
      if ((PNEKMHMACLG_o *)local_60.fields._current == (PNEKMHMACLG_o *)0x0) break;
                    /* catch() { ... } // from try @ 03442b70 with catch @ 03442b8c */
      iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)local_60.fields._current,(MethodInfo *)0x0);
      if (iVar3 == 0x15) {
        bVar1 = (AGCDKMOOJGI_TypeInfo->_2).naturalAligment;
        if (((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).naturalAligment < bVar1) ||
           ((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)AGCDKMOOJGI_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JMADECMMMIE_00);
        }
                    /* try { // try from 03442bcc to 03542bff has its CatchHandler @ 03442e14 */
        method = Method_DJNBJHPDKDP_OFNFOGHFDML<AGCDKMOOJGI>__;
        DJNBJHPDKDP__OFNFOGHFDML<object>
                  ((System_Collections_Generic_List_T__o *)(__this->fields).HFDOEONIBFA,
                   JMADECMMMIE_00,
                   (MethodInfo_1E833E4 *)Method_DJNBJHPDKDP_OFNFOGHFDML<AGCDKMOOJGI>__);
      }
      iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)JMADECMMMIE_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034422ec with catch @ 03442c00
                       try { // try from 03442c00 to 03542c3f has its CatchHandler @ 03441efc */
      if ((iVar3 == 0x16) ||
         (iVar3 = AJNNHGGLGIF__NHGGBEACKBD((AJNNHGGLGIF_o *)JMADECMMMIE_00,(MethodInfo *)0x0),
         iVar3 == 0x29)) {
                    /* catch() { ... } // from try @ 0344212c with catch @ 03442c04 */
                    /* catch() { ... } // from try @ 03442a18 with catch @ 03442c08 */
                    /* catch() { ... } // from try @ 03442a14 with catch @ 03442c0c */
                    /* catch() { ... } // from try @ 03442518 with catch @ 03442c10 */
        bVar1 = (PNEKMHMACLG_TypeInfo->_2).naturalAligment;
                    /* catch() { ... } // from try @ 03442a10 with catch @ 03442c14 */
                    /* catch() { ... } // from try @ 03442a0c with catch @ 03442c18 */
                    /* catch() { ... } // from try @ 03442a08 with catch @ 03442c1c */
                    /* catch() { ... } // from try @ 034422c0 with catch @ 03442c20 */
                    /* catch() { ... } // from try @ 03442100 with catch @ 03442c24 */
                    /* catch() { ... } // from try @ 03442264 with catch @ 03442c28 */
        if (((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).naturalAligment < bVar1) ||
           ((((PNEKMHMACLG_c *)JMADECMMMIE_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)PNEKMHMACLG_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(JMADECMMMIE_00);
        }
        AFFHKININGD__CGEOMKBMHCF(__this,(PNEKMHMACLG_o *)JMADECMMMIE_00,method);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

