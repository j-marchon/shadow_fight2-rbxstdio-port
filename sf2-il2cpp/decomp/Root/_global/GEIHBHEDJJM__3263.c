// TypeDefIndex 3263
// Namespace: 
// public class GEIHBHEDJJM
// Fields:
//   private const string DCDECHHPKGC = "1";
//   private const string HCBCAPGPBJH = "0";
//   private bool NKMGMPKKEAA; // 0x10
//   private Nullable<ObscuredDouble> JKDNFNLGGLI; // 0x18
//   private ObscuredString PCNEDMAJMOJ; // 0x48

// ===== public void KFMNMGGDHFD(GEIHBHEDJJM JJMOKKDDOEM)  [RVA 0x351648C]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x351648C

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,GEIHBHEDJJM_o *JJMOKKDDOEM,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD;
  
  if (JJMOKKDDOEM != (GEIHBHEDJJM_o *)0x0) {
    OOGPLJBADCD = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                            ((JJMOKKDDOEM->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
    GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GPJJDLBJOAL()  [RVA 0x35165F8]
// GEIHBHEDJJM$$GPJJDLBJOAL @ RVA 0x35165F8

/* WARNING: Type propagation algorithm not settling */

void GEIHBHEDJJM__GPJJDLBJOAL(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *pSVar1;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *__this_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_50;
  
  if ((DAT_04568930 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    DAT_04568930 = 1;
  }
  local_50.fields.fakeValueActive = false;
  local_50.fields.inited = false;
  local_50.fields._34_6_ = 0;
  local_50.fields.hiddenValue = 0;
  local_50.fields.currentCryptoKey = 0;
  local_50.fields.fakeValue = 0.0;
  local_50.fields.hiddenValueOldByte8.fields.b1 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b2 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b3 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b4 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b5 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b6 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b7 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b8 = 0;
  if ((__this->fields).JKDNFNLGGLI.fields.hasValue != false) {
    pSVar1 = &(__this->fields).JKDNFNLGGLI;
    local_50.fields.fakeValueActive = (pSVar1->fields).value.fields.fakeValueActive;
    local_50.fields.inited = (pSVar1->fields).value.fields.inited;
    local_50.fields._34_6_ = *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22;
    local_50.fields.hiddenValue = (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue;
    local_50.fields.currentCryptoKey =
         (__this->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey;
    local_50.fields.fakeValue = (__this->fields).JKDNFNLGGLI.fields.value.fields.fakeValue;
    local_50.fields.hiddenValueOldByte8.fields =
         (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields;
    CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__GPJJDLBJOAL(&local_50,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).PCNEDMAJMOJ;
  if (__this_00 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredString__GPJJDLBJOAL(__this_00,(MethodInfo *)0x0);
  }
  return;
}


// ===== public void .ctor(long OOGPLJBADCD)  [RVA 0x3516684]
// GEIHBHEDJJM$$.ctor @ RVA 0x3516684

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,int64_t OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  int64_t local_18;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_18 = OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Int64__ToString((int64_t)&local_18,(MethodInfo *)0x0);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,method);
  return;
}


// ===== public void KFMNMGGDHFD(string OOGPLJBADCD)  [RVA 0x35164C4]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x35164C4

/* WARNING: Type propagation algorithm not settling */

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *pSVar1;
  bool bVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar3;
  System_String_o *ODAMFBHJKIH;
  MethodInfo *method_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar4;
  System_Nullable_ObscuredDouble__Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_60;
  undefined8 uStack_38;
  double local_28;
  
  if ((DAT_04568931 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>__ctor__);
    DAT_04568931 = 1;
  }
  local_28 = 0.0;
  pCVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                     (OOGPLJBADCD,(MethodInfo *)0x0);
  ppCVar4 = &(__this->fields).PCNEDMAJMOJ;
  *ppCVar4 = pCVar3;
  thunk_FUN_01c20e04(ppCVar4,pCVar3);
  ODAMFBHJKIH = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                          (*ppCVar4,(MethodInfo *)0x0);
  bVar2 = BKOHHDBBJML__MEEKIFOGCCL(ODAMFBHJKIH,&local_28,(MethodInfo *)0x0);
  if (bVar2) {
    CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__ALBJPLAPOBO
              (&local_60,local_28,(MethodInfo *)0x0);
    local_90.value.fields.hiddenValueOldByte8.fields.b1 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b2 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b3 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b4 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b5 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b6 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b7 = 0;
    local_90.value.fields.hiddenValueOldByte8.fields.b8 = 0;
    local_90.value.fields.hiddenValue = 0;
    local_90.value.fields.fakeValueActive = false;
    local_90.value.fields.inited = false;
    local_90.value.fields._34_6_ = 0;
    local_90.value.fields.fakeValue = 0.0;
    local_90.value.fields.currentCryptoKey = 0;
    local_90.hasValue = false;
    local_90._1_7_ = 0;
    System_Nullable<ObscuredDouble>___ctor
              ((System_Nullable_ObscuredDouble__o *)&local_90,&local_60,
               Method_System_Nullable<ObscuredDouble>__ctor__);
    bVar2 = false;
    pSVar1 = &(__this->fields).JKDNFNLGGLI;
    (pSVar1->fields).value.fields.fakeValueActive = local_90.value.fields.fakeValueActive;
    (pSVar1->fields).value.fields.inited = local_90.value.fields.inited;
    *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22 = local_90.value.fields._34_6_;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.fakeValue = local_90.value.fields.fakeValue;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields =
         local_90.value.fields.hiddenValueOldByte8.fields;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue = local_90.value.fields.hiddenValue
    ;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey =
         local_90.value.fields.currentCryptoKey;
    (__this->fields).JKDNFNLGGLI.fields.hasValue = local_90.hasValue;
    *(undefined7 *)&(__this->fields).JKDNFNLGGLI.fields.field_0x1 = local_90._1_7_;
  }
  else {
    local_60.fields.fakeValue = 0.0;
    local_60.fields.hiddenValueOldByte8.fields.b1 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b2 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b3 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b4 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b5 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b6 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b7 = 0;
    local_60.fields.hiddenValueOldByte8.fields.b8 = 0;
    uStack_38 = 0;
    local_60.fields.fakeValueActive = false;
    local_60.fields.inited = false;
    local_60.fields._34_6_ = 0;
    local_60.fields.hiddenValue = 0;
    local_60.fields.currentCryptoKey = 0;
    if (__this == (GEIHBHEDJJM_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar1 = &(__this->fields).JKDNFNLGGLI;
    (pSVar1->fields).value.fields.fakeValueActive = false;
    (pSVar1->fields).value.fields.inited = false;
    *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22 = 0;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.fakeValue = 0.0;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields =
         (CodeStage_AntiCheat_Common_ACTkByte8_Fields)0x0;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue = 0;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey = 0;
    *(undefined8 *)&(__this->fields).JKDNFNLGGLI.fields = 0;
    bVar2 = GEIHBHEDJJM__COMCFINCJII(OOGPLJBADCD,method_00);
  }
  (__this->fields).NKMGMPKKEAA = bVar2;
  return;
}


// ===== public void .ctor(double OOGPLJBADCD)  [RVA 0x3516808]
// GEIHBHEDJJM$$.ctor @ RVA 0x3516808

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,double OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  MethodInfo *in_x2;
  double __this_00;
  Il2CppMethodPointer local_18;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_18 = (Il2CppMethodPointer)OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Double__ToString(__this_00,(MethodInfo *)&stack0xffffffffffffffe8);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,in_x2);
  return;
}


// ===== public bool CBCCKIJFFPH()  [RVA 0x351687C]
// GEIHBHEDJJM$$CBCCKIJFFPH @ RVA 0x351687C

bool GEIHBHEDJJM__CBCCKIJFFPH(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = GEIHBHEDJJM__JIGNIKJHEBA(__this,method);
  return dVar1 == INFINITY || (int)dVar1 != 0;
}


// ===== public void .ctor(string OOGPLJBADCD)  [RVA 0x35169A0]
// GEIHBHEDJJM$$.ctor @ RVA 0x35169A0

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD,method);
  return;
}


// ===== private static bool COMCFINCJII(string OOGPLJBADCD)  [RVA 0x35166F8]
// GEIHBHEDJJM$$COMCFINCJII @ RVA 0x35166F8

bool GEIHBHEDJJM__COMCFINCJII(System_String_o *OOGPLJBADCD,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  
  if ((DAT_04568932 & 1) == 0) {
    FUN_01bab630(&MDKJJDGLPKO_TypeInfo);
    DAT_04568932 = 1;
  }
  bVar1 = PCOEHCPGBBG__EDHHJAMCOJH(OOGPLJBADCD,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = false;
  }
  else {
    if (OOGPLJBADCD == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0);
    if ((((uVar2 != 0x5f) &&
         (uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0), uVar2 != 0x40)) &&
        (uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0), uVar2 != 0x3f)) &&
       (uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0), uVar2 != 0x24)) {
      uVar2 = System_String__get_Chars(OOGPLJBADCD,0,(MethodInfo *)0x0);
      if ((MDKJJDGLPKO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MDKJJDGLPKO_TypeInfo);
      }
      bVar1 = MDKJJDGLPKO__BKEPHAHEMPM(uVar2,(MethodInfo *)0x0);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}


// ===== public string CNKOOLDMAGC()  [RVA 0x35164B8]
// GEIHBHEDJJM$$CNKOOLDMAGC @ RVA 0x35164B8

System_String_o * GEIHBHEDJJM__CNKOOLDMAGC(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                     ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void KFMNMGGDHFD(bool OOGPLJBADCD)  [RVA 0x35169CC]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x35169CC

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,bool OOGPLJBADCD,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_04568933 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_04568933 = 1;
  }
  if (__this != (GEIHBHEDJJM_o *)0x0) {
    puVar1 = &StringLiteral_1606/*"1"*/;
    if (!OOGPLJBADCD) {
      puVar1 = &StringLiteral_1567/*"0"*/;
    }
    GEIHBHEDJJM__KFMNMGGDHFD(__this,(System_String_o *)*puVar1,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KFMNMGGDHFD(double OOGPLJBADCD)  [RVA 0x3516848]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x3516848

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,double OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  MethodInfo *in_x2;
  Il2CppMethodPointer local_18;
  
  local_18 = (Il2CppMethodPointer)OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Double__ToString(OOGPLJBADCD,(MethodInfo *)&stack0xffffffffffffffe8);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,in_x2);
  return;
}


// ===== public int NICLHIKGBNM()  [RVA 0x3516A3C]
// GEIHBHEDJJM$$NICLHIKGBNM @ RVA 0x3516A3C

int32_t GEIHBHEDJJM__NICLHIKGBNM(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  double dVar2;
  
  dVar2 = GEIHBHEDJJM__JIGNIKJHEBA(__this,method);
  iVar1 = -0x80000000;
  if (dVar2 != INFINITY) {
    iVar1 = (int)dVar2;
  }
  return iVar1;
}


// ===== public void .ctor(bool OOGPLJBADCD)  [RVA 0x3516A64]
// GEIHBHEDJJM$$.ctor @ RVA 0x3516A64

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,bool OOGPLJBADCD,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD,method);
  return;
}


