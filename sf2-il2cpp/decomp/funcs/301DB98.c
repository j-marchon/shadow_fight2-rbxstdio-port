// Nekki.SF2.GUI.Profile.ItemsController$$UpdateCellsState @ RVA 0x301DB98

void Nekki_SF2_GUI_Profile_ItemsController__UpdateCellsState
               (Nekki_SF2_GUI_Profile_ItemsController_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar3;
  Nekki_SF2_GUI_TableView_o *pNVar4;
  KELJDKIIHMM_o *pKVar5;
  Il2CppClass *pIVar6;
  undefined1 auVar7 [16];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_78;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_50;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04565c25 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Value__);
    auVar7 = FUN_01bab630(&Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo);
    DAT_04565c25 = 1;
  }
  uVar3 = auVar7._0_8_;
  local_50.fields._getEnumeratorRetType = 0;
  local_50.fields._36_4_ = 0;
  local_50.fields._version = 0;
  local_50.fields._index = 0;
  local_50.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_50.fields._current.fields.value = (Il2CppObject *)0x0;
  local_50.fields._current.fields.key = (Il2CppObject *)0x0;
  pNVar4 = (__this->fields)._TableView;
  if (((pNVar4 != (Nekki_SF2_GUI_TableView_o *)0x0) &&
      (pKVar5 = (pNVar4->fields)._LBHOKEBOIFN_k__BackingField, pKVar5 != (KELJDKIIHMM_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (pKVar5->fields)._IKBFEDMFOMJ_k__BackingField, uVar3 = 0,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_78,__this_00,
               Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
    local_50.fields._version = local_78.fields._version;
    local_50.fields._index = local_78.fields._index;
    local_50.fields._dictionary = local_78.fields._dictionary;
    local_50.fields._current.fields.value = local_78.fields._current.fields.value;
    local_50.fields._current.fields.key = local_78.fields._current.fields.key;
    local_50.fields._getEnumeratorRetType = local_78.fields._getEnumeratorRetType;
    local_50.fields._36_4_ = local_78.fields._36_4_;
    while( true ) {
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                        );
      if (!bVar2) {
        System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                  );
        return;
      }
      if (local_50.fields._current.fields.value == (Il2CppObject *)0x0) break;
      pIVar6 = (local_50.fields._current.fields.value)->klass;
      bVar1 = (Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_Profile_ProfileCell_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64();
      }
      (*pIVar6->vtable[0x10].methodPtr)
                (local_50.fields._current.fields.value,pIVar6->vtable[0x10].method);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar7._8_8_);
}

