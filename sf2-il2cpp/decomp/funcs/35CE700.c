// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanLogoMakerWidget$$Init @ RVA 0x35CE700

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_o *__this,
               System_Action_string__o *JFMGOBJICBG,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  System_Action_string__o **ppSVar2;
  System_Collections_Generic_List_ClanLogoAttributeContainer__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *__this_01;
  System_Action_DFHAHEOKHFA__o *DHIFOFDENGG;
  Il2CppObject *value;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_StaticFields *pNVar4;
  int index;
  System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  
  if ((DAT_04568fc3 & 1) == 0) {
    FUN_01bab630(&System_Action<DFHAHEOKHFA>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_EHKNJIHNOGA__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_set_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_GetEnumerator__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_get_Item__);
    FUN_01bab630(&StringLiteral_19343);
    DAT_04568fc3 = 1;
  }
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._title;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,StringLiteral_19343,(MethodInfo *)0x0);
    ppSVar2 = &(__this->fields).MGDFLOOAIIC;
    *ppSVar2 = JFMGOBJICBG;
    thunk_FUN_01c20e04(ppSVar2,JFMGOBJICBG);
    index = 0;
    do {
      pSVar3 = (__this->fields)._containers;
      if (pSVar3 == (System_Collections_Generic_List_ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      __this_01 = (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar3,index,
                             Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_get_Item__
                            );
      DHIFOFDENGG = (System_Action_DFHAHEOKHFA__o *)
                    thunk_FUN_01bda818(System_Action<DFHAHEOKHFA>_TypeInfo);
      System_Action<Int32Enum>___ctor();
      if (__this_01 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0)
      goto LAB_036ce958;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__Init
                (__this_01,index,DHIFOFDENGG,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._containers;
      if (pSVar3 == (System_Collections_Generic_List_ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      __this_02 = (__this->fields).PEIHFKHLGMO;
      value = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar3,index,
                         Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_get_Item__
                        );
      if (__this_02 ==
          (System_Collections_Generic_Dictionary_DFHAHEOKHFA__ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      System_Collections_Generic_Dictionary<Int32Enum,_object>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,index,value,
                 Method_System_Collections_Generic_Dictionary<DFHAHEOKHFA,_ClanLogoAttributeContainer>_set_Item__
                );
      index = index + 1;
    } while (index != 3);
    Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget__MHCOALIEGPE(__this,method_00);
    if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->static_fields;
    if (pNVar4->OAABDANOODA != false) {
      if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->_2).cctor_finished == 0)
      {
        thunk_FUN_01ba7564();
        pNVar4 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoMakerWidget_TypeInfo->static_fields;
      }
      pNVar4->OAABDANOODA = false;
      pSVar3 = (__this->fields)._containers;
      if (pSVar3 == (System_Collections_Generic_List_ClanLogoAttributeContainer__o *)0x0)
      goto LAB_036ce958;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<ClanLogoAttributeContainer>_GetEnumerator__)
      ;
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_78,
                                Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_MoveNext__
                               ), bVar1) {
        if ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
            local_78.fields._current ==
            (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer__ForceInvokeOnScroll
                  ((Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanLogoAttributeContainer_o *)
                   local_78.fields._current,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_78,
                 Method_System_Collections_Generic_List_Enumerator<ClanLogoAttributeContainer>_Dispose__
                );
    }
    return;
  }
LAB_036ce958:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

