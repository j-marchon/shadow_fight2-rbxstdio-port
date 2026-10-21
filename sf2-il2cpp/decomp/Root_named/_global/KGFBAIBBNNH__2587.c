// TypeDefIndex 2587
// Namespace: 
// public static class KGFBAIBBNNH
// Fields:
//   public const char DHELCIEGOOE = '\x5e';
//   public const string ANAGDCJABFI = "{br}";
//   private static readonly StringBuilder APNHHNPLIHP; // 0x0
//   private static readonly StringBuilder CGJODOKBIBD; // 0x8

// ===== private static bool JLOAEMBJNKP()  [RVA 0x33A35A0]
// KGFBAIBBNNH$$JLOAEMBJNKP @ RVA 0x33A35A0

bool KGFBAIBBNNH__JLOAEMBJNKP(MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  return bVar1;
}


// ===== private static void .cctor()  [RVA 0x33A35A8]
// KGFBAIBBNNH$$.cctor @ RVA 0x33A35A8

void KGFBAIBBNNH___cctor(MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_Text_StringBuilder_o **ppSVar2;
  
                    /* try { // try from 034a35b0 to 035a35e7 has its CatchHandler @ 034a3744 */
  if ((DAT_04567cd1 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 034a3560 with catch @ 034a35e8
                       try { // try from 034a35e8 to 035a3627 has its CatchHandler @ 034a32b4 */
    DAT_04567cd1 = 1;
  }
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* catch() { ... } // from try @ 034a3360 with catch @ 034a35f8 */
                    /* catch() { ... } // from try @ 034a3340 with catch @ 034a35fc */
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a3438 with catch @ 034a3600
                       catch() { ... } // from try @ 034a3524 with catch @ 034a3600 */
                    /* catch() { ... } // from try @ 034a33c8 with catch @ 034a360c
                       catch() { ... } // from try @ 034a352c with catch @ 034a360c */
  KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP = pSVar1;
  thunk_FUN_01c20e04(KGFBAIBBNNH_TypeInfo->static_fields,pSVar1);
  pSVar1 = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
                    /* try { // try from 034a3628 to 035a362b has its CatchHandler @ 034a36c0 */
  System_Text_StringBuilder___ctor(pSVar1,(MethodInfo *)0x0);
  ppSVar2 = &KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  return;
}


// ===== private static string BIIMJHGLNGO(string IMMNELPBGIF, bool PFNHAKDMNOF)  [RVA 0x33A364C]
// KGFBAIBBNNH$$BIIMJHGLNGO @ RVA 0x33A364C

System_String_o *
KGFBAIBBNNH__BIIMJHGLNGO(System_String_o *IMMNELPBGIF,bool PFNHAKDMNOF,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  long lVar3;
  VirtualInvokeData *pVVar4;
  System_String_o *pSVar5;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
                    /* try { // try from 034a3668 to 035a368f has its CatchHandler @ 034a3744 */
  if ((DAT_04567cd2 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
                    /* try { // try from 034a3690 to 035a36a7 has its CatchHandler @ 034a32b4 */
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567cd2 = 1;
  }
                    /* try { // try from 034a36a8 to 035a36ab has its CatchHandler @ 034a36d0 */
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  lVar3 = Method_System_Array_Empty<string>__;
                    /* try { // try from 034a36b8 to 035a372f has its CatchHandler @ 034a3744 */
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
                    /* catch() { ... } // from try @ 034a3628 with catch @ 034a36c0 */
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar3 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
                    /* catch() { ... } // from try @ 034a36a8 with catch @ 034a36d0 */
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_01b81620();
  }
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar7 = pIVar2->klass;
    uVar10 = **(undefined8 **)(lVar3 + 0xb8);
    uVar1._0_1_ = (pIVar7->_2).rank;
    uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
    uVar8 = (ulong)uVar1;
    if (uVar8 != 0) {
      piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 034a3730 to 035a373b has its CatchHandler @ 034a32b4 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
            (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
          pVVar4 = pIVar7->vtable + (*piVar9 + 0xc);
          goto LAB_034a3760;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
                    /* try { // try from 034a373c to 035a3743 has its CatchHandler @ 034a3744 */
      } while (uVar8 != 0);
    }
                    /* catch() { ... } // from try @ 034a35b0 with catch @ 034a3744
                       catch() { ... } // from try @ 034a3668 with catch @ 034a3744
                       catch() { ... } // from try @ 034a36b8 with catch @ 034a3744
                       catch() { ... } // from try @ 034a373c with catch @ 034a3744 */
                    /* try { // try from 034a3748 to 035a37d7 has its CatchHandler @ 034a3748
                       catch() { ... } // from try @ 034a3748 with catch @ 034a3748
                       catch() { ... } // from try @ 034a38e0 with catch @ 034a3748
                       catch() { ... } // from try @ 034a397c with catch @ 034a3748
                       catch() { ... } // from try @ 034a3a20 with catch @ 034a3748
                       catch() { ... } // from try @ 034a3ae0 with catch @ 034a3748
                       catch() { ... } // from try @ 034a3b7c with catch @ 034a3748 */
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_034a3760:
    pSVar5 = (System_String_o *)(*pVVar4->methodPtr)(pIVar2,IMMNELPBGIF,uVar10,pVVar4->method);
    if (!PFNHAKDMNOF) {
      return pSVar5;
    }
    if (pSVar5 != (System_String_o *)0x0) {
      pSVar5 = System_String__ToUpper(pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static string ENBCPBBNFDG(string IMMNELPBGIF, bool PFNHAKDMNOF)  [RVA 0x33A37A4]
// KGFBAIBBNNH$$ENBCPBBNFDG @ RVA 0x33A37A4

System_String_o *
KGFBAIBBNNH__ENBCPBBNFDG(System_String_o *IMMNELPBGIF,bool PFNHAKDMNOF,MethodInfo *method)

{
  int32_t value;
  bool bVar1;
  uint16_t value_00;
  System_Text_StringBuilder_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  int index;
  System_Text_StringBuilder_o *__this;
  short sVar4;
  
  if ((DAT_04567cd3 & 1) == 0) {
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
                    /* try { // try from 034a37d8 to 035a37eb has its CatchHandler @ 034a3a40 */
    FUN_01bab630(&StringLiteral_47/*"\n"*/);
    FUN_01bab630(&StringLiteral_22469/*"{br}"*/);
    DAT_04567cd3 = 1;
  }
                    /* try { // try from 034a37f8 to 035a380b has its CatchHandler @ 034a3a30 */
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IMMNELPBGIF,(MethodInfo *)0x0);
  if (bVar1) {
                    /* catch() { ... } // from try @ 034a3854 with catch @ 034a3a50
                       catch() { ... } // from try @ 034a3974 with catch @ 034a3a50 */
    return IMMNELPBGIF;
  }
  if (IMMNELPBGIF != (System_String_o *)0x0) {
                    /* try { // try from 034a380c to 035a3817 has its CatchHandler @ 034a397c */
    bVar1 = System_String__Contains(IMMNELPBGIF,0x5e,(MethodInfo *)0x0);
    if (!bVar1) {
      return IMMNELPBGIF;
    }
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
                    /* try { // try from 034a3854 to 035a387b has its CatchHandler @ 034a3a50 */
      pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
      if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
        pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
        if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
          value = (IMMNELPBGIF->fields)._stringLength;
          __this = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
          System_Text_StringBuilder__set_Capacity(pSVar2,value,(MethodInfo *)0x0);
          if (__this != (System_Text_StringBuilder_o *)0x0) {
            System_Text_StringBuilder__set_Capacity(__this,value,(MethodInfo *)0x0);
            if (0 < (IMMNELPBGIF->fields)._stringLength) {
              sVar4 = 0;
              index = 0;
              do {
                    /* try { // try from 034a38b8 to 035a38df has its CatchHandler @ 034a3af0 */
                method_00 = (MethodInfo *)0x0;
                value_00 = System_String__get_Chars(IMMNELPBGIF,index,(MethodInfo *)0x0);
                if (value_00 == 0x5e) {
                  sVar4 = sVar4 + 1;
                }
                if (sVar4 == 2) {
                  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    thunk_FUN_01ba7564();
                  }
                  pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
                  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                  pSVar3 = (System_String_o *)
                           (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                                     (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
                  pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
                  pSVar3 = KGFBAIBBNNH__BIIMJHGLNGO(pSVar3,PFNHAKDMNOF,method_00);
                  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                    /* try { // try from 034a396c to 035a3973 has its CatchHandler @ 034a3af0 */
                  System_Text_StringBuilder__Append(pSVar2,pSVar3,(MethodInfo *)0x0);
                    /* try { // try from 034a3974 to 035a397b has its CatchHandler @ 034a3a50 */
                  pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
                    /* catch() { ... } // from try @ 034a380c with catch @ 034a397c
                       try { // try from 034a397c to 035a399b has its CatchHandler @ 034a3748 */
                  if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                  System_Text_StringBuilder__Clear(pSVar2,(MethodInfo *)0x0);
LAB_034a3988:
                  sVar4 = 0;
                }
                else {
                    /* try { // try from 034a38e0 to 035a396b has its CatchHandler @ 034a3748 */
                  if (sVar4 == 1) {
                    if (value_00 != 0x5e) {
                    /* try { // try from 034a399c to 035a399f has its CatchHandler @ 034a3a20 */
                      if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                        thunk_FUN_01ba7564();
                      }
                      pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->APNHHNPLIHP;
                      if (pSVar2 == (System_Text_StringBuilder_o *)0x0) goto LAB_034a3a60;
                      System_Text_StringBuilder__Append(pSVar2,value_00,(MethodInfo *)0x0);
                    }
                    sVar4 = 1;
                  }
                  else if (sVar4 == 0) {
                    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
                    if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                      System_Text_StringBuilder__Append(pSVar2,value_00,(MethodInfo *)0x0);
                      goto LAB_034a3988;
                    }
                    goto LAB_034a3a60;
                  }
                }
                index = index + 1;
              } while (index < (IMMNELPBGIF->fields)._stringLength);
            }
            if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034a39e8 to 035a3a1f has its CatchHandler @ 034a3b90 */
              thunk_FUN_01ba7564();
            }
            pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
            if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
              System_Text_StringBuilder__Replace
                        (pSVar2,StringLiteral_22469/*"{br}"*/,StringLiteral_47/*"\n"*/,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a399c with catch @ 034a3a20
                       try { // try from 034a3a20 to 035a3a6b has its CatchHandler @ 034a3748 */
              pSVar2 = KGFBAIBBNNH_TypeInfo->static_fields->CGJODOKBIBD;
              if (pSVar2 != (System_Text_StringBuilder_o *)0x0) {
                    /* catch() { ... } // from try @ 034a37f8 with catch @ 034a3a30 */
                    /* catch() { ... } // from try @ 034a37d8 with catch @ 034a3a40 */
                    /* WARNING: Could not recover jumptable at 0x034a3a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                pSVar3 = (System_String_o *)
                         (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                                   (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
                return pSVar3;
              }
            }
          }
        }
      }
    }
  }
LAB_034a3a60:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static bool EPNEGIJAJHI(CHPMAHFBEJC BMLIMNBPGIJ, out Font HPACPFLKHPK)  [RVA 0x33A3A64]
// KGFBAIBBNNH$$EPNEGIJAJHI @ RVA 0x33A3A64

bool KGFBAIBBNNH__EPNEGIJAJHI
               (int32_t BMLIMNBPGIJ,UnityEngine_Font_o **HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Font_o *pUVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  KGFBAIBBNNH_PMECFLPOKLN_o local_28 [2];
  
                    /* try { // try from 034a3a6c to 035a3a6f has its CatchHandler @ 034a3ae0 */
  if ((DAT_04567cd4 & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd4 = 1;
  }
                    /* try { // try from 034a3aac to 035a3adf has its CatchHandler @ 034a3b90 */
  local_28[0].fields.fontType =
       (KGFBAIBBNNH_PMECFLPOKLN_Fields)(KGFBAIBBNNH_PMECFLPOKLN_Fields)BMLIMNBPGIJ;
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  if ((bVar1) ||
     (bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), !bVar1)) {
    *HPACPFLKHPK = (UnityEngine_Font_o *)0x0;
                    /* catch() { ... } // from try @ 034a3b0c with catch @ 034a3b1c */
    thunk_FUN_01c20e04(HPACPFLKHPK,0);
    bVar1 = false;
  }
  else {
                    /* catch() { ... } // from try @ 034a3a6c with catch @ 034a3ae0
                       try { // try from 034a3ae0 to 035a3b0b has its CatchHandler @ 034a3748 */
    method_00 = extraout_x1;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
                    /* catch() { ... } // from try @ 034a38b8 with catch @ 034a3af0
                       catch() { ... } // from try @ 034a396c with catch @ 034a3af0 */
    pUVar2 = KGFBAIBBNNH__NMLDADBENEN(local_28,method_00);
    *HPACPFLKHPK = pUVar2;
    thunk_FUN_01c20e04(HPACPFLKHPK,pUVar2);
    bVar1 = true;
                    /* try { // try from 034a3b0c to 035a3b0f has its CatchHandler @ 034a3b1c */
  }
  return bVar1;
}


// ===== internal static Font NMLDADBENEN(ref KGFBAIBBNNH.PMECFLPOKLN )  [RVA 0x33A3B34]
// KGFBAIBBNNH$$NMLDADBENEN @ RVA 0x33A3B34

UnityEngine_Font_o * KGFBAIBBNNH__NMLDADBENEN(KGFBAIBBNNH_PMECFLPOKLN_o *param_1,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  UnityEngine_Font_o *pUVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  int iVar10;
  ulong uVar11;
  int32_t *piVar12;
  
  if ((DAT_04567cd5 & 1) == 0) {
                    /* try { // try from 034a3b54 to 035a3b7b has its CatchHandler @ 034a3b90 */
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567cd5 = 1;
  }
  iVar10 = (param_1->fields).fontType;
  if (iVar10 == 2) {
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a3d24;
                    /* try { // try from 034a3c48 to 035a3c5b has its CatchHandler @ 034a3e80 */
    pIVar9 = pIVar5->klass;
    uVar3._0_1_ = (pIVar9->_2).rank;
    uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
    uVar11 = (ulong)uVar3;
                    /* try { // try from 034a3c5c to 035a3c67 has its CatchHandler @ 034a3dcc */
    if (uVar11 != 0) {
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          iVar10 = *piVar12 + 4;
          goto LAB_034a3d08;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    uVar8 = 4;
  }
  else {
                    /* try { // try from 034a3b7c to 035a3b87 has its CatchHandler @ 034a3748 */
    if (iVar10 == 1) {
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a3d24;
      pIVar9 = pIVar5->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            iVar10 = *piVar12 + 10;
            goto LAB_034a3d08;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
                    /* try { // try from 034a3c24 to 035a3c3b has its CatchHandler @ 034a3e90 */
        } while (uVar11 != 0);
      }
      uVar8 = 10;
    }
    else {
      if (iVar10 == 0) {
                    /* try { // try from 034a3b88 to 035a3b8f has its CatchHandler @ 034a3b90 */
                    /* catch() { ... } // from try @ 034a39e8 with catch @ 034a3b90
                       catch() { ... } // from try @ 034a3aac with catch @ 034a3b90
                       catch() { ... } // from try @ 034a3b54 with catch @ 034a3b90
                       catch() { ... } // from try @ 034a3b88 with catch @ 034a3b90 */
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* try { // try from 034a3b94 to 035a3c23 has its CatchHandler @ 034a3b94
                       catch() { ... } // from try @ 034a3b94 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3d30 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3dcc with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3e70 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3f30 with catch @ 034a3b94
                       catch() { ... } // from try @ 034a3fcc with catch @ 034a3b94 */
        if (pIVar5 == (Il2CppObject *)0x0) {
LAB_034a3d24:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pIVar9 = pIVar5->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a3ce8;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      else {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a3d24;
        pIVar9 = pIVar5->klass;
        uVar4._0_1_ = (pIVar9->_2).rank;
        uVar4._1_1_ = (pIVar9->_2).minimumAlignment;
                    /* try { // try from 034a3ca4 to 035a3ccb has its CatchHandler @ 034a3ea0 */
        uVar11 = (ulong)uVar4;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a3ce8;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      uVar8 = 1;
    }
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,DFLJPJMIMHI_TypeInfo,uVar8);
  goto LAB_034a3d10;
LAB_034a3ce8:
  iVar10 = *piVar12 + 1;
LAB_034a3d08:
                    /* try { // try from 034a3d08 to 035a3d2f has its CatchHandler @ 034a3f40 */
  pVVar6 = pIVar9->vtable + iVar10;
LAB_034a3d10:
                    /* WARNING: Could not recover jumptable at 0x034a3d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar7 = (UnityEngine_Font_o *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return pUVar7;
}


// ===== public static bool PJJEHJMAIIH(bool ODGMEOCIGGA, float COIHIJIIEAA, out float HPACPFLKHPK)  [RVA 0x33A3D28]
// KGFBAIBBNNH$$PJJEHJMAIIH @ RVA 0x33A3D28

bool KGFBAIBBNNH__PJJEHJMAIIH
               (bool ODGMEOCIGGA,float COIHIJIIEAA,float *HPACPFLKHPK,MethodInfo *method)

{
  float *pfVar1;
  ushort uVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  VirtualInvokeData *pVVar5;
  Il2CppClass *pIVar6;
  ulong uVar7;
  int32_t *piVar8;
  float *pfVar9;
  float fVar10;
  
                    /* try { // try from 034a3d30 to 035a3dbb has its CatchHandler @ 034a3b94 */
  if ((DAT_04567cd6 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd6 = 1;
  }
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar3 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  if (bVar3) {
    *HPACPFLKHPK = 0.0;
  }
  else {
    pfVar1 = HPACPFLKHPK;
    pfVar9 = (float *)0x0;
    if (!ODGMEOCIGGA) {
                    /* try { // try from 034a3dbc to 035a3dc3 has its CatchHandler @ 034a3f40 */
      pfVar1 = (float *)0x0;
      pfVar9 = HPACPFLKHPK;
    }
                    /* try { // try from 034a3dc4 to 035a3dcb has its CatchHandler @ 034a3ea0 */
    pIVar4 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch() { ... } // from try @ 034a3c5c with catch @ 034a3dcc
                       try { // try from 034a3dcc to 035a3deb has its CatchHandler @ 034a3b94 */
    pIVar6 = pIVar4->klass;
    uVar2._0_1_ = (pIVar6->_2).rank;
    uVar2._1_1_ = (pIVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar2;
    if (ODGMEOCIGGA) {
      if (uVar2 != 0) {
                    /* try { // try from 034a3dec to 035a3def has its CatchHandler @ 034a3e70 */
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            pVVar5 = pIVar6->vtable + (*piVar8 + 5);
            goto LAB_034a3e60;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,DFLJPJMIMHI_TypeInfo,5);
LAB_034a3e60:
      fVar10 = (float)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
      fVar10 = fVar10 * COIHIJIIEAA;
      pfVar9 = pfVar1;
                    /* catch() { ... } // from try @ 034a3dec with catch @ 034a3e70
                       try { // try from 034a3e70 to 035a3ebb has its CatchHandler @ 034a3b94 */
    }
    else {
      if (uVar2 != 0) {
        piVar8 = &((pIVar6->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    /* catch() { ... } // from try @ 034a3c48 with catch @ 034a3e80 */
            pVVar5 = pIVar6->vtable + (*piVar8 + 8);
            goto LAB_034a3e88;
          }
          uVar7 = uVar7 - 1;
                    /* try { // try from 034a3e38 to 035a3e6f has its CatchHandler @ 034a3fe0 */
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar4,DFLJPJMIMHI_TypeInfo,8);
LAB_034a3e88:
                    /* catch() { ... } // from try @ 034a3c24 with catch @ 034a3e90 */
      fVar10 = (float)(*pVVar5->methodPtr)(pIVar4,pVVar5->method);
    }
    *pfVar9 = fVar10;
  }
                    /* catch() { ... } // from try @ 034a3ca4 with catch @ 034a3ea0
                       catch() { ... } // from try @ 034a3dc4 with catch @ 034a3ea0 */
  return (bool)(~bVar3 & 1);
}


// ===== internal static TMP_FontAsset AKNJNKNGCDI(ref KGFBAIBBNNH.COLDHKDCOAB )  [RVA 0x33A3EB8]
// KGFBAIBBNNH$$AKNJNKNGCDI @ RVA 0x33A3EB8

TMPro_TMP_FontAsset_o *
KGFBAIBBNNH__AKNJNKNGCDI(KGFBAIBBNNH_COLDHKDCOAB_o *param_1,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  Il2CppObject *pIVar5;
  VirtualInvokeData *pVVar6;
  TMPro_TMP_FontAsset_o *pTVar7;
  undefined8 uVar8;
  Il2CppClass *pIVar9;
  int iVar10;
  ulong uVar11;
  int32_t *piVar12;
  
                    /* try { // try from 034a3ebc to 035a3ebf has its CatchHandler @ 034a3f30 */
  if ((DAT_04567cd7 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04567cd7 = 1;
  }
  iVar10 = (param_1->fields).fontType;
  if (iVar10 == 2) {
    pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a40a8;
                    /* try { // try from 034a3fcc to 035a3fd7 has its CatchHandler @ 034a3b94 */
    pIVar9 = pIVar5->klass;
    uVar3._0_1_ = (pIVar9->_2).rank;
    uVar3._1_1_ = (pIVar9->_2).minimumAlignment;
                    /* try { // try from 034a3fd8 to 035a3fdf has its CatchHandler @ 034a3fe0 */
    uVar11 = (ulong)uVar3;
                    /* catch() { ... } // from try @ 034a3e38 with catch @ 034a3fe0
                       catch() { ... } // from try @ 034a3efc with catch @ 034a3fe0
                       catch() { ... } // from try @ 034a3fa4 with catch @ 034a3fe0
                       catch() { ... } // from try @ 034a3fd8 with catch @ 034a3fe0 */
    if (uVar11 != 0) {
                    /* try { // try from 034a3fe4 to 035a4083 has its CatchHandler @ 034a3fe4
                       catch() { ... } // from try @ 034a3fe4 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a41d8 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a4288 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a4338 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a43e0 with catch @ 034a3fe4
                       catch() { ... } // from try @ 034a4480 with catch @ 034a3fe4 */
      piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
                    /* try { // try from 034a4084 to 035a409b has its CatchHandler @ 034a434c */
          iVar10 = *piVar12 + 2;
          goto LAB_034a408c;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    uVar8 = 2;
  }
  else {
                    /* try { // try from 034a3efc to 035a3f2f has its CatchHandler @ 034a3fe0 */
    if (iVar10 == 1) {
                    /* try { // try from 034a3f5c to 035a3f5f has its CatchHandler @ 034a3f6c */
      pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                         (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
                    /* catch() { ... } // from try @ 034a3f5c with catch @ 034a3f6c */
      if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a40a8;
      pIVar9 = pIVar5->klass;
      uVar2._0_1_ = (pIVar9->_2).rank;
      uVar2._1_1_ = (pIVar9->_2).minimumAlignment;
      uVar11 = (ulong)uVar2;
      if (uVar11 != 0) {
        piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
              (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
            iVar10 = *piVar12 + 0xc;
            goto LAB_034a408c;
          }
          uVar11 = uVar11 - 1;
                    /* try { // try from 034a3fa4 to 035a3fcb has its CatchHandler @ 034a3fe0 */
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      uVar8 = 0xc;
    }
    else {
      if (iVar10 == 0) {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) {
LAB_034a40a8:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 034a40a8 to 035a40bf has its CatchHandler @ 034a4348 */
          FUN_01bab8c8();
        }
        pIVar9 = pIVar5->klass;
        uVar1._0_1_ = (pIVar9->_2).rank;
        uVar1._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 034a3ebc with catch @ 034a3f30
                       try { // try from 034a3f30 to 035a3f5b has its CatchHandler @ 034a3b94 */
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
                    /* catch() { ... } // from try @ 034a3d08 with catch @ 034a3f40
                       catch() { ... } // from try @ 034a3dbc with catch @ 034a3f40 */
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a406c;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      else {
        pIVar5 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                           (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
        if (pIVar5 == (Il2CppObject *)0x0) goto LAB_034a40a8;
        pIVar9 = pIVar5->klass;
        uVar4._0_1_ = (pIVar9->_2).rank;
        uVar4._1_1_ = (pIVar9->_2).minimumAlignment;
        uVar11 = (ulong)uVar4;
        if (uVar11 != 0) {
          piVar12 = &((pIVar9->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar12 + -2))->interfaceType ==
                (Il2CppClass *)DFLJPJMIMHI_TypeInfo) goto LAB_034a406c;
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
      }
      uVar8 = 3;
    }
  }
  pVVar6 = (VirtualInvokeData *)FUN_01b81914(pIVar5,DFLJPJMIMHI_TypeInfo,uVar8);
  goto LAB_034a4094;
LAB_034a406c:
  iVar10 = *piVar12 + 3;
LAB_034a408c:
  pVVar6 = pIVar9->vtable + iVar10;
LAB_034a4094:
                    /* WARNING: Could not recover jumptable at 0x034a40a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar7 = (TMPro_TMP_FontAsset_o *)(*pVVar6->methodPtr)(pIVar5,pVVar6->method);
  return pTVar7;
}


// ===== public static bool MAJPEEKDPJJ(int KFOONNANLKN, out float HPACPFLKHPK)  [RVA 0x33A40AC]
// KGFBAIBBNNH$$MAJPEEKDPJJ @ RVA 0x33A40AC

bool KGFBAIBBNNH__MAJPEEKDPJJ(int32_t KFOONNANLKN,float *HPACPFLKHPK,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  VirtualInvokeData *pVVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  float fVar8;
  
                    /* try { // try from 034a40d0 to 035a40db has its CatchHandler @ 034a4290 */
  if ((DAT_04567cd8 & 1) == 0) {
    FUN_01bab630(&DFLJPJMIMHI_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd8 = 1;
  }
                    /* try { // try from 034a4118 to 035a413f has its CatchHandler @ 034a435c */
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar2 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  fVar8 = 0.0;
  if ((bVar2) ||
     (bVar2 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), !bVar2)) {
    bVar2 = false;
  }
  else {
    pIVar3 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                       (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    if (pIVar3 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = pIVar3->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)DFLJPJMIMHI_TypeInfo) {
          pVVar4 = pIVar5->vtable + (*piVar7 + 9);
          goto LAB_034a41bc;
        }
                    /* try { // try from 034a4188 to 035a41af has its CatchHandler @ 034a4350 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(pIVar3,DFLJPJMIMHI_TypeInfo,9);
LAB_034a41bc:
    fVar8 = (float)(*pVVar4->methodPtr)(pIVar3,pVVar4->method);
    fVar8 = fVar8 * (float)KFOONNANLKN;
                    /* try { // try from 034a41d0 to 035a41d7 has its CatchHandler @ 034a4288 */
    bVar2 = true;
  }
  *HPACPFLKHPK = fVar8;
                    /* try { // try from 034a41d8 to 035a426f has its CatchHandler @ 034a3fe4 */
  return bVar2;
}


// ===== public static string KKFDNDIPEHH(string IMMNELPBGIF, bool PFNHAKDMNOF)  [RVA 0x33A41F0]
// KGFBAIBBNNH$$KKFDNDIPEHH @ RVA 0x33A41F0

System_String_o *
KGFBAIBBNNH__KKFDNDIPEHH(System_String_o *IMMNELPBGIF,bool PFNHAKDMNOF,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  
  if ((DAT_04567cd9 & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cd9 = 1;
  }
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                      (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    if (bVar1) {
      if (IMMNELPBGIF != (System_String_o *)0x0) {
                    /* try { // try from 034a4270 to 035a4273 has its CatchHandler @ 034a4290 */
                    /* try { // try from 034a4274 to 035a427b has its CatchHandler @ 034a4350 */
        method_00 = (MethodInfo *)0x0;
        bVar1 = System_String__Contains(IMMNELPBGIF,0x5e,(MethodInfo *)0x0);
                    /* try { // try from 034a427c to 035a4283 has its CatchHandler @ 034a435c */
                    /* try { // try from 034a4284 to 035a4287 has its CatchHandler @ 034a428c */
                    /* catch() { ... } // from try @ 034a41d0 with catch @ 034a4288
                       try { // try from 034a4288 to 035a42af has its CatchHandler @ 034a3fe4 */
        if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034a4284 with catch @ 034a428c */
                    /* catch() { ... } // from try @ 034a40d0 with catch @ 034a4290
                       catch() { ... } // from try @ 034a4270 with catch @ 034a4290 */
          thunk_FUN_01ba7564(KGFBAIBBNNH_TypeInfo);
        }
        if (bVar1) {
          pSVar2 = KGFBAIBBNNH__ENBCPBBNFDG(IMMNELPBGIF,PFNHAKDMNOF,method_00);
        }
        else {
          pSVar2 = KGFBAIBBNNH__BIIMJHGLNGO(IMMNELPBGIF,PFNHAKDMNOF,method_00);
        }
        if (pSVar2 != (System_String_o *)0x0) {
          pSVar2 = System_String__TrimStart(pSVar2,0x20,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 034a42b0 to 035a42b3 has its CatchHandler @ 034a4338 */
  return IMMNELPBGIF;
}


// ===== public static bool HLFAHBDLOHL(CHPMAHFBEJC BMLIMNBPGIJ, out TMP_FontAsset HPACPFLKHPK)  [RVA 0x33A42E0]
// KGFBAIBBNNH$$HLFAHBDLOHL @ RVA 0x33A42E0

bool KGFBAIBBNNH__HLFAHBDLOHL
               (int32_t BMLIMNBPGIJ,TMPro_TMP_FontAsset_o **HPACPFLKHPK,MethodInfo *method)

{
  bool bVar1;
  TMPro_TMP_FontAsset_o *pTVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  KGFBAIBBNNH_COLDHKDCOAB_o local_28 [2];
  
                    /* try { // try from 034a4300 to 035a4337 has its CatchHandler @ 034a4494 */
  if ((DAT_04567cda & 1) == 0) {
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__);
    FUN_01bab630(&KGFBAIBBNNH_TypeInfo);
    DAT_04567cda = 1;
  }
  local_28[0].fields.fontType =
       (KGFBAIBBNNH_COLDHKDCOAB_Fields)(KGFBAIBBNNH_COLDHKDCOAB_Fields)BMLIMNBPGIJ;
  if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 034a42b0 with catch @ 034a4338
                       try { // try from 034a4338 to 035a4377 has its CatchHandler @ 034a3fe4 */
    thunk_FUN_01ba7564();
  }
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 034a40a8 with catch @ 034a4348 */
                    /* catch() { ... } // from try @ 034a4084 with catch @ 034a434c */
                    /* catch() { ... } // from try @ 034a4188 with catch @ 034a4350
                       catch() { ... } // from try @ 034a4274 with catch @ 034a4350 */
  if ((bVar1) ||
     (bVar1 = EHOFKBDKGBK<object,_object>__PKGCFMKHOKN
                        (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_PKGCFMKHOKN__), !bVar1)) {
    *HPACPFLKHPK = (TMPro_TMP_FontAsset_o *)0x0;
    thunk_FUN_01c20e04(HPACPFLKHPK,0);
    bVar1 = false;
  }
  else {
                    /* catch() { ... } // from try @ 034a4118 with catch @ 034a435c
                       catch() { ... } // from try @ 034a427c with catch @ 034a435c */
    method_00 = extraout_x1;
    if ((KGFBAIBBNNH_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      method_00 = extraout_x1_00;
    }
    pTVar2 = KGFBAIBBNNH__AKNJNKNGCDI(local_28,method_00);
                    /* try { // try from 034a4378 to 035a437b has its CatchHandler @ 034a4410 */
    *HPACPFLKHPK = pTVar2;
    thunk_FUN_01c20e04(HPACPFLKHPK,pTVar2);
    bVar1 = true;
  }
  return bVar1;
}

