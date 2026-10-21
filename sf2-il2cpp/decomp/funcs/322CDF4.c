// DEKKGJNMFEB$$DNKMKLILMCH @ RVA 0x322CDF4

System_Collections_Generic_List_PKKLIJLIKGF__o *
DEKKGJNMFEB__DNKMKLILMCH(DEKKGJNMFEB_o *__this,IGFGDDANEPE_o *ENHJPOHLMCL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PKKLIJLIKGF__o *__this_00;
  System_Collections_Generic_List_GGLKHCAIGDI__o *__this_01;
  System_Collections_Generic_List_PKKLIJLIKGF__o *collection;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566fb6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
    DAT_04566fb6 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_PKKLIJLIKGF__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PKKLIJLIKGF>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PKKLIJLIKGF>__ctor__);
  __this_01 = DEKKGJNMFEB__NFKLPHNDMNO(__this,ENHJPOHLMCL,method);
  if (__this_01 != (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<GGLKHCAIGDI>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<GGLKHCAIGDI>_Dispose__);
        return __this_00;
      }
      if ((GGLKHCAIGDI_o *)local_48.fields._current == (GGLKHCAIGDI_o *)0x0) break;
      collection = GGLKHCAIGDI__NPCHMJCMNDM
                             ((GGLKHCAIGDI_o *)local_48.fields._current,ENHJPOHLMCL,0,true,
                              (MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)collection,
                 Method_System_Collections_Generic_List<PKKLIJLIKGF>_AddRange__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

