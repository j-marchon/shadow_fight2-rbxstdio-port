// TypeDefIndex 1838
// Namespace: 
// public class BGPFALGFJIL
// Fields:
//   public static readonly ObscuredInt NLEJEOIFOMI; // 0x0
//   public static readonly ObscuredInt JBGPHLKPICA; // 0x10

// ===== private static string AGHCPAPJAJJ()  [RVA 0x3222664]
// BGPFALGFJIL$$AGHCPAPJAJJ @ RVA 0x3222664

System_String_o * BGPFALGFJIL__AGHCPAPJAJJ(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566f4a & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6711);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6712);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566f4a = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6711,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6712,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x3222714]
// BGPFALGFJIL$$.cctor @ RVA 0x3222714

void BGPFALGFJIL___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields CVar3;
  
  if ((DAT_04566f4b & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&BGPFALGFJIL_TypeInfo);
    DAT_04566f4b = 1;
  }
  pSVar2 = BGPFALGFJIL__AGHCPAPJAJJ(method);
  iVar1 = BGPFALGFJIL__HNOPGFODECN(pSVar2,method_00);
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
  (BGPFALGFJIL_TypeInfo->static_fields->NLEJEOIFOMI).fields = CVar3;
  pSVar2 = BGPFALGFJIL__MLBCENGAOJG(CVar3._0_8_);
  iVar1 = BGPFALGFJIL__HNOPGFODECN(pSVar2,method_01);
  CVar3 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields)
          CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO(iVar1,(MethodInfo *)0x0);
  (BGPFALGFJIL_TypeInfo->static_fields->JBGPHLKPICA).fields = CVar3;
  return;
}


// ===== private static string MLBCENGAOJG()  [RVA 0x322292C]
// BGPFALGFJIL$$MLBCENGAOJG @ RVA 0x322292C

System_String_o * BGPFALGFJIL__MLBCENGAOJG(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_04566f4c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6713);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6714);
    FUN_01bab630(&byte___TypeInfo);
    DAT_04566f4c = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6713,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6714,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public static int HNOPGFODECN(string CMDCEGDPKFO)  [RVA 0x3222788]
// BGPFALGFJIL$$HNOPGFODECN @ RVA 0x3222788

int32_t BGPFALGFJIL__HNOPGFODECN(System_String_o *CMDCEGDPKFO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_array *pSVar3;
  
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(CMDCEGDPKFO,(MethodInfo *)0x0);
  if (!bVar1) {
    if (CMDCEGDPKFO == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = System_String__Split(CMDCEGDPKFO,0x5f,0,(MethodInfo *)0x0);
    if ((pSVar3 != (System_String_array *)0x0) && ((int)pSVar3->max_length == 3)) {
      iVar2 = PCOEHCPGBBG__JBGCINPPLAC(pSVar3->m_Items[1],-1,(MethodInfo *)0x0);
      return iVar2;
    }
  }
  return -1;
}


// ===== public void .ctor()  [RVA 0x32229DC]
// BGPFALGFJIL$$.ctor @ RVA 0x32229DC

void BGPFALGFJIL___ctor(BGPFALGFJIL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

