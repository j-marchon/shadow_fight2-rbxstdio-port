// CFJANHACGMG$$LIJHLLAPAAA @ RVA 0x35980DC

void CFJANHACGMG__LIJHLLAPAAA
               (System_String_o *EIJDDKJONFO,System_String_o *MPCMLAMDOEO,MethodInfo *method)

{
  bool bVar1;
  
                    /* try { // try from 036980e0 to 037980e7 has its CatchHandler @ 03698148 */
                    /* try { // try from 036980f4 to 03798103 has its CatchHandler @ 03698144 */
  if ((DAT_04568db2 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1473);
    DAT_04568db2 = 1;
  }
  if (EIJDDKJONFO != (System_String_o *)0x0) {
                    /* try { // try from 0369811c to 03798123 has its CatchHandler @ 03698214 */
    bVar1 = System_String__EndsWith(EIJDDKJONFO,StringLiteral_1473,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 03698138 to 0379813b has its CatchHandler @ 03698140 */
      EIJDDKJONFO = System_String__Concat(EIJDDKJONFO,StringLiteral_1473,(MethodInfo *)0x0);
                    /* try { // try from 0369813c to 03798157 has its CatchHandler @ 03697d90 */
    }
                    /* catch() { ... } // from try @ 03698138 with catch @ 03698140 */
                    /* catch() { ... } // from try @ 036980f4 with catch @ 03698144 */
                    /* catch() { ... } // from try @ 036980e0 with catch @ 03698148 */
    NEHNBJKKABI__GPNPELOHJCJ(EIJDDKJONFO,MPCMLAMDOEO,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03698158 to 0379815b has its CatchHandler @ 03698204 */
  FUN_01bab8c8();
}

