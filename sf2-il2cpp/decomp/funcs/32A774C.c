// NLFLMJPNOLF$$MergeFrom @ RVA 0x32A774C

void NLFLMJPNOLF__MergeFrom(NLFLMJPNOLF_o *__this,NLFLMJPNOLF_o *IBKIPBJJCPG,MethodInfo *method)

{
  int iVar1;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar2;
  long lVar3;
  NLFLMJPNOLF_Fields *pNVar4;
  
  if ((DAT_04567404 & 1) == 0) {
                    /* try { // try from 033a7770 to 034a7773 has its CatchHandler @ 033a7820 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
                    /* try { // try from 033a7774 to 034a777b has its CatchHandler @ 033a7830 */
    DAT_04567404 = 1;
  }
                    /* try { // try from 033a777c to 034a777f has its CatchHandler @ 033a781c */
  if (IBKIPBJJCPG == (NLFLMJPNOLF_o *)0x0) {
                    /* catch() { ... } // from try @ 033a7798 with catch @ 033a77ec */
                    /* catch() { ... } // from try @ 033a7604 with catch @ 033a77f0 */
                    /* catch() { ... } // from try @ 033a7794 with catch @ 033a77f4 */
    return;
  }
                    /* try { // try from 033a7780 to 034a7783 has its CatchHandler @ 033a7818 */
  lVar3 = (IBKIPBJJCPG->fields).OHMDCKEDOGH;
                    /* try { // try from 033a7784 to 034a7787 has its CatchHandler @ 033a7814 */
  if (lVar3 != 0) {
                    /* try { // try from 033a7788 to 034a778b has its CatchHandler @ 033a7804 */
    (__this->fields).OHMDCKEDOGH = lVar3;
  }
                    /* try { // try from 033a778c to 034a778f has its CatchHandler @ 033a782c */
  iVar1 = (IBKIPBJJCPG->fields).IILCHFKCEEH;
                    /* try { // try from 033a7790 to 034a7793 has its CatchHandler @ 033a77fc */
  if (iVar1 != 0) {
                    /* try { // try from 033a7794 to 034a7797 has its CatchHandler @ 033a77f4 */
    (__this->fields).IILCHFKCEEH = iVar1;
  }
                    /* try { // try from 033a7798 to 034a779b has its CatchHandler @ 033a77ec */
  __this_00 = (__this->fields).MABPCBMOECE;
                    /* try { // try from 033a779c to 034a779f has its CatchHandler @ 033a77e8 */
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
                    /* try { // try from 033a77a0 to 034a77a3 has its CatchHandler @ 033a7828 */
                    /* try { // try from 033a77a4 to 034a77a7 has its CatchHandler @ 033a77e0 */
                    /* try { // try from 033a77a8 to 034a77ab has its CatchHandler @ 033a77dc */
                    /* try { // try from 033a77ac to 034a77af has its CatchHandler @ 033a77d4 */
                    /* try { // try from 033a77b0 to 034a77b3 has its CatchHandler @ 033a77cc */
    Google_Protobuf_Collections_RepeatedField<long>__Add
              (__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(IBKIPBJJCPG->fields).MABPCBMOECE,
               Method_Google_Protobuf_Collections_RepeatedField<long>_Add__);
                    /* try { // try from 033a77b4 to 034a77b7 has its CatchHandler @ 033a7830 */
                    /* catch() { ... } // from try @ 033a753c with catch @ 033a77b8
                       try { // try from 033a77b8 to 034a7863 has its CatchHandler @ 033a7424 */
    if ((IBKIPBJJCPG->fields).BHAOPCFDKCG != false) {
                    /* catch() { ... } // from try @ 033a7588 with catch @ 033a77bc */
                    /* catch() { ... } // from try @ 033a7570 with catch @ 033a77c0 */
      (__this->fields).BHAOPCFDKCG = true;
    }
    pNVar4 = &__this->fields;
                    /* catch() { ... } // from try @ 033a77b0 with catch @ 033a77cc */
                    /* catch() { ... } // from try @ 033a76a8 with catch @ 033a77d0 */
    pGVar2 = Google_Protobuf_UnknownFieldSet__MergeFrom
                       (pNVar4->CKFPENBPNML,(IBKIPBJJCPG->fields).CKFPENBPNML,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 033a77ac with catch @ 033a77d4 */
                    /* catch() { ... } // from try @ 033a7694 with catch @ 033a77d8 */
    pNVar4->CKFPENBPNML = pGVar2;
                    /* catch() { ... } // from try @ 033a77a8 with catch @ 033a77dc */
                    /* catch() { ... } // from try @ 033a77a4 with catch @ 033a77e0 */
                    /* catch() { ... } // from try @ 033a7680 with catch @ 033a77e4 */
                    /* catch() { ... } // from try @ 033a779c with catch @ 033a77e8 */
    thunk_FUN_01c20e04(pNVar4,pGVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 033a75f0 with catch @ 033a77f8 */
  FUN_01bab8c8();
}

