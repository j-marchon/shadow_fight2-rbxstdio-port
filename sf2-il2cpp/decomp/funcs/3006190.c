// Nekki.SF2.GUI.Shop.InfoPanelContent$$BBOHGDDHMLH @ RVA 0x3006190

System_String_o *
Nekki_SF2_GUI_Shop_InfoPanelContent__BBOHGDDHMLH
          (System_String_o *DGGHNFBCNGI,int64_t OIHNACKJOJG,int64_t NBHHBBOJJME,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_04565b54 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_2422);
    FUN_01bab630(&StringLiteral_2182);
    FUN_01bab630(&StringLiteral_549);
    DAT_04565b54 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2422;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = DGGHNFBCNGI;
        thunk_FUN_01c20e04(values->m_Items + 1,DGGHNFBCNGI);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_549;
          thunk_FUN_01c20e04();
          if ((BJFCCEEPHOF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pSVar1 = BJFCCEEPHOF__POMAAOILGAL(OIHNACKJOJG,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_2182;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = BJFCCEEPHOF__POMAAOILGAL(NBHHBBOJJME,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                return pSVar1;
              }
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

