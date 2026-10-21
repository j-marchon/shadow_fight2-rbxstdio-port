// EEGDOGKBLNG$$CIHOPLMGDHH @ RVA 0x3070AB0

bool EEGDOGKBLNG__CIHOPLMGDHH(EEGDOGKBLNG_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  JMDPBFOCHHP_o *pJVar3;
  Il2CppObject *pIVar4;
  JMDPBFOCHHP_NOPCEDPNNKO_o *pJVar5;
  System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *__this_00;
  int iVar6;
  bool bVar7;
  
  if ((DAT_04565f65 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__);
    FUN_01bab630(&StringLiteral_8722);
    DAT_04565f65 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pJVar3 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
  if (((pJVar3 != (JMDPBFOCHHP_o *)0x0) &&
      (pJVar5 = (pJVar3->fields).OFMMMBIIDAE, pJVar5 != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0)) &&
     (__this_00 = (pJVar5->fields).GADHINPJDAF,
     __this_00 != (System_Collections_Generic_List_JMDPBFOCHHP_HJLEKMDIDPO__o *)0x0)) {
    iVar6 = (__this_00->fields)._size;
    bVar7 = 0 < iVar6;
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this_00,iVar6,
                            Method_System_Collections_Generic_List<JMDPBFOCHHP_HJLEKMDIDPO>_get_Item__
                           );
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03170bd0;
        bVar2 = System_String__op_Equality
                          (KGLJICLJHEL,(System_String_o *)pIVar4[1].klass,(MethodInfo *)0x0);
        if ((bVar2) &&
           (bVar2 = System_String__op_Equality
                              (pIVar4[4].monitor,StringLiteral_8722,(MethodInfo *)0x0), bVar2)) {
          return bVar7;
        }
        iVar1 = (__this_00->fields)._size;
        iVar6 = iVar6 + 1;
        bVar7 = iVar6 < iVar1;
      } while (iVar6 < iVar1);
    }
    return bVar7;
  }
LAB_03170bd0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

