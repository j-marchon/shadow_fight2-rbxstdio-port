// FCJBEKHDLAF$$DHKCOFBMIEL @ RVA 0x33EBD08

void FCJBEKHDLAF__DHKCOFBMIEL(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  KAHMAJKJMBK_o *__this_00;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar5;
  BEPJMNAHCAD_o *pBVar6;
  PJKHAJKEHEL_o *DIJDCNOLDOK;
  int32_t ELCBIMMGAFJ;
  MethodInfo *extraout_x1;
  PJKHAJKEHEL_o *pPVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar8;
  MethodInfo *in_x3;
  IBCHOCDIMIP_o *IMMNELPBGIF;
  MethodInfo *in_x4;
  FCJBEKHDLAF_IKCEFLGIDHF_o *pFVar9;
  System_Collections_Generic_List_PJKHAJKEHEL__o *pSVar10;
  AFFHKININGD_o *pAVar11;
  JIMKCICMMIL_o *pJVar12;
  
  if ((DAT_04567ee1 & 1) == 0) {
    FUN_01bab630(&LHKALFIIJKB_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PJKHAJKEHEL>_get_Count__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567ee1 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).ABCJKJKLFII == false) {
    if ((__this->fields).KPNMLAECCEE == false) {
      if ((__this->fields).DFMCHFJOPIP != false) {
        FCJBEKHDLAF__HHCILLPHIIG(__this,method);
        return;
      }
      pAVar11 = (__this->fields).FBFPLEFCDOK;
      if (pAVar11 != (AFFHKININGD_o *)0x0) {
        if ((pAVar11->fields).JDNKKGPNHPB == 0) {
          return;
        }
        pJVar12 = (__this->fields).ODIAFMNGOLA;
        if (pJVar12 != (JIMKCICMMIL_o *)0x0) {
          if ((pJVar12->fields).BLGIPOEBHGA == false) {
            return;
          }
          pPVar7 = (__this->fields).KCHOEJOHIMM;
          if (pPVar7 != (PJKHAJKEHEL_o *)0x0) {
            if ((pPVar7->fields).DLINPBPHMJD == false) {
              pPVar7 = (__this->fields).JEDELFOBLEN;
              if (pPVar7 == (PJKHAJKEHEL_o *)0x0) goto LAB_034ec160;
              if (((pPVar7->fields).DLINPBPHMJD == false) &&
                 ((__this->fields).KKJBIHIFJOE == (CNIGOFCKBGI_o *)0x0)) {
                pNVar5 = (__this->fields).HIBPKNAIPLH;
                if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                  thunk_FUN_01ba7564();
                }
                bVar4 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if (!bVar4) {
                  return;
                }
                pNVar5 = (__this->fields).HIBPKNAIPLH;
                if (pNVar5 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034ec160;
                bVar4 = Nekki_SF2_GUI_Fight_PreFight__IsTimeOut(pNVar5,(MethodInfo *)0x0);
                if (!bVar4) {
                  return;
                }
              }
            }
            pMVar8 = (MethodInfo *)0x0;
            FCJBEKHDLAF__EPLFGHIGEAH(__this,false,false,in_x3);
            FCJBEKHDLAF__KLBLKMJOBME(__this,false,pMVar8);
            pJVar12 = (__this->fields).ODIAFMNGOLA;
            if (pJVar12 != (JIMKCICMMIL_o *)0x0) {
              (pJVar12->fields).BLGIPOEBHGA = false;
              pNVar5 = (__this->fields).HIBPKNAIPLH;
              if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              pMVar8 = (MethodInfo *)0x0;
              bVar4 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (bVar4) {
                pNVar5 = (__this->fields).HIBPKNAIPLH;
                if (pNVar5 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034ec160;
                bVar4 = Nekki_SF2_GUI_Fight_PreFight__IsTimeOut(pNVar5,(MethodInfo *)0x0);
                if (bVar4) {
                  pAVar11 = (__this->fields).FBFPLEFCDOK;
                  if (pAVar11 == (AFFHKININGD_o *)0x0) goto LAB_034ec160;
                  if ((pAVar11->fields).JDNKKGPNHPB == 0x11) {
                    (__this->fields).FPILBILDOPJ = 6;
                    FCJBEKHDLAF__MJLCFINPGOK(__this,0xd,pMVar8);
                    __this_00 = (__this->fields).AMJGAIMHDLO;
                    if (__this_00 == (KAHMAJKJMBK_o *)0x0) goto LAB_034ec160;
                    IMMNELPBGIF = (__this->fields).JOOGNNJOONJ;
                    ELCBIMMGAFJ = 0xd;
                  }
                  else {
                    (__this->fields).FPILBILDOPJ = 3;
                    FCJBEKHDLAF__MJLCFINPGOK(__this,9,pMVar8);
                    __this_00 = (__this->fields).AMJGAIMHDLO;
                    if (__this_00 == (KAHMAJKJMBK_o *)0x0) goto LAB_034ec160;
                    IMMNELPBGIF = (__this->fields).JOOGNNJOONJ;
                    ELCBIMMGAFJ = 9;
                  }
                  pMVar8 = (MethodInfo *)0x3;
                  in_x4 = (MethodInfo *)0x0;
                  KAHMAJKJMBK__BKBHKFCCKDO
                            (__this_00,ELCBIMMGAFJ,3,(Il2CppObject *)IMMNELPBGIF,(MethodInfo *)0x0);
                }
              }
              pPVar7 = FCJBEKHDLAF__MKOHFHJJDFB(__this,true,pMVar8);
              DIJDCNOLDOK = FCJBEKHDLAF__MKOHFHJJDFB(__this,false,pMVar8);
              FCJBEKHDLAF__DBNFJODELLP(__this,pPVar7,DIJDCNOLDOK,(__this->fields).FPILBILDOPJ,in_x4)
              ;
              return;
            }
          }
        }
      }
    }
    else {
      pAVar11 = (__this->fields).FBFPLEFCDOK;
      if (pAVar11 != (AFFHKININGD_o *)0x0) {
        if ((pAVar11->fields).JDNKKGPNHPB == 0x14) {
          FCJBEKHDLAF__LCMIBAAHEMC(__this,method);
        }
        else if (((__this->fields).CPIIMMMGPHN == false) && ((__this->fields).IMEHPHJJNJH == false))
        {
          FCJBEKHDLAF__IILEMANDADN(__this,true,in_x2);
        }
        if ((LHKALFIIJKB_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        LHKALFIIJKB__LMNENJFLCEB((MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pFVar9 = (__this->fields).PHGOIJGLONP;
    if ((((pFVar9 != (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) &&
         (pPVar7 = (pFVar9->fields).FIJLCCEJANF, pPVar7 != (PJKHAJKEHEL_o *)0x0)) &&
        (pJVar12 = (__this->fields).ODIAFMNGOLA, pJVar12 != (JIMKCICMMIL_o *)0x0)) &&
       (pAVar11 = (__this->fields).FBFPLEFCDOK, pAVar11 != (AFFHKININGD_o *)0x0)) {
      iVar1 = (pPVar7->fields).GPLLAHCFFIH;
      iVar2 = (pJVar12->fields).JLGJOLIMJKB;
      if ((iVar2 <= iVar1) && ((pAVar11->fields).JDNKKGPNHPB == 0x14)) {
        (__this->fields).ABCJKJKLFII = false;
        (__this->fields).NMAKBLGPEGO = false;
LAB_034ebda4:
        FCJBEKHDLAF__BJAHHLCMPNC(__this,pPVar7,(pFVar9->fields).DIJDCNOLDOK,in_x3);
        return;
      }
      if ((__this->fields).CPIIMMMGPHN != false) {
        return;
      }
      if ((__this->fields).IMEHPHJJNJH != false) {
        return;
      }
      (__this->fields).ABCJKJKLFII = false;
      bVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                         (pPVar7->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
      bVar4 = false;
      if (bVar3) {
        pSVar10 = (__this->fields).DFGLEOANOFI;
        if (pSVar10 == (System_Collections_Generic_List_PJKHAJKEHEL__o *)0x0) goto LAB_034ec160;
        bVar4 = (__this->fields).CLFDJLLDNGD < (pSVar10->fields)._size + -1;
      }
      pAVar11 = (__this->fields).FBFPLEFCDOK;
      if (pAVar11 != (AFFHKININGD_o *)0x0) {
        bVar3 = AFFHKININGD__IJKNNMOKCKL(pAVar11,(MethodInfo *)0x0);
        (__this->fields).NMAKBLGPEGO = false;
                    /* try { // try from 034ebe58 to 035ec203 has its CatchHandler @ 034ebe58
                       catch() { ... } // from try @ 034ebe58 with catch @ 034ebe58
                       catch() { ... } // from try @ 034ec37c with catch @ 034ebe58
                       catch() { ... } // from try @ 034ec454 with catch @ 034ebe58
                       catch() { ... } // from try @ 034ec4ac with catch @ 034ebe58
                       catch() { ... } // from try @ 034ec4dc with catch @ 034ebe58 */
        if (((bool)(bVar4 & iVar2 <= iVar1)) || (iVar1 < iVar2 && bVar3)) {
          pBVar6 = (__this->fields).FAJCMHDLBEJ;
          if (pBVar6 != (BEPJMNAHCAD_o *)0x0) {
            pMVar8 = (MethodInfo *)0x0;
            BEPJMNAHCAD__HCKFFOOHHMA(pBVar6,false,(MethodInfo *)0x0);
            FCJBEKHDLAF__JLKMNGHIKDG(__this,false,pMVar8);
            if (bVar3) {
              pFVar9 = (__this->fields).PHGOIJGLONP;
              if (pFVar9 != (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) {
                FCJBEKHDLAF__LJBEJNMMIGF
                          (__this,(__this->fields).KCHOEJOHIMM == (pFVar9->fields).FIJLCCEJANF,
                           pMVar8);
                pNVar5 = (__this->fields).HIBPKNAIPLH;
                if (pNVar5 != (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) {
                  Nekki_SF2_GUI_Fight_PreFight__ViewerUpdateVictorys(pNVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              FCJBEKHDLAF__LJBEJNMMIGF(__this,true,pMVar8);
              pPVar7 = (__this->fields).KCHOEJOHIMM;
              if (pPVar7 != (PJKHAJKEHEL_o *)0x0) {
                (pPVar7->fields).GPLLAHCFFIH = 0;
                return;
              }
            }
          }
        }
        else if (iVar1 < iVar2) {
          pBVar6 = (__this->fields).FAJCMHDLBEJ;
          if (pBVar6 != (BEPJMNAHCAD_o *)0x0) {
            pMVar8 = (MethodInfo *)0x0;
            BEPJMNAHCAD__HCKFFOOHHMA(pBVar6,false,(MethodInfo *)0x0);
            FCJBEKHDLAF__JLKMNGHIKDG(__this,false,pMVar8);
            FCJBEKHDLAF__EJPACOMGKAD(__this,method_00);
            FCJBEKHDLAF__FDDKGLOPBEG(__this,method_01);
            return;
          }
        }
        else {
          pFVar9 = (__this->fields).PHGOIJGLONP;
          if (pFVar9 != (FCJBEKHDLAF_IKCEFLGIDHF_o *)0x0) {
            pPVar7 = (pFVar9->fields).FIJLCCEJANF;
            goto LAB_034ebda4;
          }
        }
      }
    }
  }
LAB_034ec160:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

