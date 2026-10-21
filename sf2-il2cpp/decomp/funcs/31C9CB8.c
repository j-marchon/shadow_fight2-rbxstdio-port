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
    FUN_01bab630(&StringLiteral_1147);
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
                        (MDKJJDGLPKO_TypeInfo->static_fields->LDCMBJCKIEI,StringLiteral_1147,
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

