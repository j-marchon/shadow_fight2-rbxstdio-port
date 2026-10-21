// IOIKBGAJIGO$$.cctor @ RVA 0x337384C

void IOIKBGAJIGO___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_array **ppSVar2;
  
                    /* try { // try from 03473858 to 03573867 has its CatchHandler @ 0347399c */
                    /* try { // try from 03473868 to 035738f7 has its CatchHandler @ 034732c4 */
  if ((DAT_04567b3f & 1) == 0) {
    FUN_01bab630(&IOIKBGAJIGO_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_16229);
    FUN_01bab630(&StringLiteral_16222);
    FUN_01bab630(&StringLiteral_16194);
    FUN_01bab630(&StringLiteral_16202);
    DAT_04567b3f = 1;
  }
  IOIKBGAJIGO_TypeInfo->static_fields->IPIMOJKDGPN = 3;
  pSVar1 = (System_String_array *)FUN_01bab718(string___TypeInfo,4);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
                    /* try { // try from 034738f8 to 035738fb has its CatchHandler @ 03473a10 */
                    /* try { // try from 034738fc to 035738ff has its CatchHandler @ 03473a0c */
      pSVar1->m_Items[0] = StringLiteral_16194;
                    /* try { // try from 03473900 to 03573903 has its CatchHandler @ 03473a08 */
                    /* try { // try from 03473904 to 03573907 has its CatchHandler @ 034739f8 */
      thunk_FUN_01c20e04(pSVar1->m_Items);
                    /* try { // try from 03473908 to 0357390b has its CatchHandler @ 034739d8 */
                    /* try { // try from 0347390c to 0357390f has its CatchHandler @ 034739f4 */
                    /* try { // try from 03473910 to 03573913 has its CatchHandler @ 034739c4 */
      if (1 < (uint)pSVar1->max_length) {
                    /* try { // try from 03473914 to 03573917 has its CatchHandler @ 034739c0 */
                    /* try { // try from 03473918 to 0357391b has its CatchHandler @ 034739f4 */
                    /* try { // try from 0347391c to 0357391f has its CatchHandler @ 034739b4 */
                    /* try { // try from 03473920 to 03573923 has its CatchHandler @ 034739ac */
                    /* try { // try from 03473924 to 03573927 has its CatchHandler @ 03473998 */
        pSVar1->m_Items[1] = StringLiteral_16222;
                    /* try { // try from 03473928 to 0357392b has its CatchHandler @ 03473990 */
                    /* try { // try from 0347392c to 0357392f has its CatchHandler @ 0347398c */
        thunk_FUN_01c20e04(pSVar1->m_Items + 1);
                    /* try { // try from 03473930 to 03573933 has its CatchHandler @ 034739cc */
                    /* try { // try from 03473934 to 03573937 has its CatchHandler @ 0347397c */
                    /* try { // try from 03473938 to 0357393b has its CatchHandler @ 03473978 */
        if (2 < (uint)pSVar1->max_length) {
                    /* try { // try from 0347393c to 0357393f has its CatchHandler @ 03473974 */
                    /* try { // try from 03473940 to 03573943 has its CatchHandler @ 034739cc */
                    /* try { // try from 03473944 to 03573947 has its CatchHandler @ 03473970 */
                    /* try { // try from 03473948 to 0357394b has its CatchHandler @ 0347396c */
                    /* try { // try from 0347394c to 0357394f has its CatchHandler @ 034732c4 */
          pSVar1->m_Items[2] = StringLiteral_16202;
                    /* try { // try from 03473950 to 03573953 has its CatchHandler @ 0347395c */
                    /* try { // try from 03473954 to 03573a2f has its CatchHandler @ 034732c4 */
          thunk_FUN_01c20e04(pSVar1->m_Items + 2);
                    /* catch() { ... } // from try @ 03473950 with catch @ 0347395c */
                    /* catch() { ... } // from try @ 03473830 with catch @ 03473960 */
          if (3 < (uint)pSVar1->max_length) {
                    /* catch() { ... } // from try @ 03473844 with catch @ 03473964 */
                    /* catch() { ... } // from try @ 03473698 with catch @ 03473968 */
                    /* catch() { ... } // from try @ 03473948 with catch @ 0347396c */
                    /* catch() { ... } // from try @ 03473944 with catch @ 03473970 */
                    /* catch() { ... } // from try @ 0347393c with catch @ 03473974 */
            pSVar1->m_Items[3] = StringLiteral_16229;
                    /* catch() { ... } // from try @ 03473938 with catch @ 03473978 */
            thunk_FUN_01c20e04();
                    /* catch() { ... } // from try @ 03473934 with catch @ 0347397c */
                    /* catch() { ... } // from try @ 03473604 with catch @ 03473980 */
                    /* catch() { ... } // from try @ 034736f4 with catch @ 03473984 */
            ppSVar2 = &IOIKBGAJIGO_TypeInfo->static_fields->OMPNOMAKALF;
                    /* catch() { ... } // from try @ 0347367c with catch @ 03473988 */
            *ppSVar2 = pSVar1;
                    /* catch() { ... } // from try @ 0347392c with catch @ 0347398c */
            thunk_FUN_01c20e04(ppSVar2,pSVar1);
                    /* catch() { ... } // from try @ 03473928 with catch @ 03473990 */
                    /* catch() { ... } // from try @ 034736d8 with catch @ 03473994 */
                    /* catch() { ... } // from try @ 03473924 with catch @ 03473998 */
                    /* catch() { ... } // from try @ 03473858 with catch @ 0347399c */
            IOIKBGAJIGO_TypeInfo->static_fields->IGHADNLJLIF = false;
                    /* catch() { ... } // from try @ 034736bc with catch @ 034739a0 */
                    /* catch() { ... } // from try @ 03473630 with catch @ 034739a4 */
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03473780 with catch @ 034739a8 */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 03473920 with catch @ 034739ac */
  FUN_01bab8c8();
}

