// Nekki.SF2.GUI.Common.MenuControls$$LNAEFOJKLIM @ RVA 0x300D1B4

void Nekki_SF2_GUI_Common_MenuControls__LNAEFOJKLIM
               (Nekki_SF2_GUI_Common_MenuControls_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint uVar3;
  Nekki_SF2_Core_InputControllers_GamePadController_o *__this_00;
  System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *__this_01;
  MethodInfo *in_x2;
  MethodInfo *in_x4;
  uint OPHMGAKOJLP;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04565b8e & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_get_Current__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_GetEnumerator__);
    DAT_04565b8e = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = Nekki_SF2_Core_InputControllers_GamePadController__get_Current((MethodInfo *)0x0);
  if (__this_00 == (Nekki_SF2_Core_InputControllers_GamePadController_o *)0x0) {
LAB_0310d32c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar3 = Nekki_SF2_Core_InputControllers_GamePadController__get_DevicesCount
                    (__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0310d22c to 0320d233 has its CatchHandler @ 0310d4f8 */
  if (0 < (int)uVar3) {
                    /* try { // try from 0310d234 to 0320d243 has its CatchHandler @ 0310d4f4 */
                    /* try { // try from 0310d244 to 0320d24f has its CatchHandler @ 0310d4f8 */
                    /* try { // try from 0310d250 to 0320d253 has its CatchHandler @ 0310d4f4 */
    OPHMGAKOJLP = 0;
    do {
                    /* try { // try from 0310d254 to 0320d347 has its CatchHandler @ 0310c418 */
      __this_01 = (__this->fields).CBCDEIKGGDK;
      if (__this_01 == (System_Collections_Generic_List_MenuControls_ADIEOGDNDIO__o *)0x0)
      goto LAB_0310d32c;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<MenuControls_ADIEOGDNDIO>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_60,
                                Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_MoveNext__
                               ), pIVar1 = local_60.fields._current, bVar2) {
        if ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)local_60.fields._current ==
            (Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO__HBJIAILBIBE
                          ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_o *)
                           local_60.fields._current,OPHMGAKOJLP,in_x2);
        if (bVar2) {
          in_x2 = (MethodInfo *)(ulong)OPHMGAKOJLP;
          Nekki_SF2_GUI_Common_MenuControls__GPNPKOEHMGO
                    (__this,2,OPHMGAKOJLP,
                     ((Nekki_SF2_GUI_Common_MenuControls_ADIEOGDNDIO_Fields *)((long)pIVar1 + 0x10))
                     ->LCDNJBFAOHM,in_x4);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,
                 Method_System_Collections_Generic_List_Enumerator<MenuControls_ADIEOGDNDIO>_Dispose__
                );
      OPHMGAKOJLP = OPHMGAKOJLP + 1;
    } while (OPHMGAKOJLP != uVar3);
  }
  return;
}

