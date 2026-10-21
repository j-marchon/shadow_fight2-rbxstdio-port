// IGJEEGBBNFC$$IBHHBNFNIEC @ RVA 0x32A11F0

void IGJEEGBBNFC__IBHHBNFNIEC
               (IGJEEGBBNFC_o *__this,MMDDDDFHOLG_DOCBHLNBECF_o *CPECAEHDDDB,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  uint ACCIHBHMFPN;
  OLKKAIFGGAK_o *pOVar3;
  HJNEOLCKEMD_o *pHVar4;
  
                    /* try { // try from 033a11f4 to 034a11ff has its CatchHandler @ 033a1208 */
                    /* try { // try from 033a1200 to 034a1223 has its CatchHandler @ 033a0f68 */
                    /* catch() { ... } // from try @ 033a11ac with catch @ 033a1204 */
  if ((DAT_045673bc & 1) == 0) {
                    /* catch() { ... } // from try @ 033a11f4 with catch @ 033a1208 */
                    /* catch() { ... } // from try @ 033a11ec with catch @ 033a120c */
                    /* catch() { ... } // from try @ 033a1150 with catch @ 033a1210 */
    FUN_01bab630(&IMBJAEBFAJK_TypeInfo);
    __this = (IGJEEGBBNFC_o *)FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 033a1224 to 034a1227 has its CatchHandler @ 033a128c */
    DAT_045673bc = 1;
  }
                    /* try { // try from 033a1228 to 034a1263 has its CatchHandler @ 033a0f68 */
  if ((CPECAEHDDDB != (MMDDDDFHOLG_DOCBHLNBECF_o *)0x0) &&
     (pHVar4 = (CPECAEHDDDB->fields).EDOEMIDBEGO, pHVar4 != (HJNEOLCKEMD_o *)0x0)) {
    bVar1 = (IMBJAEBFAJK_TypeInfo->_2).naturalAligment;
                    /* try { // try from 033a1264 to 034a127b has its CatchHandler @ 033a1308 */
    if (((pHVar4->klass->_2).naturalAligment < bVar1) ||
       ((pHVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)IMBJAEBFAJK_TypeInfo))
    {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033a12f4 to 034a12ff has its CatchHandler @ 033a0f68 */
      FUN_01babc64(pHVar4);
    }
                    /* try { // try from 033a127c to 034a1283 has its CatchHandler @ 033a12a0 */
    bVar2 = System_String__op_Inequality(pHVar4[1].monitor,StringLiteral_1,(MethodInfo *)0x0);
    if (bVar2) {
                    /* try { // try from 033a1284 to 034a1287 has its CatchHandler @ 033a1298 */
                    /* try { // try from 033a1288 to 034a12bb has its CatchHandler @ 033a0f68 */
                    /* catch() { ... } // from try @ 033a1224 with catch @ 033a128c */
      ACCIHBHMFPN = JADGCGOJLJB__PKKPCLFNEDC(pHVar4[1].monitor,(MethodInfo *)0x0);
      __this = (IGJEEGBBNFC_o *)(ulong)ACCIHBHMFPN;
      pOVar3 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      if (pOVar3 != (OLKKAIFGGAK_o *)0x0) {
                    /* catch() { ... } // from try @ 033a1284 with catch @ 033a1298 */
                    /* catch() { ... } // from try @ 033a1130 with catch @ 033a129c */
                    /* catch() { ... } // from try @ 033a127c with catch @ 033a12a0 */
                    /* catch() { ... } // from try @ 033a11dc with catch @ 033a12a4 */
                    /* catch() { ... } // from try @ 033a1118 with catch @ 033a12a8 */
        OLKKAIFGGAK__GNAKNCBOLOI(pOVar3,ACCIHBHMFPN,(MethodInfo *)0x0);
        return;
      }
    }
    else {
                    /* try { // try from 033a12bc to 034a12bf has its CatchHandler @ 033a12e4 */
      bVar2 = System_String__op_Inequality
                        ((System_String_o *)pHVar4[1].klass,StringLiteral_1,(MethodInfo *)0x0);
                    /* try { // try from 033a12c0 to 034a12eb has its CatchHandler @ 033a0f68 */
      if (!bVar2) {
                    /* catch() { ... } // from try @ 033a12bc with catch @ 033a12e4 */
        return;
      }
      pOVar3 = (CPECAEHDDDB->fields).HEMGHNOOJPI;
      __this = (IGJEEGBBNFC_o *)0x0;
      if (pOVar3 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__GNAKNCBOLOI(pOVar3,(System_String_o *)pHVar4[1].klass,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033a12ec to 034a12f3 has its CatchHandler @ 033a1308 */
  FUN_01bab8c8(__this);
}

