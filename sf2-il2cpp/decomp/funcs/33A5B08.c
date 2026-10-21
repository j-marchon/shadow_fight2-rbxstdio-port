// GGLKHCAIGDI$$NPCHMJCMNDM @ RVA 0x33A5B08

System_Collections_Generic_List_PKKLIJLIKGF__o *
GGLKHCAIGDI__NPCHMJCMNDM
          (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,bool GMNHBNDJGDD,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_PFECHOJADFA__o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  method_00 = (MethodInfo *)(ulong)(uint)DPCEFBCDHPA;
  if ((DAT_04567cef & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_04567cef = 1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  if ((!GMNHBNDJGDD) || (iVar3 = GGLKHCAIGDI__ICMIMIOJPMK(__this,NKCMBEFHFII,method_00), 0 < iVar3))
  {
    __this_01 = (__this->fields).NICGLFEBNFM;
    if (__this_01 == (System_Collections_Generic_List_PFECHOJADFA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<PFECHOJADFA>_GetEnumerator__);
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_58,
                         Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_MoveNext__);
      pIVar1 = local_58.fields._current;
      if (!bVar2) break;
      if ((PFECHOJADFA_o *)local_58.fields._current == (PFECHOJADFA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar2 = PFECHOJADFA__BNNIDPDMOIL
                        ((PFECHOJADFA_o *)local_58.fields._current,NKCMBEFHFII,DPCEFBCDHPA,
                         (MethodInfo *)0x0);
      if (bVar2) {
        if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        System_Collections_Generic_List<object>__AddRange
                  ((System_Collections_Generic_List_object__o *)__this_00,
                   (System_Collections_Generic_IEnumerable_T__o *)
                   ((PFECHOJADFA_Fields *)((long)pIVar1 + 0x10))->PAPANCDPPIF,
                   Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_58,Method_System_Collections_Generic_List_Enumerator<PFECHOJADFA>_Dispose__);
  }
  return __this_00;
}

