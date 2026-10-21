// GGLKHCAIGDI$$ODLAALGANOO @ RVA 0x33A7108

bool GGLKHCAIGDI__ODLAALGANOO(GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  bool bVar2;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_01;
  HOOAAGABMBL_o *pHVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04567cf5 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    DAT_04567cf5 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (((NKCMBEFHFII == (IGFGDDANEPE_o *)0x0) ||
      (pHVar3 = (NKCMBEFHFII->fields).PCBECBEFJOI, pHVar3 == (HOOAAGABMBL_o *)0x0)) ||
     (bVar1 = GGLKHCAIGDI__FCBPFKMMBJD(__this,(pHVar3->fields)._GMPAEDFIIHF_k__BackingField,method),
     !bVar1)) {
    bVar1 = false;
  }
  else {
    __this_01 = (__this->fields).NICGLFEBNFM;
    if (__this_01 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
      __this_00 = local_48.fields._current;
      if (!bVar1) {
        iVar4 = 4;
        goto LAB_034a7218;
      }
      pHVar3 = IGFGDDANEPE__JPNNODJPOCL(NKCMBEFHFII,false,(MethodInfo *)0x0);
      if (pHVar3 == (HOOAAGABMBL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if ((PFECHOJADFA_o *)__this_00 == (PFECHOJADFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PFECHOJADFA__BNNIDPDMOIL
                        ((PFECHOJADFA_o *)__this_00,NKCMBEFHFII,
                         (pHVar3->fields)._JDEHPJEIOCI_k__BackingField,(MethodInfo *)0x0);
    } while (!bVar2);
    iVar4 = 7;
LAB_034a7218:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_48,Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    bVar1 = bVar1 && iVar4 == 7;
  }
  return bVar1;
}

