// Nekki.SF2.GUI.Tutorial.TutorialNode$$GetNode @ RVA 0x32CAAD8

Nekki_SF2_GUI_Tutorial_TutorialNode_o *
Nekki_SF2_GUI_Tutorial_TutorialNode__GetNode
          (Nekki_SF2_GUI_Tutorial_TutorialNode_o *__this,System_String_o *KKJPPDNKGAI,
          MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TutorialNode__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567517 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TutorialNode>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TutorialNode>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TutorialNode>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TutorialNode>_GetEnumerator__);
    DAT_04567517 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).EOIPAPCMGGF;
  if (__this_00 == (System_Collections_Generic_List_TutorialNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TutorialNode>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<TutorialNode>_MoveNext__);
    pNVar2 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)local_50.fields._current;
    if (!bVar1) {
      pNVar2 = (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0;
      break;
    }
    if ((Nekki_SF2_GUI_Tutorial_TutorialNode_o *)local_50.fields._current ==
        (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)local_50.fields._current,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
  } while ((!bVar1) ||
          (bVar1 = System_String__op_Equality
                             (((Nekki_SF2_GUI_Tutorial_TutorialNode_Fields *)((long)pNVar2 + 0x10))
                              ->_ID,KKJPPDNKGAI,(MethodInfo *)0x0), !bVar1));
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<TutorialNode>_Dispose__);
  return pNVar2;
}

