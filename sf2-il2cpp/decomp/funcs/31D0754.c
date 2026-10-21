// AHMJMDBNMHO$$.ctor @ RVA 0x31D0754

void AHMJMDBNMHO___ctor(AHMJMDBNMHO_o *__this,AHMJMDBNMHO_o *IBKIPBJJCPG,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_HJNEOLCKEMD__o *__this_01;
  NILLKLHKLHG_o **ppNVar1;
  System_Collections_Generic_Dictionary_string__List_HJNEOLCKEMD___o **ppSVar2;
  System_Collections_Generic_List_HJNEOLCKEMD__o **ppSVar3;
  
                    /* try { // try from 032d0758 to 033d075f has its CatchHandler @ 032d0774 */
                    /* try { // try from 032d0760 to 033d076b has its CatchHandler @ 032d0388 */
                    /* try { // try from 032d076c to 033d0773 has its CatchHandler @ 032d0774 */
                    /* catch() { ... } // from try @ 032d0758 with catch @ 032d0774
                       catch() { ... } // from try @ 032d076c with catch @ 032d0774 */
  if ((DAT_04566c9f & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<HJNEOLCKEMD>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<HJNEOLCKEMD>_TypeInfo);
    DAT_04566c9f = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_List<HJNEOLCKEMD>>__ctor__);
  ppSVar2 = &(__this->fields).HENCEKHKNDD;
  *ppSVar2 = (System_Collections_Generic_Dictionary_string__List_HJNEOLCKEMD___o *)__this_00;
  thunk_FUN_01c20e04(ppSVar2,__this_00);
  __this_01 = (System_Collections_Generic_List_HJNEOLCKEMD__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<HJNEOLCKEMD>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<HJNEOLCKEMD>__ctor__);
  ppSVar3 = &(__this->fields).CMAFKNEPKDA;
  *ppSVar3 = __this_01;
  thunk_FUN_01c20e04(ppSVar3,__this_01);
  HJNEOLCKEMD___ctor((HJNEOLCKEMD_o *)__this,(HJNEOLCKEMD_o *)IBKIPBJJCPG,(MethodInfo *)0x0);
  if (IBKIPBJJCPG != (AHMJMDBNMHO_o *)0x0) {
    ppNVar1 = &(__this->fields).FKMMOOKKLBH;
    *ppNVar1 = (IBKIPBJJCPG->fields).FKMMOOKKLBH;
    thunk_FUN_01c20e04(ppNVar1);
    (__this->fields).HENCEKHKNDD = (IBKIPBJJCPG->fields).HENCEKHKNDD;
    thunk_FUN_01c20e04(ppSVar2);
    (__this->fields).CMAFKNEPKDA = (IBKIPBJJCPG->fields).CMAFKNEPKDA;
    thunk_FUN_01c20e04(ppSVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

