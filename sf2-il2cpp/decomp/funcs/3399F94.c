// MMDPNDAECII$$FGKNGBKIKFG @ RVA 0x3399F94

void MMDPNDAECII__FGKNGBKIKFG(MMDPNDAECII_o *__this,float PMNEDONNDLF,MethodInfo *method)

{
  bool bVar1;
  GBJGJEGPHKD_o *pGVar2;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  
  if ((DAT_04567c70 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04567c70 = 1;
  }
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._current = (Il2CppObject *)0x0;
  pGVar2 = (__this->fields).HMIAFJALFCJ;
  if ((pGVar2 == (GBJGJEGPHKD_o *)0x0) ||
     (__this_00 = GBJGJEGPHKD__HMAAHELNECD(pGVar2,(MethodInfo *)0x0),
     __this_00 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_68,(System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
  local_50.fields._index = local_68.fields._index;
  local_50.fields._version = local_68.fields._version;
  local_50.fields._list = local_68.fields._list;
  local_50.fields._current = local_68.fields._current;
LAB_0349a040:
  do {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_50,
                       Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_50,Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__)
      ;
      return;
    }
    if ((IEFEBEDLHNN_o *)local_50.fields._current == (IEFEBEDLHNN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  } while (((IEFEBEDLHNN_Fields *)((long)local_50.fields._current + 0x10))->MCKFLABMNAK != false);
  if (((__this->fields).BNHJIKJAHHF == false) &&
     (((IEFEBEDLHNN_Fields *)((long)local_50.fields._current + 0x10))->LAIDIGOPNLB == false))
  goto LAB_0349a084;
  goto LAB_0349a070;
LAB_0349a084:
  pGVar2 = (__this->fields).HMIAFJALFCJ;
  if (pGVar2 == (GBJGJEGPHKD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (((pGVar2->fields).FJHAMMNKBPN != false) &&
     (((IEFEBEDLHNN_Fields *)((long)local_50.fields._current + 0x10))->FJHAMMNKBPN != false)) {
LAB_0349a070:
    IEFEBEDLHNN__FGKNGBKIKFG
              ((IEFEBEDLHNN_o *)local_50.fields._current,PMNEDONNDLF,(MethodInfo *)0x0);
  }
  goto LAB_0349a040;
}

