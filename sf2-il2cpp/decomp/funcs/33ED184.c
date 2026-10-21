// FCJBEKHDLAF$$AIFOMGABBBA @ RVA 0x33ED184

void FCJBEKHDLAF__AIFOMGABBBA(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_DateTime_o d2;
  System_Collections_Generic_List_string__o *HAHKBGCBHCL;
  System_Collections_Generic_List_string__o *NPJBOAPCHCH;
  System_String_o *pSVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  System_DateTime_o d1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  double dVar3;
  System_Collections_Generic_List_Enumerator_T__o local_a8;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_TimeSpan_Fields local_68;
  
                    /* catch() { ... } // from try @ 034ed160 with catch @ 034ed18c */
                    /* try { // try from 034ed19c to 035ed1a3 has its CatchHandler @ 034ed1b8 */
                    /* try { // try from 034ed1a4 to 035ed1af has its CatchHandler @ 034ed070 */
                    /* try { // try from 034ed1b0 to 035ed1b7 has its CatchHandler @ 034ed1b8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ed19c with catch @ 034ed1b8
                       catch(type#2 @ 00000000) { ... } // from try @ 034ed1b0 with catch @ 034ed1b8
                        */
  if ((DAT_04567ee3 & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<string>_get_Current__);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    FUN_01bab630(&StringLiteral_8576);
    FUN_01bab630(&StringLiteral_6317);
    FUN_01bab630(&StringLiteral_2113);
    FUN_01bab630(&StringLiteral_234);
    FUN_01bab630(&StringLiteral_98);
    DAT_04567ee3 = 1;
    method = extraout_x1;
  }
  local_90.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.fields._index = 0;
  local_90.fields._version = 0;
  local_90.fields._current = (Il2CppObject *)0x0;
  local_68._ticks = 0;
  if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(System_DateTime_TypeInfo,method);
  }
  d2 = System_DateTime__get_Now((MethodInfo *)0x0);
  HAHKBGCBHCL = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)HAHKBGCBHCL,
             Method_System_Collections_Generic_List<string>__ctor__);
  NPJBOAPCHCH = (System_Collections_Generic_List_string__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)NPJBOAPCHCH,
             Method_System_Collections_Generic_List<string>__ctor__);
  FCJBEKHDLAF__OGCMJELFHAN(__this,HAHKBGCBHCL,NPJBOAPCHCH,in_x3);
  pSVar2 = StringLiteral_8576;
  if (HAHKBGCBHCL != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)HAHKBGCBHCL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar1) {
      pSVar2 = System_String__Concat
                         (pSVar2,StringLiteral_234,(System_String_o *)local_90.fields._current,
                          StringLiteral_2113,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    pSVar2 = System_String__Concat(pSVar2,StringLiteral_98,(MethodInfo *)0x0);
                    /* try { // try from 034ed3cc to 035ed48b has its CatchHandler @ 034ed3cc
                       catch() { ... } // from try @ 034ed3cc with catch @ 034ed3cc
                       catch() { ... } // from try @ 034ed4b8 with catch @ 034ed3cc
                       catch() { ... } // from try @ 034ed4dc with catch @ 034ed3cc
                       catch() { ... } // from try @ 034ed504 with catch @ 034ed3cc
                       catch() { ... } // from try @ 034ed544 with catch @ 034ed3cc */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_a8,(System_Collections_Generic_List_object__o *)HAHKBGCBHCL,
               Method_System_Collections_Generic_List<string>_GetEnumerator__);
    local_90.fields._index = local_a8.fields._index;
    local_90.fields._version = local_a8.fields._version;
    local_90.fields._list = local_a8.fields._list;
    local_90.fields._current = local_a8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_List_Enumerator<string>_MoveNext__),
          bVar1) {
      pSVar2 = System_String__Concat
                         (pSVar2,StringLiteral_234,(System_String_o *)local_90.fields._current,
                          StringLiteral_2113,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_90,Method_System_Collections_Generic_List_Enumerator<string>_Dispose__);
    BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                  FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
    if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
      if ((int)BBBLOLJAMJP->max_length != 0) {
        method_00 = (MethodInfo *)0x0;
        BBBLOLJAMJP->m_Items[0] = 2;
        Nekki_Utils_DetailedLog__Log(pSVar2,BBBLOLJAMJP,(MethodInfo *)0x0);
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = FCJBEKHDLAF__DECMILOMNIN(HAHKBGCBHCL,NPJBOAPCHCH,method_00);
        if (bVar1) {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ed48c to 035ed493 has its CatchHandler @ 034ed4e8 */
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__Log(StringLiteral_6317,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 034ed4ac to 035ed4b7 has its CatchHandler @ 034ed4e0 */
          if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 034ed4b8 to 035ed4d7 has its CatchHandler @ 034ed3cc */
          FCJBEKHDLAF__MDDOJIAMIEG(HAHKBGCBHCL,NPJBOAPCHCH,method_00);
          if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ed4d8 to 035ed4db has its CatchHandler @ 034ed4e4 */
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 034ed4dc to 035ed4ff has its CatchHandler @ 034ed3cc */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ed4ac with catch @ 034ed4e0
                        */
          OCMLPCKBHPN__HPGKPPILFKI((MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ed4d8 with catch @ 034ed4e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ed48c with catch @ 034ed4e8
                        */
          OCMLPCKBHPN__BKCFPHNEONL(HAHKBGCBHCL,NPJBOAPCHCH,(MethodInfo *)0x0);
        }
                    /* try { // try from 034ed500 to 035ed503 has its CatchHandler @ 034ed52c */
                    /* try { // try from 034ed504 to 035ed53b has its CatchHandler @ 034ed3cc */
        if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        d1 = System_DateTime__get_Now((MethodInfo *)0x0);
        local_68._ticks = (int64_t)System_DateTime__op_Subtraction(d1,d2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034ed500 with catch @ 034ed52c */
        if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034ed53c to 035ed543 has its CatchHandler @ 034ed558 */
          thunk_FUN_01ba7564(System_TimeSpan_TypeInfo);
        }
                    /* try { // try from 034ed544 to 035ed54f has its CatchHandler @ 034ed3cc */
        dVar3 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&local_68,(MethodInfo *)0x0);
                    /* try { // try from 034ed550 to 035ed557 has its CatchHandler @ 034ed558 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ed53c with catch @ 034ed558
                       catch(type#2 @ 00000000) { ... } // from try @ 034ed550 with catch @ 034ed558
                        */
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04567f89 == '\0') {
          FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
          DAT_04567f89 = '\x01';
        }
        if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        FCJBEKHDLAF_TypeInfo->static_fields->_KLEIGLIICNB_k__BackingField = (float)dVar3;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

