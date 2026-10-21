// MLNACIEDMNN$$EOHMFJFFFIN @ RVA 0x30FA6E0

HOOAAGABMBL_o *
MLNACIEDMNN__EOHMFJFFFIN(MLNACIEDMNN_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  HOOAAGABMBL_o *__this_00;
  
  if ((DAT_04566494 & 1) == 0) {
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    DAT_04566494 = 1;
  }
  if ((AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) &&
     (bVar2 = MLNACIEDMNN__JBICIAFLDGH(__this,AHDGNOJPPIB,method), bVar2)) {
    MLNACIEDMNN__OMADDBJLANO((MLNACIEDMNN_o *)0x1,AHDGNOJPPIB,method);
    __this_00 = (HOOAAGABMBL_o *)thunk_FUN_01bda818(HOOAAGABMBL_TypeInfo);
    HOOAAGABMBL___ctor(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
    if (__this_00 != (HOOAAGABMBL_o *)0x0) {
      HOOAAGABMBL__DFHJNHLJBND(__this_00,AHDGNOJPPIB,(MethodInfo *)0x0);
      iVar1 = (__this->fields).PGDIGMHNIME;
      (__this->fields).PGDIGMHNIME = iVar1 + 1;
      (__this_00->fields)._HBPAJOBFMLH_k__BackingField = iVar1;
      return __this_00;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return (HOOAAGABMBL_o *)0x0;
}

