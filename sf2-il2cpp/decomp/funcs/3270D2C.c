// Nekki.SF2.GUI.StrikeThroughTextLine$$ParseText @ RVA 0x3270D2C

void Nekki_SF2_GUI_StrikeThroughTextLine__ParseText
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,System_String_o **JLNPKGGFFDD,
               UnityEngine_Color_o HCPAAIJOOKK,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = (MethodInfo *)JLNPKGGFFDD;
  if ((DAT_04567227 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_GetEnumerator__);
    DAT_04567227 = 1;
    method_00 = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  Nekki_SF2_GUI_StrikeThroughTextLine__Clear(__this,method_00);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(*JLNPKGGFFDD,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = AEGOLGIJEBI__GOGBOEBJPEL(JLNPKGGFFDD,(MethodInfo *)0x0);
    if (__this_00 == (System_Collections_Generic_List_AEGOLGIJEBI_AOIPPHGJEND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AEGOLGIJEBI_AOIPPHGJEND>_GetEnumerator__);
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_58,
                              Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_MoveNext__
                             ), bVar1) {
      Nekki_SF2_GUI_StrikeThroughTextLine__KMIKLELCKNI
                (__this,(AEGOLGIJEBI_AOIPPHGJEND_o *)local_58.fields._current,HCPAAIJOOKK,method);
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,
               Method_System_Collections_Generic_List_Enumerator<AEGOLGIJEBI_AOIPPHGJEND>_Dispose__)
    ;
  }
  return;
}

