// GGLKHCAIGDI$$JMGPKBNPLBI @ RVA 0x33A5FAC

bool GGLKHCAIGDI__JMGPKBNPLBI
               (GGLKHCAIGDI_o *__this,System_String_o *BEHOODJKGLB,
               System_Collections_Generic_List_PKKLIJLIKGF__o *EGBBHPHAHAC,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    __this = (GGLKHCAIGDI_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    DAT_04567cf7 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (EGBBHPHAHAC == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)EGBBHPHAHAC,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    if (!bVar1) {
      iVar3 = 5;
      goto LAB_034a6078;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)local_48.fields._current[1].klass,BEHOODJKGLB,
                       (MethodInfo *)0x0);
  } while (!bVar2);
  iVar3 = 4;
LAB_034a6078:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  return bVar1 && iVar3 == 4;
}

