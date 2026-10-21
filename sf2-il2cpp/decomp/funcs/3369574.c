// MDFGJKBMECA$$KFDPGIEJLEC @ RVA 0x3369574

bool MDFGJKBMECA__KFDPGIEJLEC(System_String_o *PHDDFFIECEI,float *KGAENKKEEPK,MethodInfo *method)

{
  undefined8 uVar1;
  bool bVar2;
  System_Collections_Generic_List_ValueTuple_string__float___o *__this;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  undefined8 uStack_38;
  
  if ((DAT_04567ad6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ValueTuple<string,_float>>_GetEnumerator__)
    ;
    FUN_01bab630(&MDFGJKBMECA_TypeInfo);
    DAT_04567ad6 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  uStack_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((MDFGJKBMECA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = MDFGJKBMECA_TypeInfo->static_fields->GPFEMKDLJEK;
  if (__this == (System_Collections_Generic_List_ValueTuple_string__float___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<ValueTuple<object,_float>>__GetEnumerator
            (&local_50,(System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<ValueTuple<string,_float>>_GetEnumerator__);
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<ValueTuple<object,_float>>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_MoveNext__
                      );
    uVar1 = uStack_38;
    if (!bVar2) goto LAB_03469674;
    if (PHDDFFIECEI == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__Contains
                      (PHDDFFIECEI,(System_String_o *)local_50.fields._current,(MethodInfo *)0x0);
  } while (!bVar2);
  if (*KGAENKKEEPK <= (float)uVar1) {
LAB_03469674:
    bVar2 = true;
  }
  else {
    bVar2 = false;
    *KGAENKKEEPK = (float)uVar1;
  }
  System_Collections_Generic_List_Enumerator<ValueTuple<object,_float>>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_float>>_Dispose__)
  ;
  return bVar2;
}

