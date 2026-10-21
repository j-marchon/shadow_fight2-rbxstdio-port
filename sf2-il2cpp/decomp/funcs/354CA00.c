// LEGDPJHPEOB$$ELAEIDFIJGF @ RVA 0x354CA00

void LEGDPJHPEOB__ELAEIDFIJGF
               (LEGDPJHPEOB_o *__this,NILLKLHKLHG_GLEGDBCJEOA_o *ACCIJLGMHOO,
               MMFIDKMDADC_o *JDGILABGBGH,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_List_IGFGDDANEPE__o *pSVar3;
  GGHCLMEFIGO_o *__this_00;
  ACHLOMELAJE_o *pAVar4;
  int32_t local_24;
  
  if ((DAT_04568b2a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IGFGDDANEPE>_get_Count__);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10636);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568b2a = 1;
  }
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
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar4 != (ACHLOMELAJE_o *)0x0) {
    if (ACCIJLGMHOO != (NILLKLHKLHG_GLEGDBCJEOA_o *)0x0) {
      pSVar2 = NILLKLHKLHG_GLEGDBCJEOA__NNOHEDCGPNL(ACCIJLGMHOO,(MethodInfo *)0x0);
      __this_00 = (pAVar4->fields).OIDPLCLELEN;
      if (__this_00 != (GGHCLMEFIGO_o *)0x0) {
        pSVar3 = GGHCLMEFIGO__IAHEDEMPGPE(__this_00,pSVar2,StringLiteral_1,true,(MethodInfo *)0x0);
        pSVar2 = (ACCIJLGMHOO->fields).KCPPJGKAILM;
        if (pSVar2 != (System_String_o *)0x0) {
          bVar1 = System_String__Equals(pSVar2,StringLiteral_10636,(MethodInfo *)0x0);
          if (!bVar1) {
            return;
          }
          if (pSVar3 != (System_Collections_Generic_List_IGFGDDANEPE__o *)0x0) {
            local_24 = (pSVar3->fields)._size;
            pSVar2 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
            if (JDGILABGBGH != (MMFIDKMDADC_o *)0x0) {
              (JDGILABGBGH->fields).HPACPFLKHPK = pSVar2;
              thunk_FUN_01c20e04(&JDGILABGBGH->fields,pSVar2);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

