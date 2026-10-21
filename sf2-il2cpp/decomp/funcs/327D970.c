// OCMLPCKBHPN$$CAIPAMALMGH @ RVA 0x327D970

void OCMLPCKBHPN__CAIPAMALMGH
               (int32_t ACCIHBHMFPN,System_String_o *OMCIHAGAIJK,
               System_Text_StringBuilder_o *KHHGPLOMHBB,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_String_o *pSVar3;
  OCMLPCKBHPN_c *method_00;
  System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
  *__this;
  System_Collections_Generic_List_object__o *__this_00;
  void *pvVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567270 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_get_Item__
                );
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    FUN_01bab630(&StringLiteral_267);
    FUN_01bab630(&StringLiteral_175);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_171);
    DAT_04567270 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (KHHGPLOMHBB != (System_Text_StringBuilder_o *)0x0) {
    pSVar3 = System_String__Concat
                       (StringLiteral_171,OMCIHAGAIJK,StringLiteral_2086,(MethodInfo *)0x0);
    System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar3,(MethodInfo *)0x0);
  }
  method_00 = OCMLPCKBHPN_TypeInfo;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (OCMLPCKBHPN_c *)thunk_FUN_01ba7564();
  }
  __this = OCMLPCKBHPN__EANLCKFPOAH((MethodInfo *)method_00);
  if ((__this != (System_Collections_Generic_List_List_MGNDHCBAPEN_KJFHBENFBBO__MGNDHCBAPEN_string__string_____o
                  *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this,ACCIHBHMFPN,
                             Method_System_Collections_Generic_List<List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>>_get_Item__
                            ), __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,__this_00,
               Method_System_Collections_Generic_List<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_GetEnumerator__
              );
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_MoveNext__
                        );
      pIVar1 = local_60.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<MGNDHCBAPEN<KJFHBENFBBO,_MGNDHCBAPEN<string,_string>>>_Dispose__
                  );
        return;
      }
      if (local_60.fields._current == (Il2CppObject *)0x0) break;
      if (local_60.fields._current[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      KJFHBENFBBO__IELLPMCIHBD((KJFHBENFBBO_o *)local_60.fields._current[1].klass,(MethodInfo *)0x0)
      ;
      if (KHHGPLOMHBB != (System_Text_StringBuilder_o *)0x0) {
        if (pIVar1[1].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = KJFHBENFBBO__OBECCOPBADO((KJFHBENFBBO_o *)pIVar1[1].klass,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = System_String__Concat(OMCIHAGAIJK,StringLiteral_267,(MethodInfo *)0x0);
          pvVar4 = pIVar1[1].monitor;
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar3 = System_String__Format
                             (pSVar3,*(Il2CppObject **)((long)pvVar4 + 0x10),
                              *(Il2CppObject **)((long)pvVar4 + 0x18),(MethodInfo *)0x0);
          System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar3,(MethodInfo *)0x0);
        }
        else {
          pvVar4 = pIVar1[1].monitor;
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pSVar3 = System_String__Format
                             (StringLiteral_175,*(Il2CppObject **)((long)pvVar4 + 0x10),
                              *(Il2CppObject **)((long)pvVar4 + 0x18),(MethodInfo *)0x0);
          System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,pSVar3,(MethodInfo *)0x0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

