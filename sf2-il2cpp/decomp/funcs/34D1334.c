// BBBBKBBFNOG$$CCHJODGDDAI @ RVA 0x34D1334

float BBBBKBBFNOG__CCHJODGDDAI(System_String_o *AJBDHHOLPMM,MethodInfo *method)

{
  ulong uVar1;
  bool bVar2;
  System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *__this;
  MethodInfo *extraout_x1;
  float fVar3;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  ulong uStack_58;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  ulong local_38;
  
  if ((DAT_045686bd & 1) == 0) {
    FUN_01bab630(&BBBBKBBFNOG_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_GetEnumerator__);
    DAT_045686bd = 1;
    method = extraout_x1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38 = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  if ((BBBBKBBFNOG_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(BBBBKBBFNOG_TypeInfo,method);
  }
  __this = BBBBKBBFNOG_TypeInfo->static_fields->IPLLKLOKOFL;
  if (__this == (System_Collections_Generic_List_BBBBKBBFNOG_BENGKNHAMMA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>__GetEnumerator
            (&local_70,__this,
             Method_System_Collections_Generic_List<BBBBKBBFNOG_BENGKNHAMMA>_GetEnumerator__);
  local_50.fields._index = local_70.fields._index;
  local_50.fields._version = local_70.fields._version;
  local_50.fields._list = local_70.fields._list;
  local_38 = uStack_58;
  local_50.fields._current = local_70.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_MoveNext__
                      );
    uVar1 = local_38;
    if (!bVar2) {
      fVar3 = 0.0;
      goto LAB_035d1434;
    }
  } while (((local_38 & 1) == 0) ||
          (bVar2 = System_String__op_Inequality
                             (AJBDHHOLPMM,(System_String_o *)local_50.fields._current,
                              (MethodInfo *)0x0), bVar2));
  fVar3 = (float)(uVar1 >> 0x20);
LAB_035d1434:
  System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>__Dispose
            (&local_50,
             Method_System_Collections_Generic_List_Enumerator<BBBBKBBFNOG_BENGKNHAMMA>_Dispose__);
  return fVar3;
}

