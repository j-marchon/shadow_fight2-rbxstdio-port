// EHCCNKFIPPA$$DFILKMEMGGL @ RVA 0x331C9C4

void EHCCNKFIPPA__DFILKMEMGGL(EHCCNKFIPPA_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_PHDCILJMEHO__o *pSVar2;
  System_Collections_Generic_List_NJPBBPOABKP__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_90;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  if ((DAT_04567822 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<PHDCILJMEHO>_Remove__);
    DAT_04567822 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  local_78.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.fields._index = 0;
  local_78.fields._version = 0;
  local_78.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
  if (pSVar2 != (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_90,(System_Collections_Generic_List_object__o *)pSVar2,
               Method_System_Collections_Generic_List<PHDCILJMEHO>_GetEnumerator__);
    local_60.fields._index = local_90.fields._index;
    local_60.fields._version = local_90.fields._version;
    local_60.fields._list = local_90.fields._list;
    local_60.fields._current = local_90.fields._current;
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_MoveNext__);
      if (!bVar1) goto LAB_0341cb04;
      if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    } while (local_60.fields._current[1].klass != (Il2CppClass *)EIKFGOCCOIE);
    pSVar2 = (__this->fields)._BPHPMGBCNOO_k__BackingField;
    if (pSVar2 == (System_Collections_Generic_List_PHDCILJMEHO__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = Method_System_Collections_Generic_List<PHDCILJMEHO>_Remove__;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,local_60.fields._current,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<PHDCILJMEHO>_Remove__);
LAB_0341cb04:
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_60,Method_System_Collections_Generic_List_Enumerator<PHDCILJMEHO>_Dispose__);
    if ((EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) &&
       (__this_00 = (EIKFGOCCOIE->fields).EMNOFACFIBF,
       __this_00 != (System_Collections_Generic_List_NJPBBPOABKP__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<NJPBBPOABKP>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_78,
                                Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_MoveNext__
                               ), bVar1) {
        EHCCNKFIPPA__LLEDBCILPEN(__this,(NJPBBPOABKP_o *)local_78.fields._current,method);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_78,Method_System_Collections_Generic_List_Enumerator<NJPBBPOABKP>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

