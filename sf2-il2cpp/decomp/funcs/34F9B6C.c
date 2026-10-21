// OLKKAIFGGAK.AHFAALBHPHJ$$JBPIDIFNGMB @ RVA 0x34F9B6C

/* WARNING: Removing unreachable block (ram,0x035f9d20) */
/* WARNING: Removing unreachable block (ram,0x035f9df4) */

void OLKKAIFGGAK_AHFAALBHPHJ__JBPIDIFNGMB
               (OLKKAIFGGAK_AHFAALBHPHJ_o *__this,
               System_Collections_Generic_List_ABNLGBHKOCE__o *GOFDICMJKNH,MethodInfo *method)

{
  Il2CppObject *item;
  bool bVar1;
  int32_t BKFOLMBMFNP;
  OLKKAIFGGAK_o *__this_00;
  System_Collections_Generic_List_ABNLGBHKOCE__o *pSVar2;
  NJPBHDMCLIN_o *pNVar3;
  System_Collections_Generic_List_Enumerator_T__o local_b8;
  System_Collections_Generic_List_Enumerator_T__o local_a0;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  
  if ((DAT_04568816 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__);
    DAT_04568816 = 1;
  }
  local_80.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_80.fields._index = 0;
  local_80.fields._version = 0;
  local_80.fields._current = (Il2CppObject *)0x0;
  local_a0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a0.fields._index = 0;
  local_a0.fields._version = 0;
  local_a0.fields._current = (Il2CppObject *)0x0;
  if (GOFDICMJKNH == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_b8,(System_Collections_Generic_List_object__o *)GOFDICMJKNH,
             Method_System_Collections_Generic_List<ABNLGBHKOCE>_GetEnumerator__);
  local_80.fields._index = local_b8.fields._index;
  local_80.fields._version = local_b8.fields._version;
  local_80.fields._list = local_b8.fields._list;
  local_80.fields._current = local_b8.fields._current;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_80,
                       Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_MoveNext__);
    item = local_80.fields._current;
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_80,Method_System_Collections_Generic_List_Enumerator<ABNLGBHKOCE>_Dispose__)
      ;
      return;
    }
    if ((KJFPGDFNFCL_o *)local_80.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pNVar3 = ((KJFPGDFNFCL_Fields *)((long)local_80.fields._current + 0x10))->KPFGHBEKJIM;
    if (pNVar3 == (NJPBHDMCLIN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    __this_00 = (pNVar3->fields).GGIGKNJPODI;
    if (__this_00 == (OLKKAIFGGAK_o *)0x0) break;
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_b8,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<KJFPGDFNFCL>_GetEnumerator__);
    local_a0.fields._index = local_b8.fields._index;
    local_a0.fields._version = local_b8.fields._version;
    local_a0.fields._list = local_b8.fields._list;
    local_a0.fields._current = local_b8.fields._current;
    while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_a0,
                              Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_MoveNext__
                             ), bVar1) {
      if ((KJFPGDFNFCL_o *)local_a0.fields._current == (KJFPGDFNFCL_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BKFOLMBMFNP = KJFPGDFNFCL__NHGGBEACKBD
                              ((KJFPGDFNFCL_o *)local_a0.fields._current,(MethodInfo *)0x0);
      pSVar2 = OLKKAIFGGAK_AHFAALBHPHJ__FNPJOAPMNKE(__this,BKFOLMBMFNP,method);
      if (pSVar2 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      method = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__;
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)pSVar2,item,
                 (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__)
      ;
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_a0,Method_System_Collections_Generic_List_Enumerator<KJFPGDFNFCL>_Dispose__);
    pSVar2 = (__this->fields).MHKDMKDBMBE;
    if (pSVar2 == (System_Collections_Generic_List_ABNLGBHKOCE__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    method = Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__;
    System_Collections_Generic_List<object>__Remove
              ((System_Collections_Generic_List_object__o *)pSVar2,item,
               (MethodInfo_26E62D4 *)Method_System_Collections_Generic_List<ABNLGBHKOCE>_Remove__);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

