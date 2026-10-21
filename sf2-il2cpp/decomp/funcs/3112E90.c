// PCKJEMMFMKL$$OPLEDDDGDPE @ RVA 0x3112E90

void PCKJEMMFMKL__OPLEDDDGDPE(PCKJEMMFMKL_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *__this_00;
  MethodInfo *extraout_x1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04566592 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_get_Value__
                );
    DAT_04566592 = 1;
    method = extraout_x1;
  }
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).CDMELACPLKK;
  if (__this_00 !=
      (System_Collections_Generic_Dictionary_MPAKDCNMLEG__PCKJEMMFMKL_OMJBBKMFKIJ__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_50,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_GetEnumerator__
              );
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_MoveNext__
                        );
      pIVar1 = local_50.fields._current.fields.value;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<MPAKDCNMLEG,_PCKJEMMFMKL_OMJBBKMFKIJ>_Dispose__
                  );
        return;
      }
      CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
              CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
      if (pIVar1 == (Il2CppObject *)0x0) break;
      *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 2) = CVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

