// MatchingDialog$$.cctor @ RVA 0x342C6B4

void MatchingDialog___cctor(MethodInfo *method)

{
  CBOEGGBIJMD_o *__this;
  
                    /* try { // try from 0352c6b8 to 0362c6cb has its CatchHandler @ 0352c730 */
                    /* catch() { ... } // from try @ 0352c56c with catch @ 0352c6cc
                       try { // try from 0352c6cc to 0362c6e7 has its CatchHandler @ 0352c2a8 */
                    /* catch() { ... } // from try @ 0352c59c with catch @ 0352c6d0 */
  if ((DAT_04568143 & 1) == 0) {
    FUN_01bab630(&CBOEGGBIJMD_TypeInfo);
                    /* try { // try from 0352c6e8 to 0362c6eb has its CatchHandler @ 0352c70c */
                    /* try { // try from 0352c6ec to 0362c713 has its CatchHandler @ 0352c2a8 */
    FUN_01bab630(&MatchingDialog_TypeInfo);
    DAT_04568143 = 1;
  }
  __this = (CBOEGGBIJMD_o *)thunk_FUN_01bda818(CBOEGGBIJMD_TypeInfo);
  CBOEGGBIJMD___ctor(__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0352c6e8 with catch @ 0352c70c */
                    /* try { // try from 0352c714 to 0362c71b has its CatchHandler @ 0352c730 */
  MatchingDialog_TypeInfo->static_fields->OCDOOJLNNAL = __this;
                    /* try { // try from 0352c71c to 0362c727 has its CatchHandler @ 0352c2a8 */
                    /* try { // try from 0352c728 to 0362c72f has its CatchHandler @ 0352c730 */
  thunk_FUN_01c20e04(MatchingDialog_TypeInfo->static_fields,__this);
  return;
}

