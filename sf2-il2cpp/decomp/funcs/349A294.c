// NGKBNOEJLPH$$AHJODDBEOGP @ RVA 0x349A294

int32_t NGKBNOEJLPH__AHJODDBEOGP
                  (NGKBNOEJLPH_o *__this,OLKKAIFGGAK_o *IFCJAOGIPJE,MethodInfo *method)

{
  uint HDJOAKLACAO;
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  OPNFCOGALLI_o *pOVar4;
  System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *pSVar5;
  Il2CppObject *pIVar6;
  OLKKAIFGGAK_o *BCKBBGCOMJD;
  MethodInfo *method_00;
  MethodInfo *in_x7;
  int iVar7;
  ECENNHNBAME_o *JPAIIFCMJKH;
  ECENNHNBAME_o *BCCLBIACIHD;
  int iVar8;
  float JGCEANECCCH;
  float BFLCOAMHGPF;
  
  if ((DAT_0456845d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_LNKLGCHOEBF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_set_Item__);
    FUN_01bab630(&OCMLPCKBHPN_TypeInfo);
    DAT_0456845d = 1;
  }
  iVar7 = (__this->fields).MAHKIKKMBJM;
  if ((OCMLPCKBHPN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  JPAIIFCMJKH = (__this->fields).JDEONPMMCEL;
  iVar8 = OCMLPCKBHPN_TypeInfo->static_fields->BINJPMNNDEH;
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = iVar7 / iVar8;
  }
  (__this->fields).DIGBNGKEDHC = iVar7 != iVar1 * iVar8;
  iVar3 = 0;
  if (JPAIIFCMJKH != (ECENNHNBAME_o *)0x0) {
    BCCLBIACIHD = (__this->fields).LOLLKFCKEKG;
    if (BCCLBIACIHD == (ECENNHNBAME_o *)0x0) {
      iVar3 = 0;
    }
    else {
      pOVar4 = (__this->fields).LGJKGLINMGP;
      if (((pOVar4 == (OPNFCOGALLI_o *)0x0) ||
          (JGCEANECCCH = OPNFCOGALLI__BKDCNNOOIJH(pOVar4,(MethodInfo *)0x0),
          IFCJAOGIPJE == (OLKKAIFGGAK_o *)0x0)) ||
         (pOVar4 = (IFCJAOGIPJE->fields).OAKOFJJIOFF, pOVar4 == (OPNFCOGALLI_o *)0x0)) {
LAB_0359a490:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      BFLCOAMHGPF = OPNFCOGALLI__BKDCNNOOIJH(pOVar4,(MethodInfo *)0x0);
      HDJOAKLACAO = (__this->fields).ACKBKMOGGAH;
      method_00 = (MethodInfo *)(ulong)HDJOAKLACAO;
      iVar3 = NGKBNOEJLPH__AHJODDBEOGP
                        (__this,IFCJAOGIPJE,JPAIIFCMJKH,BCCLBIACIHD,JGCEANECCCH,BFLCOAMHGPF,
                         HDJOAKLACAO,(__this->fields).MAHKIKKMBJM,(__this->fields).ANPCENKGMDN,
                         (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)0x0,in_x7)
      ;
      if ((0 < iVar3) &&
         (iVar3 = NGKBNOEJLPH__PKNDAFAACIK
                            (__this,(__this->fields).JOMJAAIPNPH,(MethodInfo *)JPAIIFCMJKH),
         0 < iVar3)) {
        pSVar5 = (__this->fields).JOMJAAIPNPH;
        iVar7 = 0;
        iVar8 = 0;
        do {
          if ((pSVar5 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0) ||
             (BCKBBGCOMJD = 
              Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__,
             pIVar6 = System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar5,iVar8,
                                 (MethodInfo_26E4ADC *)
                                 Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                                ), pIVar6 == (Il2CppObject *)0x0)) goto LAB_0359a490;
          if ((pIVar6[1].klass == (Il2CppClass *)0x0) ||
             (bVar2 = NGKBNOEJLPH__IIIHAJGCPGP
                                (__this,(ECENNHNBAME_o *)pIVar6[1].klass,BCKBBGCOMJD,IFCJAOGIPJE,
                                 method_00), bVar2)) {
            if (iVar7 < iVar8) {
              pSVar5 = (__this->fields).JOMJAAIPNPH;
              if (pSVar5 == (System_Collections_Generic_List_NGKBNOEJLPH_LNKLGCHOEBF__o *)0x0)
              goto LAB_0359a490;
              pIVar6 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar5,iVar8,
                                  (MethodInfo_26E4ADC *)
                                  Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_get_Item__
                                 );
              System_Collections_Generic_List<object>__set_Item
                        ((System_Collections_Generic_List_object__o *)pSVar5,iVar7,pIVar6,
                         Method_System_Collections_Generic_List<NGKBNOEJLPH_LNKLGCHOEBF>_set_Item__)
              ;
            }
            iVar7 = iVar7 + 1;
          }
          pSVar5 = (__this->fields).JOMJAAIPNPH;
          iVar8 = iVar8 + 1;
        } while (iVar3 != iVar8);
        DJNBJHPDKDP__LJCDLMMMOGD<object>
                  ((System_Collections_Generic_List_T__o *)pSVar5,iVar7,
                   Method_DJNBJHPDKDP_LJCDLMMMOGD<NGKBNOEJLPH_LNKLGCHOEBF>__);
        iVar3 = iVar7;
      }
    }
  }
  return iVar3;
}

