// FCJBEKHDLAF$$AGNJLMJFNCO @ RVA 0x33EE480

void FCJBEKHDLAF__AGNJLMJFNCO
               (FCJBEKHDLAF_o *__this,ADGIHFGIFHO_o *JMCEAKJCJLH,
               JMDPBFOCHHP_BEGFIIECDMN_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  EEGDOGKBLNG_o *__this_00;
  System_Collections_Generic_Dictionary_object__int__o *pSVar3;
  System_Exception_o *__this_01;
  HOOAAGABMBL_o *pHVar4;
  OLKKAIFGGAK_o *pOVar5;
  
                    /* try { // try from 034ee484 to 035ee48b has its CatchHandler @ 034ee898 */
                    /* try { // try from 034ee498 to 035ee49b has its CatchHandler @ 034ee890 */
  if ((DAT_04567eec & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    FUN_01bab630(&System_Exception_TypeInfo);
                    /* try { // try from 034ee4d4 to 035ee4fb has its CatchHandler @ 034ee6b4 */
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&StringLiteral_5061);
    FUN_01bab630(&StringLiteral_11568);
    FUN_01bab630(&StringLiteral_5255);
    DAT_04567eec = 1;
  }
  if (((JMCEAKJCJLH != (ADGIHFGIFHO_o *)0x0) &&
      (pHVar4 = (JMCEAKJCJLH->fields).GFNKONPLPEB, pHVar4 != (HOOAAGABMBL_o *)0x0)) &&
     ((pHVar4->fields)._COIPKAKHDFP_k__BackingField != (System_String_o *)0x0)) {
    pOVar5 = (__this->fields).LAMENNMGPBN;
                    /* try { // try from 034ee530 to 035ee55b has its CatchHandler @ 034ee6b0 */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
    pHVar4 = (JMCEAKJCJLH->fields).GFNKONPLPEB;
    if ((pHVar4 == (HOOAAGABMBL_o *)0x0) || (__this_00 == (EEGDOGKBLNG_o *)0x0)) goto LAB_034ee698;
    iVar2 = EEGDOGKBLNG__OHCGFHJNEGO
                      (__this_00,(pHVar4->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
    if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_034ee698;
    OLKKAIFGGAK__KJDAMLJBMHH(pOVar5,iVar2,(MethodInfo *)0x0);
  }
  if ((IMMNELPBGIF == (JMDPBFOCHHP_BEGFIIECDMN_o *)0x0) ||
     (pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
               (IMMNELPBGIF->fields).GJCCGCCOJCO,
     pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0)) {
    __this_01 = (System_Exception_o *)thunk_FUN_01bda818(System_Exception_TypeInfo);
    System_Exception___ctor(__this_01,StringLiteral_11568,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 034ee680 to 035ee683 has its CatchHandler @ 034ee6ac */
    UnityEngine_Debug__LogException(__this_01,(MethodInfo *)0x0);
    return;
  }
                    /* try { // try from 034ee58c to 035ee597 has its CatchHandler @ 034ee6a4 */
  bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                    (pSVar3,StringLiteral_5061,
                     Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
  if (bVar1) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
             (IMMNELPBGIF->fields).GJCCGCCOJCO;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) goto LAB_034ee698;
    pOVar5 = (__this->fields).LAMENNMGPBN;
    iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                      (pSVar3,StringLiteral_5061,
                       Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
    if (pOVar5 == (OLKKAIFGGAK_o *)0x0) goto LAB_034ee698;
    OLKKAIFGGAK__BBJEPEHDFCN(pOVar5,(float)iVar2,(MethodInfo *)0x0);
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)(IMMNELPBGIF->fields).GJCCGCCOJCO
  ;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* try { // try from 034ee5d8 to 035ee5f3 has its CatchHandler @ 034ee6a8 */
    bVar1 = System_Collections_Generic_Dictionary<object,_int>__ContainsKey
                      (pSVar3,StringLiteral_5255,
                       Method_System_Collections_Generic_Dictionary<string,_int>_ContainsKey__);
    if (!bVar1) {
                    /* try { // try from 034ee688 to 035ee693 has its CatchHandler @ 034ee6b8 */
      return;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__int__o *)
             (IMMNELPBGIF->fields).GJCCGCCOJCO;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      pOVar5 = (__this->fields).LAMENNMGPBN;
                    /* try { // try from 034ee604 to 035ee66b has its CatchHandler @ 034ee8ac */
      iVar2 = System_Collections_Generic_Dictionary<object,_int>__get_Item
                        (pSVar3,StringLiteral_5255,
                         Method_System_Collections_Generic_Dictionary<string,_int>_get_Item__);
      if (pOVar5 != (OLKKAIFGGAK_o *)0x0) {
        OLKKAIFGGAK__MHPDMDPNBGD(pOVar5,(float)iVar2,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_034ee698:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ee698 to 035ee69b has its CatchHandler @ 034ee6a0 */
  FUN_01bab8c8();
}

