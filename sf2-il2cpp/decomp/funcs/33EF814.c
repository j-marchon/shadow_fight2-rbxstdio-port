// FCJBEKHDLAF$$MHBMGELDIFC @ RVA 0x33EF814

void FCJBEKHDLAF__MHBMGELDIFC(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_KMJDCOABCCG__o *pSVar1;
  
                    /* try { // try from 034ef820 to 035ef843 has its CatchHandler @ 034ef89c */
  if ((DAT_04567ef7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    DAT_04567ef7 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields).KKOLONOKNIO;
                    /* try { // try from 034ef844 to 035ef86f has its CatchHandler @ 034ef608 */
  (__this->fields).IMEHPHJJNJH = false;
  if (pSVar1 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
    if ((pSVar1->fields)._size != 0) {
      FCJBEKHDLAF__KNLFICNFHBE(__this,method);
      return;
    }
    (__this->fields).CPIIMMMGPHN = false;
                    /* try { // try from 034ef870 to 035ef873 has its CatchHandler @ 034ef8c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034ef874 to 035ef877 has its CatchHandler @ 034ef8bc */
  FUN_01bab8c8();
}

