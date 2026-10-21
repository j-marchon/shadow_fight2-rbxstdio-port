// Nekki.SF2.GUI.SimpleScroll$$ClearData @ RVA 0x302BE70

void Nekki_SF2_GUI_SimpleScroll__ClearData(Nekki_SF2_GUI_SimpleScroll_o *__this,MethodInfo *method)

{
  int32_t length;
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *in_x2;
  long lVar2;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04565cde & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    DAT_04565cde = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields)._snapEase;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,
               Method_System_Collections_Generic_List<BaseScrollItem>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_SimpleScroll__CJANIMOCLJJ
                (__this,(Nekki_SF2_GUI_BaseScrollItem_o *)local_38.fields._current,in_x2);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,Method_System_Collections_Generic_List_Enumerator<BaseScrollItem>_Dispose__
              );
    lVar2 = *(long *)&(__this->fields)._snapEase;
    if (lVar2 != 0) {
      length = *(int32_t *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (0 < length) {
        System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
      }
      *(undefined2 *)((long)&(__this->fields).NMIHOKCDLMP + 2) = 0x101;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

