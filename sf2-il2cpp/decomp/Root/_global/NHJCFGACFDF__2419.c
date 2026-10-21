// TypeDefIndex 2419
// Namespace: 
// public abstract class NHJCFGACFDF
// Fields:
//   public static Action<bool> FFHKBMDDKBI; // 0x0
//   public static Action<IAchievement[]> LAINOIECIHC; // 0x8
//   public static Action<bool> HHENPENBNLD; // 0x10
//   public static Action<string> EDCABNJMIHN; // 0x18
//   public static Action<string, double> DDPMFMMJNJF; // 0x20
//   public static Action<string> PCNNKNMPDAK; // 0x28
//   public static Action<string, byte[]> GEHAHBFKNCM; // 0x30
//   private readonly bool <PKNBNJILNCG>k__BackingField; // 0x10

// ===== protected void JCPIAHAKBIA(string JLNPKGGFFDD, object[] IDLMDMNFPHK)  [RVA 0x333A714]
// NHJCFGACFDF$$JCPIAHAKBIA @ RVA 0x333A714

void NHJCFGACFDF__JCPIAHAKBIA
               (NHJCFGACFDF_o *__this,System_String_o *JLNPKGGFFDD,System_Object_array *IDLMDMNFPHK,
               MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD_00;
  
  JLNPKGGFFDD_00 = System_String__Format(JLNPKGGFFDD,IDLMDMNFPHK,(MethodInfo *)0x0);
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD_00,(MethodInfo *)0x0);
  return;
}


// ===== public virtual bool NHOLBMHOMCM()  [RVA 0x333A740]
// NHJCFGACFDF$$NHOLBMHOMCM @ RVA 0x333A740

bool NHJCFGACFDF__NHOLBMHOMCM(NHJCFGACFDF_o *__this,MethodInfo *method)

{
  return (__this->fields)._PKNBNJILNCG_k__BackingField;
}


// ===== public virtual bool LFEGGMNMDMJ()  [RVA 0x333A748]
// NHJCFGACFDF$$LFEGGMNMDMJ @ RVA 0x333A748

bool NHJCFGACFDF__LFEGGMNMDMJ(NHJCFGACFDF_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  value = (System_String_o *)
          (*__this->klass[1]._1.this_arg.data)
                    (__this,*(undefined8 *)&__this->klass[1]._1.this_arg.bits);
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return (bool)(~bVar1 & 1);
}


// ===== protected void .ctor()  [RVA 0x333A774]
// NHJCFGACFDF$$.ctor @ RVA 0x333A774

void NHJCFGACFDF___ctor(NHJCFGACFDF_o *__this,MethodInfo *method)

{
  (__this->fields)._PKNBNJILNCG_k__BackingField = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void ONCJPMNKDIM(string JLNPKGGFFDD)  [RVA 0x333A784]
// NHJCFGACFDF$$ONCJPMNKDIM @ RVA 0x333A784

void NHJCFGACFDF__ONCJPMNKDIM(NHJCFGACFDF_o *__this,System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== protected void DHAAGKPHJLA(string JLNPKGGFFDD)  [RVA 0x333A78C]
// NHJCFGACFDF$$DHAAGKPHJLA @ RVA 0x333A78C

void NHJCFGACFDF__DHAAGKPHJLA(NHJCFGACFDF_o *__this,System_String_o *JLNPKGGFFDD,MethodInfo *method)

{
  KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x333A794]
// NHJCFGACFDF$$.cctor @ RVA 0x333A794

void NHJCFGACFDF___cctor(MethodInfo *method)

{
  System_Action_bool__o *pSVar1;
  System_Action_IAchievement____o *pSVar2;
  System_Action_IAchievement____o **ppSVar3;
  System_Action_bool__o **ppSVar4;
  System_Action_string__o *pSVar5;
  System_Action_string__o **ppSVar6;
  System_Action_string__double__o *pSVar7;
  System_Action_string__double__o **ppSVar8;
  System_Action_string__byte____o *pSVar9;
  System_Action_string__byte____o **ppSVar10;
  
  if ((DAT_04567968 & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&System_Action<string>_TypeInfo);
    FUN_01bab630(&System_Action<IAchievement[]>_TypeInfo);
    FUN_01bab630(&System_Action<string,_byte[]>_TypeInfo);
    FUN_01bab630(&System_Action<string,_double>_TypeInfo);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_BHLJILCJIHB__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_BNNBENJGDHK__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_EFEENBBNEKG__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_FDOFKENOADH__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_IHLPPLAONIC__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_MGINCINJFJI__);
    FUN_01bab630(&Method_NHJCFGACFDF_<>c_NHLMJACAFGJ__);
    FUN_01bab630(&NHJCFGACFDF_<>c_TypeInfo);
    DAT_04567968 = 1;
  }
  if ((NHJCFGACFDF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  NHJCFGACFDF_TypeInfo->static_fields->FFHKBMDDKBI = pSVar1;
  thunk_FUN_01c20e04(NHJCFGACFDF_TypeInfo->static_fields,pSVar1);
  pSVar2 = (System_Action_IAchievement____o *)
           thunk_FUN_01bda818(System_Action<IAchievement[]>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar3 = &NHJCFGACFDF_TypeInfo->static_fields->LAINOIECIHC;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  pSVar1 = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
  System_Action<bool>___ctor();
  ppSVar4 = &NHJCFGACFDF_TypeInfo->static_fields->HHENPENBNLD;
  *ppSVar4 = pSVar1;
  thunk_FUN_01c20e04(ppSVar4,pSVar1);
  pSVar5 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->EDCABNJMIHN;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar7 = (System_Action_string__double__o *)
           thunk_FUN_01bda818(System_Action<string,_double>_TypeInfo);
                    /* try { // try from 0343a9ec to 0353ab3b has its CatchHandler @ 0343a9ec
                       catch() { ... } // from try @ 0343a9ec with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343abf0 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343ac14 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343ac80 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343acb4 with catch @ 0343a9ec
                       catch() { ... } // from try @ 0343ace8 with catch @ 0343a9ec */
  System_Action<object,_double>___ctor();
  ppSVar8 = &NHJCFGACFDF_TypeInfo->static_fields->DDPMFMMJNJF;
  *ppSVar8 = pSVar7;
  thunk_FUN_01c20e04(ppSVar8,pSVar7);
  pSVar5 = (System_Action_string__o *)thunk_FUN_01bda818(System_Action<string>_TypeInfo);
  System_Action<object>___ctor();
  ppSVar6 = &NHJCFGACFDF_TypeInfo->static_fields->PCNNKNMPDAK;
  *ppSVar6 = pSVar5;
  thunk_FUN_01c20e04(ppSVar6,pSVar5);
  pSVar9 = (System_Action_string__byte____o *)
           thunk_FUN_01bda818(System_Action<string,_byte[]>_TypeInfo);
  System_Action<object,_object>___ctor();
  ppSVar10 = &NHJCFGACFDF_TypeInfo->static_fields->GEHAHBFKNCM;
  *ppSVar10 = pSVar9;
  thunk_FUN_01c20e04(ppSVar10,pSVar9);
  return;
}

