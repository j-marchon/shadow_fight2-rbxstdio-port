// NLPJLHOEAOE$$JNKDDHGIAAE @ RVA 0x3203524

void NLPJLHOEAOE__JNKDDHGIAAE(NLPJLHOEAOE_o *__this,int64_t APFFCAGGALK,MethodInfo *method)

{
  Il2CppObject *DLNPKEIJGGG;
  bool bVar1;
  GGHCLMEFIGO_o *pGVar2;
  System_Collections_Generic_List_AMJMGFCCAKN__o *__this_00;
  ACHLOMELAJE_o *pAVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
  if ((DAT_04566e2b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<AMJMGFCCAKN>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04566e2b = 1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (((pAVar3 != (ACHLOMELAJE_o *)0x0) &&
      (pGVar2 = (pAVar3->fields).OIDPLCLELEN, pGVar2 != (GGHCLMEFIGO_o *)0x0)) &&
     (__this_00 = GGHCLMEFIGO__NAKEPBLLOLH(pGVar2,(MethodInfo *)0x0),
     __this_00 != (System_Collections_Generic_List_AMJMGFCCAKN__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<AMJMGFCCAKN>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_70,
                         Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_MoveNext__);
      DLNPKEIJGGG = local_70.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_70,
                   Method_System_Collections_Generic_List_Enumerator<AMJMGFCCAKN>_Dispose__);
        return;
      }
      if ((AMJMGFCCAKN_o *)local_70.fields._current == (AMJMGFCCAKN_o *)0x0) break;
      lVar4 = ((AMJMGFCCAKN_Fields *)((long)local_70.fields._current + 0x10))->CJKLJJIMECK;
      if ((0 < lVar4) && (lVar4 <= APFFCAGGALK)) {
        if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        MGNPHCAAEIO__IAGKBFCKFKB
                  ((HOOAAGABMBL_o *)DLNPKEIJGGG,0x11,1,(System_Action_BKKPAKHJDKB__o *)0x0,true,
                   (MethodInfo *)0x0);
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (DAT_04565b7d == '\0') {
          FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
          DAT_04565b7d = '\x01';
        }
        if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        pAVar3 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
        if (pAVar3 == (ACHLOMELAJE_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pGVar2 = (pAVar3->fields).OIDPLCLELEN;
        if (pGVar2 == (GGHCLMEFIGO_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        GGHCLMEFIGO__HOOJKMPPCMC(pGVar2,(AMJMGFCCAKN_o *)DLNPKEIJGGG,true,(MethodInfo *)0x0);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

