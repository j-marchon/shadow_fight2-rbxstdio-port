// IDDIABHBDEE$$KEHKJGCMHCB @ RVA 0x3385530

void IDDIABHBDEE__KEHKJGCMHCB
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  BCHFHHHGEIP_o *__this_00;
  System_String_array *CHDKNEIIOAH;
  System_String_o *pSVar3;
  MethodInfo *in_x3;
  KMBNFNCDDBP_o *pKVar4;
  
  if ((DAT_04567bad & 1) == 0) {
    FUN_01bab630(&Method_DADDKDFBPIJ<FJIFBJMMKHG>_NDNPGAKJLHM__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_04567bad = 1;
  }
  if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
    return;
  }
  plVar2 = (long *)(*(GGDPPDFOEOH->klass->vtable)._13_get_ChildNodes.methodPtr)
                             (GGDPPDFOEOH,(GGDPPDFOEOH->klass->vtable)._13_get_ChildNodes.method);
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
    if (iVar1 == 0) {
      return;
    }
    __this_00 = (__this->fields)._NHNEHOBGJBE_k__BackingField;
    if (__this_00 != (BCHFHHHGEIP_o *)0x0) {
      DADDKDFBPIJ<object>__NDNPGAKJLHM
                ((DADDKDFBPIJ_T__o *)__this_00,Method_DADDKDFBPIJ<FJIFBJMMKHG>_NDNPGAKJLHM__);
      CHDKNEIIOAH = (System_String_array *)FUN_01bab718(string___TypeInfo,2);
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
      }
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar4 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if ((pKVar4 != (KMBNFNCDDBP_o *)0x0) && (CHDKNEIIOAH != (System_String_array *)0x0)) {
        if ((int)CHDKNEIIOAH->max_length != 0) {
          CHDKNEIIOAH->m_Items[0] = (pKVar4->fields).AHAKHHLCPAB;
          thunk_FUN_01c20e04();
          if (DAT_045611dc == '\0') {
            FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
            DAT_045611dc = '\x01';
          }
          if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          pKVar4 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
          if (pKVar4 == (KMBNFNCDDBP_o *)0x0) goto LAB_034856dc;
          pSVar3 = KMBNFNCDDBP__MLHLAKMLJNI(pKVar4,(MethodInfo *)0x0);
          if (1 < (uint)CHDKNEIIOAH->max_length) {
            CHDKNEIIOAH->m_Items[1] = pSVar3;
            thunk_FUN_01c20e04();
            IDDIABHBDEE__MMPDIJEKOGG(__this,GGDPPDFOEOH,CHDKNEIIOAH,in_x3);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
    }
  }
LAB_034856dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

