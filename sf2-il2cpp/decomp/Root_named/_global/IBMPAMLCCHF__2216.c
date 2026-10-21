// TypeDefIndex 2216
// Namespace: 
// public class IBMPAMLCCHF
// Fields:

// ===== public static string EOJPLECOGAD(string OCMMDIHLKMH, byte[] IKKKILCDMMB, byte[] MLLHENCNAMI)  [RVA 0x32EB048]
// IBMPAMLCCHF$$EOJPLECOGAD @ RVA 0x32EB048

System_String_o *
IBMPAMLCCHF__EOJPLECOGAD
          (System_String_o *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456763a & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456763a = 1;
  }
  if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 033eb0a8 to 034eb0ef has its CatchHandler @ 033eb0a8
                       catch() { ... } // from try @ 033eb0a8 with catch @ 033eb0a8
                       catch() { ... } // from try @ 033eb0fc with catch @ 033eb0a8
                       catch() { ... } // from try @ 033eb140 with catch @ 033eb0a8
                       catch() { ... } // from try @ 033eb1bc with catch @ 033eb0a8 */
  pSVar1 = System_Convert__FromBase64String(OCMMDIHLKMH,(MethodInfo *)0x0);
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB(pSVar1,IKKKILCDMMB,MLLHENCNAMI,method);
  if (pSVar1 != (System_Byte_array *)0x0) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033eb0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)
               (*(pSVar2->klass->vtable)._37_GetString.methodPtr)
                         (pSVar2,pSVar1,(pSVar2->klass->vtable)._37_GetString.method);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 033eb0f0 to 034eb0fb has its CatchHandler @ 033eb110 */
                    /* try { // try from 033eb0fc to 034eb127 has its CatchHandler @ 033eb0a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033eb0f0 with catch @ 033eb110
                        */
  return string_TypeInfo->static_fields->Empty;
}


// ===== public static byte[] FHFADKNMJLB(byte[] OCMMDIHLKMH, byte[] IKKKILCDMMB, byte[] MLLHENCNAMI)  [RVA 0x32EB118]
// IBMPAMLCCHF$$FHFADKNMJLB @ RVA 0x32EB118

/* WARNING: Removing unreachable block (ram,0x033eb26c) */
/* WARNING: Removing unreachable block (ram,0x033eb280) */
/* WARNING: Removing unreachable block (ram,0x033eb284) */
/* WARNING: Removing unreachable block (ram,0x033eb2ac) */

