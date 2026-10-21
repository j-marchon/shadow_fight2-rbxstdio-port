// FCJBEKHDLAF$$GFAIICJOKFI @ RVA 0x33EDDEC

void FCJBEKHDLAF__GFAIICJOKFI(FCJBEKHDLAF_o *__this,BFMEMCBCKLK_o *DKMMBMBMJBO,MethodInfo *method)

{
  int PCAIKIGGBMJ;
  bool_conflict bVar1;
  bool IJGKJEKFKDL;
  OLKKAIFGGAK_o *IGMNBGIAGGK;
  OJHODFIGFMA_o *__this_00;
  MMDDDDFHOLG_o *__this_01;
  int32_t HEHMPFLAEGE;
  System_String_o *GHHDLIFJDIG;
  MethodInfo *method_00;
  float JOGAFLCGDOG;
  
                    /* try { // try from 034eddec to 035eddef has its CatchHandler @ 034ede20 */
                    /* try { // try from 034eddf0 to 035ede2f has its CatchHandler @ 034edcd0 */
  if (DKMMBMBMJBO != (BFMEMCBCKLK_o *)0x0) {
    PCAIKIGGBMJ = (DKMMBMBMJBO->fields).LKCLAAIHPMG;
    GHHDLIFJDIG = (DKMMBMBMJBO->fields).AOKLNLDCPGF;
    JOGAFLCGDOG = (DKMMBMBMJBO->fields).GKDHKOCLPBB;
    bVar1 = (DKMMBMBMJBO->fields).CANHKPJGDFO;
                    /* catch() { ... } // from try @ 034eddec with catch @ 034ede20 */
    IGMNBGIAGGK = FCJBEKHDLAF__BNKBKHPICHG(__this,(DKMMBMBMJBO->fields).HEMGHNOOJPI,method);
    if (IGMNBGIAGGK != (OLKKAIFGGAK_o *)0x0) {
                    /* try { // try from 034ede30 to 035ede37 has its CatchHandler @ 034ede4c */
      if (PCAIKIGGBMJ == (IGMNBGIAGGK->fields).OCAFPNJDBEE) {
                    /* try { // try from 034ede38 to 035ede43 has its CatchHandler @ 034edcd0 */
                    /* try { // try from 034ede44 to 035ede4b has its CatchHandler @ 034ede4c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034ede30 with catch @ 034ede4c
                       catch(type#2 @ 00000000) { ... } // from try @ 034ede44 with catch @ 034ede4c
                        */
        return;
      }
                    /* try { // try from 034ede50 to 035edf43 has its CatchHandler @ 034ede50
                       catch() { ... } // from try @ 034ede50 with catch @ 034ede50
                       catch() { ... } // from try @ 034edf64 with catch @ 034ede50
                       catch() { ... } // from try @ 034edfb4 with catch @ 034ede50
                       catch() { ... } // from try @ 034edfe4 with catch @ 034ede50
                       catch() { ... } // from try @ 034ee014 with catch @ 034ede50
                       catch() { ... } // from try @ 034ee050 with catch @ 034ede50
                       catch() { ... } // from try @ 034ee06c with catch @ 034ede50
                       catch() { ... } // from try @ 034ee0ac with catch @ 034ede50 */
      if ((DKMMBMBMJBO->fields).HEMGHNOOJPI == 0) {
        __this_00 = (__this->fields).OONKKFFEMAK;
        if (__this_00 == (OJHODFIGFMA_o *)0x0) goto LAB_034edee0;
        OJHODFIGFMA__BMAJOKMNNHP(__this_00,PCAIKIGGBMJ,(MethodInfo *)0x0);
      }
      __this_01 = (__this->fields).POEGCOJFMDB;
      if (__this_01 != (MMDDDDFHOLG_o *)0x0) {
        IJGKJEKFKDL = bVar1 != false;
        method_00 = (MethodInfo *)(ulong)IJGKJEKFKDL;
        MMDDDDFHOLG__CFEOMJALMBB
                  (__this_01,IGMNBGIAGGK,3,false,(NJPBBPOABKP_o *)0x0,(MethodInfo *)0x0);
        OLKKAIFGGAK__GFAIICJOKFI
                  (IGMNBGIAGGK,PCAIKIGGBMJ,GHHDLIFJDIG,JOGAFLCGDOG,IJGKJEKFKDL,(MethodInfo *)0x0);
        HEHMPFLAEGE = 1;
        if ((DKMMBMBMJBO->fields).HEMGHNOOJPI != 0) {
          HEHMPFLAEGE = 2;
        }
        FCJBEKHDLAF__CPPKPCGDCAJ(__this,8,HEHMPFLAEGE,method_00);
        return;
      }
    }
  }
LAB_034edee0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

