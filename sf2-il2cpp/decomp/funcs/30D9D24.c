// Nekki.SF2.GUI.TableView$$MNKOGBDLIHK @ RVA 0x30D9D24

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__MNKOGBDLIHK(Nekki_SF2_GUI_TableView_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  undefined8 uVar3;
  MethodInfo *in_x2;
  KELJDKIIHMM_o *pKVar4;
  Nekki_SF2_GUI_TableViewCell_o *pNVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  auVar9._8_8_ = method;
  auVar9._0_8_ = __this;
  if ((DAT_04566348 & 1) == 0) {
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
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Key__);
    auVar9 = FUN_01bab630(&
                          Method_System_Collections_Generic_KeyValuePair<int,_TableViewCell>_get_Value__
                         );
    DAT_04566348 = 1;
  }
  uVar3 = auVar9._0_8_;
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pKVar4 = (__this->fields)._LBHOKEBOIFN_k__BackingField;
  if (pKVar4 != (KELJDKIIHMM_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                (pKVar4->fields)._IKBFEDMFOMJ_k__BackingField;
    uVar3 = 0;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
                (&local_70,__this_00,
                 Method_System_Collections_Generic_Dictionary<int,_TableViewCell>_GetEnumerator__);
      pNVar5 = (Nekki_SF2_GUI_TableViewCell_o *)0x0;
      fVar7 = 3.4028235e+38;
      while (bVar2 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                               (&local_70,
                                Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_MoveNext__
                               ), pIVar1 = local_70.fields._current.fields.value, bVar2) {
        fVar8 = (__this->fields).GMCDBHFHFGF;
        fVar6 = Nekki_SF2_GUI_TableView__PositionForRow
                          (__this,(int32_t)local_70.fields._current.fields.key,in_x2);
        fVar6 = ABS(fVar8 - fVar6);
        if (fVar6 < fVar7) {
          pNVar5 = (Nekki_SF2_GUI_TableViewCell_o *)pIVar1;
          fVar7 = fVar6;
        }
      }
      System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                (&local_70,
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_TableViewCell>_Dispose__
                );
      return pNVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar3,auVar9._8_8_);
}

