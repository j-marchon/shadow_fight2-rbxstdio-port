// MEGGKMKGNCP$$PKPGEKHEIBE @ RVA 0x31C6C64

bool MEGGKMKGNCP__PKPGEKHEIBE
               (MEGGKMKGNCP_o *__this,System_Collections_Generic_List_string__o *FPEHEJBLCAO,
               System_String_o *KIPMHPNBCBO,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  System_String_o *pSVar4;
  int index;
  
                    /* try { // try from 032c6c70 to 033c6c77 has its CatchHandler @ 032c7284 */
                    /* try { // try from 032c6c7c to 033c6c83 has its CatchHandler @ 032c7288 */
  if ((DAT_04566c38 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Count__);
                    /* try { // try from 032c6c94 to 033c6c9b has its CatchHandler @ 032c7290 */
    __this = (MEGGKMKGNCP_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 032c6c9c to 033c6cab has its CatchHandler @ 032c728c */
    DAT_04566c38 = 1;
  }
  if (FPEHEJBLCAO == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  iVar1 = (FPEHEJBLCAO->fields)._size;
  if (iVar1 < 1) {
    bVar3 = false;
                    /* try { // try from 032c6ce8 to 033c6cef has its CatchHandler @ 032c72a8 */
  }
  else {
                    /* try { // try from 032c6cb4 to 033c6cbb has its CatchHandler @ 032c72a4 */
    pSVar4 = (System_String_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,0,
                        Method_System_Collections_Generic_List<string>_get_Item__);
                    /* try { // try from 032c6ccc to 033c6cd3 has its CatchHandler @ 032c72ac */
    bVar3 = System_String__op_Equality(pSVar4,KIPMHPNBCBO,(MethodInfo *)0x0);
                    /* try { // try from 032c6cd8 to 033c6cdf has its CatchHandler @ 032c7298 */
    if (bVar3) {
      bVar3 = true;
    }
    else {
      iVar2 = 1;
      do {
                    /* try { // try from 032c6cf0 to 033c6cff has its CatchHandler @ 032c72a0 */
        index = iVar2;
        if (iVar1 == index) break;
                    /* try { // try from 032c6d04 to 033c6d1b has its CatchHandler @ 032c72c0 */
        pSVar4 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)FPEHEJBLCAO,index,
                            Method_System_Collections_Generic_List<string>_get_Item__);
        bVar3 = System_String__op_Equality(pSVar4,KIPMHPNBCBO,(MethodInfo *)0x0);
        iVar2 = index + 1;
      } while (!bVar3);
      bVar3 = index < iVar1;
    }
  }
                    /* try { // try from 032c6d2c to 033c6d2f has its CatchHandler @ 032c7230 */
                    /* try { // try from 032c6d30 to 033c6d3b has its CatchHandler @ 032c72b0 */
  return bVar3;
}

