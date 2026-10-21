// MGDJPGGPDJI$$MergeFrom @ RVA 0x34A47D4

void MGDJPGGPDJI__MergeFrom
               (MGDJPGGPDJI_o *__this,Google_Protobuf_CodedInputStream_o *AIGOBLJEBCA,
               MethodInfo *method)

{
  MGDJPGGPDJI_Fields *pMVar1;
  uint uVar2;
  int32_t iVar3;
  System_String_o *CJNHFNHJHPE;
  Google_Protobuf_UnknownFieldSet_o *pGVar4;
  int64_t iVar5;
  
  if (AIGOBLJEBCA == (Google_Protobuf_CodedInputStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
  if (uVar2 != 0) {
    pMVar1 = &__this->fields;
    do {
      if (uVar2 < 0x13) {
        if (uVar2 == 8) {
          iVar5 = Google_Protobuf_CodedInputStream__ReadInt64(AIGOBLJEBCA,(MethodInfo *)0x0);
          (__this->fields).ANAJGHJEEOC = iVar5;
        }
        else if (uVar2 == 0x12) {
          CJNHFNHJHPE = Google_Protobuf_CodedInputStream__ReadString(AIGOBLJEBCA,(MethodInfo *)0x0);
          MGDJPGGPDJI__OFDBFMLANAH(__this,CJNHFNHJHPE,method);
        }
        else {
LAB_035a4854:
          method = (MethodInfo *)0x0;
          pGVar4 = Google_Protobuf_UnknownFieldSet__MergeFieldFrom
                             (pMVar1->CKFPENBPNML,AIGOBLJEBCA,(MethodInfo *)0x0);
          pMVar1->CKFPENBPNML = pGVar4;
          thunk_FUN_01c20e04(pMVar1,pGVar4);
        }
      }
      else if (uVar2 == 0x18) {
        iVar3 = Google_Protobuf_CodedInputStream__ReadEnum(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).BDPMJNBHKIJ = iVar3;
      }
      else {
        if (uVar2 != 0x20) goto LAB_035a4854;
        iVar3 = Google_Protobuf_CodedInputStream__ReadInt32(AIGOBLJEBCA,(MethodInfo *)0x0);
        (__this->fields).NLLKMEMKBAF = iVar3;
      }
      uVar2 = Google_Protobuf_CodedInputStream__ReadTag(AIGOBLJEBCA,(MethodInfo *)0x0);
    } while (uVar2 != 0);
  }
  return;
}

