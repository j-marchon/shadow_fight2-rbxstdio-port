// MGNPHCAAEIO$$NADKBDJLFIL @ RVA 0x34028B4

float MGNPHCAAEIO__NADKBDJLFIL
                (bool PCPDCOFJKCA,PJKHAJKEHEL_o *GDKDMLMOKBD,PJKHAJKEHEL_o *LMNHKAKIJDO,
                System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *EOOKKNIHBEB,
                System_String_o *KDOANJLDAKP,MethodInfo *method)

{
  MGNPHCAAEIO_c *method_00;
  float fVar1;
  MethodInfo *in_stack_ffffffffffffffa0;
  float local_54;
  float local_48 [2];
  
  if ((DAT_04568002 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568002 = 1;
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_54 = 0.0;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  fVar1 = MGNPHCAAEIO__CGOAEEIACCA
                    (PCPDCOFJKCA,GDKDMLMOKBD,LMNHKAKIJDO,EOOKKNIHBEB,KDOANJLDAKP,local_48 + 1,
                     local_48,&local_54,in_stack_ffffffffffffffa0);
  if (10.0 < fVar1) {
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    fVar1 = MGNPHCAAEIO__CGOAEEIACCA
                      (PCPDCOFJKCA,GDKDMLMOKBD,LMNHKAKIJDO,EOOKKNIHBEB,KDOANJLDAKP,local_48 + 1,
                       local_48,&local_54,in_stack_ffffffffffffffa0);
  }
  method_00 = MGNPHCAAEIO_TypeInfo;
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (MGNPHCAAEIO_c *)thunk_FUN_01ba7564();
  }
  fVar1 = MGNPHCAAEIO__NADKBDJLFIL(fVar1,(MethodInfo *)method_00);
  return fVar1;
}

