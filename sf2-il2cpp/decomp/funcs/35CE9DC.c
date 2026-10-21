// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$MHCOALIEGPE @ RVA 0x35CE9DC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__MHCOALIEGPE
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *__this_00;
  bool bVar2;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this_03;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  float DCJJPCIHILE;
  float LOJINJPNGHH;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_c8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_a0;
  
  if ((DAT_04568fc6 & 1) == 0) {
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
                 Method_System_Collections_Generic_KeyValuePair<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<DFHAHEOKHFA,_ClanLogoAttributeContainer>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo);
    DAT_04568fc6 = 1;
    method = extraout_x1;
  }
  local_a0.fields._getEnumeratorRetType = 0;
  local_a0.fields._36_4_ = 0;
  local_a0.fields._version = 0;
  local_a0.fields._index = 0;
  local_a0.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a0.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a0.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).PEIHFKHLGMO;
  if (__this_01 !=
      (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_c8,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
               Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_GetEnumerator__
              );
    local_a0.fields._version = local_c8.fields._version;
    local_a0.fields._index = local_c8.fields._index;
    local_a0.fields._dictionary = local_c8.fields._dictionary;
    local_a0.fields._current.fields.value = local_c8.fields._current.fields.value;
    local_a0.fields._current.fields.key = local_c8.fields._current.fields.key;
    local_a0.fields._getEnumeratorRetType = local_c8.fields._getEnumeratorRetType;
    local_a0.fields._36_4_ = local_c8.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                        (&local_a0,
                         Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_MoveNext__
                        );
      __this_00 = local_a0.fields._current.fields.value;
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
                  (&local_a0,
                   Method_System_Collections_Generic_Dictionary_Enumerator<DFHAHEOKHFA,_ClanLogoAttributeContainer>_Dispose__
                  );
        return;
      }
      iVar1 = (int)local_a0.fields._current.fields.key;
      __this_02 = (System_Collections_Generic_List_object__o *)
                  thunk_FUN_01bda818(System_Collections_Generic_List<IILNJJJFGLL>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (__this_02,Method_System_Collections_Generic_List<IILNJJJFGLL>__ctor__);
      LOJINJPNGHH = 1.0;
      if (iVar1 == 0) {
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__CKKHBODNDAD
                  (__this_03,(System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,in_x2);
        DCJJPCIHILE = 0.62;
      }
      else if (iVar1 == 1) {
        LOJINJPNGHH = 1.25;
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__DDBNGGDJOPK
                  (__this_03,(System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,in_x2);
        DCJJPCIHILE = 0.7;
      }
      else {
        LOJINJPNGHH = 1.0;
        DCJJPCIHILE = 0.6;
        if (iVar1 == 2) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__NDEMAGDMIEB
                    (__this_03,(System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,in_x2);
          LOJINJPNGHH = 0.81;
          DCJJPCIHILE = 0.59;
        }
      }
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00 ==
          (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) break;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetFocusesScales
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00,
                 LOJINJPNGHH,DCJJPCIHILE,(MethodInfo *)0x0);
      in_x2 = (MethodInfo *)0x0;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__SetItems
                ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)__this_00,
                 (System_Collections_Generic_List_IILNJJJFGLL__o *)__this_02,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

