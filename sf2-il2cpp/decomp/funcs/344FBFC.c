// Nekki.SF2.GUI.Dialogs.Raids.Clans.ClanProfileWidget$$HHHKCKLPENH @ RVA 0x344FBFC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__HHHKCKLPENH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *__this,
               Nekki_SF2_GUI_Scripts_EditBox_o *KNJOEBANLFJ,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *__this_01;
  UnityEngine_Transform_o *transform;
  float fVar3;
  float value;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_0456829d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<BBJBEEEJPDC,_EditBox>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<BBJBEEEJPDC,_EditBox>_get_Value__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_1567);
    DAT_0456829d = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).NOLPECJJJPE;
  if (__this_00 != (System_Collections_Generic_Dictionary_BBJBEEEJPDC__EditBox__o *)0x0) {
    System_Collections_Generic_Dictionary<Int32Enum,_object>__GetEnumerator
              (&local_88,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_EditBox>_GetEnumerator__);
    local_60.fields._version = local_88.fields._version;
    local_60.fields._index = local_88.fields._index;
    local_60.fields._dictionary = local_88.fields._dictionary;
    local_60.fields._current.fields.value = local_88.fields._current.fields.value;
    local_60.fields._current.fields.key = local_88.fields._current.fields.key;
    local_60.fields._getEnumeratorRetType = local_88.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_88.fields._36_4_;
    while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_MoveNext__
                             ), bVar2) {
      if ((Nekki_SF2_GUI_Scripts_EditBox_o *)local_60.fields._current.fields.value == KNJOEBANLFJ) {
        (__this->fields).CHHEFFAKHDB = (int32_t)local_60.fields._current.fields.key;
      }
      else {
        if ((Nekki_SF2_GUI_Scripts_EditBox_o *)local_60.fields._current.fields.value ==
            (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        method = (MethodInfo *)0x0;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)local_60.fields._current.fields.value,false,
                   (MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_object>__Dispose
              (&local_60,
               Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_EditBox>_Dispose__
              );
    if ((__this->fields).CHHEFFAKHDB == 3) {
      __this_01 = Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__BJFDEENANED(__this,3,method);
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (__this_01 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0354fe00;
        bVar2 = System_String__op_Equality
                          ((__this_01->fields).super.m_Text,StringLiteral_1567,(MethodInfo *)0x0);
        if (bVar2) {
          UnityEngine_UI_InputField__set_text
                    ((UnityEngine_UI_InputField_o *)__this_01,StringLiteral_1,(MethodInfo *)0x0);
        }
      }
    }
    transform = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    iVar1 = (__this->fields).CHHEFFAKHDB;
    fVar3 = 600.0;
    if (iVar1 != 3) {
      fVar3 = 0.0;
    }
    value = 300.0;
    if (iVar1 != 2) {
      value = fVar3;
    }
    UnityEngine_TransformExtensions__AddLocalPositionY(transform,value,(MethodInfo *)0x0);
    return;
  }
LAB_0354fe00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

