// FEPPOONJCGI$$CMIEOMMDGLC @ RVA 0x30B2664

EKGDLIKHEMA_o *
FEPPOONJCGI__CMIEOMMDGLC(FEPPOONJCGI_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_EKGDLIKHEMA__o *pSVar2;
  Il2CppObject *pIVar3;
  EKGDLIKHEMA_o *pEVar4;
  int index;
  
  if ((DAT_045661e7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
    DAT_045661e7 = 1;
  }
  pSVar2 = (__this->fields).EBDCADCBPNM;
  if (pSVar2 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        return (EKGDLIKHEMA_o *)0x0;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_String__op_Equality(pIVar3[1].monitor,KGLJICLJHEL,(MethodInfo *)0x0);
      if (bVar1) {
                    /* try { // try from 031b270c to 032b2713 has its CatchHandler @ 031b2838 */
        pSVar2 = (__this->fields).EBDCADCBPNM;
        if (pSVar2 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0) {
                    /* try { // try from 031b2714 to 032b2717 has its CatchHandler @ 031b282c */
                    /* try { // try from 031b2718 to 032b271b has its CatchHandler @ 031b2824 */
                    /* try { // try from 031b271c to 032b271f has its CatchHandler @ 031b2814 */
          pEVar4 = (EKGDLIKHEMA_o *)
                   System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar2,index,
                              Method_System_Collections_Generic_List<EKGDLIKHEMA>_get_Item__);
          return pEVar4;
        }
        break;
      }
      pSVar2 = (__this->fields).EBDCADCBPNM;
      index = index + 1;
    } while (pSVar2 != (System_Collections_Generic_List_EKGDLIKHEMA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

