// OJEHKJHEBID$$MergeFrom @ RVA 0x34B54A0

void OJEHKJHEBID__MergeFrom
               (OJEHKJHEBID_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  EEHFEPPDBHL_o **ppEVar1;
  OJEHKJHEBID_Fields *pOVar2;
  uint uVar3;
  int32_t iVar4;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar5;
  int64_t iVar6;
  EEHFEPPDBHL_o *pEVar7;
  MethodInfo_295E0C0 *method_00;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *__this_00;
  
                    /* try { // try from 035b54ac to 036b54af has its CatchHandler @ 035b54d0 */
                    /* try { // try from 035b54b0 to 036b54d7 has its CatchHandler @ 035b52d4 */
  if ((DAT_0456857f & 1) == 0) {
                    /* catch() { ... } // from try @ 035b54ac with catch @ 035b54d0 */
    FUN_01bab630(&EEHFEPPDBHL_TypeInfo);
                    /* try { // try from 035b54d8 to 036b54df has its CatchHandler @ 035b54f4 */
    FUN_01bab630(&OJEHKJHEBID_TypeInfo);
                    /* try { // try from 035b54e0 to 036b54eb has its CatchHandler @ 035b52d4 */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_AddEntriesFrom__);
                    /* try { // try from 035b54ec to 036b54f3 has its CatchHandler @ 035b54f4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b54d8 with catch @ 035b54f4
                       catch(type#2 @ 00000000) { ... } // from try @ 035b54ec with catch @ 035b54f4
                        */
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_AddEntriesFrom__);
    DAT_0456857f = 1;
  }
  if (AIGOBLJEBCA != (Google_Protobuf_CodedInputStream_o *)0x0) {
    uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (uVar3 != 0) {
      ppEVar1 = &(__this->fields).MMIHELOLFPP;
      pOVar2 = &__this->fields;
      do {
        if (uVar3 < 0x21) {
          if (uVar3 < 0x13) {
            if (uVar3 == 8) {
              iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
              (__this->fields).ADEIKPGDIPM = iVar6;
            }
            else if (uVar3 == 0x12) {
              CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString
                                      (AIGOBLJEBCA,(MethodInfo *)0x0);
              OJEHKJHEBID__HCOCAAIGNNL(__this,CJNHFNHJHPE,method);
            }
            else {
LAB_035b5630:
              method = (MethodInfo *)0x0;
              pGVar5 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                                 (pOVar2->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
              pOVar2->CKFPENBPNML = pGVar5;
              thunk_FUN_01c20e04(pOVar2,pGVar5);
            }
          }
          else if (uVar3 == 0x18) {
            iVar6 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).HAKDPKINDPN = iVar6;
          }
          else {
            if (uVar3 != 0x20) goto LAB_035b5630;
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).GPDALMOAKGG = iVar4;
          }
        }
        else if (uVar3 < 0x33) {
          if (uVar3 == 0x28) {
            iVar4 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
            (__this->fields).IBFEHEDKGAL = iVar4;
          }
          else {
            if (uVar3 != 0x32) goto LAB_035b5630;
            pEVar7 = *ppEVar1;
            if (pEVar7 == (EEHFEPPDBHL_o *)0x0) {
              pEVar7 = (EEHFEPPDBHL_o *)thunk_FUN_01bda818(EEHFEPPDBHL_TypeInfo);
              EEHFEPPDBHL___ctor(pEVar7,(MethodInfo *)0x0);
              *ppEVar1 = pEVar7;
              thunk_FUN_01c20e04(ppEVar1,pEVar7);
              pEVar7 = *ppEVar1;
            }
            method = (MethodInfo *)0x0;
            Google_Protobuf_CodedInputStream__ReadMessage
                      (AIGOBLJEBCA,(Google_Protobuf_IMessage_o *)pEVar7,(MethodInfo *)0x0);
          }
        }
        else {
          if (uVar3 == 0x3a) {
            __this_00 = (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)
                        (__this->fields).MABPCBMOECE;
            if ((OJEHKJHEBID_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)
            goto LAB_035b56ec;
            method = (MethodInfo *)OJEHKJHEBID_TypeInfo->static_fields->CCHHCINKGLK;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<MGDJPGGPDJI>_AddEntriesFrom__;
          }
          else {
            if (uVar3 != 0x42) goto LAB_035b5630;
            __this_00 = (__this->fields).MJIHCLLODMF;
            if ((OJEHKJHEBID_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564();
            }
            if (__this_00 == (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0)
            goto LAB_035b56ec;
            method = (MethodInfo *)OJEHKJHEBID_TypeInfo->static_fields->ENELKKDEGPJ;
            method_00 = 
            Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_AddEntriesFrom__;
          }
          Google_Protobuf_Collections_RepeatedField<object>__AddEntriesFrom
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,AIGOBLJEBCA,
                     (Google_Protobuf_FieldCodec_T__o *)method,method_00);
        }
        uVar3 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
      } while (uVar3 != 0);
    }
    return;
  }
LAB_035b56ec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

