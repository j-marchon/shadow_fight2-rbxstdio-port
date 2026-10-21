// OLKKAIFGGAK$$GNLOBEBMDGK @ RVA 0x34F0AE4

void OLKKAIFGGAK__GNLOBEBMDGK(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  float fVar1;
  bool bVar2;
  GBJGJEGPHKD_o *__this_00;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  Il2CppObject *pIVar3;
  MMDPNDAECII_o *pMVar4;
  OLKKAIFGGAK_KNPLBMOGHNL_o *pOVar5;
  int index;
  float fVar6;
  float GKBCJOEFFCP;
  float PEOMJHJICCM;
  float fVar7;
  float fVar8;
  
  if ((DAT_045687d0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_045687d0 = 1;
  }
  pMVar4 = (__this->fields).GJLEPEPAOKD;
  if (pMVar4 != (MMDPNDAECII_o *)0x0) {
    if ((pMVar4->fields).BNHJIKJAHHF != false) {
      return;
    }
    pOVar5 = (__this->fields).MGCLEGJNLJD;
    if ((pOVar5 != (OLKKAIFGGAK_KNPLBMOGHNL_o *)0x0) &&
       (__this_00 = (__this->fields).HMIAFJALFCJ, __this_00 != (GBJGJEGPHKD_o *)0x0)) {
      fVar7 = (pOVar5->fields).HHMEPDHKNPN;
      fVar8 = (pOVar5->fields).ANFFFELBBKI;
      __this_01 = GBJGJEGPHKD__HMAAHELNECD(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0) {
        PEOMJHJICCM = fVar7;
        GKBCJOEFFCP = fVar8;
        if (0 < (__this_01->fields)._size) {
          index = 0;
          do {
            pIVar3 = System_Collections_Generic_List<object>__get_Item
                               ((System_Collections_Generic_List_object__o *)__this_01,index,
                                Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
            if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar3[3].monitor == (void *)0x0))
            goto LAB_035f0c14;
            fVar6 = *(float *)((long)pIVar3[3].monitor + 0x10);
            index = index + 1;
            bVar2 = false;
            if ((fVar6 < fVar7) && (bVar2 = false, !NAN(fVar6) && !NAN(PEOMJHJICCM))) {
              bVar2 = fVar6 < PEOMJHJICCM;
            }
            fVar1 = fVar6;
            if (!bVar2) {
              fVar1 = PEOMJHJICCM;
            }
            PEOMJHJICCM = fVar1;
            bVar2 = false;
            if ((fVar8 < fVar6) && (bVar2 = false, !NAN(GKBCJOEFFCP) && !NAN(fVar6))) {
              bVar2 = GKBCJOEFFCP < fVar6;
            }
            if (!bVar2) {
              fVar6 = GKBCJOEFFCP;
            }
            GKBCJOEFFCP = fVar6;
          } while (index < (__this_01->fields)._size);
        }
        pMVar4 = (__this->fields).GJLEPEPAOKD;
        if (pMVar4 != (MMDPNDAECII_o *)0x0) {
          MMDPNDAECII__LHAKAHHIMLN(pMVar4,PEOMJHJICCM,GKBCJOEFFCP,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_035f0c14:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

