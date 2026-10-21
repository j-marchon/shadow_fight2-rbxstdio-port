// Nekki.SF2.GUI.Profile.SealsController$$MarkItemsAsViewed @ RVA 0x311DE14

void Nekki_SF2_GUI_Profile_SealsController__MarkItemsAsViewed
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  GGHCLMEFIGO_o *__this_00;
  System_Collections_Generic_List_IGFGDDANEPE__o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04566608 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_11751);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566608 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
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
  pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar2 != (ACHLOMELAJE_o *)0x0) &&
      (__this_00 = (pAVar2->fields).OIDPLCLELEN, __this_00 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_01 = GGHCLMEFIGO__IAHEDEMPGPE
                            (__this_00,StringLiteral_11751,StringLiteral_1,true,(MethodInfo *)0x0),
     __this_01 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<IGFGDDANEPE>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_MoveNext__);
      if (!bVar1) break;
      if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_50.fields._current[1].monitor == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HOOAAGABMBL__GEBIJFANLGH(local_50.fields._current[1].monitor,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<IGFGDDANEPE>_Dispose__);
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
    pAVar2 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar2 != (ACHLOMELAJE_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar2,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

