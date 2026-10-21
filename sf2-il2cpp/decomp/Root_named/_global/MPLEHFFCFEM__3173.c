// TypeDefIndex 3173
// Namespace: 
// public class MPLEHFFCFEM
// Fields:
//   public static bool EIANPAHFCEH; // 0x0
//   public const string JOOAJECNANA = "<color=yellow>";
//   public const string ABMOECBIPGK = "</color>";
//   public static bool KIMAADAKAFB; // 0x1

// ===== public void .ctor()  [RVA 0x34E2644]
// MPLEHFFCFEM$$.ctor @ RVA 0x34E2644

void MPLEHFFCFEM___ctor(MPLEHFFCFEM_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static string HDMHNKKGJIP(string GFJEGFFPLEF)  [RVA 0x34E264C]
// MPLEHFFCFEM$$HDMHNKKGJIP @ RVA 0x34E264C

System_String_o * MPLEHFFCFEM__HDMHNKKGJIP(System_String_o *GFJEGFFPLEF,MethodInfo *method)

{
  Il2CppObject *__this;
  NNLIOGBKAIA_o *__this_00;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_04568742 & 1) == 0) {
    FUN_01bab630(&NNLIOGBKAIA_TypeInfo);
    DAT_04568742 = 1;
    method = extraout_x1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(NNLIOGBKAIA_TypeInfo,method);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pSVar1 = NNLIOGBKAIA__DPKNNBKIMDG(__this_00,GFJEGFFPLEF,in_x2);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x34E26AC]
// MPLEHFFCFEM$$.cctor @ RVA 0x34E26AC

void MPLEHFFCFEM___cctor(MethodInfo *method)

{
  MPLEHFFCFEM_StaticFields *pMVar1;
  
  if ((DAT_04568743 & 1) == 0) {
    FUN_01bab630(&MPLEHFFCFEM_TypeInfo);
    DAT_04568743 = 1;
  }
  pMVar1 = MPLEHFFCFEM_TypeInfo->static_fields;
  pMVar1->EIANPAHFCEH = true;
  pMVar1->KIMAADAKAFB = false;
  return;
}


// ===== public static string CKOAAEJPCPN(string HBDNGIDONHG)  [RVA 0x34E26F8]
// MPLEHFFCFEM$$CKOAAEJPCPN @ RVA 0x34E26F8

System_String_o * MPLEHFFCFEM__CKOAAEJPCPN(System_String_o *HBDNGIDONHG,MethodInfo *method)

{
  Condition_o *__this;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568744 & 1) == 0) {
    FUN_01bab630(&Condition_TypeInfo);
    DAT_04568744 = 1;
    method = extraout_x1;
  }
  __this = (Condition_o *)thunk_FUN_01bda818(Condition_TypeInfo,method);
  Condition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Condition_o *)0x0) {
    pSVar1 = Condition__DPKNNBKIMDG(__this,HBDNGIDONHG,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string KOIPLDCENFI(bool LIEPGMFEIIK)  [RVA 0x34E2760]
// MPLEHFFCFEM$$KOIPLDCENFI @ RVA 0x34E2760

System_String_o * MPLEHFFCFEM__KOIPLDCENFI(bool LIEPGMFEIIK,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  
  if ((DAT_04568745 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3002);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3003);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    FUN_01bab630(&MPLEHFFCFEM_TypeInfo);
    DAT_04568745 = 1;
    method = extraout_x1;
  }
  if ((MPLEHFFCFEM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MPLEHFFCFEM_TypeInfo,method);
    method = extraout_x1_00;
  }
  MPLEHFFCFEM_TypeInfo->static_fields->KIMAADAKAFB = LIEPGMFEIIK;
  if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MDKJJDGLPKO_TypeInfo,method);
  }
  MDKJJDGLPKO__GIENGNEGHPJ((MethodInfo *)0x0);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3002,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3003,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}

