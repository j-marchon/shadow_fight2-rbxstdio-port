// AFJEGLNKCHN$$EPBENPDCBFE @ RVA 0x30D5A4C

bool AFJEGLNKCHN__EPBENPDCBFE(AFJEGLNKCHN_o *__this,NJPBHDMCLIN_o *AHEFOIOKDOK,MethodInfo *method)

{
  bool bVar1;
  OLKKAIFGGAK_o *pOVar2;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_0456632b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
    DAT_0456632b = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if (AHEFOIOKDOK != (NJPBHDMCLIN_o *)0x0) {
    pOVar2 = (AHEFOIOKDOK->fields).GGIGKNJPODI;
    if (pOVar2 == (OLKKAIFGGAK_o *)0x0) {
      bVar1 = false;
    }
    else {
      pOVar2 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar2,(__this->fields).super.LOAFPIOGJAF,(MethodInfo *)0x0)
      ;
      if (pOVar2 == (OLKKAIFGGAK_o *)0x0) goto LAB_031d5bb4;
      bVar1 = System_String__op_Equality
                        ((pOVar2->fields).NPFMOEOIEKM,(__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0
                        );
      if (bVar1) {
        bVar1 = true;
LAB_031d5b88:
        bVar1 = IENLNOEDCFF__DEBLNLJEJKG((IENLNOEDCFF_o *)__this,bVar1,(MethodInfo *)0x0);
      }
      else {
        __this_00 = (pOVar2->fields).MPLCPGJEHPG;
        if (__this_00 == (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) goto LAB_031d5bb4;
        System_Collections_Generic_List<object>__GetEnumerator
                  (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
                   Method_System_Collections_Generic_List<OIGAJAKPPEO>_GetEnumerator__);
        do {
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (&local_48,
                             Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_MoveNext__
                            );
          if (!bVar1) {
            System_Collections_Generic_List_Enumerator<object>__Dispose
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
            bVar1 = false;
            goto LAB_031d5b88;
          }
          if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          bVar1 = System_String__op_Equality
                            ((System_String_o *)local_48.fields._current[0x24].klass,
                             (__this->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
        } while (!bVar1);
        bVar1 = IENLNOEDCFF__DEBLNLJEJKG((IENLNOEDCFF_o *)__this,true,(MethodInfo *)0x0);
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_48,
                   Method_System_Collections_Generic_List_Enumerator<OIGAJAKPPEO>_Dispose__);
      }
    }
    return bVar1;
  }
LAB_031d5bb4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

