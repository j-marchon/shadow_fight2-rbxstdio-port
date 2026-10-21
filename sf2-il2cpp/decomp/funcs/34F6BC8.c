// OLKKAIFGGAK$$IHEAMKEDGFH @ RVA 0x34F6BC8

OIGAJAKPPEO_o * OLKKAIFGGAK__IHEAMKEDGFH(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_List_OIGAJAKPPEO__o *__this_00;
  OIGAJAKPPEO_o *pOVar2;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 035f6ba0 with catch @ 035f6bc8 */
                    /* catch() { ... } // from try @ 035f6b98 with catch @ 035f6bcc */
                    /* catch() { ... } // from try @ 035f6aa8 with catch @ 035f6bd0 */
  if ((DAT_045687e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
                    /* try { // try from 035f6bec to 036f6bef has its CatchHandler @ 035f6c54 */
                    /* try { // try from 035f6bf0 to 036f6c27 has its CatchHandler @ 035f6954 */
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    DAT_045687e7 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).MPLCPGJEHPG;
  if (__this_00 != (System_Collections_Generic_List_OIGAJAKPPEO__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
                    /* try { // try from 035f6c28 to 036f6c3b has its CatchHandler @ 035f6cdc */
      pOVar2 = (OIGAJAKPPEO_o *)
               System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)__this_00,iVar1 + -1,
                          Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
      return pOVar2;
    }
    return (OIGAJAKPPEO_o *)0x0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035f6c3c to 036f6c3f has its CatchHandler @ 035f6c6c */
  FUN_01bab8c8(0,method);
}

