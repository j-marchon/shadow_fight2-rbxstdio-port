// FDHCLNDLIDG$$.cctor @ RVA 0x314B3B4

void FDHCLNDLIDG___cctor(MethodInfo *method)

{
  System_Func_T__o *factory;
  Google_Protobuf_MessageParser_FDHCLNDLIDG__o *__this;
  
  if ((DAT_045667ba & 1) == 0) {
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    FUN_01bab630(&System_Func<FDHCLNDLIDG>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_MessageParser<FDHCLNDLIDG>__ctor__);
    FUN_01bab630(&Google_Protobuf_MessageParser<FDHCLNDLIDG>_TypeInfo);
    FUN_01bab630(&Method_FDHCLNDLIDG_<>c_ICLFIHGKJJH__);
    FUN_01bab630(&FDHCLNDLIDG_<>c_TypeInfo);
    DAT_045667ba = 1;
  }
  if ((FDHCLNDLIDG_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  factory = (System_Func_T__o *)thunk_FUN_01bda818(System_Func<FDHCLNDLIDG>_TypeInfo);
  System_Func<object>___ctor();
  __this = (Google_Protobuf_MessageParser_FDHCLNDLIDG__o *)
           thunk_FUN_01bda818(Google_Protobuf_MessageParser<FDHCLNDLIDG>_TypeInfo);
  Google_Protobuf_MessageParser<object>___ctor
            ((Google_Protobuf_MessageParser_T__o *)__this,factory,
             Method_Google_Protobuf_MessageParser<FDHCLNDLIDG>__ctor__);
  FDHCLNDLIDG_TypeInfo->static_fields->NNMODPGDIDE = __this;
  thunk_FUN_01c20e04(FDHCLNDLIDG_TypeInfo->static_fields,__this);
  return;
}

