// Nekki.SF2.GUI.DebugModules.ScreenDebug$$OKNDDEJODAJ @ RVA 0x3529620

void Nekki_SF2_GUI_DebugModules_ScreenDebug__OKNDDEJODAJ
               (Nekki_SF2_GUI_DebugModules_ScreenDebug_o *__this,GLINEGMOOBM_o *HBHPFKJMGCK,
               MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  System_Collections_Generic_Stack_Text__o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04568a10 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Text>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Text>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_Stack<Text>_Push__);
    DAT_04568a10 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEHFKJKABDN;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_98,pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_Text>_GetEnumerator__);
    local_70.fields._version = local_98.fields._version;
    local_70.fields._index = local_98.fields._index;
    local_70.fields._dictionary = local_98.fields._dictionary;
    local_70.fields._current.fields.value = local_98.fields._current.fields.value;
    local_70.fields._current.fields.key = local_98.fields._current.fields.key;
    local_70.fields._getEnumeratorRetType = local_98.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_98.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_MoveNext__
                        );
      item = local_70.fields._current.fields.value;
      if (!bVar1) break;
      if ((UnityEngine_Component_o *)local_70.fields._current.fields.value ==
          (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      __this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)local_70.fields._current.fields.value,
                             (MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      (**(code **)&((UnityEngine_Component_c *)item->klass)[1]._2.naturalAligment)
                (0,0,0,0x3f800000,item,
                 ((UnityEngine_Component_c *)item->klass)[1].vtable._0_Equals.methodPtr);
      __this_01 = (__this->fields).KAABNEFOJHJ;
      if (__this_01 == (System_Collections_Generic_Stack_Text__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Stack<object>__Push
                ((System_Collections_Generic_Stack_T__o *)__this_01,item,
                 Method_System_Collections_Generic_Stack<Text>_Push__);
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Text>_Dispose__);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).FEHFKJKABDN
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar2,Method_System_Collections_Generic_Dictionary<string,_Text>_Clear__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

