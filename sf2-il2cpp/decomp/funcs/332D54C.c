// OICCPAIHLMK$$.ctor @ RVA 0x332D54C

void OICCPAIHLMK___ctor(OICCPAIHLMK_o *__this,MethodInfo *method)

{
  System_Char_array *pSVar1;
  
  if ((DAT_045678e7 & 1) == 0) {
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045678e7 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 0342d5b0 to 0352d5b7 has its CatchHandler @ 0342d614 */
      pSVar1->m_Items[0] = 0x7c;
      (__this->fields).GFPMKLDHKKL = pSVar1;
      thunk_FUN_01c20e04();
                    /* try { // try from 0342d5c8 to 0352d5d3 has its CatchHandler @ 0342d60c */
      (__this->fields).OPONPIJGOKL = StringLiteral_1;
      thunk_FUN_01c20e04();
                    /* try { // try from 0342d5d4 to 0352d603 has its CatchHandler @ 0342d51c */
      (__this->fields).LAJBAKDJEKM = StringLiteral_1;
      thunk_FUN_01c20e04();
      (__this->fields).FBCLCJAHCHI = StringLiteral_1;
      thunk_FUN_01c20e04();
                    /* try { // try from 0342d604 to 0352d607 has its CatchHandler @ 0342d610 */
      BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0342d5c8 with catch @ 0342d60c
                        */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0342d608 to 0352d62b has its CatchHandler @ 0342d51c */
  FUN_01bab8c8();
}

