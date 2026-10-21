// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$MFIOONIHDLJ @ RVA 0x344FF44

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__MFIOONIHDLJ
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_01;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_02;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_38;
  
  if ((DAT_0456829f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_get_Current__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<BBJBEEEJPDC,_EditBox>_GetEnumerator__
                );
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456829f = 1;
  }
  local_38.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._currentValue = (Il2CppObject *)0x0;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__set_localPosition
              (__this_00,(UnityEngine_Vector3_o)(__this->fields).NOBBLGAGPIJ.fields,
               (MethodInfo *)0x0);
    if ((__this->fields).CHHEFFAKHDB == 3) {
      __this_01 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BJFDEENANED(__this,3,method);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if (__this_01 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_035500ec;
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this_01->fields).super.m_Text,(MethodInfo *)0x0);
        if (bVar1) {
          UnityEngine_UI_InputField__set_text
                    ((UnityEngine_UI_InputField_o *)__this_01,StringLiteral_1567,(MethodInfo *)0x0);
        }
      }
    }
    __this_02 = (__this->fields).NOLPECJJJPE;
    (__this->fields).CHHEFFAKHDB = -1;
    if ((__this_02 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) &&
       (__this_03 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Values
                              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_get_Values__
                              ),
       __this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<Int32Enum,_object>__GetEnumerator
                (&local_38,__this_03,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<BBJBEEEJPDC,_EditBox>_GetEnumerator__
                );
      while( true ) {
        bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                          );
        if (!bVar1) {
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator<Int32Enum,_object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
                    );
          return;
        }
        if ((UnityEngine_UI_Selectable_o *)local_38.fields._currentValue ==
            (UnityEngine_UI_Selectable_o *)0x0) break;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)local_38.fields._currentValue,true,
                   (MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
LAB_035500ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

