// TypeDefIndex 777
// Namespace: 
// [Serializable]
// private sealed class ACHLOMELAJE.<>c
// Fields:
//   public static readonly ACHLOMELAJE.<>c <>9; // 0x0
//   public static Func<int, string> <>9__126_0; // 0x8
//   public static Func<AJDHCLBLGMI, ObscuredString> <>9__243_0; // 0x10
//   public static Action<ObscuredUInt> <>9__359_0; // 0x18
//   public static Action<BNKBGIIJNLF> <>9__359_1; // 0x20
//   public static Action<OLKPEJMEBPJ> <>9__359_2; // 0x28

// ===== internal string DMKNIHLMBCD(int id)  [RVA 0x30687F0]
// ACHLOMELAJE.<>c$$DMKNIHLMBCD @ RVA 0x30687F0

System_String_o *
ACHLOMELAJE_<>c__DMKNIHLMBCD(ACHLOMELAJE___c_o *__this,int32_t id,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t local_4;
  
  local_4 = id;
  pSVar1 = System_Int32__ToString((int32_t)&local_4,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== internal void KIBLNKGKCIO(ObscuredUInt x)  [RVA 0x306880C]
// ACHLOMELAJE.<>c$$KIBLNKGKCIO @ RVA 0x306880C

void ACHLOMELAJE_<>c__KIBLNKGKCIO
               (ACHLOMELAJE___c_o *__this,CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o x,
               MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt_o __this_00;
  undefined8 local_20;
  MethodInfo *local_18;
  
  local_18 = x.fields._8_8_;
  local_20 = x.fields._0_8_;
  __this_00.fields.fakeValue = 0;
  __this_00.fields.fakeValueActive = false;
  __this_00.fields.inited = false;
  __this_00.fields._14_2_ = 0;
  __this_00.fields._0_8_ = &local_20;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredUInt__GPJJDLBJOAL(__this_00,local_18);
  return;
}


// ===== private static void .cctor()  [RVA 0x3068830]
// ACHLOMELAJE.<>c$$.cctor @ RVA 0x3068830

void ACHLOMELAJE_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565f12 & 1) == 0) {
    FUN_01bab630(&ACHLOMELAJE_<>c_TypeInfo);
    DAT_04565f12 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(ACHLOMELAJE_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  ACHLOMELAJE_<>c_TypeInfo->static_fields->__9 = (ACHLOMELAJE___c_o *)__this;
  thunk_FUN_01c20e04(ACHLOMELAJE_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void NNKLCEMHKBJ(OLKPEJMEBPJ x)  [RVA 0x30688A0]
// ACHLOMELAJE.<>c$$NNKLCEMHKBJ @ RVA 0x30688A0

void ACHLOMELAJE_<>c__NNKLCEMHKBJ(ACHLOMELAJE___c_o *__this,OLKPEJMEBPJ_o *x,MethodInfo *method)

{
  if (x != (OLKPEJMEBPJ_o *)0x0) {
    OLKPEJMEBPJ__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void BPBPFBAFCIC(BNKBGIIJNLF x)  [RVA 0x30688B8]
// ACHLOMELAJE.<>c$$BPBPFBAFCIC @ RVA 0x30688B8

void ACHLOMELAJE_<>c__BPBPFBAFCIC(ACHLOMELAJE___c_o *__this,BNKBGIIJNLF_o *x,MethodInfo *method)

{
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o __this_00;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (x != (BNKBGIIJNLF_o *)0x0) {
    uStack_18._0_4_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValue;
    uStack_18._4_1_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.fakeValueActive;
    uStack_18._5_1_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.inited;
    uStack_18._6_2_ = *(undefined2 *)&(x->fields)._PKGCKALOMOF_k__BackingField.fields.field_0xe;
    local_20._0_4_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.currentCryptoKey;
    local_20._4_4_ = (x->fields)._PKGCKALOMOF_k__BackingField.fields.hiddenValue;
    __this_00.fields.fakeValue = 0;
    __this_00.fields.fakeValueActive = false;
    __this_00.fields.inited = false;
    __this_00.fields._14_2_ = 0;
    __this_00.fields._0_8_ = &local_20;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__GPJJDLBJOAL(__this_00,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal ObscuredString BPKANJNOIFP(AJDHCLBLGMI offerData)  [RVA 0x30688E8]
// ACHLOMELAJE.<>c$$BPKANJNOIFP @ RVA 0x30688E8

CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *
ACHLOMELAJE_<>c__BPKANJNOIFP(ACHLOMELAJE___c_o *__this,AJDHCLBLGMI_o *offerData,MethodInfo *method)

{
  if (offerData != (AJDHCLBLGMI_o *)0x0) {
    return (offerData->fields).JIJLBFGKNJK;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3068898]
// ACHLOMELAJE.<>c$$.ctor @ RVA 0x3068898

void ACHLOMELAJE_<>c___ctor(ACHLOMELAJE___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

