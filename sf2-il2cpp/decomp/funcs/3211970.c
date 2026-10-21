// NGCBNMBJMOE.<>c$$PDHFIPANFCA @ RVA 0x3211970

int32_t NGCBNMBJMOE_<>c__PDHFIPANFCA
                  (NGCBNMBJMOE___c_o *__this,UnityEngine_Sprite_o *sprite,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  System_Text_RegularExpressions_Match_o *__this_00;
  
                    /* try { // try from 03311970 to 03411973 has its CatchHandler @ 033119a0 */
                    /* try { // try from 03311974 to 03411977 has its CatchHandler @ 03311564 */
                    /* try { // try from 03311978 to 0341197b has its CatchHandler @ 03311994 */
                    /* try { // try from 0331197c to 0341197f has its CatchHandler @ 03311990 */
                    /* try { // try from 03311980 to 03411983 has its CatchHandler @ 0331198c */
                    /* try { // try from 03311984 to 034119f7 has its CatchHandler @ 03311564 */
  if ((DAT_04566e93 & 1) == 0) {
                    /* catch() { ... } // from try @ 03311980 with catch @ 0331198c */
                    /* catch() { ... } // from try @ 0331197c with catch @ 03311990 */
    FUN_01bab630(&System_Text_RegularExpressions_Regex_TypeInfo);
                    /* catch() { ... } // from try @ 03311978 with catch @ 03311994 */
                    /* catch() { ... } // from try @ 03311898 with catch @ 03311998 */
                    /* catch() { ... } // from try @ 03311880 with catch @ 0331199c */
    __this = (NGCBNMBJMOE___c_o *)FUN_01bab630(&StringLiteral_15691);
                    /* catch() { ... } // from try @ 03311970 with catch @ 033119a0 */
                    /* catch() { ... } // from try @ 0331196c with catch @ 033119a4 */
    DAT_04566e93 = 1;
  }
                    /* catch() { ... } // from try @ 03311804 with catch @ 033119a8 */
  if (sprite != (UnityEngine_Sprite_o *)0x0) {
                    /* catch() { ... } // from try @ 03311820 with catch @ 033119ac */
                    /* catch() { ... } // from try @ 033118a0 with catch @ 033119b0 */
                    /* catch() { ... } // from try @ 033117fc with catch @ 033119b4 */
                    /* catch() { ... } // from try @ 033117ec with catch @ 033119b8 */
                    /* catch() { ... } // from try @ 03311838 with catch @ 033119bc */
                    /* catch() { ... } // from try @ 033117d4 with catch @ 033119c0 */
                    /* catch() { ... } // from try @ 03311968 with catch @ 033119c4 */
    pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)sprite,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033117c8 with catch @ 033119c8 */
                    /* catch() { ... } // from try @ 033117ac with catch @ 033119cc */
                    /* catch() { ... } // from try @ 03311960 with catch @ 033119d0 */
                    /* catch() { ... } // from try @ 0331174c with catch @ 033119d4 */
    if ((System_Text_RegularExpressions_Regex_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 033116f0 with catch @ 033119d8 */
      thunk_FUN_01ba7564(System_Text_RegularExpressions_Regex_TypeInfo);
    }
    __this_00 = System_Text_RegularExpressions_Regex__Match
                          (pSVar2,StringLiteral_15691,0x40,(MethodInfo *)0x0);
    __this = (NGCBNMBJMOE___c_o *)0x0;
    if (__this_00 != (System_Text_RegularExpressions_Match_o *)0x0) {
                    /* try { // try from 033119f8 to 034119fb has its CatchHandler @ 03311a08 */
      pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)__this_00,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033119f8 with catch @ 03311a08 */
      iVar1 = PCOEHCPGBBG__JBGCINPPLAC(pSVar2,0,(MethodInfo *)0x0);
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

