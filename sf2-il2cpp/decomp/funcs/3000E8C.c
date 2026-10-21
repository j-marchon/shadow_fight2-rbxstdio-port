// CAAJMGKIPIE$$DGOPOPEDMIG @ RVA 0x3000E8C

float CAAJMGKIPIE__DGOPOPEDMIG
                (CAAJMGKIPIE_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,FHHDFKADHEI_o *OKBIKHHKOEN,
                MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *__this_00;
  Il2CppClass *a;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04565b29 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_1);
    DAT_04565b29 = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NAHLKNEFLAA;
  if (__this_00 == (System_Collections_Generic_List_MGNDHCBAPEN_string__OBOBEOMMECI___o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_OBOBEOMMECI>>_GetEnumerator__
            );
  local_70.fields._index = local_88.fields._index;
  local_70.fields._version = local_88.fields._version;
  local_70.fields._list = local_88.fields._list;
  local_70.fields._current = local_88.fields._current;
  while( true ) {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_70,
                       Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_MoveNext__
                      );
    pIVar1 = local_70.fields._current;
    if (!bVar2) {
      fVar3 = 0.0;
      goto LAB_03100fc0;
    }
    if (local_70.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    a = local_70.fields._current[1].klass;
    bVar2 = System_String__op_Equality((System_String_o *)a,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar2) break;
    if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = ECENNHNBAME__CBJGGDFAACP(NLEBDPHNIDI,(System_String_o *)a,(MethodInfo *)0x0);
    if (bVar2) {
LAB_03100fa4:
      if (pIVar1[1].monitor == (OBOBEOMMECI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar3 = OBOBEOMMECI__PPOKEOHAHFG
                        (pIVar1[1].monitor,OKBIKHHKOEN,(NLEBDPHNIDI->fields).JIJLBFGKNJK,
                         (MethodInfo *)0x0);
LAB_03100fc0:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<string,_OBOBEOMMECI>>_Dispose__
                );
      return fVar3;
    }
  }
  if (NLEBDPHNIDI == (ECENNHNBAME_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  goto LAB_03100fa4;
}

