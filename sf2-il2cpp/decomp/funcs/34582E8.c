// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$KGLBGFGMCAG @ RVA 0x34582E8

void Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__KGLBGFGMCAG
               (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
               JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *PBDIPLHDHHD,float KAFHJNFHFHL,
               MethodInfo *method)

{
  bool bVar1;
  DDMHMABAHHD_o *DPILKAHLFOA;
  System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *__this_00;
  MethodInfo *in_x3;
  System_Collections_Generic_List_DDMHMABAHHD__o *__this_01;
  int index;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045682d8 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Count__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Count__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
    DAT_045682d8 = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if ((PBDIPLHDHHD != (JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)0x0) &&
     (__this_01 = (PBDIPLHDHHD->fields).GFBNJPMOEKD,
     __this_01 != (System_Collections_Generic_List_DDMHMABAHHD__o *)0x0)) {
    if (0 < (__this_01->fields)._size) {
      index = 0;
      do {
        DPILKAHLFOA = (DDMHMABAHHD_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)__this_01,index,
                                 Method_System_Collections_Generic_List<DDMHMABAHHD>_get_Item__);
        if (DPILKAHLFOA == (DDMHMABAHHD_o *)0x0) goto LAB_0355845c;
        Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__MOONCCCJECI
                  (__this,DPILKAHLFOA,(DPILKAHLFOA->fields)._COIPKAKHDFP_k__BackingField,
                   (DPILKAHLFOA->fields)._BKOJHCAOKBO_k__BackingField * KAFHJNFHFHL,in_x3);
        index = index + 1;
      } while (index < (__this_01->fields)._size);
    }
    __this_00 = (PBDIPLHDHHD->fields).BAPMMGFEIDM;
    if (__this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
    {
      if (0 < (__this_00->fields)._size) {
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                  );
        while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                 (&local_58,
                                  Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                                 ), bVar1) {
          Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FillContainerItemChances
                    (__this,(JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ_o *)local_58.fields._current,
                     PBDIPLHDHHD,KAFHJNFHFHL,in_x3);
        }
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_58,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                  );
      }
      return;
    }
  }
LAB_0355845c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

