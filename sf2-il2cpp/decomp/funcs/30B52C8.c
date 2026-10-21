// Nekki.SF2.GUI.TextPic$$IKJOHPDHMME @ RVA 0x30B52C8

void Nekki_SF2_GUI_TextPic__IKJOHPDHMME(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045661f9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    DAT_045661f9 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,__this_00,Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
        return;
      }
      if ((Nekki_SF2_GUI_Glyphs_Glyph_o *)local_38.fields._current ==
          (Nekki_SF2_GUI_Glyphs_Glyph_o *)0x0) break;
      Nekki_SF2_GUI_Glyphs_Glyph__ComputePosition
                ((Nekki_SF2_GUI_Glyphs_Glyph_o *)local_38.fields._current,
                 (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)(__this->fields).NFECDKAEFJL,
                 (MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

