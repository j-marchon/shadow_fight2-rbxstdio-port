// TypeDefIndex 1155
// Namespace: 
// public class NLEHCFCPAAO : GJFEBGNFFBA
// Fields:

// ===== protected override string FGBGAKLKONL()  [RVA 0x3101960]
// NLEHCFCPAAO$$FGBGAKLKONL @ RVA 0x3101960

System_String_o * NLEHCFCPAAO__FGBGAKLKONL(NLEHCFCPAAO_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *NDBPOFMECGL;
  bool bVar2;
  System_Text_StringBuilder_o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar3;
  System_String_o *pSVar4;
  NLEHCFCPAAO_MCKEOAPALNF_o *HPACPFLKHPK;
  System_Collections_Generic_List_LEGDPJHPEOB__o *AHEFOIOKDOK;
  System_String_array *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *in_x7;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  PKHMIGFEJCL_o *AAJBIMFNMBB;
  System_Collections_Generic_List_Enumerator_T__o local_98;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  int32_t local_64;
  
  if ((DAT_045664cb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&NLEHCFCPAAO_MCKEOAPALNF_TypeInfo);
    FUN_01bab630(&MPLEHFFCFEM_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_10719/*"QuestStageConditionsResult Tests"*/);
    FUN_01bab630(&StringLiteral_515/*" quests with "*/);
    FUN_01bab630(&StringLiteral_264/*" <color=red>with errors</color>"*/);
    FUN_01bab630(&StringLiteral_21556/*"total "*/);
    FUN_01bab630(&StringLiteral_249/*" / "*/);
    FUN_01bab630(&StringLiteral_21560/*"total founded quests : "*/);
    FUN_01bab630(&StringLiteral_13930/*"True, "*/);
    FUN_01bab630(&StringLiteral_6272/*"False) "*/);
    FUN_01bab630(&StringLiteral_473/*" max recursive deep = "*/);
    FUN_01bab630(&StringLiteral_380/*" conditions ("*/);
    FUN_01bab630(&StringLiteral_381/*" conditions : "*/);
    FUN_01bab630(&StringLiteral_10720/*"QuestStageConditionsResult Tests processed "*/);
    DAT_045664cb = 1;
    method = extraout_x1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if ((pNVar3 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) &&
     (__this_01 = (pNVar3->fields).QuestsAll,
     __this_01 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0)) {
    local_64 = (__this_01->fields)._size;
    pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
    pSVar4 = System_String__Concat(StringLiteral_21560/*"total founded quests : "*/,pSVar4,(MethodInfo *)0x0);
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto LAB_03201f6c;
    System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
    HPACPFLKHPK = (NLEHCFCPAAO_MCKEOAPALNF_o *)thunk_FUN_01bda818(NLEHCFCPAAO_MCKEOAPALNF_TypeInfo);
    System_Object___ctor((Il2CppObject *)HPACPFLKHPK,(MethodInfo *)0x0);
    pNVar3 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (pNVar3 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) goto LAB_03201f6c;
    AAJBIMFNMBB = (pNVar3->fields).QuestParameters;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_98,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<FPPKHNNABAD>_GetEnumerator__);
    local_80.fields._index = local_98.fields._index;
    local_80.fields._version = local_98.fields._version;
    local_80.fields._list = local_98.fields._list;
                    /* try { // try from 03201b84 to 03301bab has its CatchHandler @ 0320225c */
    local_80.fields._current = local_98.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_80,
                         Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_MoveNext__);
      NDBPOFMECGL = local_80.fields._current;
      if (!bVar2) break;
      if ((FPPKHNNABAD_o *)local_80.fields._current == (FPPKHNNABAD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      AHEFOIOKDOK = FPPKHNNABAD__EDELKHPPNCM
                              ((FPPKHNNABAD_o *)local_80.fields._current,(MethodInfo *)0x0);
      NLEHCFCPAAO__ACKAMBJOEIH
                (__this,AHEFOIOKDOK,AAJBIMFNMBB,(FPPKHNNABAD_o *)NDBPOFMECGL,__this_00,HPACPFLKHPK,1
                 ,in_x7);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_80,Method_System_Collections_Generic_List_Enumerator<FPPKHNNABAD>_Dispose__);
                    /* try { // try from 03201be0 to 03301c0b has its CatchHandler @ 03202258 */
    if ((MPLEHFFCFEM_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    iVar1 = (int)HPACPFLKHPK;
    if (MPLEHFFCFEM_TypeInfo->static_fields->KIMAADAKAFB != false) {
      pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,8);
      if (pSVar5 == (System_String_array *)0x0) goto LAB_03201f6c;
      if ((int)pSVar5->max_length == 0) goto LAB_03201f68;
      pSVar5->m_Items[0] = StringLiteral_21556/*"total "*/;
      thunk_FUN_01c20e04();
      if (HPACPFLKHPK == (NLEHCFCPAAO_MCKEOAPALNF_o *)0x0) goto LAB_03201f6c;
      pSVar4 = System_Int32__ToString(iVar1 + 0x10,(MethodInfo *)0x0);
      if ((uint)pSVar5->max_length < 2) goto LAB_03201f68;
                    /* try { // try from 03201c48 to 03301c4f has its CatchHandler @ 03202188 */
      pSVar5->m_Items[1] = pSVar4;
                    /* try { // try from 03201c54 to 03301c5b has its CatchHandler @ 03202184 */
      thunk_FUN_01c20e04(pSVar5->m_Items + 1,pSVar4);
      if ((uint)pSVar5->max_length < 3) goto LAB_03201f68;
                    /* try { // try from 03201c6c to 03301c73 has its CatchHandler @ 0320215c */
      pSVar5->m_Items[2] = StringLiteral_381/*" conditions : "*/;
      thunk_FUN_01c20e04(pSVar5->m_Items + 2);
      pSVar4 = System_Int32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
                    /* try { // try from 03201c8c to 03301c93 has its CatchHandler @ 03202160 */
      if ((uint)pSVar5->max_length < 4) goto LAB_03201f68;
                    /* try { // try from 03201c98 to 03301c9f has its CatchHandler @ 03202158 */
      pSVar5->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(pSVar5->m_Items + 3,pSVar4);
                    /* try { // try from 03201cb0 to 03301cc3 has its CatchHandler @ 03202180 */
      if ((uint)pSVar5->max_length < 5) goto LAB_03201f68;
      pSVar5->m_Items[4] = StringLiteral_249/*" / "*/;
      thunk_FUN_01c20e04(pSVar5->m_Items + 4);
                    /* try { // try from 03201cd8 to 03301d4f has its CatchHandler @ 03202198 */
      pSVar4 = System_Int32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
      if ((uint)pSVar5->max_length < 6) goto LAB_03201f68;
      pSVar5->m_Items[5] = pSVar4;
      thunk_FUN_01c20e04(pSVar5->m_Items + 5,pSVar4);
      if ((uint)pSVar5->max_length < 7) goto LAB_03201f68;
      pSVar5->m_Items[6] = StringLiteral_473/*" max recursive deep = "*/;
      thunk_FUN_01c20e04(pSVar5->m_Items + 6);
      pSVar4 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
      if ((uint)pSVar5->max_length < 8) goto LAB_03201f68;
      pSVar5->m_Items[7] = pSVar4;
      thunk_FUN_01c20e04();
                    /* try { // try from 03201d50 to 03301e8b has its CatchHandler @ 03201084 */
      pSVar4 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
      GJFEBGNFFBA__ILHNDPBPGAN
                ((GJFEBGNFFBA_o *)__this,false,StringLiteral_10719/*"QuestStageConditionsResult Tests"*/,__this_00,(MethodInfo *)0x0);
    }
    pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,10);
    if (pSVar5 != (System_String_array *)0x0) {
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = StringLiteral_10720/*"QuestStageConditionsResult Tests processed "*/;
        thunk_FUN_01c20e04(pSVar5->m_Items);
        local_64 = (__this_01->fields)._size;
        pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = pSVar4;
          thunk_FUN_01c20e04(pSVar5->m_Items + 1,pSVar4);
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = StringLiteral_515/*" quests with "*/;
            thunk_FUN_01c20e04();
            if (HPACPFLKHPK == (NLEHCFCPAAO_MCKEOAPALNF_o *)0x0) goto LAB_03201f6c;
            pSVar4 = System_Int32__ToString(iVar1 + 0x10,(MethodInfo *)0x0);
            if (3 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[3] = pSVar4;
              thunk_FUN_01c20e04(pSVar5->m_Items + 3,pSVar4);
              if (4 < (uint)pSVar5->max_length) {
                pSVar5->m_Items[4] = StringLiteral_380/*" conditions ("*/;
                thunk_FUN_01c20e04(pSVar5->m_Items + 4);
                pSVar4 = System_Int32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
                if (5 < (uint)pSVar5->max_length) {
                    /* try { // try from 03201e8c to 03301eb3 has its CatchHandler @ 03202194 */
                  pSVar5->m_Items[5] = pSVar4;
                  thunk_FUN_01c20e04(pSVar5->m_Items + 5,pSVar4);
                  if (6 < (uint)pSVar5->max_length) {
                    pSVar5->m_Items[6] = StringLiteral_13930/*"True, "*/;
                    thunk_FUN_01c20e04(pSVar5->m_Items + 6);
                    pSVar4 = System_Int32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
                    if (7 < (uint)pSVar5->max_length) {
                      pSVar5->m_Items[7] = pSVar4;
                    /* try { // try from 03201ee8 to 03301f13 has its CatchHandler @ 03202190 */
                      thunk_FUN_01c20e04(pSVar5->m_Items + 7,pSVar4);
                      if (8 < (uint)pSVar5->max_length) {
                        pSVar5->m_Items[8] = StringLiteral_6272/*"False) "*/;
                        thunk_FUN_01c20e04(pSVar5->m_Items + 8);
                        if (9 < (uint)pSVar5->max_length) {
                          pSVar5->m_Items[9] = (System_String_o *)0x0;
                          thunk_FUN_01c20e04(pSVar5->m_Items + 9,0);
                          pSVar4 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 03201f50 to 03301f57 has its CatchHandler @ 03202174 */
                    /* try { // try from 03201f5c to 03301f63 has its CatchHandler @ 03202170 */
                          return pSVar4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_03201f68:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
  }
LAB_03201f6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ACKAMBJOEIH(List<LEGDPJHPEOB> AHEFOIOKDOK, PKHMIGFEJCL AAJBIMFNMBB, FPPKHNNABAD NDBPOFMECGL, StringBuilder KHHGPLOMHBB, NLEHCFCPAAO.MCKEOAPALNF HPACPFLKHPK, int ICJKGFMJNOA)  [RVA 0x3101FE8]
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


// ===== public void .ctor()  [RVA 0x31026CC]
// NLEHCFCPAAO$$.ctor @ RVA 0x31026CC

void NLEHCFCPAAO___ctor(NLEHCFCPAAO_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  
                    /* try { // try from 032026d4 to 033026db has its CatchHandler @ 032027f8 */
                    /* try { // try from 032026e8 to 033026f3 has its CatchHandler @ 032027dc */
  if ((DAT_045664cd & 1) == 0) {
                    /* try { // try from 032026f4 to 0330278f has its CatchHandler @ 0320233c */
    FUN_01bab630(&GJFEBGNFFBA_TypeInfo);
    DAT_045664cd = 1;
    method = extraout_x1;
  }
  if ((GJFEBGNFFBA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(GJFEBGNFFBA_TypeInfo,method);
  }
  GJFEBGNFFBA___ctor((GJFEBGNFFBA_o *)__this,(MethodInfo *)0x0);
  return;
}

