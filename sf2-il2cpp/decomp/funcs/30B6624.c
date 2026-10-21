// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$FBDFGPFFJEO @ RVA 0x30B6624

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__FBDFGPFFJEO
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,
               System_Collections_Generic_List_IHIFNKAMALG__o *IMEAEJHODHL,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar2;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this_00;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 031b6624 to 032b662b has its CatchHandler @ 031b662c */
                    /* catch() { ... } // from try @ 031b6558 with catch @ 031b662c
                       catch() { ... } // from try @ 031b65a8 with catch @ 031b662c
                       catch() { ... } // from try @ 031b6624 with catch @ 031b662c */
  if ((DAT_04566221 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_set_Capacity__);
    DAT_04566221 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._CODCAPKKACN_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      pSVar2 = (__this->fields)._CODCAPKKACN_k__BackingField;
    }
    if ((IMEAEJHODHL != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) &&
       (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
      System_Collections_Generic_List<object>__set_Capacity
                ((System_Collections_Generic_List_object__o *)pSVar2,(IMEAEJHODHL->fields)._size,
                 Method_System_Collections_Generic_List<IHIFNKAMALG>_set_Capacity__);
      pSVar2 = (__this->fields)._CODCAPKKACN_k__BackingField;
      if (pSVar2 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
        method_00 = Method_System_Collections_Generic_List<IHIFNKAMALG>_AddRange__;
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)IMEAEJHODHL,
                   (MethodInfo_26E4FB8 *)
                   Method_System_Collections_Generic_List<IHIFNKAMALG>_AddRange__);
        __this_00 = (__this->fields)._FEKFGIIMCOE_k__BackingField;
        if (__this_00 != (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                     Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_GetEnumerator__);
          while( true ) {
            bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_38,
                               Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_MoveNext__
                              );
            if (!bVar1) {
              System_Collections_Generic_List_Enumerator<object>__Dispose
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<TextPic_AGJBBBFDHCF>_Dispose__
                        );
              return;
            }
            if ((Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)local_38.fields._current ==
                (Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)0x0) break;
            Nekki_SF2_GUI_TextPic_AGJBBBFDHCF__OPNBCFNCCNH
                      ((Nekki_SF2_GUI_TextPic_AGJBBBFDHCF_o *)local_38.fields._current,
                       (__this->fields)._CODCAPKKACN_k__BackingField,method_00);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

