// TypeDefIndex 2181
// Namespace: 
// [Serializable]
// private sealed class DOPEEDABNEK.<>c
// Fields:
//   public static readonly DOPEEDABNEK.<>c <>9; // 0x0
//   public static Predicate<HOOAAGABMBL> <>9__36_0; // 0x8
//   public static Predicate<HOOAAGABMBL> <>9__36_1; // 0x10
//   public static Action<Action<HOOAAGABMBL>> <>9__48_0; // 0x18
//   public static Action<Action<HOOAAGABMBL>> <>9__48_1; // 0x20
//   public static Func<PackSettings, string> <>9__48_5; // 0x28
//   public static Func<GLINEGMOOBM, bool> <>9__48_3; // 0x30
//   public static Predicate<HOOAAGABMBL> <>9__50_0; // 0x38
//   public static Action<HOOAAGABMBL> <>9__55_1; // 0x40
//   public static Action<HOOAAGABMBL> <>9__56_0; // 0x48
//   public static Action<BPDOKJBGHAG> <>9__56_1; // 0x50
//   public static Func<PackSettings, bool> <>9__62_0; // 0x58
//   public static Func<PackSettings, string> <>9__62_1; // 0x60
//   public static Action<string> <>9__63_0; // 0x68
//   public static Func<HOOAAGABMBL, bool> <>9__64_0; // 0x70

// ===== internal bool PHOLBGAFPLO(HOOAAGABMBL item)  [RVA 0x32E4BC4]
// DOPEEDABNEK.<>c$$PHOLBGAFPLO @ RVA 0x32E4BC4

