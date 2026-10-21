// ELBBEAGGAOH$$MergeFrom @ RVA 0x324AF48

void ELBBEAGGAOH__MergeFrom
               (ELBBEAGGAOH_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PGICCMFLDPI_o **ppPVar1;
  GLPEFEEGCPM_o **ppGVar2;
  EKCGNICFDEO_o **ppEVar3;
  EKCGNICFDEO_o **ppEVar4;
  KAMBBJFPLGM_o **ppKVar5;
  KAMBBJFPLGM_o **ppKVar6;
  ELBBEAGGAOH_Fields *pEVar7;
  uint uVar8;
  int32_t iVar9;
  PGICCMFLDPI_o *__this_00;
  EKCGNICFDEO_o *pEVar10;
  Google_Protobuf_UnknownFieldSet_o *pGVar11;
  GLPEFEEGCPM_o *__this_01;
  Google_Protobuf_ByteString_o *CJNHFNHJHPE;
  KAMBBJFPLGM_o *pKVar12;
  Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *__this_02;
  
                    /* try { // try from 0334af5c to 0344af63 has its CatchHandler @ 0334b0ec */
  if ((DAT_045670f2 & 1) == 0) {
                    /* try { // try from 0334af78 to 0344af7f has its CatchHandler @ 0334b0e8 */
    FUN_01bab630(&EKCGNICFDEO_TypeInfo);
                    /* try { // try from 0334af80 to 0344b0db has its CatchHandler @ 0334ab78 */
    FUN_01bab630(&ELBBEAGGAOH_TypeInfo);
    FUN_01bab630(&GLPEFEEGCPM_TypeInfo);
    FUN_01bab630(&KAMBBJFPLGM_TypeInfo);
    FUN_01bab630(&PGICCMFLDPI_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_AddEntriesFrom__);
    DAT_045670f2 = 1;
  }
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
LAB_0334b290:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar8 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar8 != 0) {
    ppPVar1 = &(__this->fields).MIINPPOCPCN;
    ppGVar2 = &(__this->fields).KEIBPDJHHBB;
    ppEVar3 = &(__this->fields).FFDNNGLMPJJ;
    ppEVar4 = &(__this->fields).DNKENJFJOMD;
    ppKVar5 = &(__this->fields).IFDHENIKFKC;
    ppKVar6 = &(__this->fields).CBHDCHDBFGB;
    pEVar7 = &__this->fields;
    do {
      if (uVar8 < 0x23) {
        if (uVar8 < 0x13) {
          if (uVar8 == 10) {
            pKVar12 = *ppKVar6;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              pKVar12 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
              KAMBBJFPLGM___ctor(pKVar12,(MethodInfo *)0x0);
              *ppKVar6 = pKVar12;
              thunk_FUN_01c20e04(ppKVar6,pKVar12);
              pKVar12 = *ppKVar6;
            }
          }
          else {
            if (uVar8 != 0x12) {
LAB_0334b150:
                    /* try { // try from 0334b154 to 0344b15b has its CatchHandler @ 0334b15c */
              method = (MethodInfo *)0x0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0334b140 with catch @ 0334b15c
                       catch(type#2 @ 00000000) { ... } // from try @ 0334b154 with catch @ 0334b15c
                        */
              pGVar11 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                  (pEVar7->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pEVar7->CKFPENBPNML = pGVar11;
              thunk_FUN_01c20e04(pEVar7,pGVar11);
              goto LAB_0334b230;
            }
            pKVar12 = *ppKVar5;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              pKVar12 = (KAMBBJFPLGM_o *)thunk_FUN_01bda818(KAMBBJFPLGM_TypeInfo);
              KAMBBJFPLGM___ctor(pKVar12,(MethodInfo *)0x0);
              *ppKVar5 = pKVar12;
              thunk_FUN_01c20e04(ppKVar5,pKVar12);
              pKVar12 = *ppKVar5;
            }
          }
        }
        else if (uVar8 == 0x1a) {
          pKVar12 = (KAMBBJFPLGM_o *)*ppEVar4;
          if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
            pEVar10 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
            EKCGNICFDEO___ctor(pEVar10,(MethodInfo *)0x0);
            *ppEVar4 = pEVar10;
            thunk_FUN_01c20e04(ppEVar4,pEVar10);
            pKVar12 = (KAMBBJFPLGM_o *)*ppEVar4;
          }
        }
        else {
          if (uVar8 != 0x22) goto LAB_0334b150;
          pKVar12 = (KAMBBJFPLGM_o *)*ppEVar3;
          if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
            pEVar10 = (EKCGNICFDEO_o *)thunk_FUN_01bda818(EKCGNICFDEO_TypeInfo);
                    /* try { // try from 0334b0dc to 0344b0df has its CatchHandler @ 0334b0e4 */
            EKCGNICFDEO___ctor(pEVar10,(MethodInfo *)0x0);
                    /* try { // try from 0334b0e0 to 0344b103 has its CatchHandler @ 0334ab78 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334b0dc with catch @ 0334b0e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334af78 with catch @ 0334b0e8
                        */
            *ppEVar3 = pEVar10;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334af5c with catch @ 0334b0ec
                        */
            thunk_FUN_01c20e04(ppEVar3,pEVar10);
            pKVar12 = (KAMBBJFPLGM_o *)*ppEVar3;
          }
        }
LAB_0334b224:
        method = (MethodInfo *)0x0;
        Google_Protobuf_CodedInputStream__ReadMessage
                  (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pKVar12,(MethodInfo *)0x0);
      }
      else {
        if (uVar8 < 0x33) {
          if (uVar8 == 0x2a) {
            pKVar12 = (KAMBBJFPLGM_o *)*ppGVar2;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              __this_01 = (GLPEFEEGCPM_o *)thunk_FUN_01bda818(GLPEFEEGCPM_TypeInfo);
              GLPEFEEGCPM___ctor(__this_01,(MethodInfo *)0x0);
              *ppGVar2 = __this_01;
              thunk_FUN_01c20e04(ppGVar2,__this_01);
              pKVar12 = (KAMBBJFPLGM_o *)*ppGVar2;
            }
          }
          else {
            if (uVar8 != 0x32) goto LAB_0334b150;
            pKVar12 = (KAMBBJFPLGM_o *)*ppPVar1;
            if (pKVar12 == (KAMBBJFPLGM_o *)0x0) {
              __this_00 = (PGICCMFLDPI_o *)thunk_FUN_01bda818(PGICCMFLDPI_TypeInfo);
              PGICCMFLDPI___ctor(__this_00,(MethodInfo *)0x0);
              *ppPVar1 = __this_00;
              thunk_FUN_01c20e04(ppPVar1,__this_00);
              pKVar12 = (KAMBBJFPLGM_o *)*ppPVar1;
            }
          }
          goto LAB_0334b224;
        }
        if (uVar8 == 0x3a) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadBytes(AIGOBLJEBCA,(MethodInfo *)0x0);
          ELBBEAGGAOH__AKKHFOGFIMC(__this,CJNHFNHJHPE,method);
        }
        else {
                    /* try { // try from 0334b104 to 0344b107 has its CatchHandler @ 0334b130 */
          if (uVar8 == 0x40) {
            iVar9 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).EMNNAEAIMNH = iVar9;
          }
          else {
                    /* try { // try from 0334b108 to 0344b13f has its CatchHandler @ 0334ab78 */
            if (uVar8 != 0x4a) goto LAB_0334b150;
            __this_02 = (__this->fields).OOPOHLJPBHE;
            if ((ELBBEAGGAOH_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_02 == (Google_Protobuf_Collections_RepeatedField_KMAOIKKMFJF__o *)0x0)
            goto LAB_0334b290;
                    /* catch() { ... } // from try @ 0334b104 with catch @ 0334b130 */
            method = (MethodInfo *)ELBBEAGGAOH_TypeInfo->static_fields->AJFGPDHFEMK;
                    /* try { // try from 0334b140 to 0344b147 has its CatchHandler @ 0334b15c */
                    /* try { // try from 0334b148 to 0344b153 has its CatchHandler @ 0334ab78 */
            Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,AIGOBLJEBCA,
                       (Google_Protobuf_FieldCodec_T__o *)method,
                       Method_Google_Protobuf_Collections_RepeatedField<KMAOIKKMFJF>_AddEntriesFrom__
                      );
          }
        }
      }
LAB_0334b230:
      uVar8 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar8 != 0);
  }
  return;
}

