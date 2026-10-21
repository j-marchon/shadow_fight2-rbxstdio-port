// OLKKAIFGGAK$$KBPBCOHJFHH @ RVA 0x34E85FC

void OLKKAIFGGAK__KBPBCOHJFHH(OLKKAIFGGAK_o *__this,Il2CppObject *DKMMBMBMJBO,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  OLKKAIFGGAK_EAOIGPODIAI_o *pOVar4;
  Il2CppObject **ppIVar5;
  MMIIDELPHLP_o *pMVar6;
  NKDMOOEFPHJ_o *pNVar7;
  System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *pSVar8;
  OPNFCOGALLI_o *pOVar9;
  OLKKAIFGGAK_o *pOVar10;
  OLKKAIFGGAK_o *pOVar11;
  ECENNHNBAME_o *pEVar12;
  
  if ((DAT_04568772 & 1) == 0) {
    FUN_01bab630(&JADGCGOJLJB_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_14411);
    DAT_04568772 = 1;
  }
  pOVar4 = (__this->fields).PDCHNCOIHHA;
  if (pOVar4 != (OLKKAIFGGAK_EAOIGPODIAI_o *)0x0) {
    ppIVar5 = &(pOVar4->fields).KOANCCDDBDA;
    *ppIVar5 = DKMMBMBMJBO;
    thunk_FUN_01c20e04(ppIVar5,DKMMBMBMJBO);
    pSVar8 = (__this->fields).CMHIICAGBMH;
    if (pSVar8 != (System_Action_OLKKAIFGGAK_EAOIGPODIAI__o *)0x0) {
      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                ((pSVar8->fields).super.super.method_code,(__this->fields).PDCHNCOIHHA,
                 (pSVar8->fields).super.super.method);
      if (DKMMBMBMJBO != (Il2CppObject *)0x0) {
        bVar1 = (JADGCGOJLJB_TypeInfo->_2).naturalAligment;
        if ((DKMMBMBMJBO->klass->_2).naturalAligment < bVar1) {
          DKMMBMBMJBO = (Il2CppObject *)0x0;
        }
        else if ((DKMMBMBMJBO->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                 (Il2CppClass *)JADGCGOJLJB_TypeInfo) {
          DKMMBMBMJBO = (Il2CppObject *)0x0;
        }
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if ((DKMMBMBMJBO != (Il2CppObject *)0x0) &&
         (pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields->KCEBJCOAHDA, pMVar6 != (MMIIDELPHLP_o *)0x0)
         ) {
        bVar2 = MMIIDELPHLP__FLOLNGFPIHB
                          (pMVar6,(System_String_o *)DKMMBMBMJBO[5].klass,(MethodInfo *)0x0);
        if ((bVar2) &&
           ((pOVar9 = (__this->fields).OAKOFJJIOFF, pOVar9 != (OPNFCOGALLI_o *)0x0 &&
            (pEVar12 = (pOVar9->fields).NDBPNFLAKDL, pEVar12 != (ECENNHNBAME_o *)0x0)))) {
          if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pMVar6 = MGNPHCAAEIO_TypeInfo->static_fields->KCEBJCOAHDA;
          if (pMVar6 == (MMIIDELPHLP_o *)0x0) goto LAB_035e87c8;
          iVar3 = MMIIDELPHLP__ADABMFHEMBG
                            (pMVar6,(pEVar12->fields)._AHFPJJKEANI_k__BackingField,(MethodInfo *)0x0
                            );
          (__this->fields).ACFHDECBFOG = iVar3;
        }
        bVar2 = System_String__op_Equality
                          ((System_String_o *)DKMMBMBMJBO[5].klass,StringLiteral_14411,
                           (MethodInfo *)0x0);
        if (!bVar2) {
          return;
        }
        pOVar9 = (__this->fields).OAKOFJJIOFF;
        if (pOVar9 != (OPNFCOGALLI_o *)0x0) {
          pOVar10 = (__this->fields).BPJMMBGIMNC;
          pEVar12 = (pOVar9->fields).NDBPNFLAKDL;
          if (pOVar10 != (OLKKAIFGGAK_o *)0x0) {
            do {
              pOVar11 = pOVar10;
              pOVar10 = (pOVar11->fields).NFMBPIPEKGF;
            } while (pOVar10 != (OLKKAIFGGAK_o *)0x0);
            pNVar7 = (pOVar11->fields).LLMNNPKEGMB;
            if (pNVar7 == (NKDMOOEFPHJ_o *)0x0) goto LAB_035e87c8;
                    /* try { // try from 035e8778 to 036e877f has its CatchHandler @ 035e9114 */
            NKDMOOEFPHJ__FKCBGOIECHC(pNVar7,true,pEVar12,(MethodInfo *)0x0);
          }
          do {
            pOVar10 = __this;
                    /* try { // try from 035e878c to 036e8793 has its CatchHandler @ 035e90a0 */
            __this = (pOVar10->fields).NFMBPIPEKGF;
          } while (__this != (OLKKAIFGGAK_o *)0x0);
                    /* try { // try from 035e8794 to 036e87eb has its CatchHandler @ 035e7cb0 */
          pNVar7 = (pOVar10->fields).LLMNNPKEGMB;
          if (pNVar7 != (NKDMOOEFPHJ_o *)0x0) {
            NKDMOOEFPHJ__FKCBGOIECHC(pNVar7,false,pEVar12,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_035e87c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

