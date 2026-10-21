// CNOGDCKPLMJ$$FDLDELKMPHI @ RVA 0x31C97C4

bool CNOGDCKPLMJ__FDLDELKMPHI(CNOGDCKPLMJ_o *__this,System_String_o *DIHAKADKIKM,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint16_t item;
  System_Collections_Generic_HashSet_char__o *__this_00;
  int iVar4;
  
                    /* try { // try from 032c97d4 to 033c97d7 has its CatchHandler @ 032c97e0 */
                    /* try { // try from 032c97d8 to 033c980b has its CatchHandler @ 032c9508 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9738 with catch @ 032c97dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c97d4 with catch @ 032c97e0
                        */
  if ((DAT_04566c57 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9770 with catch @ 032c97e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9760 with catch @ 032c97e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9708 with catch @ 032c97ec
                        */
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<char>_Contains__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9744 with catch @ 032c97f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032c9718 with catch @ 032c97f4
                        */
    DAT_04566c57 = 1;
  }
  bVar2 = PCOEHCPGBBG__BDLEIEHBFAD(DIHAKADKIKM,(MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = false;
                    /* try { // try from 032c980c to 033c980f has its CatchHandler @ 032c9830 */
  }
  else {
                    /* try { // try from 032c9810 to 033c9837 has its CatchHandler @ 032c9508 */
    if (DIHAKADKIKM == (System_String_o *)0x0) {
LAB_032c988c:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar4 = (DIHAKADKIKM->fields)._stringLength;
    bVar2 = 0 < iVar4;
    if (0 < iVar4) {
                    /* catch() { ... } // from try @ 032c980c with catch @ 032c9830 */
      iVar4 = 0;
      do {
                    /* try { // try from 032c9838 to 033c983f has its CatchHandler @ 032c9854 */
                    /* try { // try from 032c9840 to 033c984b has its CatchHandler @ 032c9508 */
        item = System_String__get_Chars(DIHAKADKIKM,iVar4,(MethodInfo *)0x0);
        __this_00 = (__this->fields).MJALPHIMDID;
        if (__this_00 == (System_Collections_Generic_HashSet_char__o *)0x0) goto LAB_032c988c;
                    /* try { // try from 032c984c to 033c9853 has its CatchHandler @ 032c9854 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032c9838 with catch @ 032c9854
                       catch(type#2 @ 00000000) { ... } // from try @ 032c984c with catch @ 032c9854
                        */
                    /* try { // try from 032c9858 to 033c9d23 has its CatchHandler @ 032c9858
                       catch() { ... } // from try @ 032c9858 with catch @ 032c9858
                       catch() { ... } // from try @ 032c9e84 with catch @ 032c9858
                       catch() { ... } // from try @ 032ca278 with catch @ 032c9858
                       catch() { ... } // from try @ 032ca330 with catch @ 032c9858 */
        bVar3 = System_Collections_Generic_HashSet<char>__Contains
                          (__this_00,item,Method_System_Collections_Generic_HashSet<char>_Contains__
                          );
        if (bVar3) break;
        iVar1 = (DIHAKADKIKM->fields)._stringLength;
        iVar4 = iVar4 + 1;
        bVar2 = iVar4 < iVar1;
      } while (iVar4 < iVar1);
    }
    bVar2 = (bool)(bVar2 ^ 1);
  }
  return bVar2;
}

