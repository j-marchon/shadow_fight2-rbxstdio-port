// FPIPKMIODLH$$.ctor @ RVA 0x3116A68

void FPIPKMIODLH___ctor(FPIPKMIODLH_o *__this,System_String_o *KGLJICLJHEL,float NMFKJBOAOLK,
                       MethodInfo *method)

{
  FCJBEKHDLAF_o **ppFVar1;
  
  if ((DAT_045665ba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
    FUN_01bab630(&StringLiteral_4171);
    DAT_045665ba = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._COIPKAKHDFP_k__BackingField = KGLJICLJHEL;
  thunk_FUN_01c20e04(&__this->fields,KGLJICLJHEL);
  (__this->fields)._BEEGDJFPEHO_k__BackingField = NMFKJBOAOLK;
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565b7f == '\0') {
    FUN_01bab630(&FCJBEKHDLAF_TypeInfo);
                    /* try { // try from 03216b14 to 03316b1b has its CatchHandler @ 03216ccc */
    DAT_04565b7f = '\x01';
  }
  if ((FCJBEKHDLAF_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
                    /* try { // try from 03216b28 to 03316b33 has its CatchHandler @ 03216cc4 */
  }
  ppFVar1 = &(__this->fields)._CKOGELANOLD_k__BackingField;
  *ppFVar1 = FCJBEKHDLAF_TypeInfo->static_fields->IGABFCCGLCO;
  thunk_FUN_01c20e04(ppFVar1);
  if (*ppFVar1 != (FCJBEKHDLAF_o *)0x0) {
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03216b74 to 03316b83 has its CatchHandler @ 03216cc0 */
                    /* try { // try from 03216b88 to 03316b93 has its CatchHandler @ 03216cbc */
  UnityEngine_Debug__LogError(StringLiteral_4171,(MethodInfo *)0x0);
  return;
}