// ===== public void .ctor(GEIHBHEDJJM JJMOKKDDOEM)  [RVA 0x3516A90]
// GEIHBHEDJJM$$.ctor @ RVA 0x3516A90

/* WARNING: Type propagation algorithm not settling */

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,GEIHBHEDJJM_o *JJMOKKDDOEM,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *pSVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined6 uVar4;
  bool_conflict bVar5;
  undefined7 uVar6;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o **ppCVar7;
  double dVar8;
  int64_t iVar9;
  int64_t iVar10;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (JJMOKKDDOEM != (GEIHBHEDJJM_o *)0x0) {
    ppCVar7 = &(__this->fields).PCNEDMAJMOJ;
    *ppCVar7 = (JJMOKKDDOEM->fields).PCNEDMAJMOJ;
    thunk_FUN_01c20e04(ppCVar7);
    pSVar1 = &(JJMOKKDDOEM->fields).JKDNFNLGGLI;
    bVar2 = (pSVar1->fields).value.fields.fakeValueActive;
    bVar3 = (pSVar1->fields).value.fields.inited;
    uVar4 = *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22;
    dVar8 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.fakeValue;
    iVar9 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue;
    iVar10 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey;
    bVar5 = (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.hasValue;
    uVar6 = *(undefined7 *)&(JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.field_0x1;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields =
         (JJMOKKDDOEM->fields).JKDNFNLGGLI.fields.value.fields.hiddenValueOldByte8.fields;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.hiddenValue = iVar9;
    pSVar1 = &(__this->fields).JKDNFNLGGLI;
    (pSVar1->fields).value.fields.fakeValueActive = bVar2;
    (pSVar1->fields).value.fields.inited = bVar3;
    *(undefined6 *)&(pSVar1->fields).value.fields.field_0x22 = uVar4;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.fakeValue = dVar8;
    (__this->fields).JKDNFNLGGLI.fields.value.fields.currentCryptoKey = iVar10;
    (__this->fields).JKDNFNLGGLI.fields.hasValue = bVar5;
    *(undefined7 *)&(__this->fields).JKDNFNLGGLI.fields.field_0x1 = uVar6;
    (__this->fields).NKMGMPKKEAA = (JJMOKKDDOEM->fields).NKMGMPKKEAA;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public double JIGNIKJHEBA()  [RVA 0x35168AC]
// GEIHBHEDJJM$$JIGNIKJHEBA @ RVA 0x35168AC

double GEIHBHEDJJM__JIGNIKJHEBA(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *__this_00;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar1;
  System_String_o *OOGPLJBADCD;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  double dVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_70;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_48;
  
  if ((DAT_04568934 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_Value__);
    DAT_04568934 = 1;
  }
  __this_00 = &(__this->fields).JKDNFNLGGLI;
  if ((__this_00->fields).hasValue != false) {
    System_Nullable<ObscuredDouble>__get_Value
              (&local_48,__this_00,Method_System_Nullable<ObscuredDouble>_get_Value__);
    local_70.fields.hiddenValue = local_48.fields.hiddenValue;
    local_70.fields.currentCryptoKey = local_48.fields.currentCryptoKey;
    local_70.fields.fakeValue = local_48.fields.fakeValue;
    local_70.fields.hiddenValueOldByte8.fields = local_48.fields.hiddenValueOldByte8.fields;
    local_70.fields.fakeValueActive = local_48.fields.fakeValueActive;
    local_70.fields.inited = local_48.fields.inited;
    local_70.fields._34_6_ = local_48.fields._34_6_;
    dVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__ALBJPLAPOBO
                      (&local_70,(MethodInfo *)0x0);
    return dVar2;
  }
  pNVar1 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
  if (pNVar1 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
    HLAGOHADLKH = (pNVar1->fields).QuestParameters;
    OOGPLJBADCD = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                            ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
    if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
    }
    dVar2 = MFBNFJGBPBB__GAJPKHHKCCE(HLAGOHADLKH,OOGPLJBADCD,(MethodInfo *)0x0);
    return dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public string FHBEMPFIHNF()  [RVA 0x3516AE8]
// GEIHBHEDJJM$$FHBEMPFIHNF @ RVA 0x3516AE8

System_String_o * GEIHBHEDJJM__FHBEMPFIHNF(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Nullable_ObscuredDouble__o *__this_00;
  System_String_o *pSVar1;
  Nekki_SF2_Core_Quests_QuestsManager_o *pNVar2;
  PKHMIGFEJCL_o *HLAGOHADLKH;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_78;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble_o local_50;
  
  if ((DAT_04568935 & 1) == 0) {
    FUN_01bab630(&MFBNFJGBPBB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_Value__);
    DAT_04568935 = 1;
  }
  local_50.fields.fakeValueActive = false;
  local_50.fields.inited = false;
  local_50.fields._34_6_ = 0;
  local_50.fields.hiddenValue = 0;
  local_50.fields.currentCryptoKey = 0;
  local_50.fields.fakeValue = 0.0;
  local_50.fields.hiddenValueOldByte8.fields.b1 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b2 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b3 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b4 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b5 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b6 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b7 = 0;
  local_50.fields.hiddenValueOldByte8.fields.b8 = 0;
  __this_00 = &(__this->fields).JKDNFNLGGLI;
  if ((__this_00->fields).hasValue == false) {
    if ((__this->fields).NKMGMPKKEAA == false) {
      pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
    }
    else {
      pNVar2 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
      if (pNVar2 == (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      HLAGOHADLKH = (pNVar2->fields).QuestParameters;
      pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         ((__this->fields).PCNEDMAJMOJ,(MethodInfo *)0x0);
      if ((MFBNFJGBPBB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(MFBNFJGBPBB_TypeInfo);
      }
      pSVar1 = MFBNFJGBPBB__HAKLDDOPIAF(HLAGOHADLKH,pSVar1,(MethodInfo *)0x0);
    }
  }
  else {
    System_Nullable<ObscuredDouble>__get_Value
              (&local_78,__this_00,Method_System_Nullable<ObscuredDouble>_get_Value__);
    local_50.fields.hiddenValue = local_78.fields.hiddenValue;
    local_50.fields.currentCryptoKey = local_78.fields.currentCryptoKey;
    local_50.fields.fakeValue = local_78.fields.fakeValue;
    local_50.fields.hiddenValueOldByte8.fields = local_78.fields.hiddenValueOldByte8.fields;
    local_50.fields.fakeValueActive = local_78.fields.fakeValueActive;
    local_50.fields.inited = local_78.fields.inited;
    local_50.fields._34_6_ = local_78.fields._34_6_;
    pSVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredDouble__ToString(&local_50,(MethodInfo *)0x0)
    ;
  }
  return pSVar1;
}


// ===== public float FFKDECILBIL()  [RVA 0x3516BF8]
// GEIHBHEDJJM$$FFKDECILBIL @ RVA 0x3516BF8

float GEIHBHEDJJM__FFKDECILBIL(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  double dVar1;
  
  dVar1 = GEIHBHEDJJM__JIGNIKJHEBA(__this,method);
  return (float)dVar1;
}


// ===== public void KFMNMGGDHFD(float OOGPLJBADCD)  [RVA 0x3516C0C]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x3516C0C

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  MethodInfo *in_x2;
  float local_14;
  
  local_14 = OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Single__ToString(OOGPLJBADCD,(MethodInfo *)&local_14);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,in_x2);
  return;
}


// ===== public void KFMNMGGDHFD(long OOGPLJBADCD)  [RVA 0x35166C4]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x35166C4

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,int64_t OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  int64_t local_18;
  
  local_18 = OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Int64__ToString((int64_t)&local_18,(MethodInfo *)0x0);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,method);
  return;
}


// ===== public void .ctor(int OOGPLJBADCD)  [RVA 0x3516C40]
// GEIHBHEDJJM$$.ctor @ RVA 0x3516C40

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,int32_t OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  int32_t local_14;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  local_14 = OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,method);
  return;
}


// ===== public void KFMNMGGDHFD(int OOGPLJBADCD)  [RVA 0x3516C80]
// GEIHBHEDJJM$$KFMNMGGDHFD @ RVA 0x3516C80

void GEIHBHEDJJM__KFMNMGGDHFD(GEIHBHEDJJM_o *__this,int32_t OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  int32_t local_14;
  
  local_14 = OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,method);
  return;
}


