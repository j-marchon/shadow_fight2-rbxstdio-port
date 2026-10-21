// KBECBDOOHCO$$MNHLFKMFAIG @ RVA 0x358F134

void KBECBDOOHCO__MNHLFKMFAIG
               (KBECBDOOHCO_o *__this,System_String_o *EIJDDKJONFO,UnityEngine_Color_o GKBNFBINIIP,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_SpriteRenderer_o *__this_01;
  UnityEngine_Sprite_o *value;
  
                    /* try { // try from 0368f138 to 0378f147 has its CatchHandler @ 0368f168 */
                    /* try { // try from 0368f148 to 0378f183 has its CatchHandler @ 0368efe8 */
  if ((DAT_04568d66 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f138 with catch @ 0368f168
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0368f128 with catch @ 0368f16c
                        */
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
                    /* try { // try from 0368f184 to 0378f187 has its CatchHandler @ 0368f27c */
                    /* try { // try from 0368f188 to 0378f1df has its CatchHandler @ 0368efe8 */
    FUN_01bab630(&StringLiteral_1);
    DAT_04568d66 = 1;
  }
  __this_00 = (__this->fields).LDAKOINICNJ;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (UnityEngine_SpriteRenderer_o *)
                UnityEngine_GameObject__AddComponent<object>
                          (__this_00,Method_UnityEngine_GameObject_AddComponent<SpriteRenderer>__);
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(KKCBGIBKOCP_TypeInfo);
    }
                    /* try { // try from 0368f1e0 to 0378f1e7 has its CatchHandler @ 0368f2a4 */
    value = KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1,EIJDDKJONFO,false,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 0368f1f0 to 0378f1ff has its CatchHandler @ 0368f2a0 */
      UnityEngine_SpriteRenderer__set_sprite(__this_01,value,(MethodInfo *)0x0);
                    /* try { // try from 0368f200 to 0378f28b has its CatchHandler @ 0368efe8 */
      UnityEngine_SpriteRenderer__set_color(__this_01,GKBNFBINIIP,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

