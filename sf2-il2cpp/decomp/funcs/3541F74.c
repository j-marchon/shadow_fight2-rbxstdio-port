// LKJJCAEOJBG$$FFHIHGCDGAK @ RVA 0x3541F74

Google_Protobuf_Reflection_MessageDescriptor_o * LKJJCAEOJBG__FFHIHGCDGAK(MethodInfo *method)

{
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  Google_Protobuf_Reflection_FileDescriptor_o *pGVar2;
  System_Collections_Generic_IList_MessageDescriptor__o *pSVar3;
  
  if ((DAT_04568afd & 1) == 0) {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IList<MessageDescriptor>_TypeInfo);
    DAT_04568afd = 1;
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565d86 == '\0') {
    FUN_01bab630(&HHBHIFIPCNJ_TypeInfo);
    DAT_04565d86 = '\x01';
  }
  if ((HHBHIFIPCNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pGVar2 = HHBHIFIPCNJ_TypeInfo->static_fields->GPNOKFJEHKO;
  if ((pGVar2 != (Google_Protobuf_Reflection_FileDescriptor_o *)0x0) &&
     (pSVar3 = (pGVar2->fields)._MessageTypes_k__BackingField,
     pSVar3 != (System_Collections_Generic_IList_MessageDescriptor__o *)0x0)) {
    pGVar1 = (Google_Protobuf_Reflection_MessageDescriptor_o *)FUN_03f936c0(pSVar3->klass);
    return pGVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

