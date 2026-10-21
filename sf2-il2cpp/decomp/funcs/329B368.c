// OMANDMDCGMF$$CKOPLFDLFPL @ RVA 0x329B368

void OMANDMDCGMF__CKOPLFDLFPL
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,UnityEngine_Vector3_o CPFDIFKIPBN,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IHIFNKAMALG__o *__this;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = MMEECJEKHGB;
  if ((DAT_0456738f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_get_Current__);
    auVar3 = FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
    DAT_0456738f = 1;
  }
  uVar2 = auVar3._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  if ((MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) &&
     (__this = (MMEECJEKHGB->fields)._CODCAPKKACN_k__BackingField, uVar2 = 0,
     __this != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this,
               Method_System_Collections_Generic_List<IHIFNKAMALG>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IHIFNKAMALG>_Dispose__);
        return;
      }
      if (local_38.fields._current == (Il2CppObject *)0x0) break;
      local_38.fields._current[1].klass =
           (Il2CppClass *)
           CONCAT44(CPFDIFKIPBN.fields.y + (float)((ulong)local_38.fields._current[1].klass >> 0x20)
                    ,CPFDIFKIPBN.fields.x + SUB84(local_38.fields._current[1].klass,0));
      *(float *)&local_38.fields._current[1].monitor =
           CPFDIFKIPBN.fields.z + *(float *)&local_38.fields._current[1].monitor;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar3._8_8_);
}

