// OLKKAIFGGAK$$DGLJCGNHLIG @ RVA 0x34F4BE4

void OLKKAIFGGAK__DGLJCGNHLIG(OLKKAIFGGAK_o *__this,MethodInfo *method)

{
  BKHDDKOEEKP_o *__this_00;
  GBJGJEGPHKD_o *__this_01;
  NJPBHDMCLIN_o *__this_02;
  OPNFCOGALLI_o *__this_03;
  System_Collections_Generic_HashSet_object__o *__this_04;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *in_x5;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields CVar2;
  
  if ((DAT_045687dd & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_Clear__
                );
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Clear__);
    FUN_01bab630(&StringLiteral_1);
    DAT_045687dd = 1;
    method = extraout_x1;
  }
  OLKKAIFGGAK__HNHPFKEPBPH(__this,method);
  OLKKAIFGGAK__BOEFGIBCIIL(__this,(__this->fields).HNJLKFNOPLJ,false,true,true,in_x5);
  OLKKAIFGGAK__GNOBOBBEEAH(__this,method_00);
  (__this->fields).HNJLKFNOPLJ = (HOOAAGABMBL_o *)0x0;
  thunk_FUN_01c20e04(&(__this->fields).HNJLKFNOPLJ,0);
  (__this->fields).KECCIJBNKLL = -1;
  CVar2 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredBool_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredBool__ALBJPLAPOBO(false,(MethodInfo *)0x0);
  (__this->fields).FCKDFGMFHHF.fields = CVar2;
  (__this->fields).EICLGPGPNKE = 0.0;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).PKNCPJJEAOH.fields = CVar1;
  CVar1 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(0,(MethodInfo *)0x0);
  (__this->fields).OIPMNDIDGFI.fields = CVar1;
  (__this->fields).OCAFPNJDBEE = 0;
  (__this->fields).KJOGOGPCLDK = StringLiteral_1;
  thunk_FUN_01c20e04(&(__this->fields).KJOGOGPCLDK);
  __this_00 = (__this->fields).NLMAHDLOKAJ;
  (__this->fields).DGGDGCEMMGI = 0.0;
  (__this->fields).GOMKBFHJDHC = 0.0;
  if (__this_00 != (BKHDDKOEEKP_o *)0x0) {
    BKHDDKOEEKP__DGLJCGNHLIG(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields).HMIAFJALFCJ;
    if (__this_01 != (GBJGJEGPHKD_o *)0x0) {
      GBJGJEGPHKD__DGLJCGNHLIG(__this_01,(MethodInfo *)0x0);
      __this_02 = (__this->fields).FNEAAHOOHAA;
      if (__this_02 != (NJPBHDMCLIN_o *)0x0) {
        NJPBHDMCLIN__DGLJCGNHLIG(__this_02,(MethodInfo *)0x0);
        __this_03 = (__this->fields).OAKOFJJIOFF;
        if (__this_03 != (OPNFCOGALLI_o *)0x0) {
          OPNFCOGALLI__DGLJCGNHLIG(__this_03,(MethodInfo *)0x0);
        }
        __this_04 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).DBLOJJBPLGE;
        if (__this_04 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          System_Collections_Generic_HashSet<object>__Clear
                    (__this_04,Method_System_Collections_Generic_HashSet<string>_Clear__);
          __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)
                      (__this->fields).LPDPOJHBCLM;
          if (__this_05 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object,_object>__Clear
                      (__this_05,
                       Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_List<MGNDHCBAPEN<IIMNGGHGKOD,_bool>>>_Clear__
                      );
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