bool DOPEEDABNEK_<>c__PHOLBGAFPLO(DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace
                      ((item->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal string EKNLBFNCJOL(PackSettings pack)  [RVA 0x32E4BEC]
// DOPEEDABNEK.<>c$$EKNLBFNCJOL @ RVA 0x32E4BEC

System_String_o *
DOPEEDABNEK_<>c__EKNLBFNCJOL
          (DOPEEDABNEK___c_o *__this,Core_Configs_Models_PackSettings_o *pack,MethodInfo *method)

{
  if (pack != (Core_Configs_Models_PackSettings_o *)0x0) {
    return (pack->fields)._ItemsPackLabel_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void FHKDBPPPMNI(Action<HOOAAGABMBL> h)  [RVA 0x32E4C04]
// DOPEEDABNEK.<>c$$FHKDBPPPMNI @ RVA 0x32E4C04

void DOPEEDABNEK_<>c__FHKDBPPPMNI
               (DOPEEDABNEK___c_o *__this,System_Action_HOOAAGABMBL__o *h,MethodInfo *method)

{
  AMIINPEKKFB__PFDBFCFBCAN(h,(MethodInfo *)0x0);
  return;
}


// ===== internal bool DMBBJNJHNPN(HOOAAGABMBL p_itemInfo)  [RVA 0x32E4C10]
// DOPEEDABNEK.<>c$$DMBBJNJHNPN @ RVA 0x32E4C10

bool DOPEEDABNEK_<>c__DMBBJNJHNPN
               (DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *p_itemInfo,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_045675ff & 1) == 0) {
    __this = (DOPEEDABNEK___c_o *)FUN_01bab630(&StringLiteral_10237/*"Perk_Reset"*/);
    DAT_045675ff = 1;
  }
  if (p_itemInfo != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((p_itemInfo->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_10237/*"Perk_Reset"*/,
                       (MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal void GCDNPHKHGLA(BPDOKJBGHAG x)  [RVA 0x32E4C64]
// DOPEEDABNEK.<>c$$GCDNPHKHGLA @ RVA 0x32E4C64

void DOPEEDABNEK_<>c__GCDNPHKHGLA(DOPEEDABNEK___c_o *__this,BPDOKJBGHAG_o *x,MethodInfo *method)

{
  if (x != (BPDOKJBGHAG_o *)0x0) {
    BPDOKJBGHAG__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void ODABFMBHOEA(string lockName)  [RVA 0x32E4C7C]
// DOPEEDABNEK.<>c$$ODABFMBHOEA @ RVA 0x32E4C7C

void DOPEEDABNEK_<>c__ODABFMBHOEA
               (DOPEEDABNEK___c_o *__this,System_String_o *lockName,MethodInfo *method)

{
  if ((DAT_04567600 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567600 = 1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  NLPJLHOEAOE__KFBDPFEFKBE(lockName,true,(MethodInfo *)0x0);
  return;
}


// ===== internal bool APPAKDBFEDN(HOOAAGABMBL item)  [RVA 0x32E4CD8]
// DOPEEDABNEK.<>c$$APPAKDBFEDN @ RVA 0x32E4CD8

bool DOPEEDABNEK_<>c__APPAKDBFEDN(DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if (item != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace
                      ((item->fields)._CIEBCKIBJHL_k__BackingField,(MethodInfo *)0x0);
    return (bool)(~bVar1 & 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static void .cctor()  [RVA 0x32E4D00]
// DOPEEDABNEK.<>c$$.cctor @ RVA 0x32E4D00

void DOPEEDABNEK_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04567601 & 1) == 0) {
    FUN_01bab630(&DOPEEDABNEK_<>c_TypeInfo);
    DAT_04567601 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(DOPEEDABNEK_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  DOPEEDABNEK_<>c_TypeInfo->static_fields->__9 = (DOPEEDABNEK___c_o *)__this;
  thunk_FUN_01c20e04(DOPEEDABNEK_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal string CENNOCLJDBD(PackSettings pack)  [RVA 0x32E4D70]
// DOPEEDABNEK.<>c$$CENNOCLJDBD @ RVA 0x32E4D70

System_String_o *
DOPEEDABNEK_<>c__CENNOCLJDBD
          (DOPEEDABNEK___c_o *__this,Core_Configs_Models_PackSettings_o *pack,MethodInfo *method)

{
  if (pack != (Core_Configs_Models_PackSettings_o *)0x0) {
    return (pack->fields)._ItemsPackLabel_k__BackingField;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool DNNODJGFLLH(PackSettings pack)  [RVA 0x32E4D88]
// DOPEEDABNEK.<>c$$DNNODJGFLLH @ RVA 0x32E4D88

bool DOPEEDABNEK_<>c__DNNODJGFLLH
               (DOPEEDABNEK___c_o *__this,Core_Configs_Models_PackSettings_o *pack,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Core_Configs_Models_PackSettingsExtension__IsDownloaded(pack,(MethodInfo *)0x0);
  if (bVar1) {
    if (pack == (Core_Configs_Models_PackSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = PCOEHCPGBBG__EDHHJAMCOJH
                      ((pack->fields)._ItemsPackLabel_k__BackingField,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ===== internal void HAGCHNLKDKK(HOOAAGABMBL x)  [RVA 0x32E4DCC]
// DOPEEDABNEK.<>c$$HAGCHNLKDKK @ RVA 0x32E4DCC

void DOPEEDABNEK_<>c__HAGCHNLKDKK(DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *x,MethodInfo *method)

{
  if (x != (HOOAAGABMBL_o *)0x0) {
    HOOAAGABMBL__RandomizeObscuredVars(x,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal bool IGLKAFAIECC(GLINEGMOOBM screenInfo)  [RVA 0x32E4DE4]
// DOPEEDABNEK.<>c$$IGLKAFAIECC @ RVA 0x32E4DE4

bool DOPEEDABNEK_<>c__IGLKAFAIECC
               (DOPEEDABNEK___c_o *__this,GLINEGMOOBM_o *screenInfo,MethodInfo *method)

{
  if (screenInfo != (GLINEGMOOBM_o *)0x0) {
    return (screenInfo->fields).DBMPKPJGIPI == 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== internal void AOMDLEBNFEL(Action<HOOAAGABMBL> h)  [RVA 0x32E4E04]
// DOPEEDABNEK.<>c$$AOMDLEBNFEL @ RVA 0x32E4E04

void DOPEEDABNEK_<>c__AOMDLEBNFEL
               (DOPEEDABNEK___c_o *__this,System_Action_HOOAAGABMBL__o *h,MethodInfo *method)

{
  AMIINPEKKFB__KANIFNEGABC(h,(MethodInfo *)0x0);
  return;
}


// ===== internal bool OOMIICNFBKM(HOOAAGABMBL item)  [RVA 0x32E4E10]
// DOPEEDABNEK.<>c$$OOMIICNFBKM @ RVA 0x32E4E10

bool DOPEEDABNEK_<>c__OOMIICNFBKM(DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567602 & 1) == 0) {
    __this = (DOPEEDABNEK___c_o *)FUN_01bab630(&StringLiteral_6868/*"Gold"*/);
    DAT_04567602 = 1;
  }
  if (item != (HOOAAGABMBL_o *)0x0) {
    bVar1 = System_String__op_Equality
                      ((item->fields)._DKODBGOHKGH_k__BackingField,StringLiteral_6868/*"Gold"*/,
                       (MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = HOOAAGABMBL__ACBLFBAIHPN(item,(MethodInfo *)0x0);
      return bVar1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}


// ===== internal void BOPMJIJMNAB(HOOAAGABMBL item)  [RVA 0x32E4E84]
// DOPEEDABNEK.<>c$$BOPMJIJMNAB @ RVA 0x32E4E84

void DOPEEDABNEK_<>c__BOPMJIJMNAB(DOPEEDABNEK___c_o *__this,HOOAAGABMBL_o *item,MethodInfo *method)

{
  if (item != (HOOAAGABMBL_o *)0x0) {
    HOOAAGABMBL__GEBIJFANLGH(item,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x32E4D68]
// DOPEEDABNEK.<>c$$.ctor @ RVA 0x32E4D68

void DOPEEDABNEK_<>c___ctor(DOPEEDABNEK___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

