// NJPBHDMCLIN$$DGLJCGNHLIG @ RVA 0x33A9190

void NJPBHDMCLIN__DGLJCGNHLIG(NJPBHDMCLIN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  NJPBHDMCLIN_KLLGIFHMMIP_o *pNVar1;
  GBJGJEGPHKD_o **ppGVar2;
  
                    /* try { // try from 034a91a4 to 035a91ab has its CatchHandler @ 034a92d0 */
  if ((DAT_04567d01 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
                    /* try { // try from 034a91b8 to 035a91bf has its CatchHandler @ 034a92cc */
    DAT_04567d01 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).JJCFAGEDAAN;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<string,_string>_Clear__);
                    /* try { // try from 034a91d4 to 035a91db has its CatchHandler @ 034a92c4 */
    pNVar1 = (__this->fields).PFDEJKDOAGL;
    if (pNVar1 != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
      ppGVar2 = &(pNVar1->fields).DBFCHBBKIHK;
      *ppGVar2 = (GBJGJEGPHKD_o *)0x0;
      thunk_FUN_01c20e04(ppGVar2,0);
      pNVar1 = (__this->fields).BEMCNJHEADJ;
                    /* try { // try from 034a91ec to 035a920b has its CatchHandler @ 034a92e4 */
      if (pNVar1 != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
        ppGVar2 = &(pNVar1->fields).DBFCHBBKIHK;
        *ppGVar2 = (GBJGJEGPHKD_o *)0x0;
        thunk_FUN_01c20e04(ppGVar2,0);
        pNVar1 = (__this->fields).PFFLOCBGFCH;
        if (pNVar1 != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
          ppGVar2 = &(pNVar1->fields).DBFCHBBKIHK;
          *ppGVar2 = (GBJGJEGPHKD_o *)0x0;
          thunk_FUN_01c20e04(ppGVar2,0);
          pNVar1 = (__this->fields).GCKCPJILFGB;
                    /* try { // try from 034a9214 to 035a9233 has its CatchHandler @ 034a92e8 */
          if (pNVar1 != (NJPBHDMCLIN_KLLGIFHMMIP_o *)0x0) {
            ppGVar2 = &(pNVar1->fields).DBFCHBBKIHK;
            *ppGVar2 = (GBJGJEGPHKD_o *)0x0;
            thunk_FUN_01c20e04(ppGVar2,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

