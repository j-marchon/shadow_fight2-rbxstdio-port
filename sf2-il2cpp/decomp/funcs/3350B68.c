// PFOMHOLCODE$$ECHJABMKDCD @ RVA 0x3350B68

int32_t PFOMHOLCODE__ECHJABMKDCD
                  (PFOMHOLCODE_JBJOKPCAJEP_o *BECCOGAMKJL,System_String_o *NMECGIJCPEG,
                  MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((DAT_04567a26 & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04567a26 = 1;
  }
  if ((BECCOGAMKJL != (PFOMHOLCODE_JBJOKPCAJEP_o *)0x0) &&
     (bVar1 = System_String__op_Inequality
                        ((BECCOGAMKJL->fields).BANIDGFENDE,StringLiteral_1,(MethodInfo *)0x0), bVar1
     )) {
    NMECGIJCPEG = (BECCOGAMKJL->fields).BANIDGFENDE;
  }
  if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  iVar2 = LabelButton__GetBtnColor(NMECGIJCPEG,(MethodInfo *)0x0);
  return iVar2;
}

