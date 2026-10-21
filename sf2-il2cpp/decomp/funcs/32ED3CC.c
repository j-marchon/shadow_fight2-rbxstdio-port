// Nekki.SF2.GUI.Menu.MenuMaterialsPanel$$CMHFHILJHOL @ RVA 0x32ED3CC

void Nekki_SF2_GUI_Menu_MenuMaterialsPanel__CMHFHILJHOL
               (Nekki_SF2_GUI_Menu_MenuMaterialsPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HBNENINHPGF__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MGNPHCAAEIO_HLAKGGFFNAO_o *pMVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 033ed3d4 to 034ed3d7 has its CatchHandler @ 033ed3e4 */
                    /* catch() { ... } // from try @ 033ed3d4 with catch @ 033ed3e4 */
  if ((DAT_0456764e & 1) == 0) {
                    /* try { // try from 033ed3f4 to 034ed463 has its CatchHandler @ 033ed478 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_0456764e = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->BHAAICEFMBC;
  if ((pMVar2 != (MGNPHCAAEIO_HLAKGGFFNAO_o *)0x0) &&
     (__this_00 = (pMVar2->fields).DIELINNGEBJ,
     __this_00 != (System_Collections_Generic_List_HBNENINHPGF__o *)0x0)) {
                    /* try { // try from 033ed464 to 034ed46f has its CatchHandler @ 033ed0c8 */
                    /* try { // try from 033ed470 to 034ed477 has its CatchHandler @ 033ed478 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033ed3f4 with catch @ 033ed478
                       catch(type#2 @ 00000000) { ... } // from try @ 033ed470 with catch @ 033ed478
                        */
                    /* try { // try from 033ed47c to 034edc17 has its CatchHandler @ 033ed47c
                       catch() { ... } // from try @ 033ed47c with catch @ 033ed47c
                       catch() { ... } // from try @ 033ede28 with catch @ 033ed47c
                       catch() { ... } // from try @ 033edf80 with catch @ 033ed47c
                       catch() { ... } // from try @ 033edf9c with catch @ 033ed47c
                       catch() { ... } // from try @ 033edfa8 with catch @ 033ed47c
                       catch() { ... } // from try @ 033ee0d0 with catch @ 033ed47c */
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HBNENINHPGF>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<HBNENINHPGF>_Dispose__);
        return;
      }
      if ((HBNENINHPGF_o *)local_38.fields._current == (HBNENINHPGF_o *)0x0) break;
      if (((HBNENINHPGF_Fields *)((long)local_38.fields._current + 0x10))->EAJKEHPLGMP == 1) {
        Nekki_SF2_GUI_Menu_MenuMaterialsPanel__IEMBODIJFHH
                  (__this,(HBNENINHPGF_o *)local_38.fields._current,in_x2);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

