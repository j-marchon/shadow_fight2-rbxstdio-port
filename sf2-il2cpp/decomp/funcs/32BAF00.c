// NFFDIPBFJHP$$FPGJHEJJCNH @ RVA 0x32BAF00

KGBIBHEFBHA_o *
NFFDIPBFJHP__FPGJHEJJCNH
          (NFFDIPBFJHP_o *__this,GLPEFEEGCPM_o *BFFBKNCLLML,int64_t FKIGDGJPIAC,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *__this_00;
  KGBIBHEFBHA_o *pKVar1;
  int index;
  
  if ((DAT_0456748c & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
    DAT_0456748c = 1;
  }
  if (BFFBKNCLLML == (GLPEFEEGCPM_o *)0x0) {
    return (KGBIBHEFBHA_o *)0x0;
  }
  __this_00 = (BFFBKNCLLML->fields).MPAIPMANDEO;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields).count <= index) {
        return (KGBIBHEFBHA_o *)0x0;
      }
      pKVar1 = (KGBIBHEFBHA_o *)
               Google_Protobuf_Collections_RepeatedField<object>__get_Item
                         ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                          Method_Google_Protobuf_Collections_RepeatedField<KGBIBHEFBHA>_get_Item__);
      if (pKVar1 == (KGBIBHEFBHA_o *)0x0) break;
      if ((pKVar1->fields).ANAJGHJEEOC == FKIGDGJPIAC) {
        return pKVar1;
      }
      __this_00 = (BFFBKNCLLML->fields).MPAIPMANDEO;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_KGBIBHEFBHA__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

