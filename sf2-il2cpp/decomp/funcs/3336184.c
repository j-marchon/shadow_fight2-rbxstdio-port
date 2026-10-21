// OHDDKGHEEPA$$OHADPGELNKJ @ RVA 0x3336184

void OHDDKGHEEPA__OHADPGELNKJ(OHDDKGHEEPA_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_List_AFFHKININGD__o *__this_01;
  System_Collections_Generic_List_T__o *CJNHFNHJHPE;
  FPLOLKHJIAF_o *__this_02;
  undefined8 uVar2;
  MethodInfo *method_00;
  OHDDKGHEEPA_PKBJJBGAIGC_o *pOVar3;
  FPLOLKHJIAF_o *GOAHBPBJCKC;
  undefined1 auVar4 [16];
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = __this;
  if ((DAT_0456794f & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_get_Current__);
    FUN_01bab630(&FPLOLKHJIAF_TypeInfo);
    auVar4 = FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
    DAT_0456794f = 1;
  }
  uVar2 = auVar4._0_8_;
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  pOVar3 = (__this->fields).OJPLGFNIGBC;
  if (pOVar3 != (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
    if ((pOVar3->fields).KMANGLPAOJM != (FPLOLKHJIAF_o *)0x0) {
      __this_01 = (__this->fields).super.HDDNEKLMLMF;
      uVar2 = 0;
      if (__this_01 == (System_Collections_Generic_List_AFFHKININGD__o *)0x0) goto LAB_034362f8;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_88,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<AFFHKININGD>_GetEnumerator__);
      local_70.fields._index = local_88.fields._index;
      local_70.fields._version = local_88.fields._version;
      local_70.fields._list = local_88.fields._list;
      local_70.fields._current = local_88.fields._current;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_70,
                           Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_MoveNext__
                          );
        __this_00 = local_70.fields._current;
        if (!bVar1) break;
        if ((AFFHKININGD_o *)local_70.fields._current == (AFFHKININGD_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        CJNHFNHJHPE = (System_Collections_Generic_List_T__o *)
                      (*(((AFFHKININGD_c *)(local_70.fields._current)->klass)->vtable).
                        _4_NIKCNPMKAFK.methodPtr)
                                (local_70.fields._current,
                                 (((AFFHKININGD_c *)(local_70.fields._current)->klass)->vtable).
                                 _4_NIKCNPMKAFK.method);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          (CJNHFNHJHPE,Method_DJNBJHPDKDP_OBECCOPBADO<NIAFDKHDBMA>__);
        if (bVar1) {
          pOVar3 = (__this->fields).OJPLGFNIGBC;
          if (pOVar3 == (OHDDKGHEEPA_PKBJJBGAIGC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          GOAHBPBJCKC = (pOVar3->fields).KMANGLPAOJM;
          __this_02 = (FPLOLKHJIAF_o *)thunk_FUN_01bda818(FPLOLKHJIAF_TypeInfo);
          method_00 = (MethodInfo *)0x0;
          FPLOLKHJIAF___ctor(__this_02,GOAHBPBJCKC,(MethodInfo *)0x0);
          AFFHKININGD__ANCGCCEOBAA((AFFHKININGD_o *)__this_00,(AJNNHGGLGIF_o *)__this_02,method_00);
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_70,Method_System_Collections_Generic_List_Enumerator<AFFHKININGD>_Dispose__)
      ;
    }
    return;
  }
LAB_034362f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,auVar4._8_8_);
}

