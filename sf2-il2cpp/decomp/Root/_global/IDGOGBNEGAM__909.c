// TypeDefIndex 909
// Namespace: 
// public class IDGOGBNEGAM : DPDNFOCBGGD
// Fields:
//   public int ONBCBEKBJCG; // 0x14
//   public IOGEICNIGGH HHJIJKJCEOF; // 0x18
//   public string JIJLBFGKNJK; // 0x20
//   public int HHOPNIKFJNE; // 0x28
//   public int NEKMDLBLENC; // 0x2C
//   public KCFAKHLDKJM LLNMDPPIGLF; // 0x30
//   public long HLFBMBHOPMI; // 0x38
//   public bool KIKDLMBJEEG; // 0x40
//   public bool PGDEOIHFHCI; // 0x41
//   public bool GDFDBJCDBJE; // 0x42
//   public bool KGCEKHGKGFP; // 0x43

// ===== public static string NPAOCMPEILP(KCFAKHLDKJM EFJNKONCKNF)  [RVA 0x3099D18]
// IDGOGBNEGAM$$NPAOCMPEILP @ RVA 0x3099D18

System_String_o * IDGOGBNEGAM__NPAOCMPEILP(int32_t EFJNKONCKNF,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04566108 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11400/*"RoleNovice"*/);
    FUN_01bab630(&StringLiteral_11398/*"RoleAdepth"*/);
    FUN_01bab630(&StringLiteral_11401/*"RoleOfficer"*/);
    FUN_01bab630(&StringLiteral_11399/*"RoleLeader"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566108 = 1;
  }
  if (EFJNKONCKNF - 1U < 4) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_11399/*"RoleLeader"*/_03fc63d8)[(int)(EFJNKONCKNF - 1U)];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public static string ONLBMMFEPOI(KCFAKHLDKJM EFJNKONCKNF)  [RVA 0x3099DA8]
// IDGOGBNEGAM$$ONLBMMFEPOI @ RVA 0x3099DA8

System_String_o * IDGOGBNEGAM__ONLBMMFEPOI(int32_t EFJNKONCKNF,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  long lVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  long lVar6;
  Il2CppClass *pIVar7;
  ulong uVar8;
  int32_t *piVar9;
  undefined8 uVar10;
  
  if ((DAT_04566109 & 1) == 0) {
    FUN_01bab630(&Method_System_Array_Empty<string>__);
    FUN_01bab630(&BLEFOFGCKEF_TypeInfo);
    FUN_01bab630(&Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
    DAT_04566109 = 1;
  }
  pIVar2 = EHOFKBDKGBK<object,_object>__AIHNLLGNBLC
                     (Method_EHOFKBDKGBK<FDJKKAFIEFB,_BLEFOFGCKEF>_AIHNLLGNBLC__);
  pSVar3 = IDGOGBNEGAM__NPAOCMPEILP(EFJNKONCKNF,method_00);
  lVar4 = Method_System_Array_Empty<string>__;
  lVar6 = *(long *)(Method_System_Array_Empty<string>__ + 0x38);
  if (lVar6 == 0) {
    FUN_01b8167c(Method_System_Array_Empty<string>__);
    lVar6 = *(long *)(lVar4 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_01b81620();
  }
  if (*(int *)(lVar6 + 0xe0) == 0) {
    thunk_FUN_01ba7564();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_01b81620();
  }
  if (pIVar2 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pIVar7 = pIVar2->klass;
  uVar10 = **(undefined8 **)(lVar4 + 0xb8);
  uVar1._0_1_ = (pIVar7->_2).rank;
  uVar1._1_1_ = (pIVar7->_2).minimumAlignment;
  uVar8 = (ulong)uVar1;
  if (uVar8 != 0) {
    piVar9 = &((pIVar7->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar9 + -2))->interfaceType ==
          (Il2CppClass *)BLEFOFGCKEF_TypeInfo) {
        pVVar5 = pIVar7->vtable + (*piVar9 + 0xc);
        goto LAB_03199ec4;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pIVar2,BLEFOFGCKEF_TypeInfo,0xc);
LAB_03199ec4:
                    /* WARNING: Could not recover jumptable at 0x03199ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pSVar3 = (System_String_o *)(*pVVar5->methodPtr)(pIVar2,pSVar3,uVar10,pVVar5->method);
  return pSVar3;
}


// ===== public void .ctor(MGDJPGGPDJI DKMMBMBMJBO)  [RVA 0x3099EE8]
// IDGOGBNEGAM$$.ctor @ RVA 0x3099EE8

void IDGOGBNEGAM___ctor(IDGOGBNEGAM_o *__this,MGDJPGGPDJI_o *DKMMBMBMJBO,MethodInfo *method)

{
  int32_t iVar1;
  System_String_o **ppSVar2;
  
  DPDNFOCBGGD___ctor((DPDNFOCBGGD_o *)__this,0,(MethodInfo *)0x0);
  (__this->fields).GDFDBJCDBJE = false;
  (__this->fields).HHJIJKJCEOF = 1;
  (__this->fields).KIKDLMBJEEG = false;
  (__this->fields).PGDEOIHFHCI = false;
  if (DKMMBMBMJBO != (MGDJPGGPDJI_o *)0x0) {
    ppSVar2 = &(__this->fields).JIJLBFGKNJK;
    *ppSVar2 = (DKMMBMBMJBO->fields).LLBEKLPKDHK;
    thunk_FUN_01c20e04(ppSVar2);
    (__this->fields).HHOPNIKFJNE = (DKMMBMBMJBO->fields).NLLKMEMKBAF;
    (__this->fields).HLFBMBHOPMI = (DKMMBMBMJBO->fields).ANAJGHJEEOC;
    iVar1 = (DKMMBMBMJBO->fields).BDPMJNBHKIJ;
    (__this->fields).NEKMDLBLENC = 0;
    (__this->fields).LLNMDPPIGLF = iVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3099F50]
// IDGOGBNEGAM$$.ctor @ RVA 0x3099F50

void IDGOGBNEGAM___ctor(IDGOGBNEGAM_o *__this,MethodInfo *method)

{
  DPDNFOCBGGD___ctor((DPDNFOCBGGD_o *)__this,0,(MethodInfo *)0x0);
  (__this->fields).HHJIJKJCEOF = 1;
  return;
}


// ===== public static int HCPAHFDDCHM(IDGOGBNEGAM LFALCONFCGH, IDGOGBNEGAM NMGJAKHNCND)  [RVA 0x3099F74]
// IDGOGBNEGAM$$HCPAHFDDCHM @ RVA 0x3099F74

int32_t IDGOGBNEGAM__HCPAHFDDCHM
                  (IDGOGBNEGAM_o *LFALCONFCGH,IDGOGBNEGAM_o *NMGJAKHNCND,MethodInfo *method)

{
  if ((NMGJAKHNCND != (IDGOGBNEGAM_o *)0x0) && (LFALCONFCGH != (IDGOGBNEGAM_o *)0x0)) {
    return (NMGJAKHNCND->fields).HHOPNIKFJNE - (LFALCONFCGH->fields).HHOPNIKFJNE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

