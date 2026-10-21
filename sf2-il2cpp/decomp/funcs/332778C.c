// PNLFHHJGDLI$$KOBIMCGMHLJ @ RVA 0x332778C

void PNLFHHJGDLI__KOBIMCGMHLJ(MethodInfo *method)

{
  int32_t iVar1;
  PNLFHHJGDLI_StaticFields *pPVar2;
  System_Collections_Generic_List_KeyValuePair_string__uint___o *pSVar3;
  int BJMMLGEBJDK;
  
  if ((DAT_045678a1 & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_uint>>_Clear__);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_045678a1 = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  while( true ) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pPVar2 = PNLFHHJGDLI_TypeInfo->static_fields;
    if (pPVar2->PLGCMDGLNEL <= BJMMLGEBJDK) break;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_Audio_AudioManager__Stop(BJMMLGEBJDK,false,(MethodInfo *)0x0);
    BJMMLGEBJDK = BJMMLGEBJDK + 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
    pPVar2 = PNLFHHJGDLI_TypeInfo->static_fields;
  }
  pSVar3 = pPVar2->CMDACPPJJEF;
  if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
      pPVar2 = PNLFHHJGDLI_TypeInfo->static_fields;
    }
    pSVar3 = pPVar2->CPHHBNFBJGP;
    if (pSVar3 != (System_Collections_Generic_List_KeyValuePair_string__uint___o *)0x0) {
      iVar1 = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

