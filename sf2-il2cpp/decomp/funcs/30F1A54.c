// Nekki.SF2.GUI.Map.DifficultyPanel$$GetDifficultyEvaluationPair @ RVA 0x30F1A54

MGNDHCBAPEN_string__float__o *
Nekki_SF2_GUI_Map_DifficultyPanel__GetDifficultyEvaluationPair(float OEBANKNLEMN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *pSVar2;
  MGNDHCBAPEN_string__float__o *pMVar3;
  float fVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456642e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__);
    DAT_0456642e = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
  if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
    pMVar3 = (MGNDHCBAPEN_string__float__o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)pSVar2,0,
                        Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_get_Item__
                       );
    pSVar2 = Nekki_SF2_GUI_Map_DifficultyPanel_TypeInfo->static_fields->CAGNGFDHPGF;
    if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_GetEnumerator__)
      ;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_48,
                           Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_48,
                     Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_float>>_Dispose__
                    );
          return pMVar3;
        }
        if ((MGNDHCBAPEN_string__float__o *)local_48.fields._current ==
            (MGNDHCBAPEN_string__float__o *)0x0) break;
        fVar4 = ((MGNDHCBAPEN_string__float__Fields *)((long)local_48.fields._current + 0x10))->
                DOKHHBGJICA;
        if (fVar4 < OEBANKNLEMN) {
          if (pMVar3 == (MGNDHCBAPEN_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          if ((pMVar3->fields).DOKHHBGJICA < fVar4) {
            pMVar3 = (MGNDHCBAPEN_string__float__o *)local_48.fields._current;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

