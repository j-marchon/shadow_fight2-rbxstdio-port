// MKFPGMBBGIA$$GMBNKPEIIEC @ RVA 0x31D73D8

void MKFPGMBBGIA__GMBNKPEIIEC(MKFPGMBBGIA_o *__this,System_String_o *GAJPCHEBACI,MethodInfo *method)

{
  MKFPGMBBGIA_Fields *pMVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  
  if ((DAT_04566cf3 & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_173);
    FUN_01bab630(&StringLiteral_21442);
    FUN_01bab630(&StringLiteral_11157);
    DAT_04566cf3 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_21442;
      thunk_FUN_01c20e04(values->m_Items);
      pMVar1 = &__this->fields;
      pSVar2 = System_Int32__ToString((int32_t)pMVar1,(MethodInfo *)0x0);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = pSVar2;
        thunk_FUN_01c20e04(values->m_Items + 1,pSVar2);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_173;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (__this->fields).DBOPNAKLJAL;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = GAJPCHEBACI;
              thunk_FUN_01c20e04(values->m_Items + 4,GAJPCHEBACI);
              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
              if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
              }
              OCLJMFBDKOA__DAHNGDAAMBP(pSVar2,false,StringLiteral_11157,(MethodInfo *)0x0);
              pMVar1->GPIIGPOLINL = pMVar1->GPIIGPOLINL + 1;
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

