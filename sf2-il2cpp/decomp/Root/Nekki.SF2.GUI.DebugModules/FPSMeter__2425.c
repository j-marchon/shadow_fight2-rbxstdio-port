// TypeDefIndex 2425
// Namespace: Nekki.SF2.GUI.DebugModules
// public class FPSMeter : DebugUIModule
// Fields:
//   private static float <JHOFDCHHEPF>k__BackingField; // 0x0
//   private static float <HFLINEMELAF>k__BackingField; // 0x4
//   private static float <HOAGAALGFNP>k__BackingField; // 0x8
//   private static float <DCHILBEKFMP>k__BackingField; // 0xC
//   private float _UpdateInterval; // 0x28
//   private float _StartTimeGap; // 0x2C
//   private Text _Label; // 0x30
//   private float OADGFNKPMIO; // 0x38
//   private float BGHKLPJMCPC; // 0x3C
//   private int KLILALOJBCJ; // 0x40
//   private int ECHBLKHJOLH; // 0x44
//   private float HFAEDJEOAFP; // 0x48
//   private float HMLKMGIMLCH; // 0x4C

// ===== private static void HDEMLNIMHCI(float CJNHFNHJHPE)  [RVA 0x333DA28]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$HDEMLNIMHCI @ RVA 0x333DA28

void Nekki_SF2_GUI_DebugModules_FPSMeter__HDEMLNIMHCI(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567977 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_04567977 = 1;
  }
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_JHOFDCHHEPF_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== public static float get_FPS_Min()  [RVA 0x333DA7C]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS_Min @ RVA 0x333DA7C

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS_Min(MethodInfo *method)

{
  if ((DAT_04567978 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_04567978 = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HOAGAALGFNP_k__BackingField;
}


// ===== private void PIHLOHKHHMB()  [RVA 0x333DAC4]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$PIHLOHKHHMB @ RVA 0x333DAC4

void Nekki_SF2_GUI_DebugModules_FPSMeter__PIHLOHKHHMB
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int32_t iVar3;
  System_Object_array *args;
  Il2CppObject *pIVar4;
  long lVar5;
  System_String_o *pSVar6;
  undefined8 uVar7;
  Nekki_SF2_GUI_DebugModules_FPSMeter_c *pNVar8;
  Nekki_SF2_GUI_DebugModules_FPSMeter_StaticFields *pNVar9;
  UnityEngine_UI_Text_o *pUVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  
  if ((DAT_04567979 & 1) == 0) {
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&float_TypeInfo);
    FUN_01bab630(&StringLiteral_6173/*"FPS: {0:F1} Avg: {1:F1}\nMin: {2:F1} Max: {3:F1}"*/);
    DAT_04567979 = 1;
  }
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  iVar1 = (__this->fields).ECHBLKHJOLH;
  fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  fVar13 = (__this->fields).HMLKMGIMLCH;
  (__this->fields).BGHKLPJMCPC = (__this->fields)._UpdateInterval;
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).ECHBLKHJOLH = iVar3;
  fVar12 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HMLKMGIMLCH = fVar12;
  if (DAT_045679c0 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c0 = '\x01';
  }
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_JHOFDCHHEPF_k__BackingField =
       (float)(iVar2 - iVar1) / (fVar11 - fVar13);
  iVar2 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  iVar1 = (__this->fields).KLILALOJBCJ;
  fVar11 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  fVar12 = (__this->fields).HFAEDJEOAFP;
  if (DAT_045679c1 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c1 = '\x01';
  }
  pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HFLINEMELAF_k__BackingField =
       (float)(iVar2 - iVar1) / (fVar11 - fVar12);
  if (DAT_045679c2 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c2 = '\x01';
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  pNVar9 = pNVar8->static_fields;
  fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
  if (DAT_045679c3 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c3 = '\x01';
    pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  if (fVar11 < pNVar9->_HOAGAALGFNP_k__BackingField) {
    if (DAT_045679c2 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c2 = '\x01';
      pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
    }
    pNVar9 = pNVar8->static_fields;
    fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
    if (DAT_045679c4 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c4 = '\x01';
      pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
      pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
    }
    pNVar9->_HOAGAALGFNP_k__BackingField = fVar11;
  }
  if (DAT_045679c2 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c2 = '\x01';
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  pNVar9 = pNVar8->static_fields;
  fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
  if (DAT_045679c5 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c5 = '\x01';
    pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
    pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
  }
  if (pNVar9->_DCHILBEKFMP_k__BackingField < fVar11) {
    if (DAT_045679c2 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c2 = '\x01';
      pNVar8 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo;
    }
    pNVar9 = pNVar8->static_fields;
    fVar11 = pNVar9->_JHOFDCHHEPF_k__BackingField;
    if (DAT_045679c6 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c6 = '\x01';
      pNVar9 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
    }
    pNVar9->_DCHILBEKFMP_k__BackingField = fVar11;
  }
  pUVar10 = (__this->fields)._Label;
  args = (System_Object_array *)FUN_01bab718(object___TypeInfo,4);
  if (DAT_045679c2 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c2 = '\x01';
  }
  local_44 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
             _JHOFDCHHEPF_k__BackingField;
  pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_44);
  if (args == (System_Object_array *)0x0) {
LAB_0343df7c:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pIVar4 != (Il2CppObject *)0x0) &&
     (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0)) {
LAB_0343df70:
    uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
    FUN_01bab798(uVar7,0);
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar4;
    thunk_FUN_01c20e04(args->m_Items,pIVar4);
    if (DAT_045679c7 == '\0') {
      FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
      DAT_045679c7 = '\x01';
    }
    local_48 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
               _HFLINEMELAF_k__BackingField;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_48);
    if ((pIVar4 != (Il2CppObject *)0x0) &&
       (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
    goto LAB_0343df70;
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = pIVar4;
      thunk_FUN_01c20e04(args->m_Items + 1,pIVar4);
      if (DAT_045679c3 == '\0') {
        FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
        DAT_045679c3 = '\x01';
      }
      local_54 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
                 _HOAGAALGFNP_k__BackingField;
      pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_54);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_0343df70;
      if (2 < (uint)args->max_length) {
        args->m_Items[2] = pIVar4;
        thunk_FUN_01c20e04(args->m_Items + 2,pIVar4);
        if (DAT_045679c5 == '\0') {
          FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
          DAT_045679c5 = '\x01';
        }
        local_58 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->
                   _DCHILBEKFMP_k__BackingField;
        pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(float_TypeInfo,&local_58);
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = thunk_FUN_01bda71c(pIVar4,(((args->obj).klass)->_1).element_class), lVar5 == 0))
        goto LAB_0343df70;
        if (3 < (uint)args->max_length) {
          args->m_Items[3] = pIVar4;
          thunk_FUN_01c20e04(args->m_Items + 3,pIVar4);
          pSVar6 = System_String__Format(StringLiteral_6173/*"FPS: {0:F1} Avg: {1:F1}\nMin: {2:F1} Max: {3:F1}"*/,args,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_UI_Text_o *)0x0) {
            (*(pUVar10->klass->vtable)._75_set_text.methodPtr)
                      (pUVar10,pSVar6,(pUVar10->klass->vtable)._75_set_text.method);
            return;
          }
          goto LAB_0343df7c;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}


