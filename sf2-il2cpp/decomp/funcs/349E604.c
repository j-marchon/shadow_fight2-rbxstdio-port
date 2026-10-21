// Nekki.SF2.GUI.Map.MapPanel$$AddStoryZones @ RVA 0x349E604

void Nekki_SF2_GUI_Map_MapPanel__AddStoryZones
               (Nekki_SF2_GUI_Map_MapPanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MEJIKMPNBNL__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456847e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_8832);
    DAT_0456847e = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((__this->fields)._LGKLAOCDMGF_k__BackingField != false) {
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
    }
    UnityEngine_Debug__LogError(StringLiteral_8832,(MethodInfo *)0x0);
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = NLPJLHOEAOE__BLNDKLMBIPN((MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_MEJIKMPNBNL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MEJIKMPNBNL>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_Map_MapPanel__HPKGLFMFKPI
                (__this,(MEJIKMPNBNL_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<MEJIKMPNBNL>_Dispose__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

