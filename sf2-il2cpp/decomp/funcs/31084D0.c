// OPNFCOGALLI$$IGAJHAMEBNO @ RVA 0x31084D0

void OPNFCOGALLI__IGAJHAMEBNO(OPNFCOGALLI_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  MBDJMJLHFOO_o *__this_00;
  MBDJMJLHFOO_MJFFMMHJCNB_o *pMVar3;
  System_Collections_Generic_List_IEFEBEDLHNN__o *__this_01;
  IEFEBEDLHNN_o *pIVar4;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *BODACGEEGLE;
  MethodInfo *extraout_x1;
  MethodInfo *in_x5;
  ECENNHNBAME_MNDFKOHIAHI_o *pEVar5;
  ECENNHNBAME_o *pEVar6;
  GBJGJEGPHKD_o *pGVar7;
  
  if ((DAT_0456651a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
    DAT_0456651a = 1;
    method = extraout_x1;
  }
  OPNFCOGALLI__NIDHGNCCKOM(__this,method);
  pEVar6 = (__this->fields).NDBPNFLAKDL;
  if (pEVar6 != (ECENNHNBAME_o *)0x0) {
    pEVar5 = (pEVar6->fields).FGEAOBODDAP;
    (__this->fields).IOGCGDKKILK = false;
    if (pEVar5 != (ECENNHNBAME_MNDFKOHIAHI_o *)0x0) {
      if ((pEVar5->fields)._FCHBJLJDDOH_k__BackingField != false) {
        return;
      }
      __this_00 = (__this->fields).EJNOBBDDBDO;
      if (__this_00 != (MBDJMJLHFOO_o *)0x0) {
        pGVar7 = (__this->fields).KOHECBJAFKG;
        iVar2 = (__this->fields).DMJAJGGGHPF;
        pMVar3 = MBDJMJLHFOO__HBMICHOLLMF(__this_00,2,(MethodInfo *)0x0);
        if (pMVar3 != (MBDJMJLHFOO_MJFFMMHJCNB_o *)0x0) {
          bVar1 = OPNFCOGALLI__NGILHAOFGEA
                            (pGVar7,pEVar6,iVar2,(pMVar3->fields).KOANCCDDBDA,true,in_x5);
          (__this->fields).IOGCGDKKILK = bVar1;
          if (!bVar1) {
            return;
          }
          pGVar7 = (__this->fields).KOHECBJAFKG;
          if (pGVar7 != (GBJGJEGPHKD_o *)0x0) {
            iVar2 = GBJGJEGPHKD__HDEBEPGIFCJ(pGVar7,(__this->fields).NOEPMCHIBOL,(MethodInfo *)0x0);
            if (-1 < iVar2) {
              pGVar7 = (__this->fields).KOHECBJAFKG;
              (__this->fields).NOEPMCHIBOL = iVar2;
              if ((pGVar7 == (GBJGJEGPHKD_o *)0x0) ||
                 (__this_01 = GBJGJEGPHKD__HMAAHELNECD(pGVar7,(MethodInfo *)0x0),
                 __this_01 == (System_Collections_Generic_List_IEFEBEDLHNN__o *)0x0))
              goto LAB_0320860c;
              pIVar4 = (IEFEBEDLHNN_o *)
                       System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)__this_01,
                                  (__this->fields).NOEPMCHIBOL,
                                  Method_System_Collections_Generic_List<IEFEBEDLHNN>_get_Item__);
              (__this->fields).BAAPAKJGOMG = pIVar4;
              thunk_FUN_01c20e04();
            }
            pGVar7 = (__this->fields).KOHECBJAFKG;
            if (pGVar7 != (GBJGJEGPHKD_o *)0x0) {
              pEVar6 = (__this->fields).NDBPNFLAKDL;
              BODACGEEGLE = GBJGJEGPHKD__JNAHGJHEIOE(pGVar7,(MethodInfo *)0x0);
              if (pEVar6 != (ECENNHNBAME_o *)0x0) {
                ECENNHNBAME__LDNCMJNKHPO
                          (pEVar6,BODACGEEGLE,(__this->fields).EJNOBBDDBDO,2,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_0320860c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

