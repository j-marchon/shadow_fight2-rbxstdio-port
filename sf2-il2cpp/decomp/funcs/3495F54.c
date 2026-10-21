// NGKBNOEJLPH$$LKFJKPBMGIA @ RVA 0x3495F54

bool NGKBNOEJLPH__LKFJKPBMGIA
               (NGKBNOEJLPH_o *__this,ECENNHNBAME_o *NLEBDPHNIDI,bool NJBKIOGMKKE,MethodInfo *method
               )

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  System_Collections_Generic_List_IENLNOEDCFF__o *PBCGCHIKCOE;
  OLKKAIFGGAK_o *pOVar4;
  OPNFCOGALLI_o *pOVar5;
  ECENNHNBAME_HJPFANEPGJF_o *pEVar6;
  Il2CppClass *pIVar7;
  ECENNHNBAME_KFMLLPPCPHI_o *pEVar8;
  NJPBHDMCLIN_o *AHEFOIOKDOK;
  
  if ((DAT_04568449 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
    FUN_01bab630(&IFAMAAGNCBJ_TypeInfo);
    FUN_01bab630(&StringLiteral_19732);
    DAT_04568449 = 1;
  }
  pOVar4 = (__this->fields).KOHECBJAFKG;
  if (pOVar4 != (OLKKAIFGGAK_o *)0x0) {
    AHEFOIOKDOK = (pOVar4->fields).FNEAAHOOHAA;
    if (AHEFOIOKDOK == (NJPBHDMCLIN_o *)0x0) {
      if ((IFAMAAGNCBJ_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pIVar3 = IFAMAAGNCBJ__GPBMELHDADN<object>
                         (Method_IFAMAAGNCBJ_GPBMELHDADN<BuildSettingsConfig>__);
      if (((pIVar3 != (Il2CppObject *)0x0) && (pIVar3[9].klass != (Il2CppClass *)0x0)) &&
         (pIVar7 = ((pIVar3[9].klass)->_1).element_class, pIVar7 != (Il2CppClass *)0x0)) {
        if (*(char *)&(pIVar7->_1).name != '\0') {
          if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          UnityEngine_Debug__LogError(StringLiteral_19732,(MethodInfo *)0x0);
        }
        return false;
      }
    }
    else if (NLEBDPHNIDI != (ECENNHNBAME_o *)0x0) {
      (AHEFOIOKDOK->fields).MPGOHFNJBLA = (NLEBDPHNIDI->fields)._AHFPJJKEANI_k__BackingField;
      thunk_FUN_01c20e04();
      pOVar5 = (__this->fields).LGJKGLINMGP;
      if (pOVar5 != (OPNFCOGALLI_o *)0x0) {
        iVar2 = ECENNHNBAME__BAHFNIPBBHD
                          (NLEBDPHNIDI,AHEFOIOKDOK,(pOVar5->fields).DMJAJGGGHPF,(MethodInfo *)0x0);
        (AHEFOIOKDOK->fields).FOJEHKCDKFH = iVar2;
        pEVar6 = (NLEBDPHNIDI->fields).DMGLMCBIAGL;
        if ((pEVar6 != (ECENNHNBAME_HJPFANEPGJF_o *)0x0) &&
           (pEVar8 = (pEVar6->fields).EJNDOMGCGFL, pEVar8 != (ECENNHNBAME_KFMLLPPCPHI_o *)0x0)) {
          (AHEFOIOKDOK->fields).JDNEMNOMLIC = (pEVar8->fields).ONFAKNEMEGC;
          if (NJBKIOGMKKE) {
            PBCGCHIKCOE = (pEVar6->fields).ENCCFIFCDGL;
          }
          else {
            PBCGCHIKCOE = (System_Collections_Generic_List_IENLNOEDCFF__o *)0x0;
          }
          bVar1 = ECENNHNBAME__PCPBHJGAOOH
                            (NLEBDPHNIDI,AHEFOIOKDOK,PBCGCHIKCOE,(KJFPGDFNFCL_o *)0x0,
                             (MethodInfo *)0x0);
          return bVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

