// AADKBCFCLKK$$MergeFrom @ RVA 0x34394EC

void AADKBCFCLKK__MergeFrom
               (AADKBCFCLKK_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  PGICCMFLDPI_o **ppPVar2;
  KDADMJGPAOM_o **ppKVar3;
  AADKBCFCLKK_Fields *pAVar4;
  bool bVar5;
  uint uVar6;
  PGICCMFLDPI_o *pPVar7;
  Google_Protobuf_UnknownFieldSet_o *pGVar8;
  int64_t iVar9;
  KDADMJGPAOM_o *pKVar10;
  Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *__this_00;
  
                    /* try { // try from 035394ec to 036394fb has its CatchHandler @ 035396a8 */
  if ((DAT_045681b8 & 1) == 0) {
                    /* try { // try from 03539518 to 0363952f has its CatchHandler @ 03539680 */
    FUN_01bab630(&AADKBCFCLKK_TypeInfo);
    FUN_01bab630(&KDADMJGPAOM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_AddEntriesFrom__);
    DAT_045681b8 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0353974c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 03539558 to 03639567 has its CatchHandler @ 03539688 */
  uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar6 != 0) {
                    /* try { // try from 03539578 to 0363957f has its CatchHandler @ 03539674 */
    ppPVar1 = &(__this->fields).FAEDHKAJJNK;
    ppPVar2 = &(__this->fields).LBKLNIPHGMM;
    ppKVar3 = &(__this->fields).LHFLMBNKPHF;
                    /* try { // try from 03539590 to 036395ef has its CatchHandler @ 035396bc */
    pAVar4 = &__this->fields;
    do {
      if (uVar6 < 0x1b) {
        if (uVar6 == 8) {
                    /* catch() { ... } // from try @ 03539518 with catch @ 03539680 */
                    /* catch() { ... } // from try @ 035394ac with catch @ 03539684 */
                    /* catch() { ... } // from try @ 03539558 with catch @ 03539688 */
          iVar9 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03539650 with catch @ 0353968c */
          (__this->fields).AMKHEHFFAKJ = iVar9;
                    /* catch() { ... } // from try @ 0353964c with catch @ 03539690 */
        }
        else {
          if (uVar6 == 0x12) {
                    /* catch() { ... } // from try @ 03539648 with catch @ 03539694 */
            pKVar10 = *ppKVar3;
                    /* catch() { ... } // from try @ 03539644 with catch @ 03539698 */
            if (pKVar10 == (KDADMJGPAOM_o *)0x0) {
                    /* catch() { ... } // from try @ 0353963c with catch @ 0353969c */
                    /* catch() { ... } // from try @ 03539638 with catch @ 035396a0 */
              pKVar10 = (KDADMJGPAOM_o *)thunk_FUN_01bda818(KDADMJGPAOM_TypeInfo);
                    /* catch() { ... } // from try @ 03539634 with catch @ 035396a4 */
                    /* catch() { ... } // from try @ 035394ec with catch @ 035396a8 */
                    /* catch() { ... } // from try @ 03539630 with catch @ 035396ac */
              KDADMJGPAOM___ctor(pKVar10,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0353962c with catch @ 035396b0
                       catch() { ... } // from try @ 03539640 with catch @ 035396b0
                       catch() { ... } // from try @ 0353965c with catch @ 035396b0 */
                    /* catch() { ... } // from try @ 03539470 with catch @ 035396b4 */
                    /* catch() { ... } // from try @ 03539450 with catch @ 035396b8 */
              *ppKVar3 = pKVar10;
                    /* catch() { ... } // from try @ 03539590 with catch @ 035396bc */
              thunk_FUN_01c20e04(ppKVar3,pKVar10);
              pKVar10 = *ppKVar3;
            }
          }
          else {
            if (uVar6 != 0x1a) goto LAB_0353965c;
            pKVar10 = (KDADMJGPAOM_o *)*ppPVar2;
            if (pKVar10 == (KDADMJGPAOM_o *)0x0) {
              pPVar7 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(pPVar7,(MethodInfo *)0x0);
              *ppPVar2 = pPVar7;
              thunk_FUN_01c20e04(ppPVar2,pPVar7);
              pKVar10 = (KDADMJGPAOM_o *)*ppPVar2;
            }
          }
LAB_035396c4:
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar10,(MethodInfo *)0x0);
        }
      }
      else if (uVar6 < 0x29) {
                    /* try { // try from 035395f0 to 0363962b has its CatchHandler @ 035392d8 */
        if (uVar6 == 0x20) {
          iVar9 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IKNCNGMNPPK = iVar9;
        }
        else if (uVar6 == 0x28) {
          bVar5 = Google_Protobuf_CodedInputStream__ReadBool(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).IOLELGMBJFL = bVar5;
        }
        else {
LAB_0353965c:
                    /* try { // try from 0353965c to 03639667 has its CatchHandler @ 035396b0 */
                    /* try { // try from 03539668 to 036396d3 has its CatchHandler @ 035392d8 */
          pGVar8 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pAVar4->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pAVar4->CKFPENBPNML = pGVar8;
                    /* catch() { ... } // from try @ 03539578 with catch @ 03539674 */
                    /* catch() { ... } // from try @ 03539658 with catch @ 03539678 */
          thunk_FUN_01c20e04(pAVar4,pGVar8);
                    /* catch() { ... } // from try @ 03539654 with catch @ 0353967c */
        }
      }
      else {
        if (uVar6 != 0x32) {
          if (uVar6 != 0x3a) goto LAB_0353965c;
          pKVar10 = (KDADMJGPAOM_o *)*ppPVar1;
                    /* try { // try from 0353962c to 0363962f has its CatchHandler @ 035396b0 */
          if (pKVar10 == (KDADMJGPAOM_o *)0x0) {
                    /* try { // try from 03539630 to 03639633 has its CatchHandler @ 035396ac */
                    /* try { // try from 03539634 to 03639637 has its CatchHandler @ 035396a4 */
            pPVar7 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
                    /* try { // try from 03539638 to 0363963b has its CatchHandler @ 035396a0 */
                    /* try { // try from 0353963c to 0363963f has its CatchHandler @ 0353969c */
                    /* try { // try from 03539640 to 03639643 has its CatchHandler @ 035396b0 */
            PGICCMFLDPI___ctor(pPVar7,(MethodInfo *)0x0);
                    /* try { // try from 03539644 to 03639647 has its CatchHandler @ 03539698 */
                    /* try { // try from 03539648 to 0363964b has its CatchHandler @ 03539694 */
                    /* try { // try from 0353964c to 0363964f has its CatchHandler @ 03539690 */
            *ppPVar1 = pPVar7;
                    /* try { // try from 03539650 to 03639653 has its CatchHandler @ 0353968c */
            thunk_FUN_01c20e04(ppPVar1,pPVar7);
                    /* try { // try from 03539654 to 03639657 has its CatchHandler @ 0353967c */
            pKVar10 = (KDADMJGPAOM_o *)*ppPVar1;
                    /* try { // try from 03539658 to 0363965b has its CatchHandler @ 03539678 */
          }
          goto LAB_035396c4;
        }
        __this_00 = (__this->fields).MPAIPMANDEO;
                    /* catch() { ... } // from try @ 035396d4 with catch @ 03539700 */
        if ((AADKBCFCLKK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NODLJPNGNBG__o *)0x0)
        goto LAB_0353974c;
                    /* try { // try from 03539710 to 03639717 has its CatchHandler @ 0353972c */
                    /* try { // try from 03539718 to 03639723 has its CatchHandler @ 035392d8 */
                    /* try { // try from 03539724 to 0363972b has its CatchHandler @ 0353972c */
        Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                  ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                   (Google_Protobuf_FieldCodec_T__o *)
                   AADKBCFCLKK_TypeInfo->static_fields->CHLJPKPACJB,
                   Method_Google_Protobuf_Collections_RepeatedField<NODLJPNGNBG>_AddEntriesFrom__);
                    /* catch() { ... } // from try @ 03539710 with catch @ 0353972c
                       catch() { ... } // from try @ 03539724 with catch @ 0353972c */
      }
                    /* try { // try from 035396d4 to 036396d7 has its CatchHandler @ 03539700 */
                    /* try { // try from 035396d8 to 0363970f has its CatchHandler @ 035392d8 */
      uVar6 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar6 != 0);
  }
  return;
}

