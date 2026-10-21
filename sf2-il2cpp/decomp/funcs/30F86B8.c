// Nekki.SF2.GUI.Shop.ParametersPanelContent$$FBPHKFLELNP @ RVA 0x30F86B8

void Nekki_SF2_GUI_Shop_ParametersPanelContent__FBPHKFLELNP
               (Nekki_SF2_GUI_Shop_ParametersPanelContent_o *__this,MethodInfo *method)

{
  Il2CppObject *x;
  bool CJNHFNHJHPE;
  bool bVar1;
  System_Collections_Generic_List_Graphic__o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04566483 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Graphic>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Graphic>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566483 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if (((__this->fields).super._DDIEMKPIMAJ_k__BackingField == false) &&
     ((__this->fields).super._HLLLGIDPLEN_k__BackingField == false)) {
    CJNHFNHJHPE = (__this->fields).super._JHGIPNHGGOK_k__BackingField != false;
  }
  else {
    CJNHFNHJHPE = true;
  }
  Util__IHPDCBOFHPA((__this->fields)._renderRoot,CJNHFNHJHPE,(MethodInfo *)0x0);
  __this_00 = (__this->fields).PMHLGLALHLH;
  if (__this_00 != (System_Collections_Generic_List_Graphic__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<Graphic>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<Graphic>_MoveNext__)
          , x = local_60.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Behaviour__set_enabled
                  ((UnityEngine_Behaviour_o *)x,CJNHFNHJHPE,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<Graphic>_Dispose__);
    pUVar2 = (__this->fields)._MBFMMJHFBBH_k__BackingField;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar2 = (__this->fields)._MBFMMJHFBBH_k__BackingField;
      if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) goto LAB_031f8854;
      UnityEngine_Behaviour__set_enabled
                ((UnityEngine_Behaviour_o *)pUVar2,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    return;
  }
LAB_031f8854:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

