// Nekki.SF2.GUI.Profile.SealsController$$EHPMHOHOPGA @ RVA 0x311E0D8

void Nekki_SF2_GUI_Profile_SealsController__EHPMHOHOPGA
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,
               Nekki_SF2_GUI_TableViewCell_o *AHICPBEJIKJ,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_02;
  Nekki_SF2_GUI_TableView_o *pNVar3;
  KELJDKIIHMM_o *pKVar4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04566609 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Profile_SealsTableViewCell_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_Invoke__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
    DAT_04566609 = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)AHICPBEJIKJ,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  Nekki_SF2_GUI_Profile_ItemsController__EHPMHOHOPGA
            ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,AHICPBEJIKJ,(MethodInfo *)0x0);
  if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_Profile_SealsTableViewCell_TypeInfo->_2).naturalAligment;
    if (((AHICPBEJIKJ->klass->_2).naturalAligment < bVar1) ||
       ((AHICPBEJIKJ->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)Nekki_SF2_GUI_Profile_SealsTableViewCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(AHICPBEJIKJ);
    }
  }
  __this_00 = (__this->fields)._OnCellSelected;
  if (__this_00 != (Nekki_SF2_GUI_Profile_SealsController_KEEJFFPGHMN_o *)0x0) {
    UnityEngine_Events_UnityEvent<object>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)AHICPBEJIKJ,
               Method_UnityEngine_Events_UnityEvent<SealsTableViewCell>_Invoke__);
    pNVar3 = (__this->fields).super._TableView;
    if ((((pNVar3 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
         (pKVar4 = (pNVar3->fields)._LBHOKEBOIFN_k__BackingField, pKVar4 != (KELJDKIIHMM_o *)0x0))
        && (__this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
                        (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField,
           __this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
       (__this_02 = System_Collections_Generic_Dictionary<int,_object>__get_Values
                              (__this_01,
                               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_get_Values__
                              ),
       __this_02 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
      System_Collections_Generic_Dictionary_ValueCollection<int,_object>__GetEnumerator
                (&local_48,__this_02,
                 Method_System_Collections_Generic_Dictionary_ValueCollection<int,_TableViewCell>_GetEnumerator__
                );
      while (bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__MoveNext
                               (&local_48,
                                Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_MoveNext__
                               ), bVar2) {
        if (local_48.fields._currentValue == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        (*(local_48.fields._currentValue)->klass->vtable[0xc].methodPtr)
                  (0x3f000000,local_48.fields._currentValue,
                   (local_48.fields._currentValue)->klass->vtable[0xc].method);
      }
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int,_TableViewCell>_Dispose__
                );
      if (AHICPBEJIKJ != (Nekki_SF2_GUI_TableViewCell_o *)0x0) {
        (*(AHICPBEJIKJ->klass->vtable)._12_set_Opacity.methodPtr)
                  (0x3f800000,AHICPBEJIKJ,(AHICPBEJIKJ->klass->vtable)._12_set_Opacity.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

