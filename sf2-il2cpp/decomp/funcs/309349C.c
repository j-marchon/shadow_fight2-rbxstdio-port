// Nekki.SF2.GUI.GeneralMenu.StoryItemText$$MBJANJJBMHC @ RVA 0x309349C

float Nekki_SF2_GUI_GeneralMenu_StoryItemText__MBJANJJBMHC
                (Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *__this,System_Xml_XmlNode_o *KOHKKIKJLHB
                ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  MethodInfo *in_x3;
  float fVar4;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a0;
  
  if ((DAT_045660b9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_float>_get_Value__);
    FUN_01bab630(&StringLiteral_15256);
    FUN_01bab630(&StringLiteral_15255);
    FUN_01bab630(&StringLiteral_15243);
    FUN_01bab630(&StringLiteral_15251);
    FUN_01bab630(&StringLiteral_15247);
    FUN_01bab630(&StringLiteral_15241);
    FUN_01bab630(&StringLiteral_15238);
    FUN_01bab630(&StringLiteral_15257);
    FUN_01bab630(&StringLiteral_15245);
    FUN_01bab630(&StringLiteral_15249);
    DAT_045660b9 = 1;
  }
  local_a0.fields._getEnumeratorRetType = 0;
  local_a0.fields._36_4_ = 0;
  local_a0.fields._version = 0;
  local_a0.fields._index = 0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a0.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_float>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_float>___ctor
            (__this_00,Method_System_Collections_Generic_Dictionary<string,_float>__ctor__);
  if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15238,2.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15241,3.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15243,4.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15245,5.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15247,6.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15251,7.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15249,7.1,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15257,7.2,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15256,7.3,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__Add
            (__this_00,StringLiteral_15255,8.0,
             Method_System_Collections_Generic_Dictionary<string,_float>_Add__);
  System_Collections_Generic_Dictionary<object,_float>__GetEnumerator
            (&local_a0,__this_00,
             Method_System_Collections_Generic_Dictionary<string,_float>_GetEnumerator__);
  fVar4 = 1.0;
  while( true ) {
    bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_float>__MoveNext
                      (&local_a0,
                       Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_MoveNext__
                      );
    pIVar1 = local_a0.fields._current.fields.value;
    if (!bVar2) break;
    iVar3 = Nekki_SF2_GUI_GeneralMenu_StoryItemText__LGJBNGHJBII
                      ((Nekki_SF2_GUI_GeneralMenu_StoryItemText_o *)(ulong)bVar2,KOHKKIKJLHB,
                       (System_String_o *)local_a0.fields._current.fields.key,in_x3);
    if (0 < iVar3) {
      fVar4 = SUB84(pIVar1,0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator<object,_float>__Dispose
            (&local_a0,
             Method_System_Collections_Generic_Dictionary_Enumerator<string,_float>_Dispose__);
  return fVar4;
}

