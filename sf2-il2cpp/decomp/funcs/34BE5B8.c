// KAHMAJKJMBK$$ACOIAOCFPKA @ RVA 0x34BE5B8

void KAHMAJKJMBK__ACOIAOCFPKA(KAHMAJKJMBK_o *__this,PNEKMHMACLG_o *JMADECMMMIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AJNNHGGLGIF__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04568617 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AJNNHGGLGIF>_Remove__);
    DAT_04568617 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((JMADECMMMIE != (PNEKMHMACLG_o *)0x0) &&
     (pSVar2 = (JMADECMMMIE->fields).LJNCACBBIBD,
     pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<AJNNHGGLGIF>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_MoveNext__
                             ), bVar1) {
      KAHMAJKJMBK__JIPKIDBNLAD(__this,(AJNNHGGLGIF_o *)local_48.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<AJNNHGGLGIF>_Dispose__);
    pSVar2 = (__this->fields).LJNCACBBIBD;
    if (pSVar2 != (System_Collections_Generic_List_AJNNHGGLGIF__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,(Il2CppObject *)JMADECMMMIE,
                 Method_System_Collections_Generic_List<AJNNHGGLGIF>_Remove__);
                    /* try { // try from 035be6a8 to 036be6fb has its CatchHandler @ 035be6a8
                       catch() { ... } // from try @ 035be6a8 with catch @ 035be6a8
                       catch() { ... } // from try @ 035be704 with catch @ 035be6a8
                       catch() { ... } // from try @ 035be7cc with catch @ 035be6a8
                       catch() { ... } // from try @ 035be898 with catch @ 035be6a8 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

