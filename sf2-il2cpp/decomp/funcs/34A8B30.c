// Nekki.SF2.GUI.Profile.UserPerksPanel$$FMMCPKHOPFK @ RVA 0x34A8B30

void Nekki_SF2_GUI_Profile_UserPerksPanel__FMMCPKHOPFK
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HNFFPPPDKDK__o *__this_00;
  Nekki_SF2_GUI_TableView_o *pNVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *in_x3;
  ACHLOMELAJE_o *pAVar3;
  NFGLEDADCGL_o *pNVar4;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04568510 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568510 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
      (pNVar4 = (pAVar3->fields).CKJAGLDEMAE, pNVar4 != (NFGLEDADCGL_o *)0x0)) &&
     (__this_00 = (pNVar4->fields).PEJIOCBFEEE,
     __this_00 != (System_Collections_Generic_List_HNFFPPPDKDK__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HNFFPPPDKDK>_GetEnumerator__);
    while( true ) {
                    /* try { // try from 035a8c28 to 036a8c5b has its CatchHandler @ 035a8dac */
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_MoveNext__);
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a8664 with catch @ 035a8c94 */
        FUN_01bab8c8();
      }
      Nekki_SF2_GUI_Profile_UserPerksPanel__AddPerk
                (__this,(HEFOANCOHDC_o *)local_38.fields._current[2].klass,false,in_x3);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<HNFFPPPDKDK>_Dispose__);
                    /* try { // try from 035a8c5c to 036a8c5f has its CatchHandler @ 035a8cd4 */
    pNVar2 = (__this->fields)._TableView;
                    /* try { // try from 035a8c60 to 036a8c63 has its CatchHandler @ 035a8cc8 */
    if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 035a8c64 to 036a8c67 has its CatchHandler @ 035a8cc4 */
                    /* try { // try from 035a8c68 to 036a8c6b has its CatchHandler @ 035a8cc0 */
      Nekki_SF2_GUI_TableView__ReloadData(pNVar2,(MethodInfo *)0x0);
                    /* try { // try from 035a8c6c to 036a8c73 has its CatchHandler @ 035a8cb0 */
      pNVar2 = (__this->fields)._TableView;
      if (pNVar2 != (Nekki_SF2_GUI_TableView_o *)0x0) {
                    /* try { // try from 035a8c74 to 036a8c77 has its CatchHandler @ 035a8cac */
                    /* try { // try from 035a8c78 to 036a8c7b has its CatchHandler @ 035a8ca8 */
                    /* try { // try from 035a8c7c to 036a8d13 has its CatchHandler @ 035a81ac */
        Nekki_SF2_GUI_TableView__ScrollToCell(pNVar2,0,0.0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 035a8af4 with catch @ 035a8c88 */
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035a86b0 with catch @ 035a8c98 */
  FUN_01bab8c8();
}

