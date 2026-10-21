// PNLFHHJGDLI$$GIENGNEGHPJ @ RVA 0x33275E8

void PNLFHHJGDLI__GIENGNEGHPJ(MethodInfo *method)

{
  int iVar1;
  int32_t NFNLDCNBBIF;
  uint uVar2;
  System_Int32_array *KGHJJGDIOON;
  PNLFHHJGDLI_c *pPVar3;
  PNLFHHJGDLI_StaticFields *pPVar4;
  int iVar5;
  
  if ((DAT_0456789e & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789e = 1;
  }
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  KGHJJGDIOON = (System_Int32_array *)
                FUN_01bab718(int___TypeInfo,
                             (PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL -
                             PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL) + 1);
  iVar5 = PNLFHHJGDLI_TypeInfo->static_fields->CPOAGJAKIDL;
  pPVar3 = PNLFHHJGDLI_TypeInfo;
  while( true ) {
    if ((pPVar3->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(pPVar3);
      iVar1 = PNLFHHJGDLI_TypeInfo->static_fields->PLGCMDGLNEL;
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(PNLFHHJGDLI_TypeInfo);
      }
      pPVar4 = PNLFHHJGDLI_TypeInfo->static_fields;
      pPVar3 = PNLFHHJGDLI_TypeInfo;
    }
    else {
      pPVar4 = pPVar3->static_fields;
      iVar1 = pPVar4->PLGCMDGLNEL;
    }
    if (iVar1 <= iVar5) {
      NFNLDCNBBIF = pPVar4->EEFDLAHNJHL;
      if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      Nekki_Audio_AudioManager__Init
                ((System_String_o *)0x0,NFNLDCNBBIF,KGHJJGDIOON,(MethodInfo *)0x0);
      return;
    }
    if (KGHJJGDIOON == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = iVar5 - pPVar4->CPOAGJAKIDL;
    if ((uint)KGHJJGDIOON->max_length <= uVar2) break;
    KGHJJGDIOON->m_Items[(int)uVar2] = iVar5;
    iVar5 = iVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

