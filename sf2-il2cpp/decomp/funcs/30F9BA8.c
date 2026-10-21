// CEGBGLPICEM$$OFPHPMGMCAL @ RVA 0x30F9BA8

System_String_o * CEGBGLPICEM__OFPHPMGMCAL(CEGBGLPICEM_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if ((DAT_0456648e & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_230);
    FUN_01bab630(&StringLiteral_981);
    FUN_01bab630(&StringLiteral_1100);
    DAT_0456648e = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_981;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = (__this->fields).LAJBAKDJEKM;
        thunk_FUN_01c20e04(values->m_Items + 1);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_230;
          thunk_FUN_01c20e04(values->m_Items + 2);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = (__this->fields).ADNBCBCEGBH;
            thunk_FUN_01c20e04(values->m_Items + 3);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_1100;
                    /* try { // try from 031f9cc0 to 032fa0c3 has its CatchHandler @ 031f9cc0
                       catch() { ... } // from try @ 031f9cc0 with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa294 with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa384 with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa38c with catch @ 031f9cc0
                       catch() { ... } // from try @ 031fa468 with catch @ 031f9cc0 */
              thunk_FUN_01c20e04();
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar1;
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

