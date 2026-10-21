// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$HHLLNMFOMGD @ RVA 0x30B7C0C

int32_t Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HHLLNMFOMGD
                  (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  System_Predicate_TextPic_AGJBBBFDHCF__o **ppSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  System_Predicate_TextPic_AGJBBBFDHCF__o *match;
  
  if ((DAT_0456621f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Count__);
    FUN_01bab630(&System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_INOOHNNEKDN__);
    FUN_01bab630(&Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo);
    DAT_0456621f = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
  if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__21_0;
  if (match == (System_Predicate_TextPic_AGJBBBFDHCF__o *)0x0) {
    if ((Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo,method);
    }
    match = (System_Predicate_TextPic_AGJBBBFDHCF__o *)
            thunk_FUN_01bda818(System_Predicate<TextPic_AGJBBBFDHCF>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_<>c_TypeInfo->static_fields->__9__21_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if ((__this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) &&
     (pSVar2 = System_Collections_Generic_List<object>__FindAll
                         ((System_Collections_Generic_List_object__o *)__this_00,
                          (System_Predicate_T__o *)match,
                          Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_FindAll__),
     pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (pSVar2->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

