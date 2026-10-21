// EAAHMDAMHNI$$EMFEHPCNCDF @ RVA 0x3035928

float EAAHMDAMHNI__EMFEHPCNCDF
                (OLKKAIFGGAK_o *CHBJNMMEAPG,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_String_o *message;
  NGKBNOEJLPH_o *pNVar2;
  float fVar3;
  
  if ((DAT_04565d3d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 0313595c to 032359b3 has its CatchHandler @ 0313595c
                       catch() { ... } // from try @ 0313595c with catch @ 0313595c
                       catch() { ... } // from try @ 03135ab4 with catch @ 0313595c
                       catch() { ... } // from try @ 03135bb8 with catch @ 0313595c
                       catch() { ... } // from try @ 03135c28 with catch @ 0313595c */
    FUN_01bab630(&StringLiteral_4177);
    FUN_01bab630(&StringLiteral_15862);
    FUN_01bab630(&StringLiteral_15947);
    FUN_01bab630(&StringLiteral_15955);
    FUN_01bab630(&StringLiteral_15934);
    DAT_04565d3d = 1;
  }
  if (CHBJNMMEAPG != (OLKKAIFGGAK_o *)0x0) {
    pNVar2 = (CHBJNMMEAPG->fields).ADGFKAPOIFN;
    fVar3 = 0.0;
    if ((pNVar2 != (NGKBNOEJLPH_o *)0x0) &&
       (fVar3 = 0.0, (pNVar2->fields)._MPABEMCEHCL_k__BackingField != (CAAJMGKIPIE_o *)0x0)) {
      if (CJNHFNHJHPE == (System_String_o *)0x0) goto LAB_03135ab0;
                    /* try { // try from 031359b4 to 032359bf has its CatchHandler @ 03135bdc */
                    /* try { // try from 031359c4 to 032359c7 has its CatchHandler @ 03135bd8 */
      bVar1 = System_String__StartsWith(CJNHFNHJHPE,StringLiteral_15862,(MethodInfo *)0x0);
      if (!bVar1) {
                    /* try { // try from 03135a00 to 03235a03 has its CatchHandler @ 03135bb8 */
                    /* try { // try from 03135a0c to 03235a0f has its CatchHandler @ 03135bc0 */
        fVar3 = PCOEHCPGBBG__OFFODGKLGOP(CJNHFNHJHPE,0.0,(MethodInfo *)0x0);
        return fVar3;
      }
                    /* try { // try from 031359dc to 032359df has its CatchHandler @ 03135bd0 */
      bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_15955,(MethodInfo *)0x0);
      if (bVar1) {
        fVar3 = (pNVar2->fields).KMKHEGOMOBM;
      }
      else {
        bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_15934,(MethodInfo *)0x0);
        if (bVar1) {
          fVar3 = (pNVar2->fields).BBOFDBPEOIM;
        }
        else {
                    /* try { // try from 03135a44 to 03235a4f has its CatchHandler @ 03135be8 */
          bVar1 = System_String__op_Equality(CJNHFNHJHPE,StringLiteral_15947,(MethodInfo *)0x0);
          if (bVar1) {
            fVar3 = (pNVar2->fields).EBKPLCJLKMG;
          }
          else {
                    /* try { // try from 03135a5c to 03235a73 has its CatchHandler @ 03135bec */
            message = System_String__Concat(StringLiteral_4177,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 03135a7c to 03235a7f has its CatchHandler @ 03135bcc */
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03135a88 to 03235a8b has its CatchHandler @ 03135bc8 */
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
          }
        }
      }
    }
                    /* try { // try from 03135aa4 to 03235aa7 has its CatchHandler @ 03135bc4 */
                    /* try { // try from 03135aac to 03235ab3 has its CatchHandler @ 03135bbc */
    return fVar3;
  }
LAB_03135ab0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

