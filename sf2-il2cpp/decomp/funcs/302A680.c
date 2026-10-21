// Nekki.SF2.GUI.SimpleScroll$$DNMIKEGDEAG @ RVA 0x302A680

bool Nekki_SF2_GUI_SimpleScroll__DNMIKEGDEAG
               (Nekki_SF2_GUI_SimpleScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  int iVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if ((DAT_04565cb6 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Values__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_ValueCollection<string,_SimpleScroll_LIOIEDNIMLD>_GetEnumerator__
                );
    DAT_04565cb6 = 1;
  }
  local_48.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._currentValue = (Il2CppObject *)0x0;
  if ((__this[1].klass == (Nekki_SF2_GUI_SimpleScroll_c *)0x0) ||
     (__this_00 = System_Collections_Generic_Dictionary<object,_object>__get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             __this[1].klass,
                             Method_System_Collections_Generic_Dictionary<string,_SimpleScroll_LIOIEDNIMLD>_get_Values__
                            ),
     __this_00 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object,_object>__GetEnumerator
            (&local_48,__this_00,
             Method_System_Collections_Generic_Dictionary_ValueCollection<string,_SimpleScroll_LIOIEDNIMLD>_GetEnumerator__
            );
  do {
    bVar1 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_MoveNext__
                      );
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_0312a764;
    }
    if ((Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue ==
        (Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD__BBEGHHMIKAO
                      ((Nekki_SF2_GUI_SimpleScroll_LIOIEDNIMLD_o *)local_48.fields._currentValue,
                       IKKAMAMLIKA,method);
  } while (!bVar2);
  iVar3 = 4;
LAB_0312a764:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object,_object>__Dispose
            (&local_48,
             Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator<string,_SimpleScroll_LIOIEDNIMLD>_Dispose__
            );
  return bVar1 && iVar3 == 4;
}

