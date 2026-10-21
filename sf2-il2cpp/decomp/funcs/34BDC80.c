// KAHMAJKJMBK$$MBOJKFMFLOI @ RVA 0x34BDC80

void KAHMAJKJMBK__MBOJKFMFLOI(KAHMAJKJMBK_o *__this,AFFHKININGD_o *FBFPLEFCDOK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_ECGPIFIJMFF__o *pSVar2;
  KAHMAJKJMBK_o *__this_00;
  MethodInfo *in_x3;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045685fa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ECGPIFIJMFF>_get_Item__);
    DAT_045685fa = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields).DCJDAHONBJI;
  if (pSVar2 == (System_Collections_Generic_List_ECGPIFIJMFF__o *)0x0) {
LAB_035bddb4:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (pSVar2->fields)._size) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<ECGPIFIJMFF>_GetEnumerator__);
    pIVar3 = (Il2CppObject *)0x0;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_48,
                              Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_MoveNext__
                             ), bVar1) {
      if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (*(char *)((long)&local_48.fields._current[3].monitor + 4) != '\0') {
        pIVar3 = local_48.fields._current;
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<ECGPIFIJMFF>_Dispose__);
    if (pIVar3 != (Il2CppObject *)0x0) {
      pSVar2 = (__this->fields).DCJDAHONBJI;
      if (pSVar2 == (System_Collections_Generic_List_ECGPIFIJMFF__o *)0x0) goto LAB_035bddb4;
      __this_00 = (KAHMAJKJMBK_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar2,
                             (pSVar2->fields)._size + -1,
                             Method_System_Collections_Generic_List<ECGPIFIJMFF>_get_Item__);
      KAHMAJKJMBK__CLAONOCPIHH(__this_00,(ECGPIFIJMFF_o *)__this_00,FBFPLEFCDOK,in_x3);
    }
  }
  return;
}

