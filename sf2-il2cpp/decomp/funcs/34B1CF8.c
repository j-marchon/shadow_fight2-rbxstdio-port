// MBDJMJLHFOO$$PIIOPLBOFKA @ RVA 0x34B1CF8

void MBDJMJLHFOO__PIIOPLBOFKA(MBDJMJLHFOO_o *__this,int32_t DGPFDHIFHOH,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *pSVar2;
  int index;
  
  if ((DAT_04568567 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__);
    DAT_04568567 = 1;
  }
  pSVar2 = (__this->fields).DGPKPHAHOJP;
  (__this->fields).MONBPDGKCOM = 2;
  (__this->fields).ODOKIDEGENN = true;
  if (pSVar2 != (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) {
    if ((1 < (pSVar2->fields)._size) ||
       (MBDJMJLHFOO__LOGLJOCPFCN(__this,2,DGPFDHIFHOH,in_x3), 0 < (__this->fields).MONBPDGKCOM)) {
      index = 0;
      do {
        pSVar2 = (__this->fields).DGPKPHAHOJP;
        if ((pSVar2 == (System_Collections_Generic_List_MBDJMJLHFOO_MJFFMMHJCNB__o *)0x0) ||
           (pIVar1 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)pSVar2,index,
                                Method_System_Collections_Generic_List<MBDJMJLHFOO_MJFFMMHJCNB>_get_Item__
                               ), pIVar1 == (Il2CppObject *)0x0)) goto LAB_035b1e00;
        if (*(int *)&pIVar1[1].monitor != DGPFDHIFHOH) {
          if (*(int *)&pIVar1[1].monitor < DGPFDHIFHOH) {
            DJNBJHPDKDP__LJCDLMMMOGD<object>
                      ((System_Collections_Generic_List_T__o *)pIVar1[1].klass,DGPFDHIFHOH,
                       Method_DJNBJHPDKDP_LJCDLMMMOGD<CNDPAJOLKFN>__);
          }
          *(int32_t *)&pIVar1[1].monitor = DGPFDHIFHOH;
        }
        index = index + 1;
      } while (index < (__this->fields).MONBPDGKCOM);
    }
    return;
  }
LAB_035b1e00:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

