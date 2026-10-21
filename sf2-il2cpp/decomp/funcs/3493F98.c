// NGKBNOEJLPH$$ECPDPNNJNKJ @ RVA 0x3493F98

int32_t NGKBNOEJLPH__ECPDPNNJNKJ
                  (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *IFCJAOGIPJE,int32_t GCPGGELEAKI,
                  MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  bool bVar3;
  uint uVar4;
  NGKBNOEJLPH_o *OPOBKFLDJIG;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *FANNJBKGDKF;
  NGKBNOEJLPH_o *__this_00;
  OLKKAIFGGAK_o *IFCJAOGIPJE_00;
  NGKBNOEJLPH_o *extraout_x0;
  MethodInfo *method_00;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o **ppSVar5;
  OPNFCOGALLI_o *pOVar6;
  int index;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *pSVar7;
  
  if ((DAT_04568445 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
    FUN_01bab630(&System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo);
    DAT_04568445 = 1;
  }
  OPOBKFLDJIG = (NGKBNOEJLPH_o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo
                                  );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)OPOBKFLDJIG,
             Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
  ppSVar5 = &(__this->fields).JOMJAAIPNPH;
  pSVar7 = *ppSVar5;
  FANNJBKGDKF = (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo
                                  );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)FANNJBKGDKF,
             (System_Collections_Generic_IEnumerable_T__o *)pSVar7,
             (MethodInfo_26E46A0 *)
             Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
  if ((IFCJAOGIPJE != (OLKKAIFGGAK_o *)0x0) &&
     (__this_00 = (NGKBNOEJLPH_o *)(IFCJAOGIPJE->fields).MPLCPGJEHPG,
     __this_00 != (NGKBNOEJLPH_o *)0x0)) {
    iVar1 = (__this_00->fields).MAHKIKKMBJM;
    if (iVar1 < 1) {
LAB_03594184:
      if ((OPOBKFLDJIG != (NGKBNOEJLPH_o *)0x0) &&
         (FANNJBKGDKF != (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0)) {
        iVar2 = (OPOBKFLDJIG->fields).MAHKIKKMBJM;
        if ((FANNJBKGDKF->fields)._size == 0) {
          *ppSVar5 = (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)OPOBKFLDJIG;
        }
        else {
          OPOBKFLDJIG = (NGKBNOEJLPH_o *)
                        NGKBNOEJLPH__ACEMLHJMOAK
                                  (__this_00,FANNJBKGDKF,
                                   (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)
                                   OPOBKFLDJIG,method);
          *ppSVar5 = (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)OPOBKFLDJIG;
        }
        thunk_FUN_01c20e04(ppSVar5,OPOBKFLDJIG);
        return iVar2;
      }
    }
    else {
      index = 0;
      do {
        IFCJAOGIPJE_00 =
             (OLKKAIFGGAK_o *)
             System_Collections_Generic_List<object>__get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,index,
                        Method_System_Collections_Generic_List<OIGAJAKPPEO>_get_Item__);
        pSVar7 = (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)
                 thunk_FUN_01bda818(
                                   System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo
                                   );
        method_00 = Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__;
        System_Collections_Generic_List<object>___ctor
                  ((System_Collections_Generic_List_object__o *)pSVar7,
                   (System_Collections_Generic_IEnumerable_T__o *)OPOBKFLDJIG,
                   (MethodInfo_26E46A0 *)
                   Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
        if ((IFCJAOGIPJE_00 == (OLKKAIFGGAK_o *)0x0) ||
           (pOVar6 = (IFCJAOGIPJE_00->fields).OAKOFJJIOFF, pOVar6 == (OPNFCOGALLI_o *)0x0)) break;
        bVar3 = NGKBNOEJLPH__JNLBJPDBFPP(__this,(pOVar6->fields).NDBPNFLAKDL,method_00);
        __this_00 = (NGKBNOEJLPH_o *)(ulong)bVar3;
        if ((GCPGGELEAKI != 0) || (bVar3)) {
          pOVar6 = (IFCJAOGIPJE_00->fields).OAKOFJJIOFF;
          if (pOVar6 == (OPNFCOGALLI_o *)0x0) break;
          bVar3 = NGKBNOEJLPH__DFDGPADDMDE(__this,(pOVar6->fields).NDBPNFLAKDL,method_00);
          __this_00 = (NGKBNOEJLPH_o *)(ulong)bVar3;
          if ((GCPGGELEAKI != 1) || (bVar3)) {
            pOVar6 = (IFCJAOGIPJE_00->fields).OAKOFJJIOFF;
            if (pOVar6 == (OPNFCOGALLI_o *)0x0) break;
            if ((pOVar6->fields).NDBPNFLAKDL != (ECENNHNBAME_o *)0x0) {
              uVar4 = NGKBNOEJLPH__AHPEJICGFMM(__this,IFCJAOGIPJE_00,1,method);
              if (OPOBKFLDJIG == (NGKBNOEJLPH_o *)0x0) break;
              if ((OPOBKFLDJIG->fields).MAHKIKKMBJM < 1) {
                pSVar7 = *ppSVar5;
                OPOBKFLDJIG = (NGKBNOEJLPH_o *)
                              thunk_FUN_01bda818(
                                                System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_TypeInfo
                                                );
                System_Collections_Generic_List<object>___ctor
                          ((System_Collections_Generic_List_object__o *)OPOBKFLDJIG,
                           (System_Collections_Generic_IEnumerable_T__o *)pSVar7,
                           (MethodInfo_26E46A0 *)
                           Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>__ctor__);
                __this_00 = extraout_x0;
              }
              else {
                __this_00 = (NGKBNOEJLPH_o *)
                            NGKBNOEJLPH__ACEMLHJMOAK
                                      ((NGKBNOEJLPH_o *)(ulong)uVar4,pSVar7,*ppSVar5,method);
                OPOBKFLDJIG = __this_00;
              }
            }
          }
        }
        index = index + 1;
        if (iVar1 == index) goto LAB_03594184;
        __this_00 = (NGKBNOEJLPH_o *)(IFCJAOGIPJE->fields).MPLCPGJEHPG;
      } while (__this_00 != (NGKBNOEJLPH_o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

