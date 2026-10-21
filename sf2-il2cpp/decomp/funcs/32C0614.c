// Nekki.SF2.GUI.Dialogs.StoryDialog$$FCHNOIGHEEO @ RVA 0x32C0614

void Nekki_SF2_GUI_Dialogs_StoryDialog__FCHNOIGHEEO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_LBMOOFGGPEB__o *__this_00;
  undefined8 uVar2;
  MethodInfo *extraout_x1;
  undefined4 local_3c;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_045674c7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_get_Current__);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<LBMOOFGGPEB>_GetEnumerator__);
    DAT_045674c7 = 1;
    method = extraout_x1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).super.DIKHJEINHID;
  if (__this_00 == (System_Collections_Generic_List_LBMOOFGGPEB__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(0,method);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<LBMOOFGGPEB>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_38,
                       Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_MoveNext__);
    if (!bVar1) goto LAB_033c06fc;
    if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (0 < (long)local_38.fields._current[5].monitor);
  local_3c = 0;
  uVar2 = thunk_FUN_01bda448(int_TypeInfo,&local_3c);
  (*(__this->klass->vtable)._13_OnClose.methodPtr)
            (__this,uVar2,(__this->klass->vtable)._13_OnClose.method);
LAB_033c06fc:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_38,Method_System_Collections_Generic_List_Enumerator<LBMOOFGGPEB>_Dispose__);
  return;
}

