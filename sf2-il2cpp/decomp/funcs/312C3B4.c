// ADGIHFGIFHO$$CJPIJKJDHGI @ RVA 0x312C3B4

HOOAAGABMBL_o *
ADGIHFGIFHO__CJPIJKJDHGI
          (ADGIHFGIFHO_o *__this,System_String_o *EBOHIPKPFDJ,System_String_o *HJBFKFHHAEO,
          MethodInfo *method)

{
  bool bVar1;
  HOOAAGABMBL_o *pHVar2;
  
                    /* try { // try from 0322c3dc to 0332c3e7 has its CatchHandler @ 0322c478 */
  if ((DAT_0456669c & 1) == 0) {
                    /* try { // try from 0322c3e8 to 0332c467 has its CatchHandler @ 0322c23c */
    FUN_01bab630(&StringLiteral_10806);
    FUN_01bab630(&StringLiteral_10823);
    FUN_01bab630(&StringLiteral_10951);
    DAT_0456669c = 1;
  }
  bVar1 = System_String__op_Equality(EBOHIPKPFDJ,StringLiteral_10823,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_10806,(MethodInfo *)0x0);
    if (bVar1) {
      pHVar2 = (__this->fields).GFNKONPLPEB;
    }
    else {
      bVar1 = System_String__op_Equality(HJBFKFHHAEO,StringLiteral_10951,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_0322c474;
      pHVar2 = (__this->fields).NOKHEGPHOHK;
    }
                    /* try { // try from 0322c468 to 0332c46b has its CatchHandler @ 0322c474 */
                    /* try { // try from 0322c46c to 0332c497 has its CatchHandler @ 0322c23c */
    return pHVar2;
  }
LAB_0322c474:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c468 with catch @ 0322c474
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c3dc with catch @ 0322c478
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c3b0 with catch @ 0322c47c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0322c354 with catch @ 0322c480
                        */
  pHVar2 = PJKHAJKEHEL__CJPIJKJDHGI
                     ((PJKHAJKEHEL_o *)__this,EBOHIPKPFDJ,HJBFKFHHAEO,(MethodInfo *)0x0);
  return pHVar2;
}

