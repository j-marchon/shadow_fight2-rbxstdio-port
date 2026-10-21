// Nekki.SF2.GUI.Common.Hints.HintList$$HideAll @ RVA 0x351629C

void Nekki_SF2_GUI_Common_Hints_HintList__HideAll
               (Nekki_SF2_GUI_Common_Hints_HintList_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_HintGroup__o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456892e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HintGroup>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456892e = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).DEDJHBCOMCJ;
  if (__this_00 != (System_Collections_Generic_List_HintGroup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<HintGroup>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<HintGroup>_MoveNext__
                             ), bVar1) {
      if ((UnityEngine_Component_o *)local_50.fields._current == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)local_50.fields._current,(MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<HintGroup>_Dispose__);
    pNVar3 = (__this->fields)._Description;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._Description;
      if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
         (pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_036163f0;
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    }
    return;
  }
LAB_036163f0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

