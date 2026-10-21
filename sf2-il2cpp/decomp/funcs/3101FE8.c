// NLEHCFCPAAO$$ACKAMBJOEIH @ RVA 0x3101FE8

void NLEHCFCPAAO__ACKAMBJOEIH
               (NLEHCFCPAAO_o *__this,System_Collections_Generic_List_LEGDPJHPEOB__o *AHEFOIOKDOK,
               PKHMIGFEJCL_o *AAJBIMFNMBB,FPPKHNNABAD_o *NDBPOFMECGL,
               System_Text_StringBuilder_o *KHHGPLOMHBB,NLEHCFCPAAO_MCKEOAPALNF_o *HPACPFLKHPK,
               int32_t ICJKGFMJNOA,MethodInfo *method)

{
  undefined4 uVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_LEGDPJHPEOB__o *AHEFOIOKDOK_00;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  undefined4 local_90;
  ushort local_84 [2];
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_045664cc & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
                    /* try { // try from 03202050 to 033020ef has its CatchHandler @ 03201084 */
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_get_Count__);
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<bool>__ctor__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_045664cc = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_84[0] = 0;
  local_90 = 0;
  if (AHEFOIOKDOK == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b0,(System_Collections_Generic_List_object__o *)AHEFOIOKDOK,
             Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
  uVar1 = local_90;
  local_80.fields._current = local_b0.fields._current;
                    /* try { // try from 032020f0 to 033020f7 has its CatchHandler @ 03202260 */
                    /* try { // try from 032020f8 to 033020ff has its CatchHandler @ 0320219c */
                    /* try { // try from 03202100 to 03302103 has its CatchHandler @ 0320217c */
  local_80.fields._index = local_b0.fields._index;
  local_80.fields._version = local_b0.fields._version;
                    /* try { // try from 03202104 to 03302107 has its CatchHandler @ 03202168 */
                    /* try { // try from 03202108 to 0330210b has its CatchHandler @ 03201084 */
  while( true ) {
                    /* try { // try from 0320210c to 0330210f has its CatchHandler @ 03202178 */
                    /* try { // try from 03202110 to 03302113 has its CatchHandler @ 03202154 */
                    /* try { // try from 03202114 to 03302117 has its CatchHandler @ 03202178 */
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    __this_00 = local_80.fields._current;
                    /* try { // try from 03202118 to 0330211b has its CatchHandler @ 03202164 */
    if (!bVar2) {
      local_90 = uVar1;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__)
      ;
                    /* try { // try from 032024a0 to 033024c7 has its CatchHandler @ 03202828 */
      return;
    }
                    /* try { // try from 0320211c to 0330211f has its CatchHandler @ 03202144 */
    if (HPACPFLKHPK == (NLEHCFCPAAO_MCKEOAPALNF_o *)0x0) {
      local_90 = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 03202120 to 03302123 has its CatchHandler @ 03202164 */
                    /* try { // try from 03202124 to 03302127 has its CatchHandler @ 03202140 */
                    /* try { // try from 03202128 to 0330212f has its CatchHandler @ 03201084 */
    iVar3 = (HPACPFLKHPK->fields).FLMBCPHGBPL;
                    /* try { // try from 03202130 to 03302133 has its CatchHandler @ 0320213c */
                    /* try { // try from 03202134 to 033021bb has its CatchHandler @ 03201084 */
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 03202130 with catch @ 0320213c */
      thunk_FUN_01ba7564();
    }
                    /* catch() { ... } // from try @ 03202124 with catch @ 03202140 */
                    /* catch() { ... } // from try @ 0320211c with catch @ 03202144 */
                    /* catch() { ... } // from try @ 03201fa0 with catch @ 03202148 */
                    /* catch() { ... } // from try @ 03201f74 with catch @ 0320214c */
    iVar3 = System_Math__Max(iVar3,ICJKGFMJNOA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03201f8c with catch @ 03202150 */
                    /* catch() { ... } // from try @ 03202110 with catch @ 03202154 */
    (HPACPFLKHPK->fields).FLMBCPHGBPL = iVar3;
                    /* catch() { ... } // from try @ 03201c98 with catch @ 03202158 */
                    /* catch() { ... } // from try @ 03201c6c with catch @ 0320215c */
    (HPACPFLKHPK->fields).PAELIKDEAEG = (HPACPFLKHPK->fields).PAELIKDEAEG + 1;
                    /* catch() { ... } // from try @ 03201c8c with catch @ 03202160 */
    local_84[0] = 0;
                    /* catch() { ... } // from try @ 03202118 with catch @ 03202164
                       catch() { ... } // from try @ 03202120 with catch @ 03202164 */
    if ((LEGDPJHPEOB_o *)__this_00 == (LEGDPJHPEOB_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 03202104 with catch @ 03202168 */
                    /* catch() { ... } // from try @ 03201fb8 with catch @ 0320216c */
                    /* catch() { ... } // from try @ 03201f5c with catch @ 03202170 */
                    /* catch() { ... } // from try @ 03201f50 with catch @ 03202174 */
    bVar2 = LEGDPJHPEOB__DGCODECJJCC((LEGDPJHPEOB_o *)__this_00,AAJBIMFNMBB,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0320210c with catch @ 03202178
                       catch() { ... } // from try @ 03202114 with catch @ 03202178 */
                    /* catch() { ... } // from try @ 03202100 with catch @ 0320217c */
    local_b0.fields._list._0_2_ = 0;
                    /* catch() { ... } // from try @ 03201cb0 with catch @ 03202180 */
                    /* catch() { ... } // from try @ 03201c54 with catch @ 03202184 */
                    /* catch() { ... } // from try @ 03201c48 with catch @ 03202188 */
    System_Nullable<bool>___ctor
              ((System_Nullable_bool__o)SUB82(&local_b0,0),bVar2,
               Method_System_Nullable<bool>__ctor__);
                    /* catch() { ... } // from try @ 03201fd8 with catch @ 0320218c */
                    /* catch() { ... } // from try @ 03201ee8 with catch @ 03202190 */
    local_84[0] = (ushort)local_b0.fields._list;
                    /* catch() { ... } // from try @ 03201e8c with catch @ 03202194 */
                    /* catch() { ... } // from try @ 03201cd8 with catch @ 03202198 */
    if (((ushort)local_b0.fields._list & 0xff) != 0) {
                    /* catch() { ... } // from try @ 032020f8 with catch @ 0320219c */
      bVar2 = System_Nullable<bool>__get_Value
                        ((System_Nullable_bool__o)SUB82(local_84,0),
                         Method_System_Nullable<bool>_get_Value__);
      if (bVar2) {
                    /* try { // try from 032021bc to 033021bf has its CatchHandler @ 032021cc */
        (HPACPFLKHPK->fields).ACBPAMOMIMH = (HPACPFLKHPK->fields).ACBPAMOMIMH + 1;
      }
      else {
                    /* catch() { ... } // from try @ 032021bc with catch @ 032021cc */
        (HPACPFLKHPK->fields).CPLCECBELML = (HPACPFLKHPK->fields).CPLCECBELML + 1;
      }
    }
    AHEFOIOKDOK_00 = ((LEGDPJHPEOB_Fields *)((long)__this_00 + 0x10))->AHEFOIOKDOK;
    if (AHEFOIOKDOK_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) break;
                    /* try { // try from 032021dc to 03302257 has its CatchHandler @ 03202328 */
    if (0 < (AHEFOIOKDOK_00->fields)._size) {
      NLEHCFCPAAO__ACKAMBJOEIH
                (__this,AHEFOIOKDOK_00,AAJBIMFNMBB,NDBPOFMECGL,KHHGPLOMHBB,HPACPFLKHPK,
                 ICJKGFMJNOA + 1,method);
    }
  }
  local_90 = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

