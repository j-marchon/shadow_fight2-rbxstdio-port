// OLKKAIFGGAK$$ECCABGPPFBD @ RVA 0x34EDA60

void OLKKAIFGGAK__ECCABGPPFBD
               (OLKKAIFGGAK_o *__this,System_Collections_Generic_List_OLKKAIFGGAK__o *DDOAJGPFCNB,
               MethodInfo *method)

{
  bool GEOFKIAOKDG;
  bool bVar1;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x6;
  GBJGJEGPHKD_o *KPHJPLCBKJB;
  System_Collections_Generic_List_ECENNHNBAME__o *OGDIBLNHLNL;
  System_Collections_Generic_List_ABNLGBHKOCE__o *OLGDADOFIIP;
  OLKKAIFGGAK_o *pOVar2;
  System_Collections_Generic_List_Enumerator_T__o local_68;
  
  method_00 = (MethodInfo *)DDOAJGPFCNB;
  if ((DAT_0456879e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    DAT_0456879e = 1;
    method_00 = extraout_x1;
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  KPHJPLCBKJB = (__this->fields).HMIAFJALFCJ;
  GEOFKIAOKDG = OLKKAIFGGAK__HODPOCMNNIN(__this,method_00);
  if (DDOAJGPFCNB != (System_Collections_Generic_List_OLKKAIFGGAK__o *)0x0) {
    pOVar2 = (__this->fields).NFMBPIPEKGF;
    OGDIBLNHLNL = (__this->fields).OOBBJEDHHKM;
    OLGDADOFIIP = (__this->fields).MEECHCPNHMP;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_68,(System_Collections_Generic_List_object__o *)DDOAJGPFCNB,
               Method_System_Collections_Generic_List<OLKKAIFGGAK>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_68,
                         Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_68,
                   Method_System_Collections_Generic_List_Enumerator<OLKKAIFGGAK>_Dispose__);
        return;
      }
      if ((OLKKAIFGGAK_o *)local_68.fields._current == (OLKKAIFGGAK_o *)0x0) break;
      OLKKAIFGGAK__OJOIFNMHOBI
                ((OLKKAIFGGAK_o *)local_68.fields._current,OGDIBLNHLNL,KPHJPLCBKJB,GEOFKIAOKDG,
                 pOVar2 != (OLKKAIFGGAK_o *)0x0,OLGDADOFIIP,in_x6);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

