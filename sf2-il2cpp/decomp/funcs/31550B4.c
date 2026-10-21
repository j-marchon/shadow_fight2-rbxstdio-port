// Nekki.SF2.GUI.Profile.TricksController$$MarkItemsAsViewed @ RVA 0x31550B4

void Nekki_SF2_GUI_Profile_TricksController__MarkItemsAsViewed
               (Nekki_SF2_GUI_Profile_TricksController_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_KCLPNDAPADO__o *__this_00;
  ACHLOMELAJE_o *pAVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_0456682f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_0456682f = 1;
    method = extraout_x1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  __this_00 = MGNPHCAAEIO__DCOFAPICGBA(10,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_KCLPNDAPADO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<KCLPNDAPADO>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
                    /* try { // try from 032551a0 to 033551c7 has its CatchHandler @ 03256734 */
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_MoveNext__);
      pIVar1 = local_60.fields._current;
      if (!bVar2) break;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(char *)((long)&local_60.fields._current[3].klass + 4) != '\0') {
        *(undefined1 *)((long)&local_60.fields._current[3].klass + 4) = 0;
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
                    /* try { // try from 032551fc to 03355227 has its CatchHandler @ 03256730 */
        if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        ACHLOMELAJE__JGGBOFPNLOK(pAVar3,pIVar1[1].monitor,true,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<KCLPNDAPADO>_Dispose__);
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 03255264 to 0335526b has its CatchHandler @ 03256724 */
    pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar3 != (ACHLOMELAJE_o *)0x0) {
                    /* try { // try from 03255270 to 03355277 has its CatchHandler @ 03256728 */
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar3,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

