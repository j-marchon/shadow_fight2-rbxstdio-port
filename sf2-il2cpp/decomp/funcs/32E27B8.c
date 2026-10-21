// DOPEEDABNEK$$GOLEKCCFDAH @ RVA 0x32E27B8

HOOAAGABMBL_o * DOPEEDABNEK__GOLEKCCFDAH(DOPEEDABNEK_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_HOOAAGABMBL__o *__this_01;
  long lVar2;
  System_String_o *DIHAKADKIKM;
  MethodInfo *extraout_x1;
  HOOAAGABMBL_o *pHVar3;
  float fVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_045675f2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    DAT_045675f2 = 1;
    method = extraout_x1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = (__this->fields).FDLFEJAEDGA;
  if (__this_01 != (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_01,
               Method_System_Collections_Generic_List<HOOAAGABMBL>_GetEnumerator__);
    pHVar3 = (HOOAAGABMBL_o *)0x0;
    fVar5 = 0.0;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_48,
                         Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_MoveNext__);
      __this_00 = local_48.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<HOOAAGABMBL>_Dispose__);
        return pHVar3;
      }
      if ((HOOAAGABMBL_o *)local_48.fields._current == (HOOAAGABMBL_o *)0x0) break;
      lVar2 = (*(((HOOAAGABMBL_c *)(local_48.fields._current)->klass)->vtable)._6_PDECHBMCBDB.
                methodPtr)(local_48.fields._current,0,
                           (((HOOAAGABMBL_c *)(local_48.fields._current)->klass)->vtable).
                           _6_PDECHBMCBDB.method);
      if (lVar2 != 0) {
        DIHAKADKIKM = HOOAAGABMBL__GFMPCIOBMBJ((HOOAAGABMBL_o *)__this_00,(MethodInfo *)0x0);
        fVar4 = PCOEHCPGBBG__OFFODGKLGOP(DIHAKADKIKM,0.0,(MethodInfo *)0x0);
        if (fVar5 <= fVar4) {
          pHVar3 = (HOOAAGABMBL_o *)__this_00;
          fVar5 = fVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

