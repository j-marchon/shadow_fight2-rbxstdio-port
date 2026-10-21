// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$IAOGDACAFKH @ RVA 0x353F788

bool Nekki_SF2_GUI_Dialogs_Raids_InputDialog__IAOGDACAFKH
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,
               System_Collections_Generic_Dictionary_Func_string__bool___string__o *IOEBMGEBMOM,
               MethodInfo *method)

{
  Il2CppObject *CJNHFNHJHPE;
  bool bVar1;
  ulong uVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_88;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if ((DAT_04568aeb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<Func<string,_bool>,_string>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<Func<string,_bool>,_string>_get_Value__
                );
    DAT_04568aeb = 1;
  }
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  if (IOEBMGEBMOM == (System_Collections_Generic_Dictionary_Func_string__bool___string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
            (&local_88,(System_Collections_Generic_Dictionary_object__object__o *)IOEBMGEBMOM,
             Method_System_Collections_Generic_Dictionary<Func<string,_bool>,_string>_GetEnumerator__
            );
  local_60.fields._version = local_88.fields._version;
  local_60.fields._index = local_88.fields._index;
  local_60.fields._dictionary = local_88.fields._dictionary;
  local_60.fields._current.fields.value = local_88.fields._current.fields.value;
  local_60.fields._current.fields.key = local_88.fields._current.fields.key;
  local_60.fields._getEnumeratorRetType = local_88.fields._getEnumeratorRetType;
  local_60.fields._36_4_ = local_88.fields._36_4_;
  do {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                      (&local_60,
                       Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_MoveNext__
                      );
    CJNHFNHJHPE = local_60.fields._current.fields.value;
    if (!bVar1) {
      iVar5 = 5;
      goto LAB_0363f8ec;
    }
    pNVar4 = (__this->fields)._editBox;
    if (pNVar4 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (local_60.fields._current.fields.key == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = (*local_60.fields._current.fields.key[1].monitor)
                      (local_60.fields._current.fields.key[4].klass,(pNVar4->fields).super.m_Text,
                       local_60.fields._current.fields.key[2].monitor);
  } while ((uVar2 & 1) != 0);
  pNVar3 = (__this->fields)._error;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,(System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._error;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0,0,0x3f800000,pNVar3,(pNVar3->klass->vtable)._23_set_color.method);
  pNVar3 = (__this->fields)._error;
  if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  iVar5 = 4;
LAB_0363f8ec:
  System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
            (&local_60,
             Method_System_Collections_Generic_Dictionary_Enumerator<Func<string,_bool>,_string>_Dispose__
            );
  return iVar5 != 4;
}