// ===== protected override bool ACBLFBAIHPN()  [RVA 0x333DFAC]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$ACBLFBAIHPN @ RVA 0x333DFAC

bool Nekki_SF2_GUI_DebugModules_FPSMeter__ACBLFBAIHPN
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Nekki_SF2_GUI_DebugUIModule__ACBLFBAIHPN
                    ((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return bVar1;
}


// ===== private void FixedUpdate()  [RVA 0x333DFB4]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$FixedUpdate @ RVA 0x333DFB4

void Nekki_SF2_GUI_DebugModules_FPSMeter__FixedUpdate
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  MethodInfo *method_00;
  float fVar1;
  float fVar2;
  
  if ((DAT_0456797a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Mathf_TypeInfo);
    DAT_0456797a = 1;
  }
  fVar2 = (__this->fields).BGHKLPJMCPC;
  fVar1 = UnityEngine_Time__get_fixedDeltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 - fVar1;
  (__this->fields).BGHKLPJMCPC = fVar2;
  if (fVar2 < UnityEngine_Mathf_TypeInfo->static_fields->Epsilon) {
    Nekki_SF2_GUI_DebugModules_FPSMeter__PIHLOHKHHMB(__this,method_00);
    return;
  }
  return;
}


// ===== public void .ctor()  [RVA 0x333E038]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$.ctor @ RVA 0x333E038

