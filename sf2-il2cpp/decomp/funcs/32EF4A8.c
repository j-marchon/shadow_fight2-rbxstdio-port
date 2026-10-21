// KBFGKFAKGPP$$AAILGEMALAJ @ RVA 0x32EF4A8

void KBFGKFAKGPP__AAILGEMALAJ(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t iVar2;
  GLCAPECMBLM_o *__this_00;
  CocosAnimation_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  System_Collections_Generic_List_GLCAPECMBLM__o *__this_02;
  HDBPKHNKOGI_o *pHVar3;
  int index;
  int iVar4;
  
  if ((DAT_04567664 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567664 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  iVar2 = MGNPHCAAEIO__PCJHAMFGJLP((MethodInfo *)0x0);
  __this_02 = (__this->fields).FIFCACFAFPH;
  if (__this_02 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0) {
    iVar4 = (__this_02->fields)._size;
    if (iVar4 < 1) {
      return;
    }
    index = 0;
    do {
      __this_00 = (GLCAPECMBLM_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)__this_02,index,
                             Method_System_Collections_Generic_List<GLCAPECMBLM>_get_Item__);
      if ((__this_00 == (GLCAPECMBLM_o *)0x0) ||
         (__this_01 = (__this_00->fields).OLLOKPHMOBP, __this_01 == (CocosAnimation_o *)0x0)) break;
      pHVar3 = (__this_00->fields).AHCMAIOOIKM;
      if ((__this_01->fields)._JJCDMHFHJAB_k__BackingField == false) {
        if (pHVar3 == (HDBPKHNKOGI_o *)0x0) break;
LAB_033ef5b0:
        KBFGKFAKGPP__LLKFLBKKGAK
                  (__this,(pHVar3->fields).NPFMOEOIEKM,(__this_00->fields).BCKBBGCOMJD,in_x3);
        iVar4 = iVar4 + -1;
        index = index + -1;
      }
      else {
        if (pHVar3 == (HDBPKHNKOGI_o *)0x0) break;
        if ((pHVar3->fields).NMIEFOCHBNM != false) {
          bVar1 = (__this_00->fields).DHHAIGLEBHH;
          if ((__this_00->fields).BCKBBGCOMJD == (OLKKAIFGGAK_o *)0x0) {
            if (bVar1 == false) goto LAB_033ef5b0;
          }
          else if (bVar1 == false) {
            GLCAPECMBLM__JEFMDBBCIOB(__this_00,(MethodInfo *)0x0);
            __this_01 = (__this_00->fields).OLLOKPHMOBP;
            if (__this_01 == (CocosAnimation_o *)0x0) break;
          }
        }
        CocosAnimation__Render(__this_01,(1.0 / (float)iVar2) * 0.016666668,(MethodInfo *)0x0);
      }
      index = index + 1;
      if (iVar4 <= index) {
        return;
      }
      __this_02 = (__this->fields).FIFCACFAFPH;
    } while (__this_02 != (System_Collections_Generic_List_GLCAPECMBLM__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

