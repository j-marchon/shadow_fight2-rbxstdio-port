// Nekki.SF2.GUI.Fight.EndFightScreen$$CBNCGMBFHLN @ RVA 0x2FEFA28

bool Nekki_SF2_GUI_Fight_EndFightScreen__CBNCGMBFHLN
               (Nekki_SF2_GUI_Fight_EndFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *__this_00;
  System_String_o *__this_01;
  MethodInfo *extraout_x1;
  char *pcVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04565a62 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
    FUN_01bab630(&StringLiteral_6545);
    DAT_04565a62 = 1;
    method = extraout_x1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DIELINNGEBJ;
  if (__this_00 == (System_Collections_Generic_List_IGPDCHBJAPD_AKGCHFPLJEC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IGPDCHBJAPD_AKGCHFPLJEC>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_MoveNext__
                      );
    if (!bVar1) {
      iVar4 = 5;
      goto LAB_030efb2c;
    }
    if (local_50.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_50.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pcVar3 = ((local_50.fields._current[1].klass)->_1).name;
    if (pcVar3 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = *(System_String_o **)(pcVar3 + 0x18);
    if (__this_01 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__StartsWith(__this_01,StringLiteral_6545,5,(MethodInfo *)0x0);
  } while (!bVar2);
  iVar4 = 4;
LAB_030efb2c:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<IGPDCHBJAPD_AKGCHFPLJEC>_Dispose__);
  return bVar1 && iVar4 == 4;
}

