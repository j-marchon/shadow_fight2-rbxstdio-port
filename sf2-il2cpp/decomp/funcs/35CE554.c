// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$SetEditEnabled @ RVA 0x35CE554

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__SetEditEnabled
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04568fc2 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Value__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568fc2 = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEIHFKHLGMO;
  if (__this_01 !=
      (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
              );
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                          );
        __this_00 = local_60.fields._current.fields.value;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
                    (&local_60,
                     Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                    );
                    /* try { // try from 036ce670 to 037ce673 has its CatchHandler @ 036ce678 */
                    /* try { // try from 036ce674 to 037ce693 has its CatchHandler @ 036ce2ec */
          return;
        }
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0)
        ;
      } while (!bVar1);
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) break;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetEnabled
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00,
                 CJNHFNHJHPE,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ce670 with catch @ 036ce678
                        */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036ce4f0 with catch @ 036ce67c
                        */
  FUN_01bab8c8();
}

