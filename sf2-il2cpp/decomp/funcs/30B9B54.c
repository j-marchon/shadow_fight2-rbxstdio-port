// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$BKLFICMCGNI @ RVA 0x30B9B54

System_String_o *
Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BKLFICMCGNI
          (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Predicate_TextPic_AGJBBBFDHCF__o **ppSVar1;
  System_Collections_Generic_List_T__o *source;
  System_Func_TextPic_AGJBBBFDHCF__char__o **ppSVar2;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Char_array *values;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_String_o *pSVar3;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  System_Predicate_TextPic_AGJBBBFDHCF__o *match;
  System_Func_TextPic_AGJBBBFDHCF__char__o *selector;
  
  if ((DAT_04566222 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Select<TextPic_AGJBBBFDHCF,_char>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_ToArray<char>__);
    FUN_01bab630(&System_Func<TextPic_AGJBBBFDHCF,_char>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__);
    FUN_01bab630(&System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    FUN_01bab630(&Method_System_String_Join<char>__);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_NOMNPLMDCID__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_PHGDMNNBLGP__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
    DAT_04566222 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  pSVar3 = string_TypeInfo->static_fields->Empty;
  if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_0;
  if (match == (System_Predicate_TextPic_AGJBBBFDHCF__o *)0x0) {
    if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    }
    match = (System_Predicate_TextPic_AGJBBBFDHCF__o *)
            thunk_FUN_01bda818(System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
    source = System_Collections_Generic_List<object>__FindAll
                       ((System_Collections_Generic_List_object__o *)__this_00,
                        (System_Predicate_T__o *)match,
                        Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__);
    if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
    }
    selector = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_1;
    if (selector == (System_Func_TextPic_AGJBBBFDHCF__char__o *)0x0) {
      if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
      }
      selector = (System_Func_TextPic_AGJBBBFDHCF__char__o *)
                 thunk_FUN_01bda818(System_Func<TextPic_AGJBBBFDHCF,_char>_TypeInfo);
      System_Func<object,_char>___ctor();
      ppSVar2 = &Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__27_1;
      *ppSVar2 = selector;
      thunk_FUN_01c20e04(ppSVar2,selector);
    }
    source_00 = System_Linq_Enumerable__Select<object,_char>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)selector,
                           Method_System_Linq_Enumerable_Select<TextPic_AGJBBBFDHCF,_char>__);
    values = System_Linq_Enumerable__ToArray<char>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        Method_System_Linq_Enumerable_ToArray<char>__);
    pSVar3 = System_String__Join<char>
                       (pSVar3,(System_Collections_Generic_IEnumerable_T__o *)values,
                        Method_System_String_Join<char>__);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

