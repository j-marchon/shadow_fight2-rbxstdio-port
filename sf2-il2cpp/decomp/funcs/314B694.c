// FDHCLNDLIDG$$pb::Google.Protobuf.IMessage.get_Descriptor @ RVA 0x314B694

Google_Protobuf_Reflection_MessageDescriptor_o *
FDHCLNDLIDG__pb__Google_Protobuf_IMessage_get_Descriptor(FDHCLNDLIDG_o *__this,MethodInfo *method)

{
  FDHCLNDLIDG_c *method_00;
  Google_Protobuf_Reflection_MessageDescriptor_o *pGVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_045667bc & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    DAT_045667bc = 1;
    method = extraout_x1;
  }
  method_00 = FDHCLNDLIDG_TypeInfo;
  if ((FDHCLNDLIDG_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (FDHCLNDLIDG_c *)thunk_FUN_01ba7564(FDHCLNDLIDG_TypeInfo,method);
  }
  pGVar1 = FDHCLNDLIDG__FFHIHGCDGAK((MethodInfo *)method_00);
  return pGVar1;
}

