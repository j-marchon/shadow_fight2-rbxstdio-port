// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$KBKOLEJMGAB @ RVA 0x35CF31C

System_String_o *
Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__KBKOLEJMGAB
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  System_Text_StringBuilder_o *__this_01;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_String_o *pSVar4;
  MethodInfo *extraout_x1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_68;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_50;
  
  if ((DAT_04568fca & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_1154);
    DAT_04568fca = 1;
    method = extraout_x1;
  }
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._currentValue = (Il2CppObject *)0x0;
  __this_01 = (System_Text_StringBuilder_o *)
              thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo,method);
  System_Text_StringBuilder___ctor(__this_01,0x10,(MethodInfo *)0x0);
  __this_02 = (__this->fields).PEIHFKHLGMO;
  if ((__this_02 !=
       (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0) &&
     (__this_03 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                             Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Values__
                            ),
     __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<Int32Enum,_object>__GetEnumerator
              (&local_68,__this_03,
               Method_System_Collections_Generic_Dictionary_ValueCollection<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
              );
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._dictionary = local_68.fields._dictionary;
    local_50.fields._currentValue = local_68.fields._currentValue;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                        );
      __this_00 = local_50.fields._currentValue;
      if (!bVar1) break;
      if (__this_01 == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = System_Text_StringBuilder__get_Length(__this_01,(MethodInfo *)0x0);
      if (0 < iVar2) {
        System_Text_StringBuilder__Append(__this_01,StringLiteral_1154,(MethodInfo *)0x0);
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__GetItemsCount
                        ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00
                         ,(MethodInfo *)0x0);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      System_Text_StringBuilder__Append(__this_01,iVar3 >> 1,(MethodInfo *)0x0);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__Dispose
              (&local_50,
               Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
              );
    if (__this_01 != (System_Text_StringBuilder_o *)0x0) {
      pSVar4 = (System_String_o *)
               (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                         (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

