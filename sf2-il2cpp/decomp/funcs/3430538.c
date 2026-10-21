// GBJGJEGPHKD$$AHCOLJPJGAO @ RVA 0x3430538

void GBJGJEGPHKD__AHCOLJPJGAO(GBJGJEGPHKD_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_00;
  undefined8 uVar2;
  GBJGJEGPHKD_CMPNJPOADCA_o *pGVar3;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_04568168 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_get_Current__);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    DAT_04568168 = 1;
  }
  uVar2 = auVar4._0_8_;
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  pGVar3 = (__this->fields).EOIPAPCMGGF;
  if ((pGVar3 != (GBJGJEGPHKD_CMPNJPOADCA_o *)0x0) &&
     (__this_00 = (pGVar3->fields).DMFCLEMPPIM, uVar2 = 0,
     __this_00 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<IEFEBEDLHNN>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_38,
                         Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_38,
                   Method_System_Collections_Generic_List_Enumerator<IEFEBEDLHNN>_Dispose__);
        return;
      }
      if ((IEFEBEDLHNN_o *)local_38.fields._current == (IEFEBEDLHNN_o *)0x0) break;
      IEFEBEDLHNN__CFAAJCOBAEE((IEFEBEDLHNN_o *)local_38.fields._current,(MethodInfo *)0x0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}

