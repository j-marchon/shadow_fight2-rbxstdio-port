// Nekki.SF2.GUI.TextPic$$ParseGlyhs @ RVA 0x30B4458

void Nekki_SF2_GUI_TextPic__ParseGlyhs
               (Nekki_SF2_GUI_TextPic_o *__this,System_String_o **JLNPKGGFFDD,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045661f4 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_GetEnumerator__);
    DAT_045661f4 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_TextPic__ELMFBJIPKHJ(__this,true,method);
  __this_00 = AEGOLGIJEBI__HJDNHACEPJI(JLNPKGGFFDD,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_List_AEGOLGIJEBI_MCGKJAGBFKP__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AEGOLGIJEBI_MCGKJAGBFKP>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_38,
                              Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_TextPic__MJBPNMOFPOJ
                (__this,(AEGOLGIJEBI_MCGKJAGBFKP_o *)local_38.fields._current,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_38,
               Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_MCGKJAGBFKP>_Dispose__)
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

