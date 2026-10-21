// DNELIPCHKLK$$EMIGGAINFCC @ RVA 0x33CD120

void DNELIPCHKLK__EMIGGAINFCC(DNELIPCHKLK_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_04567e34 & 1) == 0) {
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_22485);
    DAT_04567e34 = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = (__this->fields).GDPFBDIJNHA;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
                    /* try { // try from 034cd1b0 to 035cd1b7 has its CatchHandler @ 034cd1ec */
        values->m_Items[1] = StringLiteral_22485;
                    /* try { // try from 034cd1b8 to 035cd1bb has its CatchHandler @ 034cd1d8 */
        thunk_FUN_01c20e04(values->m_Items + 1);
                    /* try { // try from 034cd1bc to 035cd1bf has its CatchHandler @ 034cd1d4 */
                    /* try { // try from 034cd1c0 to 035cd1c3 has its CatchHandler @ 034ccee8 */
                    /* try { // try from 034cd1c4 to 035cd1c7 has its CatchHandler @ 034cd1d0 */
        if (2 < (uint)values->max_length) {
                    /* try { // try from 034cd1c8 to 035cd1fb has its CatchHandler @ 034ccee8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1c4 with catch @ 034cd1d0
                        */
          values->m_Items[2] = (__this->fields).GJFJPLHCBKJ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1bc with catch @ 034cd1d4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1b8 with catch @ 034cd1d8
                        */
          thunk_FUN_01c20e04(values->m_Items + 2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd08c with catch @ 034cd1dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd024 with catch @ 034cd1e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ccfc8 with catch @ 034cd1e4
                        */
          if (3 < (uint)values->max_length) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd09c with catch @ 034cd1e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034cd1b0 with catch @ 034cd1ec
                        */
            values->m_Items[3] = StringLiteral_22485;
            thunk_FUN_01c20e04(values->m_Items + 3);
                    /* try { // try from 034cd1fc to 035cd1ff has its CatchHandler @ 034cd210 */
            if (4 < (uint)values->max_length) {
                    /* catch() { ... } // from try @ 034cd1fc with catch @ 034cd210 */
              values->m_Items[4] = (__this->fields).ANOPJEEGOLJ;
              thunk_FUN_01c20e04();
                    /* try { // try from 034cd218 to 035cd27f has its CatchHandler @ 034cd294 */
              pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
              ppSVar2 = &(__this->fields).NANIFEMFPJP;
              *ppSVar2 = pSVar1;
              thunk_FUN_01c20e04(ppSVar2,pSVar1);
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

