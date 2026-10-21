// GGLKHCAIGDI$$IPJOEKMPEJA @ RVA 0x33A6D58

MDLDFLDGLND_o *
GGLKHCAIGDI__IPJOEKMPEJA(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  System_String_o *b;
  MDLDFLDGLND_o *pMVar3;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
    DAT_04567cf8 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (((NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) ||
      (pHVar2 = (NKCMBEFHFII->fields).PCBECBEFJOI, pHVar2 == (HOOAAGABMBL_o *)0x0)) ||
     (__this_00 = (__this->fields).HEHMAPDMHIG,
     __this_00 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  b = (pHVar2->fields)._GMPAEDFIIHF_k__BackingField;
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    pMVar3 = (MDLDFLDGLND_o *)local_48.fields._current;
    if (!bVar1) {
      pMVar3 = (MDLDFLDGLND_o *)0x0;
      break;
    }
    if ((MDLDFLDGLND_o *)local_48.fields._current == (MDLDFLDGLND_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__op_Equality
                      (((MDLDFLDGLND_Fields *)((long)local_48.fields._current + 0x10))->
                       _JEEFFPFPAMB_k__BackingField,b,(MethodInfo *)0x0);
  } while (!bVar1);
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_48,Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
  return pMVar3;
}

