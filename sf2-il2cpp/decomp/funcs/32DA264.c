// NOMBKAHPOHM$$FLCCDLEBIII @ RVA 0x32DA264

void NOMBKAHPOHM__FLCCDLEBIII(NOMBKAHPOHM_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Il2CppObject *__this_00;
  bool bVar3;
  int32_t iVar4;
  NLPJLHOEAOE_o *pNVar5;
  System_Collections_Generic_List_OOMHDDBCBJP__o *__this_01;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_String_o *pSVar6;
  byte bVar7;
  FPPKHNNABAD_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045675ac & 1) == 0) {
                    /* try { // try from 033da298 to 034da2a3 has its CatchHandler @ 033da690 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_get_Current__);
                    /* try { // try from 033da2b8 to 034da2bf has its CatchHandler @ 033da68c */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
                    /* try { // try from 033da2d0 to 034da2d7 has its CatchHandler @ 033da67c */
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_045675ac = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033da2e0 to 034da2e7 has its CatchHandler @ 033da674 */
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
                    /* try { // try from 033da2ec to 034da2f3 has its CatchHandler @ 033da66c */
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
                    /* try { // try from 033da2f8 to 034da2ff has its CatchHandler @ 033da678 */
  pNVar5 = NLPJLHOEAOE__AIHNLLGNBLC((MethodInfo *)0x0);
  if ((pNVar5 == (NLPJLHOEAOE_o *)0x0) ||
     (__this_01 = (pNVar5->fields).DEKLKEHGJEB,
     __this_01 == (System_Collections_Generic_List_OOMHDDBCBJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033da314 to 034da323 has its CatchHandler @ 033da624 */
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<OOMHDDBCBJP>_GetEnumerator__);
  local_60.fields._index = local_78.fields._index;
  local_60.fields._version = local_78.fields._version;
                    /* try { // try from 033da33c to 034da33f has its CatchHandler @ 033da608 */
                    /* try { // try from 033da340 to 034da347 has its CatchHandler @ 033da614 */
  local_60.fields._list = local_78.fields._list;
  local_60.fields._current = local_78.fields._current;
  while( true ) {
    do {
      bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_MoveNext__);
      __this_00 = local_60.fields._current;
      if (!bVar3) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<OOMHDDBCBJP>_Dispose__);
                    /* try { // try from 033da42c to 034da433 has its CatchHandler @ 033da644 */
                    /* try { // try from 033da438 to 034da43f has its CatchHandler @ 033da664 */
        return;
      }
                    /* try { // try from 033da358 to 034da367 has its CatchHandler @ 033da618 */
      if (*(char *)((long)&(__this->fields).KGLJICLJHEL + 4) == '\0') {
        bVar7 = 1;
      }
      else {
        if ((OOMHDDBCBJP_o *)local_60.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar7 = ((OOMHDDBCBJP_Fields *)((long)local_60.fields._current + 0x10))->HHDBIGKBMEC;
      }
      if (*(char *)((long)&(__this->fields).KGLJICLJHEL + 5) == '\0') {
        bVar3 = true;
      }
      else {
        if ((OOMHDDBCBJP_o *)local_60.fields._current == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
                    /* try { // try from 033da380 to 034da383 has its CatchHandler @ 033da608 */
                    /* try { // try from 033da384 to 034da38b has its CatchHandler @ 033da60c */
        iVar4 = OOMHDDBCBJP__NHGGBEACKBD
                          ((OOMHDDBCBJP_o *)local_60.fields._current,(MethodInfo *)0x0);
        bVar3 = iVar4 != 0x14;
      }
                    /* try { // try from 033da39c to 034da3a3 has its CatchHandler @ 033da63c */
    } while ((bVar3 & bVar7) == 0);
    if ((OOMHDDBCBJP_o *)__this_00 == (OOMHDDBCBJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_02 = (__this->fields).NDBPOFMECGL;
                    /* try { // try from 033da3b4 to 034da3bb has its CatchHandler @ 033da654 */
    item = OOMHDDBCBJP__LOHPFCGCHNH((OOMHDDBCBJP_o *)__this_00,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<string>_Add__;
    if (__this_02 == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033da444 to 034da44f has its CatchHandler @ 033da65c */
      FUN_01bab8c8();
    }
                    /* try { // try from 033da3c0 to 034da3c7 has its CatchHandler @ 033da658 */
    pSVar6 = (__this_02->fields)._COIPKAKHDFP_k__BackingField;
    *(int *)((long)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField + 4) =
         *(int *)((long)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField + 4) + 1;
    if (pSVar6 == (System_String_o *)0x0) break;
                    /* try { // try from 033da3d8 to 034da3df has its CatchHandler @ 033da660 */
    uVar1 = *(uint *)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField;
    if (uVar1 < *(uint *)&pSVar6[1].klass) {
                    /* try { // try from 033da3f0 to 034da3f7 has its CatchHandler @ 033da638 */
      *(uint *)&(__this_02->fields)._GPEFIOMJHNN_k__BackingField = uVar1 + 1;
      (&pSVar6[1].monitor)[(int)uVar1] = item;
      thunk_FUN_01c20e04();
                    /* try { // try from 033da3fc to 034da403 has its CatchHandler @ 033da640 */
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)item,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                    /* try { // try from 033da414 to 034da41b has its CatchHandler @ 033da668 */
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

