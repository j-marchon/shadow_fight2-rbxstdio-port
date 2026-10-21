// CPJDJFPABGI$$.ctor @ RVA 0x3284968

void CPJDJFPABGI___ctor(CPJDJFPABGI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__int___o *__this_00;
  System_Collections_Generic_List_KeyValuePair_string__int___o **ppSVar1;
  
                    /* try { // try from 03384974 to 03484977 has its CatchHandler @ 03384988 */
                    /* catch() { ... } // from try @ 03384974 with catch @ 03384988 */
                    /* try { // try from 03384998 to 03484a07 has its CatchHandler @ 03384a1c */
  if ((DAT_045672a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045672a9 = 1;
  }
  (__this->fields).PMHMOJGEAAN = StringLiteral_1;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_KeyValuePair_string__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_int>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<object,_int>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<string,_int>>__ctor__);
  ppSVar1 = &(__this->fields).NDEECPOPNFM;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03384a08 to 03484a13 has its CatchHandler @ 033842c8 */
  BOFEMGGNODC___ctor((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
  return;
}

