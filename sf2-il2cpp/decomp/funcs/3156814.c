// MGICPMNIAMM$$AAPJEJKHCOK @ RVA 0x3156814

bool MGICPMNIAMM__AAPJEJKHCOK
               (MGICPMNIAMM_o *__this,System_Text_StringBuilder_o *KHHGPLOMHBB,
               NILLKLHKLHG_o *NIIOOBMIIPJ,System_String_o *LCFHCBEAEIM,System_String_o *GDLOOMPBNEB,
               MethodInfo *method)

{
  bool bVar1;
  MMFIDKMDADC_o *pMVar2;
  System_String_array *values;
  System_String_o *value;
  
  if ((DAT_04566841 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_364);
    FUN_01bab630(&StringLiteral_363);
    __this = (MGICPMNIAMM_o *)FUN_01bab630(&StringLiteral_18069);
    DAT_04566841 = 1;
  }
  if (NIIOOBMIIPJ == (NILLKLHKLHG_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  NILLKLHKLHG__HNIHOIAMDPC(NIIOOBMIIPJ,LCFHCBEAEIM,(MethodInfo *)0x0);
  pMVar2 = NILLKLHKLHG__CHKGAHCDFJF(NIIOOBMIIPJ,true,(MethodInfo *)0x0);
  if (pMVar2 == (MMFIDKMDADC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  bVar1 = System_String__op_Inequality((pMVar2->fields).HPACPFLKHPK,GDLOOMPBNEB,(MethodInfo *)0x0);
  if (bVar1) {
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
    if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[0] = StringLiteral_18069;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[1] = LCFHCBEAEIM;
    thunk_FUN_01c20e04(values->m_Items + 1,LCFHCBEAEIM);
    if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[2] = StringLiteral_364;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[3] = (pMVar2->fields).HPACPFLKHPK;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[4] = StringLiteral_363;
    thunk_FUN_01c20e04();
    if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    values->m_Items[5] = GDLOOMPBNEB;
    thunk_FUN_01c20e04(values->m_Items + 5,GDLOOMPBNEB);
    value = System_String__Concat(values,(MethodInfo *)0x0);
    if (KHHGPLOMHBB == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Text_StringBuilder__AppendLine(KHHGPLOMHBB,value,(MethodInfo *)0x0);
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