System_Byte_array *
IBMPAMLCCHF__FHFADKNMJLB
          (System_Byte_array *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  ushort uVar1;
  System_Security_Cryptography_Aes_o *pSVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  System_Security_Cryptography_ICryptoTransform_o *GDDNCGHPCEM;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Security_Cryptography_Aes_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 033eb128 to 034eb13f has its CatchHandler @ 033eb1b4 */
                    /* try { // try from 033eb140 to 034eb1a3 has its CatchHandler @ 033eb0a8 */
  if ((DAT_0456763b & 1) == 0) {
    FUN_01bab630(&System_Security_Cryptography_Aes_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_0456763b = 1;
  }
  if ((System_Security_Cryptography_Aes_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar2 == (System_Security_Cryptography_Aes_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar2->klass->vtable)._12_set_Key.methodPtr)
            (pSVar2,IKKKILCDMMB,(pSVar2->klass->vtable)._12_set_Key.method);
                    /* try { // try from 033eb1a4 to 034eb1b3 has its CatchHandler @ 033eb1b4 */
  (*(pSVar2->klass->vtable)._10_set_IV.methodPtr)
            (pSVar2,MLLHENCNAMI,(pSVar2->klass->vtable)._10_set_IV.method);
                    /* catch() { ... } // from try @ 033eb128 with catch @ 033eb1b4
                       catch() { ... } // from try @ 033eb1a4 with catch @ 033eb1b4 */
                    /* try { // try from 033eb1b8 to 034eb1bb has its CatchHandler @ 033eb1c4 */
                    /* try { // try from 033eb1bc to 034eb1c7 has its CatchHandler @ 033eb0a8 */
  uVar3 = (*(pSVar2->klass->vtable)._11_get_Key.methodPtr)
                    (pSVar2,(pSVar2->klass->vtable)._11_get_Key.method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033eb1b8 with catch @ 033eb1c4
                        */
  method_00 = (MethodInfo *)
              (*(pSVar2->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._9_HNIHOIAMDPC.method);
  GDDNCGHPCEM = (System_Security_Cryptography_ICryptoTransform_o *)
                (*pSVar2->klass[1]._1.image)(pSVar2,uVar3,method_00,pSVar2->klass[1]._1.gc_desc);
  pSVar4 = IBMPAMLCCHF__FGOKOOFPFMC(OCMMDIHLKMH,GDDNCGHPCEM,method_00);
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar8;
        goto LAB_033eb258;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar2,System_IDisposable_TypeInfo,0);
LAB_033eb258:
  (*pVVar5->methodPtr)(pSVar2,pVVar5->method);
  return pSVar4;
}


// ===== public static byte[] ALKNAMLGEJM(byte[] OCMMDIHLKMH, byte[] IKKKILCDMMB, byte[] MLLHENCNAMI)  [RVA 0x32EB744]
// IBMPAMLCCHF$$ALKNAMLGEJM @ RVA 0x32EB744

/* WARNING: Removing unreachable block (ram,0x033eb898) */
/* WARNING: Removing unreachable block (ram,0x033eb8ac) */
/* WARNING: Removing unreachable block (ram,0x033eb8b0) */
/* WARNING: Removing unreachable block (ram,0x033eb8d8) */

System_Byte_array *
IBMPAMLCCHF__ALKNAMLGEJM
          (System_Byte_array *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  ushort uVar1;
  System_Security_Cryptography_Aes_o *pSVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  System_Security_Cryptography_ICryptoTransform_o *GDDNCGHPCEM;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Security_Cryptography_Aes_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_0456763c & 1) == 0) {
    FUN_01bab630(&System_Security_Cryptography_Aes_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_0456763c = 1;
  }
  if ((System_Security_Cryptography_Aes_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar2 == (System_Security_Cryptography_Aes_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar2->klass->vtable)._12_set_Key.methodPtr)
            (pSVar2,IKKKILCDMMB,(pSVar2->klass->vtable)._12_set_Key.method);
  (*(pSVar2->klass->vtable)._10_set_IV.methodPtr)
            (pSVar2,MLLHENCNAMI,(pSVar2->klass->vtable)._10_set_IV.method);
  uVar3 = (*(pSVar2->klass->vtable)._11_get_Key.methodPtr)
                    (pSVar2,(pSVar2->klass->vtable)._11_get_Key.method);
  method_00 = (MethodInfo *)
              (*(pSVar2->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._9_HNIHOIAMDPC.method);
  GDDNCGHPCEM = (System_Security_Cryptography_ICryptoTransform_o *)
                (*(pSVar2->klass->vtable)._21_unknown.methodPtr)
                          (pSVar2,uVar3,method_00,(pSVar2->klass->vtable)._21_unknown.method);
  pSVar4 = IBMPAMLCCHF__FGOKOOFPFMC(OCMMDIHLKMH,GDDNCGHPCEM,method_00);
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar8;
        goto LAB_033eb884;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar2,System_IDisposable_TypeInfo,0);
LAB_033eb884:
  (*pVVar5->methodPtr)(pSVar2,pVVar5->method);
  return pSVar4;
}


// ===== public static void MHABEPLNOLE(byte[] OCMMDIHLKMH, byte[] IKKKILCDMMB, byte[] MLLHENCNAMI, string LILLFLCEFNK)  [RVA 0x32EBA20]
// IBMPAMLCCHF$$MHABEPLNOLE @ RVA 0x32EBA20

void IBMPAMLCCHF__MHABEPLNOLE
               (System_Byte_array *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
               System_Byte_array *MLLHENCNAMI,System_String_o *LILLFLCEFNK,MethodInfo *method)

{
  System_Byte_array *MMEEMFOLKPP;
  
  MMEEMFOLKPP = IBMPAMLCCHF__ALKNAMLGEJM
                          (OCMMDIHLKMH,IKKKILCDMMB,MLLHENCNAMI,(MethodInfo *)LILLFLCEFNK);
  NEHNBJKKABI__IGOPCLNJIGA(LILLFLCEFNK,MMEEMFOLKPP,(MethodInfo *)0x0);
  return;
}


// ===== public static byte[] MFKIMIBAPEE(byte[] IKKKILCDMMB, byte[] MLLHENCNAMI, string CIBIKDNNBAM, bool ILDOEIOKKNO = False)  [RVA 0x32EBA40]
// IBMPAMLCCHF$$MFKIMIBAPEE @ RVA 0x32EBA40

System_Byte_array *
IBMPAMLCCHF__MFKIMIBAPEE
          (System_Byte_array *IKKKILCDMMB,System_Byte_array *MLLHENCNAMI,
          System_String_o *CIBIKDNNBAM,bool ILDOEIOKKNO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)(ulong)ILDOEIOKKNO;
  if (ILDOEIOKKNO) {
    pSVar1 = NEHNBJKKABI__BELGEBDABEH(CIBIKDNNBAM,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = CMEBCBKGFFL__JKGGKELPNKJ(CIBIKDNNBAM,(MethodInfo *)0x0);
  }
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB(pSVar1,IKKKILCDMMB,MLLHENCNAMI,method_00);
  return pSVar1;
}


// ===== public static string JILEJCOCHIB(string OCMMDIHLKMH, byte[] IKKKILCDMMB, byte[] MLLHENCNAMI)  [RVA 0x32EBB04]
// IBMPAMLCCHF$$JILEJCOCHIB @ RVA 0x32EBB04

System_String_o *
IBMPAMLCCHF__JILEJCOCHIB
          (System_String_o *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456763d & 1) == 0) {
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456763d = 1;
  }
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar1 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar1,OCMMDIHLKMH,(pSVar1->klass->vtable)._19_GetBytes.method);
    pSVar2 = IBMPAMLCCHF__ALKNAMLGEJM(pSVar2,IKKKILCDMMB,MLLHENCNAMI,method);
    if (pSVar2 != (System_Byte_array *)0x0) {
      if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar3 = System_Convert__ToBase64String(pSVar2,(MethodInfo *)0x0);
      return pSVar3;
    }
    return string_TypeInfo->static_fields->Empty;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void LGEGGDLMKNF(byte[] IKKKILCDMMB, byte[] MLLHENCNAMI, string CIBIKDNNBAM, string LILLFLCEFNK, bool ILDOEIOKKNO = False)  [RVA 0x32EBBD4]
// IBMPAMLCCHF$$LGEGGDLMKNF @ RVA 0x32EBBD4

void IBMPAMLCCHF__LGEGGDLMKNF
               (System_Byte_array *IKKKILCDMMB,System_Byte_array *MLLHENCNAMI,
               System_String_o *CIBIKDNNBAM,System_String_o *LILLFLCEFNK,bool ILDOEIOKKNO,
               MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)LILLFLCEFNK;
  if (ILDOEIOKKNO) {
    pSVar1 = NEHNBJKKABI__BELGEBDABEH(CIBIKDNNBAM,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = CMEBCBKGFFL__JKGGKELPNKJ(CIBIKDNNBAM,(MethodInfo *)0x0);
  }
  if (LILLFLCEFNK != (System_String_o *)0x0) {
    CIBIKDNNBAM = LILLFLCEFNK;
  }
  pSVar1 = IBMPAMLCCHF__ALKNAMLGEJM(pSVar1,IKKKILCDMMB,MLLHENCNAMI,pMVar2);
  NEHNBJKKABI__IGOPCLNJIGA(CIBIKDNNBAM,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== public static string KOBEFHOFGBI(byte[] IKKKILCDMMB, byte[] MLLHENCNAMI, string CIBIKDNNBAM, bool ILDOEIOKKNO = False)  [RVA 0x32EBC38]
// IBMPAMLCCHF$$KOBEFHOFGBI @ RVA 0x32EBC38

System_String_o *
IBMPAMLCCHF__KOBEFHOFGBI
          (System_Byte_array *IKKKILCDMMB,System_Byte_array *MLLHENCNAMI,
          System_String_o *CIBIKDNNBAM,bool ILDOEIOKKNO,MethodInfo *method)

{
  System_Byte_array *pSVar1;
  System_Text_Encoding_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456763e & 1) == 0) {
    FUN_01bab630(&string_TypeInfo);
    DAT_0456763e = 1;
  }
  pSVar1 = IBMPAMLCCHF__MFKIMIBAPEE(IKKKILCDMMB,MLLHENCNAMI,CIBIKDNNBAM,ILDOEIOKKNO,method);
  if (pSVar1 != (System_Byte_array *)0x0) {
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ebcb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pSVar3 = (System_String_o *)
               (*(pSVar2->klass->vtable)._37_GetString.methodPtr)
                         (pSVar2,pSVar1,(pSVar2->klass->vtable)._37_GetString.method);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return string_TypeInfo->static_fields->Empty;
}


// ===== public static void NEBHFMBDCOB(byte[] IKKKILCDMMB, byte[] MLLHENCNAMI, string CIBIKDNNBAM, string LILLFLCEFNK, bool ILDOEIOKKNO = False)  [RVA 0x32EBCE4]
// IBMPAMLCCHF$$NEBHFMBDCOB @ RVA 0x32EBCE4

void IBMPAMLCCHF__NEBHFMBDCOB
               (System_Byte_array *IKKKILCDMMB,System_Byte_array *MLLHENCNAMI,
               System_String_o *CIBIKDNNBAM,System_String_o *LILLFLCEFNK,bool ILDOEIOKKNO,
               MethodInfo *method)

{
  System_Byte_array *pSVar1;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)LILLFLCEFNK;
  if (ILDOEIOKKNO) {
    pSVar1 = NEHNBJKKABI__BELGEBDABEH(CIBIKDNNBAM,(MethodInfo *)0x0);
  }
  else {
    pSVar1 = CMEBCBKGFFL__JKGGKELPNKJ(CIBIKDNNBAM,(MethodInfo *)0x0);
  }
  if (LILLFLCEFNK != (System_String_o *)0x0) {
    CIBIKDNNBAM = LILLFLCEFNK;
  }
  pSVar1 = IBMPAMLCCHF__FHFADKNMJLB(pSVar1,IKKKILCDMMB,MLLHENCNAMI,pMVar2);
  NEHNBJKKABI__IGOPCLNJIGA(CIBIKDNNBAM,pSVar1,(MethodInfo *)0x0);
  return;
}


// ===== private static byte[] FGOKOOFPFMC(byte[] OCMMDIHLKMH, ICryptoTransform GDDNCGHPCEM)  [RVA 0x32EB3F4]
// IBMPAMLCCHF$$FGOKOOFPFMC @ RVA 0x32EB3F4

/* WARNING: Removing unreachable block (ram,0x033eb5bc) */
/* WARNING: Removing unreachable block (ram,0x033eb5d0) */

System_Byte_array *
IBMPAMLCCHF__FGOKOOFPFMC
          (System_Byte_array *OCMMDIHLKMH,
          System_Security_Cryptography_ICryptoTransform_o *GDDNCGHPCEM,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_IO_MemoryStream_o *__this;
  System_Security_Cryptography_CryptoStream_o *__this_00;
  System_Byte_array *pSVar3;
  VirtualInvokeData *pVVar4;
  System_Security_Cryptography_CryptoStream_c *pSVar5;
  System_IO_MemoryStream_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
  if ((DAT_0456763f & 1) == 0) {
    FUN_01bab630(&System_Security_Cryptography_CryptoStream_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_MemoryStream_TypeInfo);
    DAT_0456763f = 1;
  }
  __this = (System_IO_MemoryStream_o *)thunk_FUN_01bda818(System_IO_MemoryStream_TypeInfo);
  System_IO_MemoryStream___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (System_Security_Cryptography_CryptoStream_o *)
              thunk_FUN_01bda818(System_Security_Cryptography_CryptoStream_TypeInfo);
  System_Security_Cryptography_CryptoStream___ctor
            (__this_00,(System_IO_Stream_o *)__this,GDDNCGHPCEM,1,(MethodInfo *)0x0);
  if (OCMMDIHLKMH == (System_Byte_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (__this_00 == (System_Security_Cryptography_CryptoStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(__this_00->klass->vtable)._36_Write.methodPtr)
            (__this_00,OCMMDIHLKMH,0,(ulong)(uint)OCMMDIHLKMH->max_length,
             (__this_00->klass->vtable)._36_Write.method);
  System_Security_Cryptography_CryptoStream__FlushFinalBlock(__this_00,(MethodInfo *)0x0);
  if (__this == (System_IO_MemoryStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pSVar3 = (System_Byte_array *)
           (*(__this->klass->vtable)._42_ToArray.methodPtr)
                     (__this,(__this->klass->vtable)._42_ToArray.method);
  pSVar5 = __this_00->klass;
  uVar1._0_1_ = (pSVar5->_2).rank;
  uVar1._1_1_ = (pSVar5->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar5->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar4 = &(pSVar5->vtable)._0_Equals + *piVar8;
        goto LAB_033eb530;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this_00,System_IDisposable_TypeInfo,0);
LAB_033eb530:
  (*pVVar4->methodPtr)(__this_00,pVVar4->method);
  if (__this != (System_IO_MemoryStream_o *)0x0) {
    pSVar6 = __this->klass;
    uVar2._0_1_ = (pSVar6->_2).rank;
    uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_IDisposable_TypeInfo) {
          pVVar4 = &(pSVar6->vtable)._0_Equals + *piVar8;
          goto LAB_033eb594;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(__this,System_IDisposable_TypeInfo,0);
LAB_033eb594:
    (*pVVar4->methodPtr)(__this,pVVar4->method);
  }
  return pSVar3;
}


// ===== public static void NLDHOAPBNJO(string OCMMDIHLKMH, byte[] IKKKILCDMMB, byte[] MLLHENCNAMI, string LILLFLCEFNK)  [RVA 0x32EBD48]
// IBMPAMLCCHF$$NLDHOAPBNJO @ RVA 0x32EBD48

void IBMPAMLCCHF__NLDHOAPBNJO
               (System_String_o *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
               System_Byte_array *MLLHENCNAMI,System_String_o *LILLFLCEFNK,MethodInfo *method)

{
  System_Text_Encoding_o *pSVar1;
  System_Byte_array *pSVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)LILLFLCEFNK;
  pSVar1 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
  if (pSVar1 != (System_Text_Encoding_o *)0x0) {
    pSVar2 = (System_Byte_array *)
             (*(pSVar1->klass->vtable)._19_GetBytes.methodPtr)
                       (pSVar1,OCMMDIHLKMH,(pSVar1->klass->vtable)._19_GetBytes.method);
    pSVar2 = IBMPAMLCCHF__ALKNAMLGEJM(pSVar2,IKKKILCDMMB,MLLHENCNAMI,method_00);
    NEHNBJKKABI__IGOPCLNJIGA(LILLFLCEFNK,pSVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32EBDB0]
// IBMPAMLCCHF$$.ctor @ RVA 0x32EBDB0

void IBMPAMLCCHF___ctor(IBMPAMLCCHF_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

