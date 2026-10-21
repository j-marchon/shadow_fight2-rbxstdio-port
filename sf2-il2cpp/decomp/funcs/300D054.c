// Nekki.SF2.GUI.Common.MenuControls$$MBACEABHPLC @ RVA 0x300D054

void Nekki_SF2_GUI_Common_MenuControls__MBACEABHPLC
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04565b97 & 1) == 0) {
                    /* try { // try from 0310d078 to 0320d09f has its CatchHandler @ 0310d470 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_get_Current__
                );
                    /* try { // try from 0310d0a0 to 0320d22b has its CatchHandler @ 0310c418 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_GetEnumerator__);
    DAT_04565b97 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).ELOFOCJPGDO;
  if (__this_00 != (System_Collections_Generic_List_MenuControls_KOEABALFPHM__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<MenuControls_KOEABALFPHM>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_MoveNext__
                        );
      pIVar1 = local_48.fields._current;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<MenuControls_KOEABALFPHM>_Dispose__
                  );
        return;
      }
      if ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)local_48.fields._current ==
          (Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)0x0) break;
      bVar2 = Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM__HBJIAILBIBE
                        ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_o *)local_48.fields._current
                         ,method_00);
      if (bVar2) {
        Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO
                  (__this,1,0,
                   ((Nekki_SF2_GUI_Common_MenuControls_KOEABALFPHM_Fields *)((long)pIVar1 + 0x10))->
                   LCDNJBFAOHM,in_x4);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

