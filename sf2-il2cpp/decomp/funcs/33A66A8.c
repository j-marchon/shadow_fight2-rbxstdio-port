// GGLKHCAIGDI$$PCDGMIBPFEO @ RVA 0x33A66A8

bool GGLKHCAIGDI__PCDGMIBPFEO
               (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,int32_t DPCEFBCDHPA,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  FOKJBDHLIMG_o *__this_01;
  HEFOANCOHDC_o *pHVar3;
  MethodInfo *in_x4;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567cf2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567cf2 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = GGLKHCAIGDI__NPCHMJCMNDM(__this,NKCMBEFHFII,DPCEFBCDHPA,true,in_x4);
  if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
  do {
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_MoveNext__);
    pIVar1 = local_50.fields._current;
    if (!bVar2) {
      iVar4 = 5;
      goto LAB_034a67d0;
    }
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_01 = MGNPHCAAEIO_TypeInfo->static_fields->DDMMFEDBMCC;
    if (__this_01 == (FOKJBDHLIMG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pHVar3 = FOKJBDHLIMG__JMMDGEOBMOC
                       (__this_01,(System_String_o *)pIVar1[1].klass,(MethodInfo *)0x0);
  } while ((pHVar3 == (HEFOANCOHDC_o *)0x0) || ((pHVar3->fields).OCABLLPNEGL != 0));
  iVar4 = 4;
LAB_034a67d0:
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (&local_50,Method_System_Collections_Generic_List_Enumerator<PKKLIJLIKGF>_Dispose__);
  return bVar2 && iVar4 == 4;
}

