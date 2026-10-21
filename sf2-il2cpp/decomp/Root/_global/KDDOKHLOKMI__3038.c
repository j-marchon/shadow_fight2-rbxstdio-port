// TypeDefIndex 3038
// Namespace: 
// public static class KDDOKHLOKMI
// Fields:
//   public static bool MANGIHDNLPM; // 0x0
//   public static string DOGHAPDEDFB; // 0x8

// ===== public static bool ACEAKFIFGJC()  [RVA 0x34B7464]
// KDDOKHLOKMI$$ACEAKFIFGJC @ RVA 0x34B7464

bool KDDOKHLOKMI__ACEAKFIFGJC(MethodInfo *method)

{
  bool bVar1;
  EEGDOGKBLNG_o *__this;
  
  if ((DAT_04568599 & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04568599 = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this != (EEGDOGKBLNG_o *)0x0) {
    bVar1 = EEGDOGKBLNG__LMIIHKLCBKD(__this,0x40000000,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void IIIFFANNPHP(int OOGPLJBADCD = 10000)  [RVA 0x34B74C8]
// KDDOKHLOKMI$$IIIFFANNPHP @ RVA 0x34B74C8

void KDDOKHLOKMI__IIIFFANNPHP(int32_t OOGPLJBADCD,MethodInfo *method)

{
  System_String_array *BFPCMHPBAGL;
  System_String_o *pSVar1;
  int32_t local_14;
  
  local_14 = OOGPLJBADCD;
  if ((DAT_0456859a & 1) == 0) {
    FUN_01bab630(&BDGDJDGHMJI_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    DAT_0456859a = 1;
  }
  BFPCMHPBAGL = (System_String_array *)FUN_01bab718(string___TypeInfo,1);
  pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  if (BFPCMHPBAGL != (System_String_array *)0x0) {
    if ((int)BFPCMHPBAGL->max_length != 0) {
      BFPCMHPBAGL->m_Items[0] = pSVar1;
      thunk_FUN_01c20e04();
      if ((BDGDJDGHMJI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      BDGDJDGHMJI__IIIFFANNPHP(BFPCMHPBAGL,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static string HMOPEPHMMIA()  [RVA 0x34AFBB4]
// KDDOKHLOKMI$$HMOPEPHMMIA @ RVA 0x34AFBB4

System_String_o * KDDOKHLOKMI__HMOPEPHMMIA(MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar1;
  
  if ((DAT_0456859b & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3894);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3895);
    FUN_01bab630(&byte___TypeInfo);
    DAT_0456859b = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3894,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_3895,(MethodInfo *)0x0);
  pSVar1 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== private static void .cctor()  [RVA 0x34B7578]
// KDDOKHLOKMI$$.cctor @ RVA 0x34B7578

void KDDOKHLOKMI___cctor(MethodInfo *method)

{
  KDDOKHLOKMI_StaticFields *pKVar1;
  System_String_o **ppSVar2;
  
  if ((DAT_0456859c & 1) == 0) {
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    DAT_0456859c = 1;
  }
  pKVar1 = KDDOKHLOKMI_TypeInfo->static_fields;
  pKVar1->MANGIHDNLPM = true;
  ppSVar2 = &pKVar1->DOGHAPDEDFB;
  *ppSVar2 = (System_String_o *)0x0;
  thunk_FUN_01c20e04(ppSVar2,0);
  return;
}

