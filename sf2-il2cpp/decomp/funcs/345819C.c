// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$HMECCPGJAHJ @ RVA 0x345819C

float Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__HMECCPGJAHJ
                (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *IKIJJNCPGEH,
                float MCFPOCKJGBM,MethodInfo *method)

{
  bool bVar1;
  float fVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
                    /* catch() { ... } // from try @ 035562ac with catch @ 0355819c
                       catch() { ... } // from try @ 03557b6c with catch @ 0355819c */
                    /* catch() { ... } // from try @ 03556188 with catch @ 035581a0
                       catch() { ... } // from try @ 03557b68 with catch @ 035581a0 */
                    /* catch() { ... } // from try @ 035576f8 with catch @ 035581a4 */
                    /* catch() { ... } // from try @ 03557674 with catch @ 035581a8 */
                    /* catch() { ... } // from try @ 03556c6c with catch @ 035581ac
                       catch() { ... } // from try @ 03557b7c with catch @ 035581ac */
                    /* catch() { ... } // from try @ 03556594 with catch @ 035581b0 */
                    /* catch() { ... } // from try @ 035563a0 with catch @ 035581b4 */
                    /* catch() { ... } // from try @ 0355622c with catch @ 035581b8 */
                    /* catch() { ... } // from try @ 03556100 with catch @ 035581bc */
  if ((DAT_045682d7 & 1) == 0) {
                    /* catch() { ... } // from try @ 035560ec with catch @ 035581c0
                       catch() { ... } // from try @ 03557b64 with catch @ 035581c0 */
                    /* catch() { ... } // from try @ 03556074 with catch @ 035581c4 */
                    /* catch() { ... } // from try @ 03556648 with catch @ 035581c8 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                );
                    /* catch() { ... } // from try @ 03556c68 with catch @ 035581cc
                       catch() { ... } // from try @ 03557298 with catch @ 035581cc
                       catch() { ... } // from try @ 03557420 with catch @ 035581cc
                       catch() { ... } // from try @ 03557554 with catch @ 035581cc
                       catch() { ... } // from try @ 03557874 with catch @ 035581cc
                       catch() { ... } // from try @ 03557a08 with catch @ 035581cc
                       catch() { ... } // from try @ 03557a54 with catch @ 035581cc */
                    /* catch() { ... } // from try @ 03555fd8 with catch @ 035581d0
                       catch() { ... } // from try @ 03557b60 with catch @ 035581d0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_get_Current__
                );
    __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
             FUN_01bab630(&
                          Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
                         );
    DAT_045682d7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (IKIJJNCPGEH != (System_Collections_Generic_List_JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ__o *)0x0)
  {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)IKIJJNCPGEH,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_GetEnumerator__
              );
    fVar2 = 0.0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_MoveNext__
                        );
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_FNILDHLJBBJ_FICOAMDKLKJ>_Dispose__
                  );
        return MCFPOCKJGBM / fVar2;
      }
      if (local_48.fields._current == (Il2CppObject *)0x0) break;
      fVar2 = fVar2 + *(float *)&local_48.fields._current[1].klass;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

