// Nekki.SF2.GUI.ModuleHolder$$AFNDJEMIDKM @ RVA 0x314E00C

void Nekki_SF2_GUI_ModuleHolder__AFNDJEMIDKM
               (Nekki_SF2_GUI_ModuleHolder_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_UIModule__o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_045667e3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UIModule>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UIModule>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<UIModule>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIModule>_GetEnumerator__);
    FUN_01bab630(&Nekki_SF2_GUI_UIModule_TypeInfo);
    DAT_045667e3 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  pSVar3 = (__this->fields).LPIPKHINEJH;
  if (pSVar3 != (System_Collections_Generic_List_UIModule__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
               Method_System_Collections_Generic_List<UIModule>_GetEnumerator__);
    local_60.fields._index = local_78.fields._index;
    local_60.fields._version = local_78.fields._version;
    local_60.fields._list = local_78.fields._list;
    local_60.fields._current = local_78.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_60,
                              Method_System_Collections_Generic_List_Enumerator<UIModule>_MoveNext__
                             ), pIVar1 = local_60.fields._current, bVar2) {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_SF2_GUI_UIModule__MountModule
                ((Nekki_SF2_GUI_UIModule_o *)pIVar1,pUVar4,true,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<UIModule>_Dispose__);
    pSVar3 = (__this->fields).FAGFCHOFHPG;
    if (pSVar3 != (System_Collections_Generic_List_UIModule__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar3,
                 Method_System_Collections_Generic_List<UIModule>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<UIModule>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if ((Nekki_SF2_GUI_UIModule_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        Nekki_SF2_GUI_UIModule__MountModule
                  ((Nekki_SF2_GUI_UIModule_o *)pIVar1,pUVar4,false,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<UIModule>_Dispose__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

