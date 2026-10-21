// Nekki.SF2.GUI.Glyphs.Glyph$$UpdateLineID @ RVA 0x336EC14

void Nekki_SF2_GUI_Glyphs_Glyph__UpdateLineID
               (Nekki_SF2_GUI_Glyphs_Glyph_o *__this,
               Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *__this_00;
  int iVar2;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567b04 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
    DAT_04567b04 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  (__this->fields)._HEJNKDEACJE_k__BackingField = -1;
  if ((MMEECJEKHGB == (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) ||
     (__this_00 = (MMEECJEKHGB->fields)._NNFPEOCIPFE_k__BackingField,
     __this_00 == (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_GetEnumerator__);
  iVar2 = 0;
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_MoveNext__
                      );
    if (!bVar1) {
LAB_0346ece8:
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,
                 Method_System_Collections_Generic_List_Enumerator<TextPic_OFKFGMDCIJP>_Dispose__);
      return;
    }
    if ((Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_48.fields._current ==
        (Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = Nekki_SF2_GUI_TextPic_OFKFGMDCIJP__NFJIIGCLFOF
                      ((Nekki_SF2_GUI_TextPic_OFKFGMDCIJP_o *)local_48.fields._current,
                       (__this->fields)._CBEOMKIMKNO_k__BackingField,(MethodInfo *)0x0);
    if (bVar1) {
      (__this->fields)._HEJNKDEACJE_k__BackingField = iVar2;
      goto LAB_0346ece8;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}

