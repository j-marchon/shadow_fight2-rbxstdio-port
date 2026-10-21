// AHOEIGAOKEL$$HOFDLJKJEAJ @ RVA 0x30D0054

void AHOEIGAOKEL__HOFDLJKJEAJ(AHOEIGAOKEL_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Action_string__o *CJNHFNHJHPE;
  System_Action_CFEFALDOEMD__o *CJNHFNHJHPE_00;
  System_Action_BKLDKOMCOPN__o *CJNHFNHJHPE_01;
  System_Collections_Generic_List_LabelButton__o *pSVar2;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  DGGBFKNKEAH_o *pDVar3;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  
  if ((DAT_045662fa & 1) == 0) {
    FUN_01bab630(&Method_AHOEIGAOKEL_IHKHIJONLCM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_JCLPLBEJHGM__);
    FUN_01bab630(&Method_AHOEIGAOKEL_POGAGHOPPEI__);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<CFEFALDOEMD>_TypeInfo);
    FUN_01bab630(&System_Action<BKLDKOMCOPN>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<LabelButton>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
    DAT_045662fa = 1;
    method = extraout_x1;
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (DAT_045655e8 == '\0') {
    FUN_01bab630(&KMFFBHPKMLE_TypeInfo,method);
    DAT_045655e8 = '\x01';
  }
  pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
  CJNHFNHJHPE = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
    DGGBFKNKEAH__LHBNADFCNHO(pDVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (DAT_045655e8 == '\0') {
      FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
      DAT_045655e8 = '\x01';
    }
    pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
    CJNHFNHJHPE_00 =
         (System_Action_CFEFALDOEMD__o *)thunk_FUN_01bda818(System_Action<CFEFALDOEMD>_TypeInfo);
    System_Action<object>___ctor();
    if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
      DGGBFKNKEAH__MJJEHFDLAHD(pDVar3,CJNHFNHJHPE_00,(MethodInfo *)0x0);
      if (DAT_045655e8 == '\0') {
        FUN_01bab630(&KMFFBHPKMLE_TypeInfo);
        DAT_045655e8 = '\x01';
      }
      pDVar3 = KMFFBHPKMLE_TypeInfo->static_fields->_FDNPEHBNDBI_k__BackingField;
      CJNHFNHJHPE_01 =
           (System_Action_BKLDKOMCOPN__o *)thunk_FUN_01bda818(System_Action<BKLDKOMCOPN>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar3 != (DGGBFKNKEAH_o *)0x0) {
        DGGBFKNKEAH__AHKPBJGPOMH(pDVar3,CJNHFNHJHPE_01,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).HANEOGJOELA;
        if (pSVar2 != (System_Collections_Generic_List_LabelButton__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    (&local_58,(System_Collections_Generic_List_object__o *)pSVar2,
                     Method_System_Collections_Generic_List<LabelButton>_GetEnumerator__);
          while( true ) {
            bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (&local_58,
                               Method_System_Collections_Generic_List_Enumerator<LabelButton>_MoveNext__
                              );
            __this_00 = local_58.fields._current;
            if (!bVar1) break;
            if ((SFButton_o *)local_58.fields._current == (SFButton_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            SFButton__RemoveAllEventListener
                      ((SFButton_o *)local_58.fields._current,(MethodInfo *)0x0);
            LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
            Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
          }
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_58,
                     Method_System_Collections_Generic_List_Enumerator<LabelButton>_Dispose__);
          pSVar2 = (__this->fields).HANEOGJOELA;
          if (pSVar2 != (System_Collections_Generic_List_LabelButton__o *)0x0) {
            length = (pSVar2->fields)._size;
            (pSVar2->fields)._size = 0;
            (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
            if (0 < length) {
              System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,
                                  (MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

