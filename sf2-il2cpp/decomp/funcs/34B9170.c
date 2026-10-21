// GKLPDMLELJF$$MergeFrom @ RVA 0x34B9170

void GKLPDMLELJF__MergeFrom
               (GKLPDMLELJF_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  GKLPDMLELJF_Fields *pGVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  Google_Protobuf_FieldCodec_Nullable_long___o *__this_00;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  System_Nullable_long__Fields SVar7;
  
                    /* try { // try from 035b9170 to 036b9173 has its CatchHandler @ 035b917c */
                    /* try { // try from 035b9174 to 036b91d3 has its CatchHandler @ 035b8a84 */
                    /* catch() { ... } // from try @ 035b9170 with catch @ 035b917c */
                    /* catch() { ... } // from try @ 035b8de8 with catch @ 035b9180 */
                    /* catch() { ... } // from try @ 035b8df8 with catch @ 035b9184 */
                    /* catch() { ... } // from try @ 035b9168 with catch @ 035b9188 */
                    /* catch() { ... } // from try @ 035b8e00 with catch @ 035b918c */
  if ((DAT_045685ab & 1) == 0) {
                    /* catch() { ... } // from try @ 035b9164 with catch @ 035b9190 */
                    /* catch() { ... } // from try @ 035b8dd0 with catch @ 035b9194 */
                    /* catch() { ... } // from try @ 035b8da8 with catch @ 035b9198 */
    FUN_01bab630(&Method_Google_Protobuf_FieldCodec<Nullable<long>>_Read__);
                    /* catch() { ... } // from try @ 035b915c with catch @ 035b919c */
                    /* catch() { ... } // from try @ 035b8e54 with catch @ 035b91a0 */
                    /* catch() { ... } // from try @ 035b9158 with catch @ 035b91a4 */
    FUN_01bab630(&GKLPDMLELJF_TypeInfo);
                    /* catch() { ... } // from try @ 035b8db8 with catch @ 035b91a8 */
                    /* catch() { ... } // from try @ 035b8dc0 with catch @ 035b91ac */
                    /* catch() { ... } // from try @ 035b8d3c with catch @ 035b91b0 */
    FUN_01bab630(&Method_System_Nullable<long>_GetValueOrDefault__);
                    /* catch() { ... } // from try @ 035b8ce0 with catch @ 035b91b4 */
                    /* catch() { ... } // from try @ 035b914c with catch @ 035b91b8 */
                    /* catch() { ... } // from try @ 035b9154 with catch @ 035b91bc
                       catch() { ... } // from try @ 035b9160 with catch @ 035b91bc */
    FUN_01bab630(&Method_System_Nullable<long>_get_HasValue__);
    DAT_045685ab = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* try { // try from 035b91d4 to 036b91d7 has its CatchHandler @ 035b91ec */
    uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 035b91d4 with catch @ 035b91ec */
      pGVar1 = &__this->fields;
      do {
        if (uVar2 < 0x1b) {
                    /* try { // try from 035b91fc to 036b926b has its CatchHandler @ 035b9280 */
          if (uVar2 == 8) {
            iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).ANAJGHJEEOC = iVar6;
          }
          else if (uVar2 == 0x12) {
            pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
            GKLPDMLELJF__GCAEKDKFFKK(__this,pSVar4,method);
          }
          else if (uVar2 == 0x1a) {
            pSVar4 = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
            GKLPDMLELJF__OFDBFMLANAH(__this,pSVar4,method);
          }
          else {
LAB_035b928c:
            method = (MethodInfo *)0x0;
            pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                               (pGVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
            pGVar1->CKFPENBPNML = pGVar5;
            thunk_FUN_01c20e04(pGVar1,pGVar5);
          }
        }
        else if (uVar2 == 0x20) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PEBHLKLGDBM = iVar3;
        }
        else if (uVar2 == 0x28) {
          iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).PFJPLCAIGJH = iVar3;
        }
        else {
          if (uVar2 != 0x32) goto LAB_035b928c;
          if ((GKLPDMLELJF_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          __this_00 = GKLPDMLELJF_TypeInfo->static_fields->OBHAFPFOAHP;
          if (__this_00 == (Google_Protobuf_FieldCodec_Nullable_long___o *)0x0) goto LAB_035b9324;
          method = Method_Google_Protobuf_FieldCodec<Nullable<long>>_Read__;
                    /* try { // try from 035b926c to 036b9277 has its CatchHandler @ 035b8a84 */
          SVar7 = (System_Nullable_long__Fields)
                  Google_Protobuf_FieldCodec<Nullable<long>>__Read
                            (__this_00,AIGOBLJEBCA,
                             (MethodInfo_2507A64 *)
                             Method_Google_Protobuf_FieldCodec<Nullable<long>>_Read__);
                    /* try { // try from 035b9278 to 036b927f has its CatchHandler @ 035b9280 */
                    /* catch() { ... } // from try @ 035b91fc with catch @ 035b9280
                       catch() { ... } // from try @ 035b9278 with catch @ 035b9280 */
          if ((((__this->fields).ADEIKPGDIPM.fields.hasValue == false) || (SVar7.value != 0)) ||
             ((SVar7._0_8_ & 0xff) == 0)) {
            (__this->fields).ADEIKPGDIPM.fields = SVar7;
          }
        }
        uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar2 != 0);
    }
    return;
  }
LAB_035b9324:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

