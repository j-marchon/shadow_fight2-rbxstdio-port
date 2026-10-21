// KBFGKFAKGPP$$LLKFLBKKGAK @ RVA 0x32EF254

void KBFGKFAKGPP__LLKFLBKKGAK
               (KBFGKFAKGPP_o *__this,System_String_o *KGLJICLJHEL,OLKKAIFGGAK_o *BCKBBGCOMJD,
               MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_00;
  GLCAPECMBLM_o *AHCMAIOOIKM;
  HDBPKHNKOGI_o *pHVar3;
  int index;
  
  if ((DAT_04567667 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567667 = 1;
  }
  __this_00 = (__this->fields).FIFCACFAFPH;
  if (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar1 = (__this_00->fields)._size;
    if (iVar1 < 1) {
      return;
    }
    index = 0;
    do {
      AHCMAIOOIKM = (GLCAPECMBLM_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)__this_00,index,
                               Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if (AHCMAIOOIKM == (GLCAPECMBLM_o *)0x0) break;
      if (BCKBBGCOMJD == (AHCMAIOOIKM->fields).BCKBBGCOMJD) {
        pHVar3 = (AHCMAIOOIKM->fields).AHCMAIOOIKM;
        if (pHVar3 == (HDBPKHNKOGI_o *)0x0) break;
        bVar2 = System_String__op_Equality
                          (KGLJICLJHEL,(pHVar3->fields).NPFMOEOIEKM,(MethodInfo *)0x0);
        if ((bVar2) ||
           (bVar2 = System_String__op_Equality(KGLJICLJHEL,StringLiteral_1,(MethodInfo *)0x0), bVar2
           )) {
          KBFGKFAKGPP__LLKFLBKKGAK(__this,AHCMAIOOIKM,index,method);
          return;
        }
      }
      if (iVar1 + -1 == index) {
        return;
      }
      __this_00 = (__this->fields).FIFCACFAFPH;
      index = index + 1;
    } while (__this_00 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

