// FCJBEKHDLAF$$BJAHHLCMPNC @ RVA 0x33EC164

void FCJBEKHDLAF__BJAHHLCMPNC
               (FCJBEKHDLAF_o *__this,PJKHAJKEHEL_o *FIJLCCEJANF,PJKHAJKEHEL_o *DIJDCNOLDOK,
               MethodInfo *method)

{
  KKLJIDJBFEI_o *pKVar1;
  MethodInfo *method_00;
  AFFHKININGD_o *pAVar2;
  System_Collections_Generic_List_KMJDCOABCCG__o *pSVar3;
  
  if ((DAT_04567f05 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KMJDCOABCCG>_get_Count__);
    DAT_04567f05 = 1;
  }
  FCJBEKHDLAF__KKKKBBHCMMA(__this,true,(MethodInfo *)DIJDCNOLDOK);
  pAVar2 = (__this->fields).FBFPLEFCDOK;
  if (pAVar2 != (AFFHKININGD_o *)0x0) {
    if ((pAVar2->fields).JDNKKGPNHPB == 0x14) {
      (__this->fields).KPNMLAECCEE = true;
    }
    else {
      FCJBEKHDLAF__EJPACOMGKAD(__this,method_00);
      pAVar2 = (__this->fields).FBFPLEFCDOK;
      (__this->fields).KPNMLAECCEE = true;
      if (pAVar2 == (AFFHKININGD_o *)0x0) goto LAB_034ec26c;
    }
    if ((pAVar2->fields).JDNKKGPNHPB == 0x14) {
      pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_034ec26c;
      if ((pKVar1->fields).super._MGGBEPKMPCF_k__BackingField == false) {
        pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_034ec26c;
                    /* try { // try from 034ec204 to 035ec20b has its CatchHandler @ 034ec468 */
        if ((pKVar1->fields)._CPLKKCAJOJJ_k__BackingField == false) {
          pKVar1 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
          if (pKVar1 == (KKLJIDJBFEI_o *)0x0) goto LAB_034ec26c;
                    /* try { // try from 034ec218 to 035ec21f has its CatchHandler @ 034ec464 */
          KKLJIDJBFEI__GIENGNEGHPJ(pKVar1,(MethodInfo *)0x0);
        }
      }
    }
    pAVar2 = (__this->fields).FBFPLEFCDOK;
    if (pAVar2 != (AFFHKININGD_o *)0x0) {
                    /* try { // try from 034ec234 to 035ec257 has its CatchHandler @ 034ec478 */
      (pAVar2->fields).GNBEPMLNKLA = (__this->fields).CLFDJLLDNGD;
      FCJBEKHDLAF__NCAHOIGBLJP(__this,FIJLCCEJANF,DIJDCNOLDOK,method);
      pSVar3 = (__this->fields).KKOLONOKNIO;
      if (pSVar3 != (System_Collections_Generic_List_KMJDCOABCCG__o *)0x0) {
        if ((0 < (pSVar3->fields)._size) || ((__this->fields).IMEHPHJJNJH != false)) {
          (__this->fields).CPIIMMMGPHN = true;
        }
                    /* try { // try from 034ec268 to 035ec2a7 has its CatchHandler @ 034ec484 */
        return;
      }
    }
  }
LAB_034ec26c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

