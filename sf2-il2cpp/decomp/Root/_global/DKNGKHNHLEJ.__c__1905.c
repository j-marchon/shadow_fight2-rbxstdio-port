// TypeDefIndex 1905
// Namespace: 
// [Serializable]
// private sealed class DKNGKHNHLEJ.<>c
// Fields:
//   public static readonly DKNGKHNHLEJ.<>c <>9; // 0x0
//   public static Func<string, string> <>9__5_0; // 0x8

// ===== public void .ctor()  [RVA 0x325B484]
// DKNGKHNHLEJ.<>c$$.ctor @ RVA 0x325B484

void DKNGKHNHLEJ_<>c___ctor(DKNGKHNHLEJ___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x325B48C]
// DKNGKHNHLEJ.<>c$$.cctor @ RVA 0x325B48C

void DKNGKHNHLEJ_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567187 & 1) == 0) {
    FUN_01bab630(&DKNGKHNHLEJ_<>c_TypeInfo);
    DAT_04567187 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(DKNGKHNHLEJ_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  DKNGKHNHLEJ_<>c_TypeInfo->static_fields->__9 = (DKNGKHNHLEJ___c_o *)__this;
  thunk_FUN_01c20e04(DKNGKHNHLEJ_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal string NKICEDMAPPK(string s)  [RVA 0x325B4F4]
// DKNGKHNHLEJ.<>c$$NKICEDMAPPK @ RVA 0x325B4F4

System_String_o *
DKNGKHNHLEJ_<>c__NKICEDMAPPK(DKNGKHNHLEJ___c_o *__this,System_String_o *s,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Byte_array *pSVar3;
  System_Byte_array *pSVar4;
  System_String_o *b;
  
  if ((DAT_04567188 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6367);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6368);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6369);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6370);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6371);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6372);
    FUN_01bab630(&byte___TypeInfo);
    __this = (DKNGKHNHLEJ___c_o *)FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04567188 = 1;
  }
  if (s == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  pSVar2 = System_String__ToLower(s,(MethodInfo *)0x0);
  pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar3,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6367,(MethodInfo *)0x0);
  pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)pSVar4,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6368,(MethodInfo *)0x0);
  b = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
  bVar1 = System_String__op_Equality(pSVar2,b,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)0x0;
  if (!bVar1) {
    pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar3,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6369,(MethodInfo *)0x0)
    ;
    pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
              ((System_Array_o *)pSVar4,
               Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6370,(MethodInfo *)0x0)
    ;
    pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
    bVar1 = System_String__op_Equality(s,pSVar2,(MethodInfo *)0x0);
    pSVar2 = StringLiteral_1/*""*/;
    if (!bVar1) {
      pSVar3 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar3,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6371,
                 (MethodInfo *)0x0);
      pSVar4 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar4,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6372,
                 (MethodInfo *)0x0);
      pSVar2 = OMHODMCHILE__NPKGDBHJKCK(pSVar3,pSVar4,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(s,pSVar2,(MethodInfo *)0x0);
      pSVar2 = StringLiteral_1/*""*/;
      if (!bVar1) {
        return s;
      }
    }
  }
  return pSVar2;
}

