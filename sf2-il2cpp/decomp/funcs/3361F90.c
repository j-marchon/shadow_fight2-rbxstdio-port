// MMDDDDFHOLG$$EHNHAAPBCJG @ RVA 0x3361F90

void MMDDDDFHOLG__EHNHAAPBCJG(MMDDDDFHOLG_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EHCCNKFIPPA__o *__this_00;
  System_Action_PHDCILJMEHO__o **ppSVar2;
  MethodInfo *extraout_x1;
  Il2CppClass *__this_01;
  System_Action_PHDCILJMEHO__o *action;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04567a8a & 1) == 0) {
    FUN_01bab630(&System_Action<PHDCILJMEHO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_ForEach__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
    FUN_01bab630(&Method_MMDDDDFHOLG_<>c_JEKBLOJCCMO__);
    FUN_01bab630(&MMDDDDFHOLG_<>c_TypeInfo);
    DAT_04567a8a = 1;
    method = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).PNGAKAPODKB;
  if (__this_00 == (System_Collections_Generic_List_EHCCNKFIPPA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<EHCCNKFIPPA>_GetEnumerator__);
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<EHCCNKFIPPA>_Dispose__)
      ;
      return;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) break;
    __this_01 = local_70.fields._current[2].klass;
    if ((MMDDDDFHOLG_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MMDDDDFHOLG_<>c_TypeInfo);
    }
    action = MMDDDDFHOLG_<>c_TypeInfo->static_fields->__9__25_0;
    if (action == (System_Action_PHDCILJMEHO__o *)0x0) {
      if ((MMDDDDFHOLG_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MMDDDDFHOLG_<>c_TypeInfo);
      }
      action = (System_Action_PHDCILJMEHO__o *)
               thunk_FUN_01bda818(System_Action<PHDCILJMEHO>_TypeInfo);
      System_Action<object>___ctor();
      ppSVar2 = &MMDDDDFHOLG_<>c_TypeInfo->static_fields->__9__25_0;
      *ppSVar2 = action;
      thunk_FUN_01c20e04(ppSVar2,action);
    }
    if (__this_01 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__ForEach
              ((System_Collections_Generic_List_object__o *)__this_01,(System_Action_T__o *)action,
               Method_System_Collections_Generic_List<PHDCILJMEHO>_ForEach__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

