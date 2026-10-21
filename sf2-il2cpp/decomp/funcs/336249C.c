// MMDDDDFHOLG$$HNBACDMIHHO @ RVA 0x336249C

System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *
MMDDDDFHOLG__HNBACDMIHHO(System_String_o *BCAEOEOGHLP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *local_28;
  
  if ((DAT_04567a8e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_TryGetValue__
                );
    FUN_01bab630(&MMDDDDFHOLG_TypeInfo);
    DAT_04567a8e = 1;
    method = extraout_x1;
  }
  local_28 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0;
  if ((MMDDDDFHOLG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MMDDDDFHOLG_TypeInfo,method);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           MMDDDDFHOLG_TypeInfo->static_fields->NELMGPHMBAN;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)BCAEOEOGHLP,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<MMDDDDFHOLG_DOCBHLNBECF>>_TryGetValue__
                      );
    if (!bVar1) {
      local_28 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)0x0;
    }
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

