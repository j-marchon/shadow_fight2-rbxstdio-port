// JJPKEILDJCP$$PKPGEKHEIBE @ RVA 0x33B35F0

bool JJPKEILDJCP__PKPGEKHEIBE
               (JJPKEILDJCP_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_String_o *KIPMHPNBCBO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  System_String_o *pSVar4;
  int index;
  
  if ((DAT_04567d61 & 1) == 0) {
                    /* try { // try from 034b3614 to 035b361b has its CatchHandler @ 034b4930 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
    __this = (JJPKEILDJCP_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 034b362c to 035b3633 has its CatchHandler @ 034b48c0 */
    DAT_04567d61 = 1;
  }
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
                    /* try { // try from 034b3634 to 035b363f has its CatchHandler @ 034b48e4 */
  iVar1 = (FPEHEJBLCAO->fields)._size;
  if (iVar1 < 1) {
    bVar3 = false;
  }
  else {
                    /* try { // try from 034b3640 to 035b3647 has its CatchHandler @ 034b48fc */
                    /* try { // try from 034b364c to 035b3653 has its CatchHandler @ 034b48f8 */
    pSVar4 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,0,
                        Method_System_Collections_Generic_List<string>_get_Item__);
    bVar3 = System_String__op_Equality(pSVar4,KIPMHPNBCBO,(MethodInfo *)0x0);
                    /* try { // try from 034b3664 to 035b366b has its CatchHandler @ 034b4a94 */
    if (bVar3) {
      bVar3 = true;
    }
    else {
                    /* try { // try from 034b3678 to 035b367f has its CatchHandler @ 034b48e0 */
      iVar2 = 1;
      do {
        index = iVar2;
        if (iVar1 == index) break;
                    /* try { // try from 034b3690 to 035b3697 has its CatchHandler @ 034b48a0 */
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,index,
                            Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 034b3698 to 035b36b3 has its CatchHandler @ 034b4a34 */
        bVar3 = System_String__op_Equality(pSVar4,KIPMHPNBCBO,(MethodInfo *)0x0);
        iVar2 = index + 1;
      } while (!bVar3);
      bVar3 = index < iVar1;
    }
  }
                    /* try { // try from 034b36c0 to 035b36c7 has its CatchHandler @ 034b48b0 */
  return bVar3;
}

