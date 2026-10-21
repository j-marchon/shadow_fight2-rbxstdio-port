// PJKHAJKEHEL$$MHMPKFOGHHI @ RVA 0x304096C

int32_t PJKHAJKEHEL__MHMPKFOGHHI
                  (PJKHAJKEHEL_o *__this,System_String_o *KGLJICLJHEL,
                  System_Collections_Generic_List_HOOAAGABMBL__o *GHAAKPDHIJJ,bool *CBKCBBGLNKE,
                  MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  int iVar3;
  int index;
  int32_t local_44;
  
                    /* try { // try from 03140980 to 032409af has its CatchHandler @ 03140a10 */
  if ((DAT_04565dac & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Count__);
                    /* catch() { ... } // from try @ 031407a4 with catch @ 031409a4
                       catch() { ... } // from try @ 031408e0 with catch @ 031409a4 */
    __this = (PJKHAJKEHEL_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
                    /* try { // try from 031409b0 to 032409d7 has its CatchHandler @ 031404d4 */
    DAT_04565dac = 1;
  }
                    /* catch() { ... } // from try @ 031407fc with catch @ 031409b8 */
  local_44 = 0;
                    /* catch() { ... } // from try @ 03140800 with catch @ 031409bc */
  *CBKCBBGLNKE = false;
                    /* catch() { ... } // from try @ 031407c8 with catch @ 031409c0 */
  if (GHAAKPDHIJJ == (System_Collections_Generic_List_HOOAAGABMBL__o *)0x0) {
LAB_03140a60:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  if ((GHAAKPDHIJJ->fields)._size < 1) {
    iVar3 = 0;
  }
  else {
                    /* try { // try from 031409d8 to 032409db has its CatchHandler @ 03140a08 */
    index = 0;
    iVar3 = 0;
    do {
                    /* try { // try from 031409f0 to 03240a07 has its CatchHandler @ 03140a10 */
      local_44 = 0;
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)GHAAKPDHIJJ,index,
                          Method_System_Collections_Generic_List<HOOAAGABMBL>_get_Item__);
      __this = (PJKHAJKEHEL_o *)0x0;
      if (pIVar2 == (Il2CppObject *)0x0) goto LAB_03140a60;
      __this = (PJKHAJKEHEL_o *)0x0;
      if (pIVar2[0x29].monitor == (FPLCEOJCPOD_o *)0x0) goto LAB_03140a60;
                    /* catch() { ... } // from try @ 031409d8 with catch @ 03140a08 */
                    /* catch() { ... } // from try @ 03140738 with catch @ 03140a10
                       catch() { ... } // from try @ 03140930 with catch @ 03140a10
                       catch() { ... } // from try @ 03140980 with catch @ 03140a10
                       catch() { ... } // from try @ 031409f0 with catch @ 03140a10 */
                    /* catch() { ... } // from try @ 03140820 with catch @ 03140a14
                       catch() { ... } // from try @ 031408c8 with catch @ 03140a14 */
      bVar1 = FPLCEOJCPOD__KNMENIBLFGF
                        (pIVar2[0x29].monitor,KGLJICLJHEL,&local_44,true,false,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 03140a20 to 03240aa3 has its CatchHandler @ 03140a20
                       catch() { ... } // from try @ 03140a20 with catch @ 03140a20
                       catch() { ... } // from try @ 03140ac4 with catch @ 03140a20
                       catch() { ... } // from try @ 03140ae8 with catch @ 03140a20
                       catch() { ... } // from try @ 03140b18 with catch @ 03140a20 */
        *CBKCBBGLNKE = true;
        iVar3 = local_44 + iVar3;
      }
      index = index + 1;
    } while (index < (GHAAKPDHIJJ->fields)._size);
  }
  return iVar3;
}

