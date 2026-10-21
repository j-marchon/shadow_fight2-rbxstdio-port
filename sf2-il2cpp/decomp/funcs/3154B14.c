// OAFGMIGFHAD$$PKIFMKGDJJN @ RVA 0x3154B14

void OAFGMIGFHAD__PKIFMKGDJJN(OAFGMIGFHAD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *__this_00;
  LCKCDEKNLOA_o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456682a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    DAT_0456682a = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  BOFEMGGNODC__PKIFMKGDJJN((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields).OBHHHJLOHOE;
  if (__this_00 != (System_Collections_Generic_List_OAFGMIGFHAD_OOCCJAADPDK__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<OAFGMIGFHAD_OOCCJAADPDK>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_MoveNext__
                        );
      if (!bVar1) break;
      if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (local_38.fields._current[1].monitor == (LCKCDEKNLOA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      LCKCDEKNLOA__DMLKEJNDODN(local_38.fields._current[1].monitor,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<OAFGMIGFHAD_OOCCJAADPDK>_Dispose__)
    ;
    __this_01 = (__this->fields).IPOMGFKGCFL;
    if (__this_01 != (LCKCDEKNLOA_o *)0x0) {
      LCKCDEKNLOA__DMLKEJNDODN(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

