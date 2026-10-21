// OMFJHNMDIBF$$MergeFrom @ RVA 0x343F670

void OMFJHNMDIBF__MergeFrom
               (OMFJHNMDIBF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  PIADCKMDDAK_o **ppPVar1;
  PIADCKMDDAK_o **ppPVar2;
  OMFJHNMDIBF_Fields *pOVar3;
  uint uVar4;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  Google_Protobuf_FieldCodec_Nullable_int___o *pGVar6;
  System_Nullable_int__Fields SVar7;
  PIADCKMDDAK_o *pPVar8;
  
  if ((DAT_0456820c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<int>>_Read__);
    FUN_01bab630(&Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<int>_get_HasValue__);
                    /* try { // try from 0353f6c4 to 0363f767 has its CatchHandler @ 0353f6c4
                       catch() { ... } // from try @ 0353f6c4 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f7c4 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f800 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f838 with catch @ 0353f6c4
                       catch() { ... } // from try @ 0353f870 with catch @ 0353f6c4 */
    FUN_01bab630(&OMFJHNMDIBF_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    DAT_0456820c = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar4 != 0) {
      ppPVar1 = &(__this->fields).IEDLACLJJOK;
      ppPVar2 = &(__this->fields).JMACIOLHEOF;
      pOVar3 = &__this->fields;
      do {
        if (uVar4 < 0x13) {
          if (uVar4 == 10) {
            if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
                    /* try { // try from 0353f7f4 to 0363f7f7 has its CatchHandler @ 0353f814 */
                    /* try { // try from 0353f7f8 to 0363f7fb has its CatchHandler @ 0353f80c */
            pGVar6 = OMFJHNMDIBF_TypeInfo->static_fields->BBDGIEPPGAM;
                    /* try { // try from 0353f7fc to 0363f7ff has its CatchHandler @ 0353f808 */
            if (pGVar6 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353f890;
                    /* try { // try from 0353f800 to 0363f833 has its CatchHandler @ 0353f6c4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7b8 with catch @ 0353f804
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7fc with catch @ 0353f808
                        */
            SVar7 = (System_Nullable_int__Fields)
                    Google_Protobuf_FieldCodec<Nullable<int>>__Read
                              (pGVar6,AIGOBLJEBCA,
                               Method_Google_Protobuf_FieldCodec<Nullable<int>>_Read__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7f8 with catch @ 0353f80c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7a8 with catch @ 0353f810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f7f4 with catch @ 0353f814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f77c with catch @ 0353f818
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353f768 with catch @ 0353f81c
                        */
            if ((((__this->fields).EMOLIBOCKJK.fields.hasValue == false) ||
                ((ulong)SVar7 >> 0x20 != 0)) || (((ulong)SVar7 & 0xff) == 0)) {
              (__this->fields).EMOLIBOCKJK.fields = SVar7;
            }
          }
          else {
            if (uVar4 == 0x12) {
              pPVar8 = *ppPVar2;
              if (pPVar8 == (PIADCKMDDAK_o *)0x0) {
                pPVar8 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
                PIADCKMDDAK___ctor(pPVar8,(MethodInfo *)0x0);
                *ppPVar2 = pPVar8;
                thunk_FUN_01c20e04(ppPVar2,pPVar8);
                pPVar8 = *ppPVar2;
              }
              goto LAB_0353f85c;
            }
LAB_0353f7bc:
                    /* try { // try from 0353f7c4 to 0363f7f3 has its CatchHandler @ 0353f6c4 */
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pOVar3->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pOVar3->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pOVar3,pGVar5);
          }
        }
        else if (uVar4 == 0x1a) {
          pPVar8 = *ppPVar1;
          if (pPVar8 == (PIADCKMDDAK_o *)0x0) {
                    /* try { // try from 0353f834 to 0363f837 has its CatchHandler @ 0353f860 */
                    /* try { // try from 0353f838 to 0363f867 has its CatchHandler @ 0353f6c4 */
            pPVar8 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
            PIADCKMDDAK___ctor(pPVar8,(MethodInfo *)0x0);
            *ppPVar1 = pPVar8;
            thunk_FUN_01c20e04(ppPVar1,pPVar8);
            pPVar8 = *ppPVar1;
          }
LAB_0353f85c:
                    /* catch() { ... } // from try @ 0353f834 with catch @ 0353f860 */
          Google_Protobuf_CodedInputStream__ReadMessage
                    (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pPVar8,(MethodInfo *)0x0);
        }
        else {
                    /* try { // try from 0353f768 to 0363f76f has its CatchHandler @ 0353f81c */
          if (uVar4 != 0x22) goto LAB_0353f7bc;
          if ((OMFJHNMDIBF_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 0353f77c to 0363f787 has its CatchHandler @ 0353f818 */
            thunk_FUN_01ba7564();
          }
          pGVar6 = OMFJHNMDIBF_TypeInfo->static_fields->DBPADDIIBMJ;
          if (pGVar6 == (Google_Protobuf_FieldCodec_Nullable_int___o *)0x0) goto LAB_0353f890;
          SVar7 = (System_Nullable_int__Fields)
                  Google_Protobuf_FieldCodec<Nullable<int>>__Read
                            (pGVar6,AIGOBLJEBCA,
                             Method_Google_Protobuf_FieldCodec<Nullable<int>>_Read__);
                    /* try { // try from 0353f7a8 to 0363f7b3 has its CatchHandler @ 0353f810 */
          if ((((__this->fields).NLLKMEMKBAF.fields.hasValue == false) ||
              ((ulong)SVar7 >> 0x20 != 0)) || (((ulong)SVar7 & 0xff) == 0)) {
            (__this->fields).NLLKMEMKBAF.fields = SVar7;
                    /* try { // try from 0353f7b8 to 0363f7c3 has its CatchHandler @ 0353f804 */
          }
        }
                    /* try { // try from 0353f868 to 0363f86f has its CatchHandler @ 0353f884 */
                    /* try { // try from 0353f870 to 0363f87b has its CatchHandler @ 0353f6c4 */
        uVar4 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar4 != 0);
    }
                    /* try { // try from 0353f87c to 0363f883 has its CatchHandler @ 0353f884 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353f868 with catch @ 0353f884
                       catch(type#2 @ 00000000) { ... } // from try @ 0353f87c with catch @ 0353f884
                        */
    return;
  }
LAB_0353f890:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

