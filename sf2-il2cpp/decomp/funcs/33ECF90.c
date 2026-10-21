// FCJBEKHDLAF$$NCAHOIGBLJP @ RVA 0x33ECF90

void FCJBEKHDLAF__NCAHOIGBLJP
               (FCJBEKHDLAF_o *__this,PJKHAJKEHEL_o *FIJLCCEJANF,PJKHAJKEHEL_o *DIJDCNOLDOK,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool INMJNAJNOAE;
  OOMHDDBCBJP_o *pOVar4;
  long lVar5;
  OJHODFIGFMA_o *pOVar6;
  MethodInfo *method_00;
  AFFHKININGD_o *pAVar7;
  JIMKCICMMIL_o *pJVar8;
  
  if ((DAT_04567ee2 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<AFFHKININGD>_get_Count__);
    DAT_04567ee2 = 1;
  }
  pAVar7 = (__this->fields).FBFPLEFCDOK;
  if ((pAVar7 == (AFFHKININGD_o *)0x0) ||
     (pOVar4 = (pAVar7->fields).IFJLLGPGMHM, pOVar4 == (OOMHDDBCBJP_o *)0x0)) goto LAB_034ed180;
  iVar1 = (pAVar7->fields).JDNKKGPNHPB;
  lVar5 = (*(pOVar4->klass->vtable)._10_DHBIECBOKMB.methodPtr)
                    (pOVar4,(pOVar4->klass->vtable)._10_DHBIECBOKMB.method);
  if ((lVar5 == 0) ||
     ((pAVar7 = (__this->fields).FBFPLEFCDOK, pAVar7 == (AFFHKININGD_o *)0x0 ||
      (FIJLCCEJANF == (PJKHAJKEHEL_o *)0x0)))) goto LAB_034ed180;
  iVar2 = *(int *)(lVar5 + 0x18);
  iVar3 = (pAVar7->fields).HLFBMBHOPMI;
  method_00 = (MethodInfo *)0x0;
  INMJNAJNOAE = CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_o)
                           (FIJLCCEJANF->fields).HJPOJOPKEKI.fields,(MethodInfo *)0x0);
  if (INMJNAJNOAE) {
    iVar2 = iVar2 + -1;
    switch(iVar1) {
    case 1:
      if (iVar3 == iVar2) {
        pOVar6 = (__this->fields).OONKKFFEMAK;
        if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
        OJHODFIGFMA__IJBKOILCCAB(pOVar6,(MethodInfo *)0x0);
      }
      break;
    case 2:
    case 10:
switchD_034ed038_caseD_2:
      pOVar6 = (__this->fields).OONKKFFEMAK;
      if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
      if (iVar3 == iVar2) {
        OJHODFIGFMA__LKNPMNKGELE(pOVar6,(MethodInfo *)0x0);
        if ((__this->fields).HMFDJCBMCCL != false) {
          pOVar6 = (__this->fields).OONKKFFEMAK;
          if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
          OJHODFIGFMA__HALLPDDFCNN(pOVar6,(MethodInfo *)0x0);
        }
      }
      else {
        OJHODFIGFMA__KNPPNBKCCNN(pOVar6,(MethodInfo *)0x0);
      }
      break;
    case 3:
switchD_034ed038_caseD_3:
      if (iVar3 == iVar2) {
        pOVar6 = (__this->fields).OONKKFFEMAK;
        if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
        OJHODFIGFMA__DFNEPDGBAEF(pOVar6,(MethodInfo *)0x0);
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      break;
    default:
                    /* try { // try from 034ed070 to 035ed0fb has its CatchHandler @ 034ed070
                       catch() { ... } // from try @ 034ed070 with catch @ 034ed070
                       catch() { ... } // from try @ 034ed118 with catch @ 034ed070
                       catch() { ... } // from try @ 034ed13c with catch @ 034ed070
                       catch() { ... } // from try @ 034ed164 with catch @ 034ed070
                       catch() { ... } // from try @ 034ed1a4 with catch @ 034ed070 */
      if (iVar1 == 0x11) goto switchD_034ed038_caseD_3;
      if (iVar1 == 0x15) goto switchD_034ed038_caseD_2;
    }
    pAVar7 = (__this->fields).FBFPLEFCDOK;
    if ((pAVar7 == (AFFHKININGD_o *)0x0) ||
       (pOVar6 = (__this->fields).OONKKFFEMAK, pOVar6 == (OJHODFIGFMA_o *)0x0)) goto LAB_034ed180;
    OJHODFIGFMA__PDIKBIJADEO(pOVar6,(pAVar7->fields).KOILJHHCIEE,(MethodInfo *)0x0);
    pAVar7 = (__this->fields).FBFPLEFCDOK;
                    /* try { // try from 034ed0fc to 035ed103 has its CatchHandler @ 034ed148 */
    if ((pAVar7 == (AFFHKININGD_o *)0x0) ||
       (pOVar6 = (__this->fields).OONKKFFEMAK, pOVar6 == (OJHODFIGFMA_o *)0x0)) goto LAB_034ed180;
    method_00 = (MethodInfo *)0x0;
    OJHODFIGFMA__PMEFGAPFDED(pOVar6,(pAVar7->fields).KOILJHHCIEE,(MethodInfo *)0x0);
    pOVar6 = (__this->fields).OONKKFFEMAK;
                    /* try { // try from 034ed110 to 035ed117 has its CatchHandler @ 034ed144 */
    if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
                    /* try { // try from 034ed118 to 035ed137 has its CatchHandler @ 034ed070 */
    OJHODFIGFMA__OFKEKNEDIMJ(pOVar6,(MethodInfo *)0x0);
  }
  else {
    pOVar6 = (__this->fields).OONKKFFEMAK;
    if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
    OJHODFIGFMA__ABPCHMAAIOJ(pOVar6,(MethodInfo *)0x0);
  }
  FCJBEKHDLAF__JLKMCCAEFPC(__this,INMJNAJNOAE,method_00);
  if ((iVar1 == 0x14) || (iVar1 == 5)) {
                    /* try { // try from 034ed138 to 035ed13b has its CatchHandler @ 034ed140 */
    pOVar6 = (__this->fields).OONKKFFEMAK;
                    /* try { // try from 034ed13c to 035ed15f has its CatchHandler @ 034ed070 */
    if (pOVar6 == (OJHODFIGFMA_o *)0x0) goto LAB_034ed180;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ed138 with catch @ 034ed140
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ed110 with catch @ 034ed144
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034ed0fc with catch @ 034ed148
                        */
    OJHODFIGFMA__BJBHFDDPMPB
              (pOVar6,(__this->fields).CLFDJLLDNGD + (uint)INMJNAJNOAE,(MethodInfo *)0x0);
  }
  pJVar8 = (__this->fields).ODIAFMNGOLA;
                    /* try { // try from 034ed160 to 035ed163 has its CatchHandler @ 034ed18c */
  if ((pJVar8 != (JIMKCICMMIL_o *)0x0) &&
     (pOVar6 = (__this->fields).OONKKFFEMAK, pOVar6 != (OJHODFIGFMA_o *)0x0)) {
                    /* try { // try from 034ed164 to 035ed19b has its CatchHandler @ 034ed070 */
    OJHODFIGFMA__FHEDJOBDEPF(pOVar6,(pJVar8->fields).JLGJOLIMJKB,false,(MethodInfo *)0x0);
    return;
  }
LAB_034ed180:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

