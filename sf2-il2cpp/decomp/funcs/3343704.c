// ADACCFIHMAK$$NJIPKBHALNO @ RVA 0x3343704

bool ADACCFIHMAK__NJIPKBHALNO(MethodInfo *method)

{
  bool bVar1;
  ACHLOMELAJE_o *__this;
  MEMHEPBAJJA_HIAEDCDJJDJ_o *pMVar2;
  System_String_o *a;
  
                    /* try { // try from 03443710 to 03543b33 has its CatchHandler @ 03443710
                       catch() { ... } // from try @ 03443710 with catch @ 03443710
                       catch() { ... } // from try @ 03443bb4 with catch @ 03443710
                       catch() { ... } // from try @ 03443bf0 with catch @ 03443710
                       catch() { ... } // from try @ 03443c78 with catch @ 03443710
                       catch() { ... } // from try @ 03443cb4 with catch @ 03443710
                       catch() { ... } // from try @ 03443cf4 with catch @ 03443710 */
  if ((DAT_045679ae & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_16203);
    FUN_01bab630(&StringLiteral_1606);
    DAT_045679ae = 1;
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
  __this = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  a = (System_String_o *)0x0;
  if ((__this != (ACHLOMELAJE_o *)0x0) &&
     (pMVar2 = ACHLOMELAJE__HKIEGNBOFCD(__this,StringLiteral_16203,0,(MethodInfo *)0x0),
     a = (System_String_o *)0x0, pMVar2 != (MEMHEPBAJJA_HIAEDCDJJDJ_o *)0x0)) {
    a = (pMVar2->fields).JAICMIMBIOA;
  }
  bVar1 = System_String__op_Equality(a,StringLiteral_1606,(MethodInfo *)0x0);
  return bVar1;
}

