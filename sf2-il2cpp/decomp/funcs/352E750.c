// StepBar$$AJKDJMLMJKA @ RVA 0x352E750

float StepBar__AJKDJMLMJKA(StepBar_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  int32_t index;
  int iVar1;
  int32_t iVar2;
  System_Collections_Generic_List_int__o *__this_00;
  float fVar3;
  
                    /* try { // try from 0362e750 to 0372e757 has its CatchHandler @ 0362e774 */
                    /* try { // try from 0362e758 to 0372e7ab has its CatchHandler @ 0362e3cc */
                    /* catch() { ... } // from try @ 0362e6e0 with catch @ 0362e75c */
                    /* catch() { ... } // from try @ 0362e568 with catch @ 0362e768 */
  if ((DAT_04568a43 & 1) == 0) {
                    /* catch() { ... } // from try @ 0362e57c with catch @ 0362e76c */
                    /* catch() { ... } // from try @ 0362e68c with catch @ 0362e770 */
                    /* catch() { ... } // from try @ 0362e750 with catch @ 0362e774 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
                    /* catch() { ... } // from try @ 0362e528 with catch @ 0362e778 */
                    /* catch() { ... } // from try @ 0362e544 with catch @ 0362e77c */
                    /* catch() { ... } // from try @ 0362e558 with catch @ 0362e780 */
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Item__);
                    /* catch() { ... } // from try @ 0362e718 with catch @ 0362e784 */
                    /* catch() { ... } // from try @ 0362e714 with catch @ 0362e788 */
    DAT_04568a43 = 1;
  }
  __this_00 = (__this->fields).DLBOAANKFLC;
  if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
                    /* catch() { ... } // from try @ 0362e504 with catch @ 0362e794 */
    iVar1 = (__this_00->fields)._size;
    if (iVar1 == 0) {
      fVar3 = 0.0;
    }
    else {
                    /* try { // try from 0362e7ac to 0372e7af has its CatchHandler @ 0362e7d0 */
      iVar2 = CJNHFNHJHPE;
      if (iVar1 <= CJNHFNHJHPE) {
        iVar2 = iVar1 + -1;
      }
                    /* try { // try from 0362e7b0 to 0372e7df has its CatchHandler @ 0362e3cc */
      index = 0;
      if (-1 < CJNHFNHJHPE) {
        index = iVar2;
      }
      iVar2 = System_Collections_Generic_List<int>__get_Item
                        (__this_00,index,Method_System_Collections_Generic_List<int>_get_Item__);
      fVar3 = (float)iVar2;
    }
                    /* catch() { ... } // from try @ 0362e7ac with catch @ 0362e7d0 */
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

