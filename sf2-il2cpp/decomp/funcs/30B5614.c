// Nekki.SF2.GUI.TextPic.ABOHOFBMBHP$$LLCONNGHGKD @ RVA 0x30B5614

void Nekki_SF2_GUI_TextPic_ABOHOFBMBHP__LLCONNGHGKD
               (Nekki_SF2_GUI_TextPic_ABOHOFBMBHP_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Glyph__o *pSVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_0456621b & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<Glyph>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456621b = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).CNFAHCPFONL,
                     Method_DJNBJHPDKDP_OBECCOPBADO<Glyph>__);
  if (bVar1) {
    return;
  }
  pSVar2 = (__this->fields).CNFAHCPFONL;
  if (pSVar2 != (System_Collections_Generic_List_Glyph__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    local_50.fields._index = local_68.fields._index;
    local_50.fields._version = local_68.fields._version;
    local_50.fields._list = local_68.fields._list;
    local_50.fields._current = local_68.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_50,
                              Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__),
          __this_00 = local_50.fields._current, bVar1) {
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        if ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this_00 == (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        Nekki_SF2_GUI_Glyphs_Glyph__Destroy
                  ((Nekki_SF2_GUI_Glyphs_Glyph_o *)__this_00,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_50,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    pSVar2 = (__this->fields).CNFAHCPFONL;
    if (pSVar2 != (System_Collections_Generic_List_Glyph__o *)0x0) {
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (length < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

