// Nekki.SF2.GUI.TextPic$$FKGOGDIMOEP @ RVA 0x30B736C

void Nekki_SF2_GUI_TextPic__FKGOGDIMOEP(Nekki_SF2_GUI_TextPic_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_object__o *__this_00;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
                    /* try { // try from 031b7370 to 032b7387 has its CatchHandler @ 031b7398 */
  if ((DAT_04566202 & 1) == 0) {
                    /* try { // try from 031b7388 to 032b73b7 has its CatchHandler @ 031b7160 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_Dispose__);
                    /* catch() { ... } // from try @ 031b7370 with catch @ 031b7398 */
                    /* catch() { ... } // from try @ 031b7360 with catch @ 031b739c */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_MoveNext__);
                    /* catch() { ... } // from try @ 031b7338 with catch @ 031b73a0 */
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<Glyph>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Glyph>_GetEnumerator__);
                    /* try { // try from 031b73b8 to 032b73cf has its CatchHandler @ 031b783c */
    DAT_04566202 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).NMHDAIIIHFP;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
                    /* try { // try from 031b73d0 to 032b74eb has its CatchHandler @ 031b7160 */
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
      Nekki_SF2_GUI_Glyphs_Glyph__UpdateLineID
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

