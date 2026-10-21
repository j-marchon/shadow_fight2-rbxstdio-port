// OPNFCOGALLI$$GEIAIGHBEPD @ RVA 0x310AD90

void OPNFCOGALLI__GEIAIGHBEPD
               (OPNFCOGALLI_o *__this,CNDPAJOLKFN_o *ANGBPBINHBL,bool CAPKFFELPCN,bool CIHOIIEAACO,
               MethodInfo *method)

{
  CNDPAJOLKFN_o *pCVar1;
  MBDJMJLHFOO_o *pMVar2;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar3;
  System_Collections_Generic_List_CNDPAJOLKFN__o *__this_00;
  CNDPAJOLKFN_o *pCVar4;
  float EDCGCMAKCOM;
  float PFHCGPLGLHC;
  
  if ((DAT_04566535 & 1) == 0) {
    FUN_01bab630(&CNDPAJOLKFN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__);
    DAT_04566535 = 1;
  }
  pCVar1 = (CNDPAJOLKFN_o *)thunk_FUN_01bda818(CNDPAJOLKFN_TypeInfo);
  CNDPAJOLKFN___ctor(pCVar1,(MethodInfo *)0x0);
  pMVar2 = (__this->fields).EJNOBBDDBDO;
  if (pMVar2 != (MBDJMJLHFOO_o *)0x0) {
                    /* try { // try from 0320ae08 to 0330ae0f has its CatchHandler @ 0320aea0 */
    MBDJMJLHFOO__HBMICHOLLMF(pMVar2,2,(MethodInfo *)0x0);
    pMVar2 = (__this->fields).EJNOBBDDBDO;
                    /* try { // try from 0320ae24 to 0330ae27 has its CatchHandler @ 0320ae8c */
                    /* try { // try from 0320ae28 to 0330ae37 has its CatchHandler @ 0320ae9c */
                    /* try { // try from 0320ae40 to 0330ae5b has its CatchHandler @ 0320ae98 */
    if ((((pMVar2 != (MBDJMJLHFOO_o *)0x0) &&
         (pMVar3 = MBDJMJLHFOO__HBMICHOLLMF(pMVar2,2,(MethodInfo *)0x0),
         pMVar3 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0)) &&
        (__this_00 = (pMVar3->fields).KOANCCDDBDA,
        __this_00 != (System_Collections_Generic_List_CNDPAJOLKFN__o *)0x0)) &&
       ((pCVar4 = (CNDPAJOLKFN_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_00,
                             (__this->fields).NOEPMCHIBOL,
                             Method_System_Collections_Generic_List<CNDPAJOLKFN>_get_Item__),
        pCVar1 != (CNDPAJOLKFN_o *)0x0 &&
        (CNDPAJOLKFN__FOOHBJNHOKK(pCVar1,pCVar4,(MethodInfo *)0x0),
        ANGBPBINHBL != (CNDPAJOLKFN_o *)0x0)))) {
                    /* try { // try from 0320ae5c to 0330ae7f has its CatchHandler @ 0320ad54 */
      pCVar4 = (__this->fields).NMLGPAGEDKH;
      (__this->fields).BDLMOBMPOHM = (ANGBPBINHBL->fields).super.OHHDBINAJCB;
      pCVar1 = CNDPAJOLKFN__MPOCFELGHDK(ANGBPBINHBL,pCVar1,(MethodInfo *)0x0);
      if (pCVar4 != (CNDPAJOLKFN_o *)0x0) {
                    /* try { // try from 0320ae80 to 0330ae83 has its CatchHandler @ 0320ae94 */
                    /* try { // try from 0320ae84 to 0330ae87 has its CatchHandler @ 0320ae90 */
        CNDPAJOLKFN__FOOHBJNHOKK(pCVar4,pCVar1,(MethodInfo *)0x0);
                    /* try { // try from 0320ae88 to 0330aeb3 has its CatchHandler @ 0320ad54 */
        PFHCGPLGLHC = 0.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae24 with catch @ 0320ae8c
                        */
        EDCGCMAKCOM = 0.0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae84 with catch @ 0320ae90
                        */
        if (CAPKFFELPCN) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae80 with catch @ 0320ae94
                        */
          pCVar1 = (__this->fields).NMLGPAGEDKH;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae40 with catch @ 0320ae98
                        */
          if (pCVar1 == (CNDPAJOLKFN_o *)0x0) goto LAB_0320aed4;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae28 with catch @ 0320ae9c
                        */
          EDCGCMAKCOM = (pCVar1->fields).super.OHHDBINAJCB;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320ae08 with catch @ 0320aea0
                        */
        if (CIHOIIEAACO) {
          pCVar1 = (__this->fields).NMLGPAGEDKH;
          if (pCVar1 == (CNDPAJOLKFN_o *)0x0) goto LAB_0320aed4;
          PFHCGPLGLHC = (pCVar1->fields).super.JOLEIODMLFL;
        }
        pMVar2 = (__this->fields).EJNOBBDDBDO;
                    /* try { // try from 0320aeb4 to 0330aeb7 has its CatchHandler @ 0320aedc */
        if (pMVar2 != (MBDJMJLHFOO_o *)0x0) {
                    /* try { // try from 0320aeb8 to 0330aee3 has its CatchHandler @ 0320ad54 */
          MBDJMJLHFOO__GHKNFJJOIDM(pMVar2,EDCGCMAKCOM,PFHCGPLGLHC,0.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0320aed4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

