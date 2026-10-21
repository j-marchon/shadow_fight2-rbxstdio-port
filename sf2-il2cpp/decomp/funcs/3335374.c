// FGKGKDEJCOG$$DLKPAPOBKKO @ RVA 0x3335374

void FGKGKDEJCOG__DLKPAPOBKKO
               (FGKGKDEJCOG_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,
               System_Xml_XmlNode_o *NMGANDPPOLH,MethodInfo *method)

{
  CAJHCLGOFMJ_o *pCVar1;
  System_Xml_XmlNode_o *pSVar2;
  CAJHCLGOFMJ_o **ppCVar3;
  
                    /* try { // try from 03435374 to 03535377 has its CatchHandler @ 0343537c */
                    /* try { // try from 03435378 to 0353539b has its CatchHandler @ 03435268 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03435374 with catch @ 0343537c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03435300 with catch @ 03435380
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03435314 with catch @ 03435384
                        */
  if ((DAT_04567941 & 1) == 0) {
                    /* try { // try from 0343539c to 0353539f has its CatchHandler @ 034353c8 */
                    /* try { // try from 034353a0 to 035353d7 has its CatchHandler @ 03435268 */
    FUN_01bab630(&CAJHCLGOFMJ_TypeInfo);
    FUN_01bab630(&StringLiteral_14866);
    DAT_04567941 = 1;
  }
                    /* catch() { ... } // from try @ 0343539c with catch @ 034353c8 */
  if (NMGANDPPOLH != (System_Xml_XmlNode_o *)0x0) {
    pCVar1 = (CAJHCLGOFMJ_o *)thunk_FUN_01bda818(CAJHCLGOFMJ_TypeInfo);
                    /* try { // try from 034353d8 to 035353df has its CatchHandler @ 034353f4 */
                    /* try { // try from 034353e0 to 035353eb has its CatchHandler @ 03435268 */
    CAJHCLGOFMJ___ctor(pCVar1,NMGANDPPOLH,(MethodInfo *)0x0);
    ppCVar3 = &(__this->fields).OPBLLCHJOAK;
    *ppCVar3 = pCVar1;
                    /* try { // try from 034353ec to 035353f3 has its CatchHandler @ 034353f4 */
    thunk_FUN_01c20e04(ppCVar3,pCVar1);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034353d8 with catch @ 034353f4
                       catch(type#2 @ 00000000) { ... } // from try @ 034353ec with catch @ 034353f4
                        */
    EIABCPKDEBD__LKPNNANEJKF(AHDGNOJPPIB,StringLiteral_14866,(MethodInfo *)0x0);
    pSVar2 = EIABCPKDEBD__KPODFFHOHGK(AHDGNOJPPIB,StringLiteral_14866,(MethodInfo *)0x0);
    if (*ppCVar3 != (CAJHCLGOFMJ_o *)0x0) {
      CAJHCLGOFMJ__MDGJPBHDFHN(*ppCVar3,pSVar2,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar2 = EIABCPKDEBD__DJGFHLMINNB(AHDGNOJPPIB,StringLiteral_14866,(MethodInfo *)0x0);
  pCVar1 = (CAJHCLGOFMJ_o *)thunk_FUN_01bda818(CAJHCLGOFMJ_TypeInfo);
  CAJHCLGOFMJ___ctor(pCVar1,pSVar2,(MethodInfo *)0x0);
  ppCVar3 = &(__this->fields).OPBLLCHJOAK;
  *ppCVar3 = pCVar1;
  thunk_FUN_01c20e04(ppCVar3,pCVar1);
  return;
}

