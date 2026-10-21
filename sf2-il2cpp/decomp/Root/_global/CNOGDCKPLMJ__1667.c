// TypeDefIndex 1667
// Namespace: 
// public class CNOGDCKPLMJ
// Fields:
//   private Dictionary<string, List<FPPKHNNABAD>> AGOAABDLMOG; // 0x10
//   private List<FPPKHNNABAD> OJBDDPNIHAL; // 0x18
//   private const string KEGNAMJIMEB = "_$ActionID";
//   private HashSet<char> MJALPHIMDID; // 0x20

// ===== private bool NLDHFFIEJDD(string LKFJAPPLGFE, string OCHLLMNLADJ, ref string KIALMCJDLOP)  [RVA 0x31C96D4]
// CNOGDCKPLMJ$$NLDHFFIEJDD @ RVA 0x31C96D4

bool CNOGDCKPLMJ__NLDHFFIEJDD
               (CNOGDCKPLMJ_o *__this,System_String_o *LKFJAPPLGFE,System_String_o *OCHLLMNLADJ,
               System_String_o **KIALMCJDLOP,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if ((DAT_04566c55 & 1) == 0) {
                    /* try { // try from 032c9708 to 033c970f has its CatchHandler @ 032c97ec */
    FUN_01bab630(&StringLiteral_15864/*"_$ActionID"*/);
                    /* try { // try from 032c9718 to 033c9727 has its CatchHandler @ 032c97f4 */
    DAT_04566c55 = 1;
  }
  bVar1 = System_String__op_Inequality(LKFJAPPLGFE,StringLiteral_15864/*"_$ActionID"*/,(MethodInfo *)0x0);
                    /* try { // try from 032c9738 to 033c973f has its CatchHandler @ 032c97dc */
  if ((bVar1) &&
     (bVar1 = System_String__op_Inequality(OCHLLMNLADJ,StringLiteral_15864/*"_$ActionID"*/,(MethodInfo *)0x0), bVar1
     )) {
LAB_032c97a4:
    bVar1 = true;
  }
  else {
                    /* try { // try from 032c9744 to 033c975b has its CatchHandler @ 032c97f0 */
    bVar1 = System_String__op_Equality(LKFJAPPLGFE,OCHLLMNLADJ,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 032c9760 to 033c976b has its CatchHandler @ 032c97e8 */
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__op_Equality(LKFJAPPLGFE,StringLiteral_15864/*"_$ActionID"*/,(MethodInfo *)0x0);
                    /* try { // try from 032c9770 to 033c9777 has its CatchHandler @ 032c97e4 */
      if (!bVar1) {
        OCHLLMNLADJ = LKFJAPPLGFE;
      }
                    /* try { // try from 032c9778 to 033c97d3 has its CatchHandler @ 032c9508 */
      bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*KIALMCJDLOP,(MethodInfo *)0x0);
      if ((bVar1) && (bVar1 = CNOGDCKPLMJ__FDLDELKMPHI(__this,OCHLLMNLADJ,method_00), bVar1)) {
        *KIALMCJDLOP = OCHLLMNLADJ;
        thunk_FUN_01c20e04(KIALMCJDLOP,OCHLLMNLADJ);
        goto LAB_032c97a4;
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


// ===== public void BLJJKMIEHFG(FPPKHNNABAD JOBNGBCPEGO)  [RVA 0x31C9890]
// CNOGDCKPLMJ$$BLJJKMIEHFG @ RVA 0x31C9890

void CNOGDCKPLMJ__BLJJKMIEHFG(CNOGDCKPLMJ_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_LEGDPJHPEOB__o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  MethodInfo *in_x3;
  MethodInfo *in_x4;
  FPPKHNNABAD_array *pFVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  System_String_o *local_28;
  
  if ((DAT_04566c56 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    DAT_04566c56 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if (JOBNGBCPEGO == (FPPKHNNABAD_o *)0x0) {
LAB_032c9a48:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar3 = FPPKHNNABAD__CMPFBCCGBGK(JOBNGBCPEGO,10,(MethodInfo *)0x0);
  if (bVar3) {
    local_28 = (System_String_o *)0x0;
    __this_00 = (JOBNGBCPEGO->fields).KPFGHBEKJIM;
    if (__this_00 == (System_Collections_Generic_List_LEGDPJHPEOB__o *)0x0) goto LAB_032c9a48;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<LEGDPJHPEOB>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    do {
      do {
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_50,
                           Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_50,
                     Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
          CNOGDCKPLMJ__KEKFJKEELBH(__this,JOBNGBCPEGO,local_28,in_x3);
          return;
        }
        if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      } while (*(int *)((long)&local_50.fields._current[1].klass + 4) != 1);
      in_x3 = (MethodInfo *)&stack0xffffffffffffffd8;
      bVar3 = CNOGDCKPLMJ__NLDHFFIEJDD
                        (__this,(System_String_o *)local_50.fields._current[2].klass,
                         local_50.fields._current[2].monitor,(System_String_o **)in_x3,in_x4);
      lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
    } while (bVar3);
    __this_01 = (__this->fields).OJBDDPNIHAL;
    if (__this_01 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pFVar4 = (__this_01->fields)._items;
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pFVar4 == (FPPKHNNABAD_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar1 = (__this_01->fields)._size;
    if (uVar1 < (uint)pFVar4->max_length) {
      (__this_01->fields)._size = uVar1 + 1;
      pFVar4->m_Items[(int)uVar1] = JOBNGBCPEGO;
      thunk_FUN_01c20e04(pFVar4->m_Items + (int)uVar1,JOBNGBCPEGO);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)JOBNGBCPEGO,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<LEGDPJHPEOB>_Dispose__);
  }
  return;
}


// ===== public void CJJNLKHIHMF(FPPKHNNABAD JOBNGBCPEGO)  [RVA 0x31C9CB4]
// CNOGDCKPLMJ$$CJJNLKHIHMF @ RVA 0x31C9CB4

void CNOGDCKPLMJ__CJJNLKHIHMF(CNOGDCKPLMJ_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,MethodInfo *method)

{
  return;
}


// ===== private bool FDLDELKMPHI(string DIHAKADKIKM)  [RVA 0x31C97C4]
// CNOGDCKPLMJ$$FDLDELKMPHI @ RVA 0x31C97C4

bool CNOGDCKPLMJ__FDLDELKMPHI(CNOGDCKPLMJ_o *__this,System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint16_t item;
  System_Collections_Generic_HashSet_char__o *__this_00;
  int iVar4;
  
                    /* try { // try from 032c97d4 to 033c97d7 has its CatchHandler @ 032c97e0 */
                    /* try { // try from 032c97d8 to 033c980b has its CatchHandler @ 032c9508 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9738 with catch @ 032c97dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c97d4 with catch @ 032c97e0
                        */
  if ((DAT_04566c57 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9770 with catch @ 032c97e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9760 with catch @ 032c97e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9708 with catch @ 032c97ec
                        */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Contains__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9744 with catch @ 032c97f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9718 with catch @ 032c97f4
                        */
    DAT_04566c57 = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(DIHAKADKIKM,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = false;
                    /* try { // try from 032c980c to 033c980f has its CatchHandler @ 032c9830 */
  }
  else {
                    /* try { // try from 032c9810 to 033c9837 has its CatchHandler @ 032c9508 */
    if (DIHAKADKIKM == (System_String_o *)0x0) {
LAB_032c988c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar4 = (DIHAKADKIKM->fields)._stringLength;
    bVar2 = 0 < iVar4;
    if (0 < iVar4) {
                    /* catch() { ... } // from try @ 032c980c with catch @ 032c9830 */
      iVar4 = 0;
      do {
                    /* try { // try from 032c9838 to 033c983f has its CatchHandler @ 032c9854 */
                    /* try { // try from 032c9840 to 033c984b has its CatchHandler @ 032c9508 */
        item = System_String__get_Chars(DIHAKADKIKM,iVar4,(MethodInfo *)0x0);
        __this_00 = (__this->fields).MJALPHIMDID;
        if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) goto LAB_032c988c;
                    /* try { // try from 032c984c to 033c9853 has its CatchHandler @ 032c9854 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032c9838 with catch @ 032c9854
                       catch(type#2 @ 00000000) { ... } // from try @ 032c984c with catch @ 032c9854
                        */
                    /* try { // try from 032c9858 to 033c9d23 has its CatchHandler @ 032c9858
                       catch() { ... } // from try @ 032c9858 with catch @ 032c9858
                       catch() { ... } // from try @ 032c9e84 with catch @ 032c9858
                       catch() { ... } // from try @ 032ca278 with catch @ 032c9858
                       catch() { ... } // from try @ 032ca330 with catch @ 032c9858 */
        bVar3 = System_Collections_Generic_HashSet<char>__Contains
                          (__this_00,item,Method_System_Collections_Generic_HashSet<char>_Contains__
                          );
        if (bVar3) break;
        iVar1 = (DIHAKADKIKM->fields)._stringLength;
        iVar4 = iVar4 + 1;
        bVar2 = iVar4 < iVar1;
      } while (iVar4 < iVar1);
    }
    bVar2 = (bool)(bVar2 ^ 1);
  }
  return bVar2;
}


// ===== private void KEKFJKEELBH(FPPKHNNABAD JOBNGBCPEGO, string PMACBPAMPJA)  [RVA 0x31C9AD4]
// CNOGDCKPLMJ$$KEKFJKEELBH @ RVA 0x31C9AD4

void CNOGDCKPLMJ__KEKFJKEELBH
               (CNOGDCKPLMJ_o *__this,FPPKHNNABAD_o *JOBNGBCPEGO,System_String_o *PMACBPAMPJA,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar5;
  FPPKHNNABAD_array *pFVar6;
  System_Collections_Generic_List_FPPKHNNABAD__o *local_28;
  
  if ((DAT_04566c58 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    DAT_04566c58 = 1;
  }
  local_28 = (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0;
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(PMACBPAMPJA,(MethodInfo *)0x0);
  if (bVar3) {
    pSVar5 = (__this->fields).OJBDDPNIHAL;
    lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
  }
  else {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).AGOAABDLMOG
    ;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_032c9cb0;
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar4,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                      );
    pSVar5 = local_28;
    lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
    if (!bVar3) {
      pSVar5 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
      lVar2 = Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__;
      if (pSVar5 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
        pFVar6 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pFVar6 != (FPPKHNNABAD_array *)0x0) {
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pFVar6->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pFVar6->m_Items[(int)uVar1] = JOBNGBCPEGO;
            thunk_FUN_01c20e04(pFVar6->m_Items + (int)uVar1,JOBNGBCPEGO);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar5,
                       (Il2CppObject *)JOBNGBCPEGO,
                       *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields).AGOAABDLMOG;
          local_28 = pSVar5;
          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Add
                      (pSVar4,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)pSVar5,
                       Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_Add__
                      );
            return;
          }
        }
      }
      goto LAB_032c9cb0;
    }
  }
  Method_System_Collections_Generic_List<FPPKHNNABAD>_Add__ = lVar2;
  if (pSVar5 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    pFVar6 = (pSVar5->fields)._items;
    (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
    if (pFVar6 != (FPPKHNNABAD_array *)0x0) {
      uVar1 = (pSVar5->fields)._size;
      if (uVar1 < (uint)pFVar6->max_length) {
        (pSVar5->fields)._size = uVar1 + 1;
        pFVar6->m_Items[(int)uVar1] = JOBNGBCPEGO;
        thunk_FUN_01c20e04(pFVar6->m_Items + (int)uVar1,JOBNGBCPEGO);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar5,(Il2CppObject *)JOBNGBCPEGO,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
LAB_032c9cb0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x31C9CB8]
// CNOGDCKPLMJ$$.ctor @ RVA 0x31C9CB8

void CNOGDCKPLMJ___ctor(CNOGDCKPLMJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  uint16_t item;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_FPPKHNNABAD__o *__this_01;
  System_Collections_Generic_List_FPPKHNNABAD__o **ppSVar2;
  System_Collections_Generic_HashSet_char__o *__this_02;
  System_String_o *__this_03;
  MethodInfo *extraout_x1;
  System_Collections_Generic_HashSet_char__o **ppSVar3;
  int index;
  
  if ((DAT_04566c59 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>__ctor__);
                    /* try { // try from 032c9d24 to 033c9d4b has its CatchHandler @ 032ca298 */
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Contains__);
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>__ctor__);
    FUN_01bab630(&System_Collections_Generic_HashSet<char>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
                    /* try { // try from 032c9d80 to 033c9da7 has its CatchHandler @ 032ca294 */
    FUN_01bab630(&StringLiteral_1147/*"+-*^(){}|/&#%=! "*/);
    DAT_04566c59 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>__ctor__);
  (__this->fields).AGOAABDLMOG =
       (System_Collections_Generic_Dictionary_string__List_FPPKHNNABAD___o *)__this_00;
                    /* try { // try from 032c9dbc to 033c9dc3 has its CatchHandler @ 032ca28c */
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
  ppSVar2 = &(__this->fields).OJBDDPNIHAL;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  __this_02 = (System_Collections_Generic_HashSet_char__o *)
              thunk_FUN_01bda818(System_Collections_Generic_HashSet<char>_TypeInfo);
  System_Collections_Generic_HashSet<char>___ctor
            (__this_02,Method_System_Collections_Generic_HashSet<char>__ctor__);
  ppSVar3 = &(__this->fields).MJALPHIMDID;
                    /* try { // try from 032c9dfc to 033c9e83 has its CatchHandler @ 032ca290 */
  *ppSVar3 = __this_02;
  thunk_FUN_01c20e04(ppSVar3,__this_02);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_03 = System_String__Concat
                        (MDKJJDGLPKO_TypeInfo->static_fields->LDCMBJCKIEI,StringLiteral_1147/*"+-*^(){}|/&#%=! "*/,
                         (MethodInfo *)0x0);
  if (__this_03 != (System_String_o *)0x0) {
    if (0 < (__this_03->fields)._stringLength) {
      index = 0;
      do {
        item = System_String__get_Chars(__this_03,index,(MethodInfo *)0x0);
        if (*ppSVar3 == (System_Collections_Generic_HashSet_char__o *)0x0) goto LAB_032c9ed4;
                    /* try { // try from 032c9e84 to 033ca267 has its CatchHandler @ 032c9858 */
        bVar1 = System_Collections_Generic_HashSet<char>__Contains
                          (*ppSVar3,item,Method_System_Collections_Generic_HashSet<char>_Contains__)
        ;
        if (!bVar1) {
          if (*ppSVar3 == (System_Collections_Generic_HashSet_char__o *)0x0) goto LAB_032c9ed4;
          System_Collections_Generic_HashSet<char>__Add
                    (*ppSVar3,item,Method_System_Collections_Generic_HashSet<char>_Add__);
        }
        index = index + 1;
      } while (index < (__this_03->fields)._stringLength);
    }
    return;
  }
LAB_032c9ed4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public List<FPPKHNNABAD> BIPAMLPKNCP()  [RVA 0x31C9ED8]
// CNOGDCKPLMJ$$BIPAMLPKNCP @ RVA 0x31C9ED8

System_Collections_Generic_List_FPPKHNNABAD__o *
CNOGDCKPLMJ__BIPAMLPKNCP(CNOGDCKPLMJ_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_FPPKHNNABAD__o *pSVar3;
  Il2CppObject *local_38;
  
  if ((DAT_04566c5a & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<FPPKHNNABAD>_get_Count__);
    FUN_01bab630(&System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo);
    DAT_04566c5a = 1;
    method = extraout_x1;
  }
  local_38 = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).OJBDDPNIHAL;
  if (pSVar3 != (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    pSVar3 = (System_Collections_Generic_List_FPPKHNNABAD__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<FPPKHNNABAD>_TypeInfo,method);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pSVar3,iVar1 + 8,
               Method_System_Collections_Generic_List<FPPKHNNABAD>__ctor__);
    bVar2 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)(__this->fields).OJBDDPNIHAL,
                       Method_DJNBJHPDKDP_OBECCOPBADO<FPPKHNNABAD>__);
    if (!bVar2) {
      if (pSVar3 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_032ca04c;
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)pSVar3,
                 (System_Collections_Generic_IEnumerable_T__o *)(__this->fields).OJBDDPNIHAL,
                 Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
    }
    if (DAT_04566c75 == '\0') {
      FUN_01bab630(&PHLKGOCKIGP_TypeInfo);
      DAT_04566c75 = '\x01';
    }
    if (PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField != (System_String_o *)0x0)
    {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields).AGOAABDLMOG;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_032ca04c;
      bVar2 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                        (__this_00,
                         (Il2CppObject *)
                         PHLKGOCKIGP_TypeInfo->static_fields->_AGGOFPAGILE_k__BackingField,&local_38
                         ,
                         Method_System_Collections_Generic_Dictionary<string,_List<FPPKHNNABAD>>_TryGetValue__
                        );
      if (bVar2) {
        if (pSVar3 == (System_Collections_Generic_List_FPPKHNNABAD__o *)0x0) goto LAB_032ca04c;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar3,
                   (System_Collections_Generic_IEnumerable_T__o *)local_38,
                   Method_System_Collections_Generic_List<FPPKHNNABAD>_AddRange__);
      }
    }
    return pSVar3;
  }
LAB_032ca04c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

