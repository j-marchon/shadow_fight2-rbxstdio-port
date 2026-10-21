// KKKHGGHNHLO$$.ctor @ RVA 0x3505518

void KKKHGGHNHLO___ctor(KKKHGGHNHLO_o *__this,UnityEngine_GameObject_o *CMMIJCJOBBF,
                       MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  
                    /* try { // try from 0360551c to 03705527 has its CatchHandler @ 0360509c */
                    /* try { // try from 03605528 to 0370552f has its CatchHandler @ 03605530 */
                    /* catch() { ... } // from try @ 036054b4 with catch @ 03605530
                       catch() { ... } // from try @ 03605528 with catch @ 03605530 */
  if ((DAT_04568894 & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<SpriteRenderer>__);
    DAT_04568894 = 1;
  }
  BMNKDDCJACM___ctor((BMNKDDCJACM_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_SpriteRenderer_o *)
           Util__OHBILOGJCLA<object>(CMMIJCJOBBF,Method_Util_OHBILOGJCLA<SpriteRenderer>__);
  (__this->fields).IAKCIALILLN = pUVar1;
  thunk_FUN_01c20e04(&__this->fields,pUVar1);
  return;
}