// ===== public override string ToString()  [RVA 0x3516CB4]
// GEIHBHEDJJM$$ToString @ RVA 0x3516CB4

System_String_o * GEIHBHEDJJM__ToString(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  System_Object_array *args;
  long lVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  undefined8 uVar4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar5;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  
  if ((DAT_04568936 & 1) == 0) {
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<ObscuredDouble>_get_HasValue__);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_22301/*"{0} Value: '{1}', IsNumber: {2}, NeedCalculation: {3}"*/);
    FUN_01bab630(&StringLiteral_10723/*"QuestVariable"*/);
    DAT_04568936 = 1;
  }
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (StringLiteral_10723/*"QuestVariable"*/ == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    lVar1 = thunk_FUN_01bda71c(StringLiteral_10723/*"QuestVariable"*/,(((args->obj).klass)->_1).element_class);
    pIVar2 = StringLiteral_10723/*"QuestVariable"*/;
    if (lVar1 == 0) goto LAB_03616e74;
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar2;
    thunk_FUN_01c20e04();
    pCVar5 = (__this->fields).PCNEDMAJMOJ;
    if ((pCVar5 != (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0) &&
       (lVar1 = thunk_FUN_01bda71c(pCVar5,(((args->obj).klass)->_1).element_class), lVar1 == 0)) {
LAB_03616e74:
      uVar4 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
      FUN_01bab798(uVar4,0);
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pCVar5;
      thunk_FUN_01c20e04(args->m_Items + 1,pCVar5);
      local_24[0] = (__this->fields).JKDNFNLGGLI.fields.hasValue;
      pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_24);
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
      goto LAB_03616e74;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar2;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar2);
        local_28[0] = (__this->fields).NKMGMPKKEAA;
        pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_28);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar1 == 0))
        goto LAB_03616e74;
                    /* try { // try from 03616e2c to 03716eab has its CatchHandler @ 03616e2c
                       catch() { ... } // from try @ 03616e2c with catch @ 03616e2c
                       catch() { ... } // from try @ 03616f74 with catch @ 03616e2c
                       catch() { ... } // from try @ 0361700c with catch @ 03616e2c
                       catch() { ... } // from try @ 036170bc with catch @ 03616e2c
                       catch() { ... } // from try @ 03617164 with catch @ 03616e2c */
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar2;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar2);
          pSVar3 = System_String__Format(StringLiteral_22301/*"{0} Value: '{1}', IsNumber: {2}, NeedCalculation: {3}"*/,args,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== public long FJPMOIJCMFB()  [RVA 0x3516E84]
// GEIHBHEDJJM$$FJPMOIJCMFB @ RVA 0x3516E84

int64_t GEIHBHEDJJM__FJPMOIJCMFB(GEIHBHEDJJM_o *__this,MethodInfo *method)

{
  int64_t iVar1;
  double dVar2;
  
  dVar2 = GEIHBHEDJJM__JIGNIKJHEBA(__this,method);
  iVar1 = -0x8000000000000000;
  if (dVar2 != INFINITY) {
    iVar1 = (long)dVar2;
  }
  return iVar1;
}


// ===== public void .ctor(float OOGPLJBADCD)  [RVA 0x3516EAC]
// GEIHBHEDJJM$$.ctor @ RVA 0x3516EAC

void GEIHBHEDJJM___ctor(GEIHBHEDJJM_o *__this,float OOGPLJBADCD,MethodInfo *method)

{
  System_String_o *OOGPLJBADCD_00;
  MethodInfo *in_x2;
  float __this_00;
  float local_14;
  
                    /* try { // try from 03616eac to 03716ebf has its CatchHandler @ 036170cc */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
                    /* try { // try from 03616ec4 to 03716ed3 has its CatchHandler @ 0361701c */
  local_14 = OOGPLJBADCD;
  OOGPLJBADCD_00 = System_Single__ToString(__this_00,(MethodInfo *)&local_14);
                    /* try { // try from 03616ed4 to 03716ee3 has its CatchHandler @ 03617014 */
  GEIHBHEDJJM__KFMNMGGDHFD(__this,OOGPLJBADCD_00,in_x2);
  return;
}