void Nekki_SF2_GUI_DebugModules_FPSMeter___ctor
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  (__this->fields)._UpdateInterval = 0.2;
  (__this->fields)._StartTimeGap = 2.0;
  Nekki_SF2_GUI_DebugUIModule___ctor((Nekki_SF2_GUI_DebugUIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static float get_FPS_Average()  [RVA 0x333E04C]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS_Average @ RVA 0x333E04C

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS_Average(MethodInfo *method)

{
  if ((DAT_0456797b & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797b = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HFLINEMELAF_k__BackingField;
}


// ===== protected override void GIENGNEGHPJ()  [RVA 0x333E094]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$GIENGNEGHPJ @ RVA 0x333E094

void Nekki_SF2_GUI_DebugModules_FPSMeter__GIENGNEGHPJ
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  Nekki_SF2_GUI_DebugModules_FPSMeter_StaticFields *pNVar2;
  float fVar3;
  
  Nekki_SF2_GUI_UIModule__GIENGNEGHPJ((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  if (DAT_045679c4 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c4 = '\x01';
  }
  pNVar2 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
  pNVar2->_HOAGAALGFNP_k__BackingField = 3.4028235e+38;
  if (DAT_045679c6 == '\0') {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_045679c6 = '\x01';
    pNVar2 = Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields;
  }
  pNVar2->_DCHILBEKFMP_k__BackingField = -3.4028235e+38;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).OADGFNKPMIO = fVar3;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).KLILALOJBCJ = iVar1;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HFAEDJEOAFP = fVar3;
  (__this->fields).BGHKLPJMCPC = (__this->fields)._StartTimeGap;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).ECHBLKHJOLH = iVar1;
  fVar3 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HMLKMGIMLCH = fVar3;
  return;
}


// ===== public static float get_FPS_Max()  [RVA 0x333E15C]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS_Max @ RVA 0x333E15C

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS_Max(MethodInfo *method)

{
  if ((DAT_0456797c & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797c = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_DCHILBEKFMP_k__BackingField;
}


// ===== protected override void CLNAOMIIBLH()  [RVA 0x333E1A4]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$CLNAOMIIBLH @ RVA 0x333E1A4

void Nekki_SF2_GUI_DebugModules_FPSMeter__CLNAOMIIBLH
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_UIModule__CLNAOMIIBLH((Nekki_SF2_GUI_UIModule_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public static float get_FPS()  [RVA 0x333E1AC]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$get_FPS @ RVA 0x333E1AC

float Nekki_SF2_GUI_DebugModules_FPSMeter__get_FPS(MethodInfo *method)

{
  if ((DAT_0456797d & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797d = 1;
  }
  return Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_JHOFDCHHEPF_k__BackingField;
}


// ===== private void NCENBOMEPBN(float NACILJPLKBG)  [RVA 0x333DF80]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$NCENBOMEPBN @ RVA 0x333DF80

void Nekki_SF2_GUI_DebugModules_FPSMeter__NCENBOMEPBN
               (Nekki_SF2_GUI_DebugModules_FPSMeter_o *__this,float NACILJPLKBG,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  
  (__this->fields).BGHKLPJMCPC = NACILJPLKBG;
  iVar1 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  (__this->fields).ECHBLKHJOLH = iVar1;
  fVar2 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
  (__this->fields).HMLKMGIMLCH = fVar2;
  return;
}


// ===== private static void ICEGJFIOFBH(float CJNHFNHJHPE)  [RVA 0x333E1F4]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$ICEGJFIOFBH @ RVA 0x333E1F4

void Nekki_SF2_GUI_DebugModules_FPSMeter__ICEGJFIOFBH(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456797e & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797e = 1;
  }
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HFLINEMELAF_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== private static void GNOIHCHKJDI(float CJNHFNHJHPE)  [RVA 0x333E248]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$GNOIHCHKJDI @ RVA 0x333E248

void Nekki_SF2_GUI_DebugModules_FPSMeter__GNOIHCHKJDI(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_0456797f & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_0456797f = 1;
  }
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_DCHILBEKFMP_k__BackingField =
       CJNHFNHJHPE;
  return;
}


// ===== private static void CNGMMNMPNNB(float CJNHFNHJHPE)  [RVA 0x333E29C]
// Nekki.SF2.GUI.DebugModules.FPSMeter$$CNGMMNMPNNB @ RVA 0x333E29C

void Nekki_SF2_GUI_DebugModules_FPSMeter__CNGMMNMPNNB(float CJNHFNHJHPE,MethodInfo *method)

{
  if ((DAT_04567980 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo);
    DAT_04567980 = 1;
  }
  Nekki_SF2_GUI_DebugModules_FPSMeter_TypeInfo->static_fields->_HOAGAALGFNP_k__BackingField =
       CJNHFNHJHPE;
  return;
}

