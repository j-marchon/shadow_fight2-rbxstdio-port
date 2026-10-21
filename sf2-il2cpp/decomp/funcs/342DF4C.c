// GBJGJEGPHKD$$GIJICLDDDFO @ RVA 0x342DF4C

void GBJGJEGPHKD__GIJICLDDDFO
               (GBJGJEGPHKD_o *__this,CNDPAJOLKFN_o *BLEOKMIDGIK,IEFEBEDLHNN_o *CCEPEGILJDO,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  CNDPAJOLKFN_o *pCVar3;
  CNDPAJOLKFN_o *__this_00;
  CNDPAJOLKFN_o *__this_01;
  IEFEBEDLHNN_o *method_00;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar4;
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__o local_78;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  
  method_00 = CCEPEGILJDO;
  if ((DAT_04568155 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    DAT_04568155 = 1;
  }
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._current = (Il2CppObject *)0x0;
  if ((CCEPEGILJDO != (IEFEBEDLHNN_o *)0x0) ||
     (CCEPEGILJDO = GBJGJEGPHKD__OCJAHBKIFNO
                              (__this,(__this->fields).HICKHACBDAC,(MethodInfo *)method_00),
     CCEPEGILJDO != (IEFEBEDLHNN_o *)0x0)) {
    pGVar4 = (__this->fields).EOIPAPCMGGF;
    if ((pGVar4 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) ||
       (pSVar5 = (pGVar4->fields).DMFCLEMPPIM,
       pSVar5 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
LAB_0352e124:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (0 < (pSVar5->fields)._size) {
      pCVar3 = CNDPAJOLKFN__MPOCFELGHDK
                         (BLEOKMIDGIK,(CCEPEGILJDO->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      __this_00 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
      CNDPAJOLKFN___ctor(__this_00,pCVar3,(MethodInfo *)0x0);
      pCVar3 = CNDPAJOLKFN__MPOCFELGHDK
                         (BLEOKMIDGIK,(CCEPEGILJDO->fields).BJKKHONDAKP,(MethodInfo *)0x0);
      __this_01 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
      CNDPAJOLKFN___ctor(__this_01,pCVar3,(MethodInfo *)0x0);
      pGVar4 = (__this->fields).EOIPAPCMGGF;
      if ((pGVar4 == (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) ||
         (pSVar5 = (pGVar4->fields).DMFCLEMPPIM,
         pSVar5 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) goto LAB_0352e124;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_78,(System_Collections_Generic_List_object__o *)pSVar5,
                 Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
      local_60.fields._index = local_78.fields._index;
      local_60.fields._version = local_78.fields._version;
      local_60.fields._list = local_78.fields._list;
      local_60.fields._current = local_78.fields._current;
      while( true ) {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_60,
                           Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__
                          );
        pIVar1 = local_60.fields._current;
        if (!bVar2) break;
        if (local_60.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        if (local_60.fields._current[3].monitor == (CNDPAJOLKFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CNDPAJOLKFN__LFENGGKOJDO(local_60.fields._current[3].monitor,__this_00,(MethodInfo *)0x0);
        if (pIVar1[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CNDPAJOLKFN__LFENGGKOJDO((CNDPAJOLKFN_o *)pIVar1[4].klass,__this_01,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_60,Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__)
      ;
    }
  }
  return;
}

