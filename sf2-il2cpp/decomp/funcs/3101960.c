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
    FUN_01bab630(&StringLiteral_10719);
    FUN_01bab630(&StringLiteral_515);
    FUN_01bab630(&StringLiteral_264);
    FUN_01bab630(&StringLiteral_21556);
    FUN_01bab630(&StringLiteral_249);
    FUN_01bab630(&StringLiteral_21560);
    FUN_01bab630(&StringLiteral_13930);
    FUN_01bab630(&StringLiteral_6272);
    FUN_01bab630(&StringLiteral_473);
    FUN_01bab630(&StringLiteral_380);
    FUN_01bab630(&StringLiteral_381);
    FUN_01bab630(&StringLiteral_10720);
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
    pSVar4 = System_String__Concat(StringLiteral_21560,pSVar4,(MethodInfo *)0x0);
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
      pSVar5->m_Items[0] = StringLiteral_21556;
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
      pSVar5->m_Items[2] = StringLiteral_381;
      thunk_FUN_01c20e04(pSVar5->m_Items + 2);
      pSVar4 = System_Int32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
                    /* try { // try from 03201c8c to 03301c93 has its CatchHandler @ 03202160 */
      if ((uint)pSVar5->max_length < 4) goto LAB_03201f68;
                    /* try { // try from 03201c98 to 03301c9f has its CatchHandler @ 03202158 */
      pSVar5->m_Items[3] = pSVar4;
      thunk_FUN_01c20e04(pSVar5->m_Items + 3,pSVar4);
                    /* try { // try from 03201cb0 to 03301cc3 has its CatchHandler @ 03202180 */
      if ((uint)pSVar5->max_length < 5) goto LAB_03201f68;
      pSVar5->m_Items[4] = StringLiteral_249;
      thunk_FUN_01c20e04(pSVar5->m_Items + 4);
                    /* try { // try from 03201cd8 to 03301d4f has its CatchHandler @ 03202198 */
      pSVar4 = System_Int32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
      if ((uint)pSVar5->max_length < 6) goto LAB_03201f68;
      pSVar5->m_Items[5] = pSVar4;
      thunk_FUN_01c20e04(pSVar5->m_Items + 5,pSVar4);
      if ((uint)pSVar5->max_length < 7) goto LAB_03201f68;
      pSVar5->m_Items[6] = StringLiteral_473;
      thunk_FUN_01c20e04(pSVar5->m_Items + 6);
      pSVar4 = System_Int32__ToString(iVar1 + 0x20,(MethodInfo *)0x0);
      if ((uint)pSVar5->max_length < 8) goto LAB_03201f68;
      pSVar5->m_Items[7] = pSVar4;
      thunk_FUN_01c20e04();
                    /* try { // try from 03201d50 to 03301e8b has its CatchHandler @ 03201084 */
      pSVar4 = System_String__Concat(pSVar5,(MethodInfo *)0x0);
      System_Text_StringBuilder__AppendLine(__this_00,pSVar4,(MethodInfo *)0x0);
      GJFEBGNFFBA__ILHNDPBPGAN
                ((GJFEBGNFFBA_o *)__this,false,StringLiteral_10719,__this_00,(MethodInfo *)0x0);
    }
    pSVar5 = (System_String_array *)FUN_01bab718(string___TypeInfo,10);
    if (pSVar5 != (System_String_array *)0x0) {
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = StringLiteral_10720;
        thunk_FUN_01c20e04(pSVar5->m_Items);
        local_64 = (__this_01->fields)._size;
        pSVar4 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = pSVar4;
          thunk_FUN_01c20e04(pSVar5->m_Items + 1,pSVar4);
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = StringLiteral_515;
            thunk_FUN_01c20e04();
            if (HPACPFLKHPK == (NLEHCFCPAAO_MCKEOAPALNF_o *)0x0) goto LAB_03201f6c;
            pSVar4 = System_Int32__ToString(iVar1 + 0x10,(MethodInfo *)0x0);
            if (3 < (uint)pSVar5->max_length) {
              pSVar5->m_Items[3] = pSVar4;
              thunk_FUN_01c20e04(pSVar5->m_Items + 3,pSVar4);
              if (4 < (uint)pSVar5->max_length) {
                pSVar5->m_Items[4] = StringLiteral_380;
                thunk_FUN_01c20e04(pSVar5->m_Items + 4);
                pSVar4 = System_Int32__ToString(iVar1 + 0x14,(MethodInfo *)0x0);
                if (5 < (uint)pSVar5->max_length) {
                    /* try { // try from 03201e8c to 03301eb3 has its CatchHandler @ 03202194 */
                  pSVar5->m_Items[5] = pSVar4;
                  thunk_FUN_01c20e04(pSVar5->m_Items + 5,pSVar4);
                  if (6 < (uint)pSVar5->max_length) {
                    pSVar5->m_Items[6] = StringLiteral_13930;
                    thunk_FUN_01c20e04(pSVar5->m_Items + 6);
                    pSVar4 = System_Int32__ToString(iVar1 + 0x18,(MethodInfo *)0x0);
                    if (7 < (uint)pSVar5->max_length) {
                      pSVar5->m_Items[7] = pSVar4;
                    /* try { // try from 03201ee8 to 03301f13 has its CatchHandler @ 03202190 */
                      thunk_FUN_01c20e04(pSVar5->m_Items + 7,pSVar4);
                      if (8 < (uint)pSVar5->max_length) {
                        pSVar5->m_Items[8] = StringLiteral_6272;
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

